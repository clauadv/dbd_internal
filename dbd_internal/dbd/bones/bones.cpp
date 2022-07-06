#include <includes.h>

int dbd::bones::get(std::string bone, ue4::components::u_skeletal_mesh_component* mesh, ue4::game_framework::a_pawn* pawn) {
	const auto hashed_pawn = hash::get(pawn->get_name().c_str());
	const auto hashed_bone = hash::get(bone.c_str());
	const auto cached_bones = bones.find(hashed_pawn);

	if (cached_bones != bones.end()) {
		const auto cached_bone = (*cached_bones).second.find(hashed_bone);

		if (cached_bone != (*cached_bones).second.end()) {
			return (*cached_bone).second;
		}
	}

	for (auto i = 0; i < mesh->get_bones_num(); i++) {
		auto bone_name = mesh->get_bone_name(i).get_name();
		std::ranges::transform(bone_name.begin(), bone_name.end(), bone_name.begin(), ::tolower);

		if (bone_name.find(bone) != std::string::npos) {
			bones[hashed_pawn][hashed_bone] = i;

			return i;
		}
	}

	return 0;
}

std::vector<std::pair<int, int>> dbd::bones::get_array(ue4::components::u_skeletal_mesh_component* mesh, ue4::game_framework::a_pawn* pawn) {
	std::vector<std::pair<int, int>> bone;

	const auto head = dbd::bones::get(_("joint_head_01"), mesh, pawn);
	const auto neck = dbd::bones::get(_("joint_necka_01"), mesh, pawn);
	const auto pelvis = dbd::bones::get(_("joint_pelvis_01"), mesh, pawn);

	bone.emplace_back(std::make_pair(head, neck));
	bone.emplace_back(std::make_pair(neck, pelvis));

	// right upper body
	{
		const auto shoulder_r = dbd::bones::get(_("joint_shoulderrt_01"), mesh, pawn);
		const auto elbow_r = dbd::bones::get(_("joint_elbowrt_01"), mesh, pawn);
		const auto hand_r = dbd::bones::get(_("joint_handrt_01"), mesh, pawn);

		bone.emplace_back(std::make_pair(neck, shoulder_r));
		bone.emplace_back(std::make_pair(shoulder_r, elbow_r));
		bone.emplace_back(std::make_pair(elbow_r, hand_r));
	}

	// right lower body
	{
		const auto hip_r = dbd::bones::get(_("joint_hiprt_01"), mesh, pawn);
		const auto knee_r = dbd::bones::get(_("joint_kneert_01"), mesh, pawn);
		const auto foot_r = dbd::bones::get(_("joint_footrt_01"), mesh, pawn);

		bone.emplace_back(std::make_pair(pelvis, hip_r));
		bone.emplace_back(std::make_pair(hip_r, knee_r));
		bone.emplace_back(std::make_pair(knee_r, foot_r));
	}

	// left upper body
	{
		const auto shoulder_l = dbd::bones::get(_("joint_shoulderlt_01"), mesh, pawn);
		const auto elbow_l = dbd::bones::get(_("joint_elbowlt_01"), mesh, pawn);
		const auto hand_l = dbd::bones::get(_("joint_handlt_01"), mesh, pawn);

		bone.emplace_back(std::make_pair(neck, shoulder_l));
		bone.emplace_back(std::make_pair(shoulder_l, elbow_l));
		bone.emplace_back(std::make_pair(elbow_l, hand_l));
	}

	// left lower body
	{
		const auto hip_l = dbd::bones::get(_("joint_hiplt_01"), mesh, pawn);
		const auto knee_l = dbd::bones::get(_("joint_kneelt_01"), mesh, pawn);
		const auto foot_l = dbd::bones::get(_("joint_footlt_01"), mesh, pawn);

		bone.emplace_back(std::make_pair(pelvis, hip_l));
		bone.emplace_back(std::make_pair(hip_l, knee_l));
		bone.emplace_back(std::make_pair(knee_l, foot_l));
	}

	return bone;
}