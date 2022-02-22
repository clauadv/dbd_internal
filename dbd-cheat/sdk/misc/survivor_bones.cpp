#include <pch.h>

std::array<std::vector < std::pair < int, int > >, 27> survivor_bone;

void bones::survivor::initialize() {
	{
		// dwight bones
		auto& bone = survivor_bone[0];

		bone.emplace_back(std::make_pair(survivor::dwight::joint_head_01, survivor::dwight::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::dwight::joint_necka_01, survivor::dwight::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::dwight::joint_necka_01, survivor::dwight::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_shoulderlt_01, survivor::dwight::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_elbowlt_01, survivor::dwight::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handlt_01, survivor::dwight::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_thumbalt_01, survivor::dwight::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_thumbblt_01, survivor::dwight::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handlt_01, survivor::dwight::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_indexalt_01, survivor::dwight::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_indexblt_01, survivor::dwight::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handlt_01, survivor::dwight::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_fingeralt_01, survivor::dwight::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_fingerblt_01, survivor::dwight::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handlt_01, survivor::dwight::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_ringalt_01, survivor::dwight::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_ringblt_01, survivor::dwight::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handlt_01, survivor::dwight::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_pinkyalt_01, survivor::dwight::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_pinkyblt_01, survivor::dwight::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::dwight::joint_pelvis_01, survivor::dwight::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_hiplt_01, survivor::dwight::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_kneelt_01, survivor::dwight::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::dwight::joint_necka_01, survivor::dwight::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_shoulderrt_01, survivor::dwight::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_elbowrt_01, survivor::dwight::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handrt_01, survivor::dwight::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_thumbart_01, survivor::dwight::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_thumbbrt_01, survivor::dwight::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handrt_01, survivor::dwight::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_indexart_01, survivor::dwight::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_indexbrt_01, survivor::dwight::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handrt_01, survivor::dwight::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_fingerart_01, survivor::dwight::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_fingerbrt_01, survivor::dwight::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handrt_01, survivor::dwight::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_ringart_01, survivor::dwight::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_ringbrt_01, survivor::dwight::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::dwight::joint_handrt_01, survivor::dwight::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_pinkyart_01, survivor::dwight::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_pinkybrt_01, survivor::dwight::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::dwight::joint_pelvis_01, survivor::dwight::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_hiprt_01, survivor::dwight::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::dwight::joint_kneert_01, survivor::dwight::joint_footrt_01));
		}
	}

	{
		// meg bones
		auto& bone = survivor_bone[1];

		bone.emplace_back(std::make_pair(survivor::meg::joint_head_01, survivor::meg::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::meg::joint_necka_01, survivor::meg::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::meg::joint_necka_01, survivor::meg::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_shoulderlt_01, survivor::meg::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_elbowlt_01, survivor::meg::joint_forearmlt_roll_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_forearmlt_roll_01, survivor::meg::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handlt_01, survivor::meg::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_thumbalt_01, survivor::meg::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_thumbblt_01, survivor::meg::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handlt_01, survivor::meg::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_indexalt_01, survivor::meg::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_indexblt_01, survivor::meg::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handlt_01, survivor::meg::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_fingeralt_01, survivor::meg::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_fingerblt_01, survivor::meg::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handlt_01, survivor::meg::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_ringalt_01, survivor::meg::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_ringblt_01, survivor::meg::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handlt_01, survivor::meg::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_pinkyalt_01, survivor::meg::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_pinkyblt_01, survivor::meg::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::meg::joint_pelvis_01, survivor::meg::joint_hiplt_roll_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_hiplt_roll_01, survivor::meg::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_kneelt_01, survivor::meg::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::meg::joint_necka_01, survivor::meg::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_shoulderrt_01, survivor::meg::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_elbowrt_01, survivor::meg::joint_forearmrt_roll_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_forearmrt_roll_01, survivor::meg::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handrt_01, survivor::meg::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_thumbart_01, survivor::meg::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_thumbbrt_01, survivor::meg::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handrt_01, survivor::meg::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_indexart_01, survivor::meg::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_indexbrt_01, survivor::meg::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handrt_01, survivor::meg::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_fingerart_01, survivor::meg::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_fingerbrt_01, survivor::meg::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handrt_01, survivor::meg::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_ringart_01, survivor::meg::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_ringbrt_01, survivor::meg::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::meg::joint_handrt_01, survivor::meg::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_pinkyart_01, survivor::meg::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_pinkybrt_01, survivor::meg::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::meg::joint_pelvis_01, survivor::meg::joint_hiprt_roll_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_hiprt_roll_01, survivor::meg::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::meg::joint_kneert_01, survivor::meg::joint_footrt_01));
		}
	}

	{
		// claudette bones
		auto& bone = survivor_bone[2];

		bone.emplace_back(std::make_pair(survivor::claudette::joint_head_01, survivor::claudette::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::claudette::joint_necka_01, survivor::claudette::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::claudette::joint_necka_01, survivor::claudette::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_shoulderlt_01, survivor::claudette::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_elbowlt_01, survivor::claudette::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handlt_01, survivor::claudette::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_thumbalt_01, survivor::claudette::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_thumbblt_01, survivor::claudette::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handlt_01, survivor::claudette::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_indexalt_01, survivor::claudette::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_indexblt_01, survivor::claudette::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handlt_01, survivor::claudette::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_fingeralt_01, survivor::claudette::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_fingerblt_01, survivor::claudette::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handlt_01, survivor::claudette::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_ringalt_01, survivor::claudette::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_ringblt_01, survivor::claudette::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handlt_01, survivor::claudette::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_pinkyalt_01, survivor::claudette::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_pinkyblt_01, survivor::claudette::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::claudette::joint_pelvis_01, survivor::claudette::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_hiplt_01, survivor::claudette::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_kneelt_01, survivor::claudette::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::claudette::joint_necka_01, survivor::claudette::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_shoulderrt_01, survivor::claudette::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_elbowrt_01, survivor::claudette::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handrt_01, survivor::claudette::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_thumbart_01, survivor::claudette::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_thumbbrt_01, survivor::claudette::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handrt_01, survivor::claudette::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_indexart_01, survivor::claudette::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_indexbrt_01, survivor::claudette::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handrt_01, survivor::claudette::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_fingerart_01, survivor::claudette::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_fingerbrt_01, survivor::claudette::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handrt_01, survivor::claudette::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_ringart_01, survivor::claudette::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_ringbrt_01, survivor::claudette::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::claudette::joint_handrt_01, survivor::claudette::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_pinkyart_01, survivor::claudette::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_pinkybrt_01, survivor::claudette::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::claudette::joint_pelvis_01, survivor::claudette::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_hiprt_01, survivor::claudette::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::claudette::joint_kneert_01, survivor::claudette::joint_footrt_01));
		}
	}

	{
		// jake bones
		auto& bone = survivor_bone[3];

		bone.emplace_back(std::make_pair(survivor::jake::joint_head_01, survivor::jake::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::jake::joint_necka_01, survivor::jake::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jake::joint_necka_01, survivor::jake::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_shoulderlt_01, survivor::jake::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_elbowlt_01, survivor::jake::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handlt_01, survivor::jake::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_thumbalt_01, survivor::jake::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_thumbblt_01, survivor::jake::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handlt_01, survivor::jake::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_indexalt_01, survivor::jake::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_indexblt_01, survivor::jake::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handlt_01, survivor::jake::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_fingeralt_01, survivor::jake::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_fingerblt_01, survivor::jake::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handlt_01, survivor::jake::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_ringalt_01, survivor::jake::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_ringblt_01, survivor::jake::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handlt_01, survivor::jake::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_pinkyalt_01, survivor::jake::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_pinkyblt_01, survivor::jake::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jake::joint_pelvis_01, survivor::jake::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_hiplt_01, survivor::jake::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_kneelt_01, survivor::jake::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jake::joint_necka_01, survivor::jake::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_shoulderrt_01, survivor::jake::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_elbowrt_01, survivor::jake::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handrt_01, survivor::jake::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_thumbart_01, survivor::jake::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_thumbbrt_01, survivor::jake::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handrt_01, survivor::jake::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_indexart_01, survivor::jake::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_indexbrt_01, survivor::jake::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handrt_01, survivor::jake::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_fingerart_01, survivor::jake::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_fingerbrt_01, survivor::jake::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handrt_01, survivor::jake::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_ringart_01, survivor::jake::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_ringbrt_01, survivor::jake::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::jake::joint_handrt_01, survivor::jake::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_pinkyart_01, survivor::jake::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_pinkybrt_01, survivor::jake::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jake::joint_pelvis_01, survivor::jake::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_hiprt_01, survivor::jake::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::jake::joint_kneert_01, survivor::jake::joint_footrt_01));
		}
	}

	{
		// nea bones
		auto& bone = survivor_bone[4];

		bone.emplace_back(std::make_pair(survivor::nea::joint_head_01, survivor::nea::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::nea::joint_necka_01, survivor::nea::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::nea::joint_necka_01, survivor::nea::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_shoulderlt_01, survivor::nea::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_elbowlt_01, survivor::nea::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handlt_01, survivor::nea::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_thumbalt_01, survivor::nea::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_thumbblt_01, survivor::nea::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handlt_01, survivor::nea::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_indexalt_01, survivor::nea::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_indexblt_01, survivor::nea::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handlt_01, survivor::nea::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_fingeralt_01, survivor::nea::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_fingerblt_01, survivor::nea::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handlt_01, survivor::nea::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_ringalt_01, survivor::nea::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_ringblt_01, survivor::nea::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handlt_01, survivor::nea::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_pinkyalt_01, survivor::nea::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_pinkyblt_01, survivor::nea::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::nea::joint_pelvis_01, survivor::nea::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_hiplt_01, survivor::nea::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_kneelt_01, survivor::nea::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::nea::joint_necka_01, survivor::nea::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_shoulderrt_01, survivor::nea::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_elbowrt_01, survivor::nea::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handrt_01, survivor::nea::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_thumbart_01, survivor::nea::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_thumbbrt_01, survivor::nea::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handrt_01, survivor::nea::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_indexart_01, survivor::nea::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_indexbrt_01, survivor::nea::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handrt_01, survivor::nea::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_fingerart_01, survivor::nea::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_fingerbrt_01, survivor::nea::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handrt_01, survivor::nea::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_ringart_01, survivor::nea::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_ringbrt_01, survivor::nea::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::nea::joint_handrt_01, survivor::nea::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_pinkyart_01, survivor::nea::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_pinkybrt_01, survivor::nea::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::nea::joint_pelvis_01, survivor::nea::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_hiprt_01, survivor::nea::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::nea::joint_kneert_01, survivor::nea::joint_footrt_01));
		}
	}

	{
		// bill bones
		auto& bone = survivor_bone[5];

		bone.emplace_back(std::make_pair(survivor::bill::joint_head_01, survivor::bill::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::bill::joint_necka_01, survivor::bill::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::bill::joint_necka_01, survivor::bill::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_shoulderlt_01, survivor::bill::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_elbowlt_01, survivor::bill::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handlt_01, survivor::bill::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_thumbalt_01, survivor::bill::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_thumbblt_01, survivor::bill::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handlt_01, survivor::bill::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_indexalt_01, survivor::bill::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_indexblt_01, survivor::bill::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handlt_01, survivor::bill::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_fingeralt_01, survivor::bill::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_fingerblt_01, survivor::bill::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handlt_01, survivor::bill::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_ringalt_01, survivor::bill::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_ringblt_01, survivor::bill::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handlt_01, survivor::bill::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_pinkyalt_01, survivor::bill::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_pinkyblt_01, survivor::bill::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::bill::joint_pelvis_01, survivor::bill::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_hiplt_01, survivor::bill::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_kneelt_01, survivor::bill::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::bill::joint_necka_01, survivor::bill::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_shoulderrt_01, survivor::bill::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_elbowrt_01, survivor::bill::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handrt_01, survivor::bill::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_thumbart_01, survivor::bill::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_thumbbrt_01, survivor::bill::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handrt_01, survivor::bill::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_indexart_01, survivor::bill::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_indexbrt_01, survivor::bill::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handrt_01, survivor::bill::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_fingerart_01, survivor::bill::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_fingerbrt_01, survivor::bill::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handrt_01, survivor::bill::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_ringart_01, survivor::bill::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_ringbrt_01, survivor::bill::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::bill::joint_handrt_01, survivor::bill::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_pinkyart_01, survivor::bill::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_pinkybrt_01, survivor::bill::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::bill::joint_pelvis_01, survivor::bill::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_hiprt_01, survivor::bill::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::bill::joint_kneert_01, survivor::bill::joint_footrt_01));
		}
	}

	{
		// laurie bones
		auto& bone = survivor_bone[6];

		bone.emplace_back(std::make_pair(survivor::laurie::joint_head_01, survivor::laurie::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::laurie::joint_necka_01, survivor::laurie::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::laurie::joint_necka_01, survivor::laurie::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_shoulderlt_01, survivor::laurie::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_elbowlt_01, survivor::laurie::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handlt_01, survivor::laurie::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_thumbalt_01, survivor::laurie::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_thumbblt_01, survivor::laurie::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handlt_01, survivor::laurie::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_indexalt_01, survivor::laurie::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_indexblt_01, survivor::laurie::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handlt_01, survivor::laurie::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_fingeralt_01, survivor::laurie::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_fingerblt_01, survivor::laurie::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handlt_01, survivor::laurie::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_ringalt_01, survivor::laurie::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_ringblt_01, survivor::laurie::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handlt_01, survivor::laurie::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_pinkyalt_01, survivor::laurie::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_pinkyblt_01, survivor::laurie::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::laurie::joint_pelvis_01, survivor::laurie::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_hiplt_01, survivor::laurie::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_kneelt_01, survivor::laurie::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::laurie::joint_necka_01, survivor::laurie::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_shoulderrt_01, survivor::laurie::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_elbowrt_01, survivor::laurie::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handrt_01, survivor::laurie::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_thumbart_01, survivor::laurie::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_thumbbrt_01, survivor::laurie::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handrt_01, survivor::laurie::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_indexart_01, survivor::laurie::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_indexbrt_01, survivor::laurie::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handrt_01, survivor::laurie::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_fingerart_01, survivor::laurie::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_fingerbrt_01, survivor::laurie::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handrt_01, survivor::laurie::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_ringart_01, survivor::laurie::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_ringbrt_01, survivor::laurie::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::laurie::joint_handrt_01, survivor::laurie::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_pinkyart_01, survivor::laurie::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_pinkybrt_01, survivor::laurie::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::laurie::joint_pelvis_01, survivor::laurie::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_hiprt_01, survivor::laurie::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::laurie::joint_kneert_01, survivor::laurie::joint_footrt_01));
		}
	}

	{
		// ace bones
		auto& bone = survivor_bone[7];

		bone.emplace_back(std::make_pair(survivor::ace::joint_head_01, survivor::ace::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::ace::joint_necka_01, survivor::ace::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::ace::joint_necka_01, survivor::ace::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_shoulderlt_01, survivor::ace::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_elbowlt_01, survivor::ace::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handlt_01, survivor::ace::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_thumbalt_01, survivor::ace::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_thumbblt_01, survivor::ace::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handlt_01, survivor::ace::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_indexalt_01, survivor::ace::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_indexblt_01, survivor::ace::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handlt_01, survivor::ace::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_fingeralt_01, survivor::ace::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_fingerblt_01, survivor::ace::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handlt_01, survivor::ace::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_ringalt_01, survivor::ace::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_ringblt_01, survivor::ace::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handlt_01, survivor::ace::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_pinkyalt_01, survivor::ace::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_pinkyblt_01, survivor::ace::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::ace::joint_pelvis_01, survivor::ace::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_hiplt_01, survivor::ace::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_kneelt_01, survivor::ace::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::ace::joint_necka_01, survivor::ace::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_shoulderrt_01, survivor::ace::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_elbowrt_01, survivor::ace::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handrt_01, survivor::ace::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_thumbart_01, survivor::ace::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_thumbbrt_01, survivor::ace::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handrt_01, survivor::ace::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_indexart_01, survivor::ace::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_indexbrt_01, survivor::ace::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handrt_01, survivor::ace::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_fingerart_01, survivor::ace::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_fingerbrt_01, survivor::ace::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handrt_01, survivor::ace::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_ringart_01, survivor::ace::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_ringbrt_01, survivor::ace::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::ace::joint_handrt_01, survivor::ace::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_pinkyart_01, survivor::ace::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_pinkybrt_01, survivor::ace::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::ace::joint_pelvis_01, survivor::ace::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_hiprt_01, survivor::ace::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::ace::joint_kneert_01, survivor::ace::joint_footrt_01));
		}
	}

	{
		// feng bones
		auto& bone = survivor_bone[8];

		bone.emplace_back(std::make_pair(survivor::feng::joint_head_01, survivor::feng::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::feng::joint_necka_01, survivor::feng::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::feng::joint_necka_01, survivor::feng::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_shoulderlt_01, survivor::feng::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_elbowlt_01, survivor::feng::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handlt_01, survivor::feng::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_thumbalt_01, survivor::feng::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_thumbblt_01, survivor::feng::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handlt_01, survivor::feng::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_indexalt_01, survivor::feng::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_indexblt_01, survivor::feng::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handlt_01, survivor::feng::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_fingeralt_01, survivor::feng::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_fingerblt_01, survivor::feng::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handlt_01, survivor::feng::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_ringalt_01, survivor::feng::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_ringblt_01, survivor::feng::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handlt_01, survivor::feng::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_pinkyalt_01, survivor::feng::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_pinkyblt_01, survivor::feng::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::feng::joint_pelvis_01, survivor::feng::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_hiplt_01, survivor::feng::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_kneelt_01, survivor::feng::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::feng::joint_necka_01, survivor::feng::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_shoulderrt_01, survivor::feng::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_elbowrt_01, survivor::feng::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handrt_01, survivor::feng::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_thumbart_01, survivor::feng::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_thumbbrt_01, survivor::feng::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handrt_01, survivor::feng::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_indexart_01, survivor::feng::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_indexbrt_01, survivor::feng::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handrt_01, survivor::feng::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_fingerart_01, survivor::feng::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_fingerbrt_01, survivor::feng::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handrt_01, survivor::feng::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_ringart_01, survivor::feng::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_ringbrt_01, survivor::feng::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::feng::joint_handrt_01, survivor::feng::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_pinkyart_01, survivor::feng::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_pinkybrt_01, survivor::feng::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::feng::joint_pelvis_01, survivor::feng::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_hiprt_01, survivor::feng::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::feng::joint_kneert_01, survivor::feng::joint_footrt_01));
		}
	}

	{
		// quentin bones
		auto& bone = survivor_bone[9];

		bone.emplace_back(std::make_pair(survivor::quentin::joint_head_01, survivor::quentin::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::quentin::joint_necka_01, survivor::quentin::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::quentin::joint_necka_01, survivor::quentin::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_shoulderlt_01, survivor::quentin::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_elbowlt_01, survivor::quentin::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handlt_01, survivor::quentin::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_thumbalt_01, survivor::quentin::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_thumbblt_01, survivor::quentin::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handlt_01, survivor::quentin::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_indexalt_01, survivor::quentin::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_indexblt_01, survivor::quentin::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handlt_01, survivor::quentin::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_fingeralt_01, survivor::quentin::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_fingerblt_01, survivor::quentin::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handlt_01, survivor::quentin::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_ringalt_01, survivor::quentin::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_ringblt_01, survivor::quentin::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handlt_01, survivor::quentin::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_pinkyalt_01, survivor::quentin::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_pinkyblt_01, survivor::quentin::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::quentin::joint_pelvis_01, survivor::quentin::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_hiplt_01, survivor::quentin::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_kneelt_01, survivor::quentin::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::quentin::joint_necka_01, survivor::quentin::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_shoulderrt_01, survivor::quentin::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_elbowrt_01, survivor::quentin::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handrt_01, survivor::quentin::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_thumbart_01, survivor::quentin::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_thumbbrt_01, survivor::quentin::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handrt_01, survivor::quentin::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_indexart_01, survivor::quentin::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_indexbrt_01, survivor::quentin::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handrt_01, survivor::quentin::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_fingerart_01, survivor::quentin::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_fingerbrt_01, survivor::quentin::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handrt_01, survivor::quentin::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_ringart_01, survivor::quentin::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_ringbrt_01, survivor::quentin::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::quentin::joint_handrt_01, survivor::quentin::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_pinkyart_01, survivor::quentin::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_pinkybrt_01, survivor::quentin::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::quentin::joint_pelvis_01, survivor::quentin::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_hiprt_01, survivor::quentin::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::quentin::joint_kneert_01, survivor::quentin::joint_footrt_01));
		}
	}

	{
		// tapp bones
		auto& bone = survivor_bone[10];

		bone.emplace_back(std::make_pair(survivor::tapp::joint_head_01, survivor::tapp::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::tapp::joint_necka_01, survivor::tapp::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::tapp::joint_necka_01, survivor::tapp::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_shoulderlt_01, survivor::tapp::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_elbowlt_01, survivor::tapp::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handlt_01, survivor::tapp::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_thumbalt_01, survivor::tapp::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_thumbblt_01, survivor::tapp::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handlt_01, survivor::tapp::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_indexalt_01, survivor::tapp::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_indexblt_01, survivor::tapp::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handlt_01, survivor::tapp::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_fingeralt_01, survivor::tapp::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_fingerblt_01, survivor::tapp::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handlt_01, survivor::tapp::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_ringalt_01, survivor::tapp::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_ringblt_01, survivor::tapp::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handlt_01, survivor::tapp::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_pinkyalt_01, survivor::tapp::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_pinkyblt_01, survivor::tapp::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::tapp::joint_pelvis_01, survivor::tapp::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_hiplt_01, survivor::tapp::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_kneelt_01, survivor::tapp::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::tapp::joint_necka_01, survivor::tapp::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_shoulderrt_01, survivor::tapp::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_elbowrt_01, survivor::tapp::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handrt_01, survivor::tapp::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_thumbart_01, survivor::tapp::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_thumbbrt_01, survivor::tapp::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handrt_01, survivor::tapp::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_indexart_01, survivor::tapp::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_indexbrt_01, survivor::tapp::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handrt_01, survivor::tapp::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_fingerart_01, survivor::tapp::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_fingerbrt_01, survivor::tapp::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handrt_01, survivor::tapp::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_ringart_01, survivor::tapp::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_ringbrt_01, survivor::tapp::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::tapp::joint_handrt_01, survivor::tapp::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_pinkyart_01, survivor::tapp::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_pinkybrt_01, survivor::tapp::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::tapp::joint_pelvis_01, survivor::tapp::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_hiprt_01, survivor::tapp::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::tapp::joint_kneert_01, survivor::tapp::joint_footrt_01));
		}
	}

	{
		// kate bones
		auto& bone = survivor_bone[11];

		bone.emplace_back(std::make_pair(survivor::kate::joint_head_01, survivor::kate::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::kate::joint_necka_01, survivor::kate::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::kate::joint_necka_01, survivor::kate::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_shoulderlt_01, survivor::kate::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_elbowlt_01, survivor::kate::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handlt_01, survivor::kate::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_thumbalt_01, survivor::kate::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_thumbblt_01, survivor::kate::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handlt_01, survivor::kate::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_indexalt_01, survivor::kate::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_indexblt_01, survivor::kate::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handlt_01, survivor::kate::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_fingeralt_01, survivor::kate::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_fingerblt_01, survivor::kate::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handlt_01, survivor::kate::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_ringalt_01, survivor::kate::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_ringblt_01, survivor::kate::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handlt_01, survivor::kate::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_pinkyalt_01, survivor::kate::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_pinkyblt_01, survivor::kate::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::kate::joint_pelvis_01, survivor::kate::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_hiplt_01, survivor::kate::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_kneelt_01, survivor::kate::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::kate::joint_necka_01, survivor::kate::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_shoulderrt_01, survivor::kate::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_elbowrt_01, survivor::kate::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handrt_01, survivor::kate::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_thumbart_01, survivor::kate::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_thumbbrt_01, survivor::kate::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handrt_01, survivor::kate::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_indexart_01, survivor::kate::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_indexbrt_01, survivor::kate::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handrt_01, survivor::kate::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_fingerart_01, survivor::kate::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_fingerbrt_01, survivor::kate::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handrt_01, survivor::kate::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_ringart_01, survivor::kate::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_ringbrt_01, survivor::kate::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::kate::joint_handrt_01, survivor::kate::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_pinkyart_01, survivor::kate::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_pinkybrt_01, survivor::kate::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::kate::joint_pelvis_01, survivor::kate::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_hiprt_01, survivor::kate::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::kate::joint_kneert_01, survivor::kate::joint_footrt_01));
		}
	}

	{
		// adam bones
		auto& bone = survivor_bone[12];

		bone.emplace_back(std::make_pair(survivor::adam::joint_head_01, survivor::adam::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::adam::joint_necka_01, survivor::adam::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::adam::joint_necka_01, survivor::adam::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_shoulderlt_01, survivor::adam::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_elbowlt_01, survivor::adam::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handlt_01, survivor::adam::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_thumbalt_01, survivor::adam::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_thumbblt_01, survivor::adam::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handlt_01, survivor::adam::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_indexalt_01, survivor::adam::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_indexblt_01, survivor::adam::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handlt_01, survivor::adam::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_fingeralt_01, survivor::adam::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_fingerblt_01, survivor::adam::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handlt_01, survivor::adam::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_ringalt_01, survivor::adam::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_ringblt_01, survivor::adam::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handlt_01, survivor::adam::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_pinkyalt_01, survivor::adam::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_pinkyblt_01, survivor::adam::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::adam::joint_pelvis_01, survivor::adam::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_hiplt_01, survivor::adam::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_kneelt_01, survivor::adam::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::adam::joint_necka_01, survivor::adam::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_shoulderrt_01, survivor::adam::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_elbowrt_01, survivor::adam::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handrt_01, survivor::adam::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_thumbart_01, survivor::adam::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_thumbbrt_01, survivor::adam::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handrt_01, survivor::adam::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_indexart_01, survivor::adam::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_indexbrt_01, survivor::adam::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handrt_01, survivor::adam::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_fingerart_01, survivor::adam::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_fingerbrt_01, survivor::adam::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handrt_01, survivor::adam::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_ringart_01, survivor::adam::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_ringbrt_01, survivor::adam::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::adam::joint_handrt_01, survivor::adam::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_pinkyart_01, survivor::adam::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_pinkybrt_01, survivor::adam::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::adam::joint_pelvis_01, survivor::adam::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_hiprt_01, survivor::adam::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::adam::joint_kneert_01, survivor::adam::joint_footrt_01));
		}
	}

	{
		// jeff bones
		auto& bone = survivor_bone[13];

		bone.emplace_back(std::make_pair(survivor::jeff::joint_head_01, survivor::jeff::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::jeff::joint_necka_01, survivor::jeff::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jeff::joint_necka_01, survivor::jeff::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_shoulderlt_01, survivor::jeff::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_elbowlt_01, survivor::jeff::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handlt_01, survivor::jeff::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_thumbalt_01, survivor::jeff::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_thumbblt_01, survivor::jeff::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handlt_01, survivor::jeff::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_indexalt_01, survivor::jeff::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_indexblt_01, survivor::jeff::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handlt_01, survivor::jeff::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_fingeralt_01, survivor::jeff::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_fingerblt_01, survivor::jeff::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handlt_01, survivor::jeff::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_ringalt_01, survivor::jeff::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_ringblt_01, survivor::jeff::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handlt_01, survivor::jeff::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_pinkyalt_01, survivor::jeff::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_pinkyblt_01, survivor::jeff::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jeff::joint_pelvis_01, survivor::jeff::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_hiplt_01, survivor::jeff::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_kneelt_01, survivor::jeff::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jeff::joint_necka_01, survivor::jeff::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_shoulderrt_01, survivor::jeff::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_elbowrt_01, survivor::jeff::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handrt_01, survivor::jeff::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_thumbart_01, survivor::jeff::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_thumbbrt_01, survivor::jeff::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handrt_01, survivor::jeff::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_indexart_01, survivor::jeff::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_indexbrt_01, survivor::jeff::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handrt_01, survivor::jeff::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_fingerart_01, survivor::jeff::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_fingerbrt_01, survivor::jeff::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handrt_01, survivor::jeff::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_ringart_01, survivor::jeff::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_ringbrt_01, survivor::jeff::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::jeff::joint_handrt_01, survivor::jeff::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_pinkyart_01, survivor::jeff::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_pinkybrt_01, survivor::jeff::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jeff::joint_pelvis_01, survivor::jeff::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_hiprt_01, survivor::jeff::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::jeff::joint_kneert_01, survivor::jeff::joint_footrt_01));
		}
	}

	{
		// jane bones
		auto& bone = survivor_bone[14];

		bone.emplace_back(std::make_pair(survivor::jane::joint_head_01, survivor::jane::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::jane::joint_necka_01, survivor::jane::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jane::joint_necka_01, survivor::jane::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_shoulderlt_01, survivor::jane::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_elbowlt_01, survivor::jane::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handlt_01, survivor::jane::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_thumbalt_01, survivor::jane::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_thumbblt_01, survivor::jane::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handlt_01, survivor::jane::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_indexalt_01, survivor::jane::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_indexblt_01, survivor::jane::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handlt_01, survivor::jane::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_fingeralt_01, survivor::jane::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_fingerblt_01, survivor::jane::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handlt_01, survivor::jane::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_ringalt_01, survivor::jane::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_ringblt_01, survivor::jane::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handlt_01, survivor::jane::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_pinkyalt_01, survivor::jane::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_pinkyblt_01, survivor::jane::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jane::joint_pelvis_01, survivor::jane::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_hiplt_01, survivor::jane::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_kneelt_01, survivor::jane::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jane::joint_necka_01, survivor::jane::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_shoulderrt_01, survivor::jane::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_elbowrt_01, survivor::jane::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handrt_01, survivor::jane::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_thumbart_01, survivor::jane::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_thumbbrt_01, survivor::jane::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handrt_01, survivor::jane::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_indexart_01, survivor::jane::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_indexbrt_01, survivor::jane::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handrt_01, survivor::jane::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_fingerart_01, survivor::jane::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_fingerbrt_01, survivor::jane::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handrt_01, survivor::jane::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_ringart_01, survivor::jane::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_ringbrt_01, survivor::jane::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::jane::joint_handrt_01, survivor::jane::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_pinkyart_01, survivor::jane::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_pinkybrt_01, survivor::jane::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jane::joint_pelvis_01, survivor::jane::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_hiprt_01, survivor::jane::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::jane::joint_kneert_01, survivor::jane::joint_footrt_01));
		}
	}

	{
		// ashley bones
		auto& bone = survivor_bone[15];

		bone.emplace_back(std::make_pair(survivor::ashley::joint_head_01, survivor::ashley::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::ashley::joint_necka_01, survivor::ashley::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::ashley::joint_necka_01, survivor::ashley::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_shoulderlt_01, survivor::ashley::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_elbowlt_01, survivor::ashley::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handlt_01, survivor::ashley::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_thumbalt_01, survivor::ashley::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_thumbblt_01, survivor::ashley::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handlt_01, survivor::ashley::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_indexalt_01, survivor::ashley::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_indexblt_01, survivor::ashley::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handlt_01, survivor::ashley::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_fingeralt_01, survivor::ashley::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_fingerblt_01, survivor::ashley::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handlt_01, survivor::ashley::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_ringalt_01, survivor::ashley::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_ringblt_01, survivor::ashley::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handlt_01, survivor::ashley::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_pinkyalt_01, survivor::ashley::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_pinkyblt_01, survivor::ashley::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::ashley::joint_pelvis_01, survivor::ashley::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_hiplt_01, survivor::ashley::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_kneelt_01, survivor::ashley::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::ashley::joint_necka_01, survivor::ashley::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_shoulderrt_01, survivor::ashley::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_elbowrt_01, survivor::ashley::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handrt_01, survivor::ashley::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_thumbart_01, survivor::ashley::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_thumbbrt_01, survivor::ashley::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handrt_01, survivor::ashley::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_indexart_01, survivor::ashley::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_indexbrt_01, survivor::ashley::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handrt_01, survivor::ashley::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_fingerart_01, survivor::ashley::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_fingerbrt_01, survivor::ashley::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handrt_01, survivor::ashley::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_ringart_01, survivor::ashley::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_ringbrt_01, survivor::ashley::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::ashley::joint_handrt_01, survivor::ashley::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_pinkyart_01, survivor::ashley::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_pinkybrt_01, survivor::ashley::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::ashley::joint_pelvis_01, survivor::ashley::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_hiprt_01, survivor::ashley::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::ashley::joint_kneert_01, survivor::ashley::joint_footrt_01));
		}
	}

	{
		// yui bones
		auto& bone = survivor_bone[16];

		bone.emplace_back(std::make_pair(survivor::yui::joint_head_01, survivor::yui::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::yui::joint_necka_01, survivor::yui::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::yui::joint_necka_01, survivor::yui::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_shoulderlt_01, survivor::yui::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_elbowlt_01, survivor::yui::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handlt_01, survivor::yui::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_thumbalt_01, survivor::yui::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_thumbblt_01, survivor::yui::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handlt_01, survivor::yui::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_indexalt_01, survivor::yui::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_indexblt_01, survivor::yui::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handlt_01, survivor::yui::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_fingeralt_01, survivor::yui::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_fingerblt_01, survivor::yui::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handlt_01, survivor::yui::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_ringalt_01, survivor::yui::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_ringblt_01, survivor::yui::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handlt_01, survivor::yui::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_pinkyalt_01, survivor::yui::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_pinkyblt_01, survivor::yui::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::yui::joint_pelvis_01, survivor::yui::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_hiplt_01, survivor::yui::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_kneelt_01, survivor::yui::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::yui::joint_necka_01, survivor::yui::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_shoulderrt_01, survivor::yui::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_elbowrt_01, survivor::yui::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handrt_01, survivor::yui::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_thumbart_01, survivor::yui::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_thumbbrt_01, survivor::yui::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handrt_01, survivor::yui::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_indexart_01, survivor::yui::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_indexbrt_01, survivor::yui::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handrt_01, survivor::yui::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_fingerart_01, survivor::yui::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_fingerbrt_01, survivor::yui::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handrt_01, survivor::yui::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_ringart_01, survivor::yui::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_ringbrt_01, survivor::yui::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::yui::joint_handrt_01, survivor::yui::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_pinkyart_01, survivor::yui::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_pinkybrt_01, survivor::yui::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::yui::joint_pelvis_01, survivor::yui::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_hiprt_01, survivor::yui::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::yui::joint_kneert_01, survivor::yui::joint_footrt_01));
		}
	}

	{
		// zarina bones
		auto& bone = survivor_bone[17];

		bone.emplace_back(std::make_pair(survivor::zarina::joint_head_01, survivor::zarina::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::zarina::joint_necka_01, survivor::zarina::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::zarina::joint_necka_01, survivor::zarina::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_shoulderlt_01, survivor::zarina::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_elbowlt_01, survivor::zarina::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handlt_01, survivor::zarina::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_thumbalt_01, survivor::zarina::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_thumbblt_01, survivor::zarina::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handlt_01, survivor::zarina::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_indexalt_01, survivor::zarina::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_indexblt_01, survivor::zarina::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handlt_01, survivor::zarina::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_fingeralt_01, survivor::zarina::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_fingerblt_01, survivor::zarina::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handlt_01, survivor::zarina::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_ringalt_01, survivor::zarina::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_ringblt_01, survivor::zarina::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handlt_01, survivor::zarina::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_pinkyalt_01, survivor::zarina::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_pinkyblt_01, survivor::zarina::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::zarina::joint_pelvis_01, survivor::zarina::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_hiplt_01, survivor::zarina::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_kneelt_01, survivor::zarina::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::zarina::joint_necka_01, survivor::zarina::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_shoulderrt_01, survivor::zarina::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_elbowrt_01, survivor::zarina::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handrt_01, survivor::zarina::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_thumbart_01, survivor::zarina::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_thumbbrt_01, survivor::zarina::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handrt_01, survivor::zarina::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_indexart_01, survivor::zarina::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_indexbrt_01, survivor::zarina::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handrt_01, survivor::zarina::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_fingerart_01, survivor::zarina::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_fingerbrt_01, survivor::zarina::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handrt_01, survivor::zarina::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_ringart_01, survivor::zarina::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_ringbrt_01, survivor::zarina::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::zarina::joint_handrt_01, survivor::zarina::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_pinkyart_01, survivor::zarina::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_pinkybrt_01, survivor::zarina::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::zarina::joint_pelvis_01, survivor::zarina::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_hiprt_01, survivor::zarina::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::zarina::joint_kneert_01, survivor::zarina::joint_footrt_01));
		}
	}

	{
		// cheryl bones
		auto& bone = survivor_bone[18];

		bone.emplace_back(std::make_pair(survivor::cheryl::joint_head_01, survivor::cheryl::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::cheryl::joint_necka_01, survivor::cheryl::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_necka_01, survivor::cheryl::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_shoulderlt_01, survivor::cheryl::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_elbowlt_01, survivor::cheryl::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handlt_01, survivor::cheryl::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_thumbalt_01, survivor::cheryl::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_thumbblt_01, survivor::cheryl::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handlt_01, survivor::cheryl::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_indexalt_01, survivor::cheryl::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_indexblt_01, survivor::cheryl::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handlt_01, survivor::cheryl::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_fingeralt_01, survivor::cheryl::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_fingerblt_01, survivor::cheryl::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handlt_01, survivor::cheryl::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_ringalt_01, survivor::cheryl::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_ringblt_01, survivor::cheryl::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handlt_01, survivor::cheryl::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_pinkyalt_01, survivor::cheryl::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_pinkyblt_01, survivor::cheryl::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_pelvis_01, survivor::cheryl::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_hiplt_01, survivor::cheryl::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_kneelt_01, survivor::cheryl::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_necka_01, survivor::cheryl::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_shoulderrt_01, survivor::cheryl::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_elbowrt_01, survivor::cheryl::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handrt_01, survivor::cheryl::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_thumbart_01, survivor::cheryl::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_thumbbrt_01, survivor::cheryl::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handrt_01, survivor::cheryl::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_indexart_01, survivor::cheryl::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_indexbrt_01, survivor::cheryl::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handrt_01, survivor::cheryl::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_fingerart_01, survivor::cheryl::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_fingerbrt_01, survivor::cheryl::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handrt_01, survivor::cheryl::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_ringart_01, survivor::cheryl::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_ringbrt_01, survivor::cheryl::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::cheryl::joint_handrt_01, survivor::cheryl::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_pinkyart_01, survivor::cheryl::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_pinkybrt_01, survivor::cheryl::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_pelvis_01, survivor::cheryl::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_hiprt_01, survivor::cheryl::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::cheryl::joint_kneert_01, survivor::cheryl::joint_footrt_01));
		}
	}

	{
		// felix bones
		auto& bone = survivor_bone[19];

		bone.emplace_back(std::make_pair(survivor::felix::joint_head_01, survivor::felix::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::felix::joint_necka_01, survivor::felix::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::felix::joint_necka_01, survivor::felix::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_shoulderlt_01, survivor::felix::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_elbowlt_01, survivor::felix::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handlt_01, survivor::felix::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_thumbalt_01, survivor::felix::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_thumbblt_01, survivor::felix::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handlt_01, survivor::felix::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_indexalt_01, survivor::felix::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_indexblt_01, survivor::felix::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handlt_01, survivor::felix::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_fingeralt_01, survivor::felix::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_fingerblt_01, survivor::felix::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handlt_01, survivor::felix::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_ringalt_01, survivor::felix::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_ringblt_01, survivor::felix::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handlt_01, survivor::felix::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_pinkyalt_01, survivor::felix::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_pinkyblt_01, survivor::felix::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::felix::joint_pelvis_01, survivor::felix::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_hiplt_01, survivor::felix::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_kneelt_01, survivor::felix::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::felix::joint_necka_01, survivor::felix::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_shoulderrt_01, survivor::felix::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_elbowrt_01, survivor::felix::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handrt_01, survivor::felix::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_thumbart_01, survivor::felix::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_thumbbrt_01, survivor::felix::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handrt_01, survivor::felix::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_indexart_01, survivor::felix::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_indexbrt_01, survivor::felix::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handrt_01, survivor::felix::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_fingerart_01, survivor::felix::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_fingerbrt_01, survivor::felix::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handrt_01, survivor::felix::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_ringart_01, survivor::felix::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_ringbrt_01, survivor::felix::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::felix::joint_handrt_01, survivor::felix::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_pinkyart_01, survivor::felix::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_pinkybrt_01, survivor::felix::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::felix::joint_pelvis_01, survivor::felix::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_hiprt_01, survivor::felix::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::felix::joint_kneert_01, survivor::felix::joint_footrt_01));
		}
	}

	{
		// elodie bones
		auto& bone = survivor_bone[20];

		bone.emplace_back(std::make_pair(survivor::elodie::joint_head_01, survivor::elodie::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::elodie::joint_necka_01, survivor::elodie::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::elodie::joint_necka_01, survivor::elodie::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_shoulderlt_01, survivor::elodie::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_elbowlt_01, survivor::elodie::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handlt_01, survivor::elodie::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_thumbalt_01, survivor::elodie::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_thumbblt_01, survivor::elodie::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handlt_01, survivor::elodie::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_indexalt_01, survivor::elodie::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_indexblt_01, survivor::elodie::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handlt_01, survivor::elodie::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_fingeralt_01, survivor::elodie::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_fingerblt_01, survivor::elodie::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handlt_01, survivor::elodie::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_ringalt_01, survivor::elodie::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_ringblt_01, survivor::elodie::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handlt_01, survivor::elodie::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_pinkyalt_01, survivor::elodie::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_pinkyblt_01, survivor::elodie::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::elodie::joint_pelvis_01, survivor::elodie::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_hiplt_01, survivor::elodie::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_kneelt_01, survivor::elodie::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::elodie::joint_necka_01, survivor::elodie::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_shoulderrt_01, survivor::elodie::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_elbowrt_01, survivor::elodie::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handrt_01, survivor::elodie::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_thumbart_01, survivor::elodie::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_thumbbrt_01, survivor::elodie::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handrt_01, survivor::elodie::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_indexart_01, survivor::elodie::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_indexbrt_01, survivor::elodie::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handrt_01, survivor::elodie::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_fingerart_01, survivor::elodie::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_fingerbrt_01, survivor::elodie::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handrt_01, survivor::elodie::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_ringart_01, survivor::elodie::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_ringbrt_01, survivor::elodie::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::elodie::joint_handrt_01, survivor::elodie::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_pinkyart_01, survivor::elodie::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_pinkybrt_01, survivor::elodie::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::elodie::joint_pelvis_01, survivor::elodie::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_hiprt_01, survivor::elodie::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::elodie::joint_kneert_01, survivor::elodie::joint_footrt_01));
		}
	}

	{
		// yun bones
		auto& bone = survivor_bone[21];

		bone.emplace_back(std::make_pair(survivor::yun::joint_head_01, survivor::yun::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::yun::joint_necka_01, survivor::yun::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::yun::joint_necka_01, survivor::yun::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_shoulderlt_01, survivor::yun::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_elbowlt_01, survivor::yun::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handlt_01, survivor::yun::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_thumbalt_01, survivor::yun::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_thumbblt_01, survivor::yun::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handlt_01, survivor::yun::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_indexalt_01, survivor::yun::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_indexblt_01, survivor::yun::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handlt_01, survivor::yun::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_fingeralt_01, survivor::yun::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_fingerblt_01, survivor::yun::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handlt_01, survivor::yun::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_ringalt_01, survivor::yun::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_ringblt_01, survivor::yun::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handlt_01, survivor::yun::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_pinkyalt_01, survivor::yun::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_pinkyblt_01, survivor::yun::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::yun::joint_pelvis_01, survivor::yun::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_hiplt_01, survivor::yun::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_kneelt_01, survivor::yun::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::yun::joint_necka_01, survivor::yun::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_shoulderrt_01, survivor::yun::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_elbowrt_01, survivor::yun::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handrt_01, survivor::yun::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_thumbart_01, survivor::yun::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_thumbbrt_01, survivor::yun::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handrt_01, survivor::yun::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_indexart_01, survivor::yun::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_indexbrt_01, survivor::yun::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handrt_01, survivor::yun::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_fingerart_01, survivor::yun::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_fingerbrt_01, survivor::yun::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handrt_01, survivor::yun::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_ringart_01, survivor::yun::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_ringbrt_01, survivor::yun::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::yun::joint_handrt_01, survivor::yun::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_pinkyart_01, survivor::yun::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_pinkybrt_01, survivor::yun::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::yun::joint_pelvis_01, survivor::yun::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_hiprt_01, survivor::yun::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::yun::joint_kneert_01, survivor::yun::joint_footrt_01));
		}
	}

	{
		// jill bones
		auto& bone = survivor_bone[22];

		bone.emplace_back(std::make_pair(survivor::jill::joint_head_01, survivor::jill::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::jill::joint_necka_01, survivor::jill::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jill::joint_necka_01, survivor::jill::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_shoulderlt_01, survivor::jill::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_elbowlt_01, survivor::jill::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handlt_01, survivor::jill::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_thumbalt_01, survivor::jill::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_thumbblt_01, survivor::jill::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handlt_01, survivor::jill::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_indexalt_01, survivor::jill::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_indexblt_01, survivor::jill::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handlt_01, survivor::jill::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_fingeralt_01, survivor::jill::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_fingerblt_01, survivor::jill::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handlt_01, survivor::jill::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_ringalt_01, survivor::jill::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_ringblt_01, survivor::jill::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handlt_01, survivor::jill::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_pinkyalt_01, survivor::jill::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_pinkyblt_01, survivor::jill::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jill::joint_pelvis_01, survivor::jill::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_hiplt_01, survivor::jill::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_kneelt_01, survivor::jill::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jill::joint_necka_01, survivor::jill::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_shoulderrt_01, survivor::jill::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_elbowrt_01, survivor::jill::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handrt_01, survivor::jill::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_thumbart_01, survivor::jill::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_thumbbrt_01, survivor::jill::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handrt_01, survivor::jill::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_indexart_01, survivor::jill::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_indexbrt_01, survivor::jill::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handrt_01, survivor::jill::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_fingerart_01, survivor::jill::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_fingerbrt_01, survivor::jill::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handrt_01, survivor::jill::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_ringart_01, survivor::jill::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_ringbrt_01, survivor::jill::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::jill::joint_handrt_01, survivor::jill::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_pinkyart_01, survivor::jill::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_pinkybrt_01, survivor::jill::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jill::joint_pelvis_01, survivor::jill::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_hiprt_01, survivor::jill::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::jill::joint_kneert_01, survivor::jill::joint_footrt_01));
		}
	}

	{
		// leon bones
		auto& bone = survivor_bone[23];

		bone.emplace_back(std::make_pair(survivor::leon::joint_head_01, survivor::leon::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::leon::joint_necka_01, survivor::leon::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::leon::joint_necka_01, survivor::leon::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_shoulderlt_01, survivor::leon::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_elbowlt_01, survivor::leon::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handlt_01, survivor::leon::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_thumbalt_01, survivor::leon::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_thumbblt_01, survivor::leon::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handlt_01, survivor::leon::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_indexalt_01, survivor::leon::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_indexblt_01, survivor::leon::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handlt_01, survivor::leon::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_fingeralt_01, survivor::leon::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_fingerblt_01, survivor::leon::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handlt_01, survivor::leon::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_ringalt_01, survivor::leon::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_ringblt_01, survivor::leon::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handlt_01, survivor::leon::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_pinkyalt_01, survivor::leon::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_pinkyblt_01, survivor::leon::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::leon::joint_pelvis_01, survivor::leon::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_hiplt_01, survivor::leon::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_kneelt_01, survivor::leon::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::leon::joint_necka_01, survivor::leon::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_shoulderrt_01, survivor::leon::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_elbowrt_01, survivor::leon::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handrt_01, survivor::leon::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_thumbart_01, survivor::leon::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_thumbbrt_01, survivor::leon::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handrt_01, survivor::leon::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_indexart_01, survivor::leon::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_indexbrt_01, survivor::leon::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handrt_01, survivor::leon::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_fingerart_01, survivor::leon::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_fingerbrt_01, survivor::leon::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handrt_01, survivor::leon::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_ringart_01, survivor::leon::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_ringbrt_01, survivor::leon::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::leon::joint_handrt_01, survivor::leon::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_pinkyart_01, survivor::leon::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_pinkybrt_01, survivor::leon::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::leon::joint_pelvis_01, survivor::leon::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_hiprt_01, survivor::leon::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::leon::joint_kneert_01, survivor::leon::joint_footrt_01));
		}
	}

	{
		// mikaela bones
		auto& bone = survivor_bone[24];

		bone.emplace_back(std::make_pair(survivor::mikaela::joint_head_01, survivor::mikaela::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::mikaela::joint_necka_01, survivor::mikaela::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_necka_01, survivor::mikaela::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_shoulderlt_01, survivor::mikaela::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_elbowlt_01, survivor::mikaela::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handlt_01, survivor::mikaela::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_thumbalt_01, survivor::mikaela::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_thumbblt_01, survivor::mikaela::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handlt_01, survivor::mikaela::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_indexalt_01, survivor::mikaela::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_indexblt_01, survivor::mikaela::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handlt_01, survivor::mikaela::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_fingeralt_01, survivor::mikaela::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_fingerblt_01, survivor::mikaela::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handlt_01, survivor::mikaela::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_ringalt_01, survivor::mikaela::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_ringblt_01, survivor::mikaela::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handlt_01, survivor::mikaela::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_pinkyalt_01, survivor::mikaela::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_pinkyblt_01, survivor::mikaela::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_pelvis_01, survivor::mikaela::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_hiplt_01, survivor::mikaela::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_kneelt_01, survivor::mikaela::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_necka_01, survivor::mikaela::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_shoulderrt_01, survivor::mikaela::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_elbowrt_01, survivor::mikaela::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handrt_01, survivor::mikaela::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_thumbart_01, survivor::mikaela::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_thumbbrt_01, survivor::mikaela::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handrt_01, survivor::mikaela::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_indexart_01, survivor::mikaela::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_indexbrt_01, survivor::mikaela::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handrt_01, survivor::mikaela::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_fingerart_01, survivor::mikaela::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_fingerbrt_01, survivor::mikaela::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handrt_01, survivor::mikaela::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_ringart_01, survivor::mikaela::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_ringbrt_01, survivor::mikaela::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::mikaela::joint_handrt_01, survivor::mikaela::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_pinkyart_01, survivor::mikaela::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_pinkybrt_01, survivor::mikaela::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_pelvis_01, survivor::mikaela::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_hiprt_01, survivor::mikaela::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::mikaela::joint_kneert_01, survivor::mikaela::joint_footrt_01));
		}
	}

	{
		// jonah bones
		auto& bone = survivor_bone[25];

		bone.emplace_back(std::make_pair(survivor::jonah::joint_head_01, survivor::jonah::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::jonah::joint_necka_01, survivor::jonah::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jonah::joint_necka_01, survivor::jonah::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_shoulderlt_01, survivor::jonah::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_elbowlt_01, survivor::jonah::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handlt_01, survivor::jonah::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_thumbalt_01, survivor::jonah::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_thumbblt_01, survivor::jonah::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handlt_01, survivor::jonah::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_indexalt_01, survivor::jonah::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_indexblt_01, survivor::jonah::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handlt_01, survivor::jonah::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_fingeralt_01, survivor::jonah::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_fingerblt_01, survivor::jonah::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handlt_01, survivor::jonah::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_ringalt_01, survivor::jonah::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_ringblt_01, survivor::jonah::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handlt_01, survivor::jonah::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_pinkyalt_01, survivor::jonah::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_pinkyblt_01, survivor::jonah::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jonah::joint_pelvis_01, survivor::jonah::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_hiplt_01, survivor::jonah::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_kneelt_01, survivor::jonah::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::jonah::joint_necka_01, survivor::jonah::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_shoulderrt_01, survivor::jonah::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_elbowrt_01, survivor::jonah::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handrt_01, survivor::jonah::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_thumbart_01, survivor::jonah::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_thumbbrt_01, survivor::jonah::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handrt_01, survivor::jonah::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_indexart_01, survivor::jonah::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_indexbrt_01, survivor::jonah::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handrt_01, survivor::jonah::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_fingerart_01, survivor::jonah::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_fingerbrt_01, survivor::jonah::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handrt_01, survivor::jonah::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_ringart_01, survivor::jonah::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_ringbrt_01, survivor::jonah::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::jonah::joint_handrt_01, survivor::jonah::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_pinkyart_01, survivor::jonah::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_pinkybrt_01, survivor::jonah::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::jonah::joint_pelvis_01, survivor::jonah::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_hiprt_01, survivor::jonah::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::jonah::joint_kneert_01, survivor::jonah::joint_footrt_01));
		}
	}

	{
		// david bones
		auto& bone = survivor_bone[26];

		bone.emplace_back(std::make_pair(survivor::david::joint_head_01, survivor::david::joint_necka_01));
		bone.emplace_back(std::make_pair(survivor::david::joint_necka_01, survivor::david::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::david::joint_necka_01, survivor::david::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_shoulderlt_01, survivor::david::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_elbowlt_01, survivor::david::joint_handlt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handlt_01, survivor::david::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_thumbalt_01, survivor::david::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_thumbblt_01, survivor::david::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handlt_01, survivor::david::joint_indexalt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_indexalt_01, survivor::david::joint_indexblt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_indexblt_01, survivor::david::joint_indexclt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handlt_01, survivor::david::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_fingeralt_01, survivor::david::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_fingerblt_01, survivor::david::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handlt_01, survivor::david::joint_ringalt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_ringalt_01, survivor::david::joint_ringblt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_ringblt_01, survivor::david::joint_ringclt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handlt_01, survivor::david::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_pinkyalt_01, survivor::david::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_pinkyblt_01, survivor::david::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::david::joint_pelvis_01, survivor::david::joint_hiplt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_hiplt_01, survivor::david::joint_kneelt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_kneelt_01, survivor::david::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(survivor::david::joint_necka_01, survivor::david::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_shoulderrt_01, survivor::david::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_elbowrt_01, survivor::david::joint_handrt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handrt_01, survivor::david::joint_thumbart_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_thumbart_01, survivor::david::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_thumbbrt_01, survivor::david::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handrt_01, survivor::david::joint_indexart_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_indexart_01, survivor::david::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_indexbrt_01, survivor::david::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handrt_01, survivor::david::joint_fingerart_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_fingerart_01, survivor::david::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_fingerbrt_01, survivor::david::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handrt_01, survivor::david::joint_ringart_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_ringart_01, survivor::david::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_ringbrt_01, survivor::david::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(survivor::david::joint_handrt_01, survivor::david::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_pinkyart_01, survivor::david::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_pinkybrt_01, survivor::david::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(survivor::david::joint_pelvis_01, survivor::david::joint_hiprt_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_hiprt_01, survivor::david::joint_kneert_01));
			bone.emplace_back(std::make_pair(survivor::david::joint_kneert_01, survivor::david::joint_footrt_01));
		}
	}
}

std::vector < std::pair < int, int > >& bones::survivor::get_bone_array(const sdk::a_camper_player* camper) {
	if (camper->is_dwight())
		return survivor_bone[0];

	if (camper->is_meg())
		return survivor_bone[1];

	if (camper->is_claudette())
		return survivor_bone[2];

	if (camper->is_jake())
		return survivor_bone[3];

	if (camper->is_nea())
		return survivor_bone[4];

	if (camper->is_bill())
		return survivor_bone[5];

	if (camper->is_laurie())
		return survivor_bone[6];

	if (camper->is_ace())
		return survivor_bone[7];

	if (camper->is_feng())
		return survivor_bone[8];

	if (camper->is_quentin())
		return survivor_bone[9];

	if (camper->is_tapp())
		return survivor_bone[10];

	if (camper->is_kate())
		return survivor_bone[11];

	if (camper->is_adam())
		return survivor_bone[12];

	if (camper->is_jeff())
		return survivor_bone[13];

	if (camper->is_jane())
		return survivor_bone[14];

	if (camper->is_ashley())
		return survivor_bone[15];

	if (camper->is_yui())
		return survivor_bone[16];

	if (camper->is_zarina())
		return survivor_bone[17];

	if (camper->is_cheryl())
		return survivor_bone[18];

	if (camper->is_felix())
		return survivor_bone[19];

	if (camper->is_elodie())
		return survivor_bone[20];

	if (camper->is_yun())
		return survivor_bone[21];

	if (camper->is_jill())
		return survivor_bone[22];

	if (camper->is_leon())
		return survivor_bone[23];

	if (camper->is_mikaela())
		return survivor_bone[24];

	if (camper->is_jonah())
		return survivor_bone[25];

	if (camper->is_david())
		return survivor_bone[26];

	// to add:
	//  - nancy
}