#include <pch.h>

std::array<std::vector < std::pair < int, int > >, 25> killer_bone;

void bones::killer::initialize() {
	{
		// trapper bones
		auto& bone = killer_bone[0];

		bone.emplace_back(std::make_pair(killer::trapper::joint_head_01, killer::trapper::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::trapper::joint_necka_01, killer::trapper::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::trapper::joint_necka_01, killer::trapper::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_shoulderlt_01, killer::trapper::joint_shoulderrolllt_02));
			bone.emplace_back(std::make_pair(killer::trapper::joint_shoulderrolllt_02, killer::trapper::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_elbowlt_01, killer::trapper::joint_handroll01lt_02));
			bone.emplace_back(std::make_pair(killer::trapper::joint_handroll01lt_02, killer::trapper::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handlt_01, killer::trapper::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_thumbalt_01, killer::trapper::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_thumbblt_01, killer::trapper::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handlt_01, killer::trapper::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_indexalt_01, killer::trapper::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_indexblt_01, killer::trapper::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handlt_01, killer::trapper::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_fingeralt_01, killer::trapper::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_fingerblt_01, killer::trapper::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handlt_01, killer::trapper::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_ringalt_01, killer::trapper::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_ringblt_01, killer::trapper::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handlt_01, killer::trapper::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_pinkyalt_01, killer::trapper::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_pinkyblt_01, killer::trapper::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::trapper::joint_pelvis_01, killer::trapper::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_hiplt_01, killer::trapper::joint_kneerolllt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_kneerolllt_01, killer::trapper::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::trapper::joint_necka_01, killer::trapper::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_shoulderrt_01, killer::trapper::joint_shoulderrollrt_02));
			bone.emplace_back(std::make_pair(killer::trapper::joint_shoulderrollrt_02, killer::trapper::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_elbowrt_01, killer::trapper::joint_handroll01rt_02));
			bone.emplace_back(std::make_pair(killer::trapper::joint_handroll01rt_02, killer::trapper::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handrt_01, killer::trapper::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_thumbart_01, killer::trapper::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_thumbbrt_01, killer::trapper::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handrt_01, killer::trapper::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_indexart_01, killer::trapper::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_indexbrt_01, killer::trapper::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handrt_01, killer::trapper::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_fingerart_01, killer::trapper::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_fingerbrt_01, killer::trapper::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handrt_01, killer::trapper::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_ringart_01, killer::trapper::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_ringbrt_01, killer::trapper::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::trapper::joint_handrt_01, killer::trapper::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_pinkyart_01, killer::trapper::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_pinkybrt_01, killer::trapper::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::trapper::joint_pelvis_01, killer::trapper::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_hiprt_01, killer::trapper::joint_kneerollrt_01));
			bone.emplace_back(std::make_pair(killer::trapper::joint_kneerollrt_01, killer::trapper::joint_footrt_01));
		}
	}

	{
		// hillbilly bones
		auto& bone = killer_bone[1];

		bone.emplace_back(std::make_pair(killer::hillbilly::joint_head_01, killer::hillbilly::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::hillbilly::joint_necka_01, killer::hillbilly::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_necka_01, killer::hillbilly::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_shoulderlt_01, killer::hillbilly::joint_shoulderrolllt_02));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_shoulderrolllt_02, killer::hillbilly::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_elbowlt_01, killer::hillbilly::joint_handroll01lt_02));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_handroll01lt_02, killer::hillbilly::joint_hand_lt_02_ik));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_lt_02_ik, killer::hillbilly::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_thumbalt_01, killer::hillbilly::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_thumbblt_01, killer::hillbilly::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_lt_02_ik, killer::hillbilly::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_indexalt_01, killer::hillbilly::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_indexblt_01, killer::hillbilly::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_lt_02_ik, killer::hillbilly::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_fingeralt_01, killer::hillbilly::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_fingerblt_01, killer::hillbilly::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_lt_02_ik, killer::hillbilly::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_ringalt_01, killer::hillbilly::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_ringblt_01, killer::hillbilly::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_lt_02_ik, killer::hillbilly::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_pinkyalt_01, killer::hillbilly::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_pinkyblt_01, killer::hillbilly::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_pelvis_01, killer::hillbilly::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hiplt_01, killer::hillbilly::joint_kneerolllt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_kneerolllt_01, killer::hillbilly::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_necka_01, killer::hillbilly::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_shoulderrt_01, killer::hillbilly::joint_shoulderrollrt_02));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_shoulderrollrt_02, killer::hillbilly::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_elbowrt_01, killer::hillbilly::joint_handroll01rt_02));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_handroll01rt_02, killer::hillbilly::joint_hand_rt_02_ik));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_rt_02_ik, killer::hillbilly::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_thumbart_01, killer::hillbilly::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_thumbbrt_01, killer::hillbilly::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_rt_02_ik, killer::hillbilly::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_indexart_01, killer::hillbilly::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_indexbrt_01, killer::hillbilly::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_rt_02_ik, killer::hillbilly::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_fingerart_01, killer::hillbilly::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_fingerbrt_01, killer::hillbilly::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_rt_02_ik, killer::hillbilly::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_ringart_01, killer::hillbilly::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_ringbrt_01, killer::hillbilly::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hand_rt_02_ik, killer::hillbilly::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_pinkyart_01, killer::hillbilly::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_pinkybrt_01, killer::hillbilly::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_pelvis_01, killer::hillbilly::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_hiprt_01, killer::hillbilly::joint_kneerollrt_01));
			bone.emplace_back(std::make_pair(killer::hillbilly::joint_kneerollrt_01, killer::hillbilly::joint_footrt_01));
		}
	}

	{
		// huntress bones
		auto& bone = killer_bone[2];

		bone.emplace_back(std::make_pair(killer::huntress::joint_head_01, killer::huntress::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::huntress::joint_necka_01, killer::huntress::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::huntress::joint_necka_01, killer::huntress::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_shoulderlt_01, killer::huntress::joint_shoulderrolllt_02));
			bone.emplace_back(std::make_pair(killer::huntress::joint_shoulderrolllt_02, killer::huntress::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_elbowlt_01, killer::huntress::joint_handroll01lt_02));
			bone.emplace_back(std::make_pair(killer::huntress::joint_handroll01lt_02, killer::huntress::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handlt_01, killer::huntress::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_thumbalt_01, killer::huntress::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_thumbblt_01, killer::huntress::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handlt_01, killer::huntress::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_indexalt_01, killer::huntress::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_indexblt_01, killer::huntress::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handlt_01, killer::huntress::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_fingeralt_01, killer::huntress::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_fingerblt_01, killer::huntress::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handlt_01, killer::huntress::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_ringalt_01, killer::huntress::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_ringblt_01, killer::huntress::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handlt_01, killer::huntress::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_pinkyalt_01, killer::huntress::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_pinkyblt_01, killer::huntress::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::huntress::joint_pelvis_01, killer::huntress::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_hiplt_01, killer::huntress::joint_kneerolllt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_kneerolllt_01, killer::huntress::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::huntress::joint_necka_01, killer::huntress::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_shoulderrt_01, killer::huntress::joint_shoulderrollrt_02));
			bone.emplace_back(std::make_pair(killer::huntress::joint_shoulderrollrt_02, killer::huntress::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_elbowrt_01, killer::huntress::joint_handroll01rt_02));
			bone.emplace_back(std::make_pair(killer::huntress::joint_handroll01rt_02, killer::huntress::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handrt_01, killer::huntress::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_thumbart_01, killer::huntress::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_thumbbrt_01, killer::huntress::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handrt_01, killer::huntress::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_indexart_01, killer::huntress::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_indexbrt_01, killer::huntress::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handrt_01, killer::huntress::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_fingerart_01, killer::huntress::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_fingerbrt_01, killer::huntress::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handrt_01, killer::huntress::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_ringart_01, killer::huntress::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_ringbrt_01, killer::huntress::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::huntress::joint_handrt_01, killer::huntress::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_pinkyart_01, killer::huntress::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_pinkybrt_01, killer::huntress::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::huntress::joint_pelvis_01, killer::huntress::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_hiprt_01, killer::huntress::joint_kneerollrt_01));
			bone.emplace_back(std::make_pair(killer::huntress::joint_kneerollrt_01, killer::huntress::joint_footrt_01));
		}
	}

	{
		// myers bones
		auto& bone = killer_bone[3];

		bone.emplace_back(std::make_pair(killer::myers::joint_head_01, killer::myers::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::myers::joint_necka_01, killer::myers::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::myers::joint_necka_01, killer::myers::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_shoulderlt_01, killer::myers::joint_shoulderrolllt_02));
			bone.emplace_back(std::make_pair(killer::myers::joint_shoulderrolllt_02, killer::myers::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_elbowlt_01, killer::myers::joint_handroll01lt_02));
			bone.emplace_back(std::make_pair(killer::myers::joint_handroll01lt_02, killer::myers::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handlt_01, killer::myers::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_thumbalt_01, killer::myers::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_thumbblt_01, killer::myers::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handlt_01, killer::myers::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_indexalt_01, killer::myers::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_indexblt_01, killer::myers::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handlt_01, killer::myers::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_fingeralt_01, killer::myers::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_fingerblt_01, killer::myers::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handlt_01, killer::myers::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_ringalt_01, killer::myers::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_ringblt_01, killer::myers::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handlt_01, killer::myers::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_pinkyalt_01, killer::myers::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_pinkyblt_01, killer::myers::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::myers::joint_pelvis_01, killer::myers::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_hiplt_01, killer::myers::joint_kneerolllt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_kneerolllt_01, killer::myers::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::myers::joint_necka_01, killer::myers::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_shoulderrt_01, killer::myers::joint_shoulderrollrt_02));
			bone.emplace_back(std::make_pair(killer::myers::joint_shoulderrollrt_02, killer::myers::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_elbowrt_01, killer::myers::joint_handroll01rt_02));
			bone.emplace_back(std::make_pair(killer::myers::joint_handroll01rt_02, killer::myers::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handrt_01, killer::myers::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_thumbart_01, killer::myers::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_thumbbrt_01, killer::myers::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handrt_01, killer::myers::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_indexart_01, killer::myers::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_indexbrt_01, killer::myers::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handrt_01, killer::myers::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_fingerart_01, killer::myers::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_fingerbrt_01, killer::myers::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handrt_01, killer::myers::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_ringart_01, killer::myers::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_ringbrt_01, killer::myers::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::myers::joint_handrt_01, killer::myers::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_pinkyart_01, killer::myers::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_pinkybrt_01, killer::myers::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::myers::joint_pelvis_01, killer::myers::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_hiprt_01, killer::myers::joint_kneerollrt_01));
			bone.emplace_back(std::make_pair(killer::myers::joint_kneerollrt_01, killer::myers::joint_footrt_01));
		}
	}

	{
		// hag bones
		auto& bone = killer_bone[4];

		bone.emplace_back(std::make_pair(killer::hag::joint_head_01, killer::hag::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::hag::joint_necka_01, killer::hag::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::hag::joint_necka_01, killer::hag::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_shoulderlt_01, killer::hag::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_elbowlt_01, killer::hag::joint_elbowlt_twist_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_elbowlt_twist_01, killer::hag::joint_hand_lt_02_ik));

			bone.emplace_back(std::make_pair(killer::hag::joint_hand_lt_02_ik, killer::hag::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_thumbalt_01, killer::hag::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_thumbblt_01, killer::hag::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::hag::joint_hand_lt_02_ik, killer::hag::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_indexalt_01, killer::hag::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_indexblt_01, killer::hag::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::hag::joint_hand_lt_02_ik, killer::hag::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_fingeralt_01, killer::hag::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_fingerblt_01, killer::hag::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::hag::joint_hand_lt_02_ik, killer::hag::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_ringalt_01, killer::hag::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_ringblt_01, killer::hag::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::hag::joint_hand_lt_02_ik, killer::hag::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_pinkyalt_01, killer::hag::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_pinkyblt_01, killer::hag::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::hag::joint_pelvis_01, killer::hag::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_hiplt_01, killer::hag::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_kneelt_01, killer::hag::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::hag::joint_necka_01, killer::hag::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_shoulderrt_01, killer::hag::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_elbowrt_01, killer::hag::joint_elbowrt_twist_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_elbowrt_twist_01, killer::hag::joint_hand_rt_02_ik));

			bone.emplace_back(std::make_pair(killer::hag::joint_hand_rt_02_ik, killer::hag::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_thumbart_01, killer::hag::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_thumbbrt_01, killer::hag::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::hag::joint_hand_rt_02_ik, killer::hag::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_indexart_01, killer::hag::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_indexbrt_01, killer::hag::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::hag::joint_hand_rt_02_ik, killer::hag::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_fingerart_01, killer::hag::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_fingerbrt_01, killer::hag::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::hag::joint_hand_rt_02_ik, killer::hag::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_pinkyart_01, killer::hag::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_pinkybrt_01, killer::hag::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::hag::joint_pelvis_01, killer::hag::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_hiprt_01, killer::hag::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::hag::joint_kneert_01, killer::hag::joint_footrt_01));
		}
	}

	{
		// doctor bones
		auto& bone = killer_bone[5];

		bone.emplace_back(std::make_pair(killer::doctor::joint_head_01, killer::doctor::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::doctor::joint_necka_01, killer::doctor::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::doctor::joint_necka_01, killer::doctor::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_shoulderlt_01, killer::doctor::joint_shoulderrolllt_02));
			bone.emplace_back(std::make_pair(killer::doctor::joint_shoulderrolllt_02, killer::doctor::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_elbowlt_01, killer::doctor::joint_handroll01lt_02));
			bone.emplace_back(std::make_pair(killer::doctor::joint_handroll01lt_02, killer::doctor::joint_hand_lt_02_ik));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_lt_02_ik, killer::doctor::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_thumbalt_01, killer::doctor::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_thumbblt_01, killer::doctor::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_lt_02_ik, killer::doctor::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_indexalt_01, killer::doctor::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_indexblt_01, killer::doctor::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_lt_02_ik, killer::doctor::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_fingeralt_01, killer::doctor::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_fingerblt_01, killer::doctor::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_lt_02_ik, killer::doctor::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_ringalt_01, killer::doctor::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_ringblt_01, killer::doctor::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_lt_02_ik, killer::doctor::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_pinkyalt_01, killer::doctor::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_pinkyblt_01, killer::doctor::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::doctor::joint_pelvis_01, killer::doctor::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_hiplt_01, killer::doctor::joint_kneerolllt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_kneerolllt_01, killer::doctor::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::doctor::joint_necka_01, killer::doctor::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_shoulderrt_01, killer::doctor::joint_shoulderrollrt_02));
			bone.emplace_back(std::make_pair(killer::doctor::joint_shoulderrollrt_02, killer::doctor::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_elbowrt_01, killer::doctor::joint_handroll01rt_02));
			bone.emplace_back(std::make_pair(killer::doctor::joint_handroll01rt_02, killer::doctor::joint_hand_rt_02_ik));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_rt_02_ik, killer::doctor::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_thumbart_01, killer::doctor::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_thumbbrt_01, killer::doctor::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_rt_02_ik, killer::doctor::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_indexart_01, killer::doctor::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_indexbrt_01, killer::doctor::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_rt_02_ik, killer::doctor::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_fingerart_01, killer::doctor::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_fingerbrt_01, killer::doctor::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_rt_02_ik, killer::doctor::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_ringart_01, killer::doctor::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_ringbrt_01, killer::doctor::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::doctor::joint_hand_rt_02_ik, killer::doctor::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_pinkyart_01, killer::doctor::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_pinkybrt_01, killer::doctor::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::doctor::joint_pelvis_01, killer::doctor::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_hiprt_01, killer::doctor::joint_kneerollrt_01));
			bone.emplace_back(std::make_pair(killer::doctor::joint_kneerollrt_01, killer::doctor::joint_footrt_01));
		}
	}

	{
		// leatherface bones
		auto& bone = killer_bone[6];

		bone.emplace_back(std::make_pair(killer::leatherface::joint_head_01, killer::leatherface::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::leatherface::joint_necka_01, killer::leatherface::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::leatherface::joint_necka_01, killer::leatherface::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_shoulderlt_01, killer::leatherface::joint_shoulderrolllt_02));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_shoulderrolllt_02, killer::leatherface::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_elbowlt_01, killer::leatherface::joint_handroll01lt_02));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_handroll01lt_02, killer::leatherface::joint_hand_lt_02_ik));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_lt_02_ik, killer::leatherface::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_thumbalt_01, killer::leatherface::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_thumbblt_01, killer::leatherface::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_lt_02_ik, killer::leatherface::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_indexalt_01, killer::leatherface::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_indexblt_01, killer::leatherface::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_lt_02_ik, killer::leatherface::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_fingeralt_01, killer::leatherface::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_fingerblt_01, killer::leatherface::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_lt_02_ik, killer::leatherface::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_ringalt_01, killer::leatherface::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_ringblt_01, killer::leatherface::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_lt_02_ik, killer::leatherface::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_pinkyalt_01, killer::leatherface::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_pinkyblt_01, killer::leatherface::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::leatherface::joint_pelvis_01, killer::leatherface::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_hiplt_01, killer::leatherface::joint_kneerolllt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_kneerolllt_01, killer::leatherface::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::leatherface::joint_necka_01, killer::leatherface::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_shoulderrt_01, killer::leatherface::joint_shoulderrollrt_02));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_shoulderrollrt_02, killer::leatherface::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_elbowrt_01, killer::leatherface::joint_handroll01rt_02));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_handroll01rt_02, killer::leatherface::joint_hand_rt_02_ik));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_rt_02_ik, killer::leatherface::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_thumbart_01, killer::leatherface::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_thumbbrt_01, killer::leatherface::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_rt_02_ik, killer::leatherface::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_indexart_01, killer::leatherface::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_indexbrt_01, killer::leatherface::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_rt_02_ik, killer::leatherface::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_fingerart_01, killer::leatherface::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_fingerbrt_01, killer::leatherface::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_rt_02_ik, killer::leatherface::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_ringart_01, killer::leatherface::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_ringbrt_01, killer::leatherface::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::leatherface::joint_hand_rt_02_ik, killer::leatherface::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_pinkyart_01, killer::leatherface::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_pinkybrt_01, killer::leatherface::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::leatherface::joint_pelvis_01, killer::leatherface::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_hiprt_01, killer::leatherface::joint_kneerollrt_01));
			bone.emplace_back(std::make_pair(killer::leatherface::joint_kneerollrt_01, killer::leatherface::joint_footrt_01));
		}
	}

	{
		// freddy bones
		auto& bone = killer_bone[7];

		bone.emplace_back(std::make_pair(killer::freddy::joint_head_01, killer::freddy::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::freddy::joint_necka_01, killer::freddy::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::freddy::joint_necka_01, killer::freddy::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_shoulderlt_01, killer::freddy::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_elbowlt_01, killer::freddy::joint_hand_lt_02_ik));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_lt_02_ik, killer::freddy::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_thumbalt_01, killer::freddy::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_thumbblt_01, killer::freddy::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_lt_02_ik, killer::freddy::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_indexalt_01, killer::freddy::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_indexblt_01, killer::freddy::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_lt_02_ik, killer::freddy::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_fingeralt_01, killer::freddy::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_fingerblt_01, killer::freddy::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_lt_02_ik, killer::freddy::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_ringalt_01, killer::freddy::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_ringblt_01, killer::freddy::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_lt_02_ik, killer::freddy::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_pinkyalt_01, killer::freddy::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_pinkyblt_01, killer::freddy::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::freddy::joint_pelvis_01, killer::freddy::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_hiplt_01, killer::freddy::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_kneelt_01, killer::freddy::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::freddy::joint_necka_01, killer::freddy::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_shoulderrt_01, killer::freddy::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_elbowrt_01, killer::freddy::joint_hand_rt_02_ik));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_rt_02_ik, killer::freddy::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_thumbart_01, killer::freddy::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_thumbbrt_01, killer::freddy::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_rt_02_ik, killer::freddy::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_indexart_01, killer::freddy::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_indexbrt_01, killer::freddy::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_rt_02_ik, killer::freddy::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_fingerart_01, killer::freddy::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_fingerbrt_01, killer::freddy::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_rt_02_ik, killer::freddy::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_ringart_01, killer::freddy::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_ringbrt_01, killer::freddy::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::freddy::joint_hand_rt_02_ik, killer::freddy::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_pinkyart_01, killer::freddy::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_pinkybrt_01, killer::freddy::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::freddy::joint_pelvis_01, killer::freddy::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_hiprt_01, killer::freddy::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::freddy::joint_kneert_01, killer::freddy::joint_footrt_01));
		}
	}

	{
		// pig bones
		auto& bone = killer_bone[8];

		bone.emplace_back(std::make_pair(killer::pig::joint_head_01, killer::pig::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::pig::joint_necka_01, killer::pig::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::pig::joint_necka_01, killer::pig::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_shoulderlt_01, killer::pig::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_elbowlt_01, killer::pig::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handlt_01, killer::pig::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_thumbalt_01, killer::pig::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_thumbblt_01, killer::pig::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handlt_01, killer::pig::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_indexalt_01, killer::pig::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_indexblt_01, killer::pig::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handlt_01, killer::pig::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_fingeralt_01, killer::pig::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_fingerblt_01, killer::pig::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handlt_01, killer::pig::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_ringalt_01, killer::pig::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_ringblt_01, killer::pig::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handlt_01, killer::pig::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_pinkyalt_01, killer::pig::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_pinkyblt_01, killer::pig::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::pig::joint_pelvis_01, killer::pig::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_hiplt_01, killer::pig::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_kneelt_01, killer::pig::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::pig::joint_necka_01, killer::pig::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_shoulderrt_01, killer::pig::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_elbowrt_01, killer::pig::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handrt_01, killer::pig::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_thumbart_01, killer::pig::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_thumbbrt_01, killer::pig::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handrt_01, killer::pig::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_indexart_01, killer::pig::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_indexbrt_01, killer::pig::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handrt_01, killer::pig::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_fingerart_01, killer::pig::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_fingerbrt_01, killer::pig::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handrt_01, killer::pig::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_ringart_01, killer::pig::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_ringbrt_01, killer::pig::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::pig::joint_handrt_01, killer::pig::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_pinkyart_01, killer::pig::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_pinkybrt_01, killer::pig::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::pig::joint_pelvis_01, killer::pig::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_hiprt_01, killer::pig::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::pig::joint_kneert_01, killer::pig::joint_footrt_01));
		}
	}

	{
		// clown bones
		auto& bone = killer_bone[9];

		bone.emplace_back(std::make_pair(killer::clown::joint_head_01, killer::clown::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::clown::joint_necka_01, killer::clown::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::clown::joint_necka_01, killer::clown::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_shoulderlt_01, killer::clown::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_elbowlt_01, killer::clown::joint_hand_lt_02_ik));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_lt_02_ik, killer::clown::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_thumbalt_01, killer::clown::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_thumbblt_01, killer::clown::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_lt_02_ik, killer::clown::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_indexalt_01, killer::clown::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_indexblt_01, killer::clown::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_lt_02_ik, killer::clown::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_fingeralt_01, killer::clown::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_fingerblt_01, killer::clown::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_lt_02_ik, killer::clown::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_ringalt_01, killer::clown::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_ringblt_01, killer::clown::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_lt_02_ik, killer::clown::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_pinkyalt_01, killer::clown::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_pinkyblt_01, killer::clown::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::clown::joint_pelvis_01, killer::clown::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_hiplt_01, killer::clown::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_kneelt_01, killer::clown::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::clown::joint_necka_01, killer::clown::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_shoulderrt_01, killer::clown::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_elbowrt_01, killer::clown::joint_hand_rt_02_ik));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_rt_02_ik, killer::clown::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_thumbart_01, killer::clown::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_thumbbrt_01, killer::clown::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_rt_02_ik, killer::clown::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_indexart_01, killer::clown::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_indexbrt_01, killer::clown::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_rt_02_ik, killer::clown::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_fingerart_01, killer::clown::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_fingerbrt_01, killer::clown::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_rt_02_ik, killer::clown::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_ringart_01, killer::clown::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_ringbrt_01, killer::clown::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::clown::joint_hand_rt_02_ik, killer::clown::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_pinkyart_01, killer::clown::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_pinkybrt_01, killer::clown::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::clown::joint_pelvis_01, killer::clown::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_hiprt_01, killer::clown::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::clown::joint_kneert_01, killer::clown::joint_footrt_01));
		}
	}

	{
		// spirit bones
		auto& bone = killer_bone[10];

		bone.emplace_back(std::make_pair(killer::spirit::joint_head_01, killer::spirit::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::spirit::joint_necka_01, killer::spirit::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::spirit::joint_necka_01, killer::spirit::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_shoulderlt_01, killer::spirit::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_elbowlt_01, killer::spirit::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handlt_01, killer::spirit::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_thumbalt_01, killer::spirit::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_thumbblt_01, killer::spirit::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handlt_01, killer::spirit::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_indexalt_01, killer::spirit::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_indexblt_01, killer::spirit::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handlt_01, killer::spirit::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_fingeralt_01, killer::spirit::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_fingerblt_01, killer::spirit::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handlt_01, killer::spirit::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_ringalt_01, killer::spirit::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_ringblt_01, killer::spirit::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handlt_01, killer::spirit::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_pinkyalt_01, killer::spirit::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_pinkyblt_01, killer::spirit::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::spirit::joint_pelvis_01, killer::spirit::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_hiplt_01, killer::spirit::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_kneelt_01, killer::spirit::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::spirit::joint_necka_01, killer::spirit::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_shoulderrt_01, killer::spirit::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_elbowrt_01, killer::spirit::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handrt_01, killer::spirit::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_thumbart_01, killer::spirit::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_thumbbrt_01, killer::spirit::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handrt_01, killer::spirit::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_indexart_01, killer::spirit::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_indexbrt_01, killer::spirit::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handrt_01, killer::spirit::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_fingerart_01, killer::spirit::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_fingerbrt_01, killer::spirit::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handrt_01, killer::spirit::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_ringart_01, killer::spirit::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_ringbrt_01, killer::spirit::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::spirit::joint_handrt_01, killer::spirit::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_pinkyart_01, killer::spirit::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_pinkybrt_01, killer::spirit::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::spirit::joint_pelvis_01, killer::spirit::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_hiprt_01, killer::spirit::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::spirit::joint_kneert_01, killer::spirit::joint_footrt_01));
		}
	}

	{
		// legion bones
		auto& bone = killer_bone[11];

		bone.emplace_back(std::make_pair(killer::legion::joint_head_01, killer::legion::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::legion::joint_necka_01, killer::legion::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::legion::joint_necka_01, killer::legion::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_shoulderlt_01, killer::legion::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_elbowlt_01, killer::legion::joint_hand_lt_02_ik));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_lt_02_ik, killer::legion::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_thumbalt_01, killer::legion::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_thumbblt_01, killer::legion::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_lt_02_ik, killer::legion::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_indexalt_01, killer::legion::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_indexblt_01, killer::legion::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_lt_02_ik, killer::legion::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_fingeralt_01, killer::legion::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_fingerblt_01, killer::legion::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_lt_02_ik, killer::legion::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_ringalt_01, killer::legion::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_ringblt_01, killer::legion::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_lt_02_ik, killer::legion::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_pinkyalt_01, killer::legion::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_pinkyblt_01, killer::legion::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::legion::joint_pelvis_01, killer::legion::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_hiplt_01, killer::legion::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_kneelt_01, killer::legion::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::legion::joint_necka_01, killer::legion::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_shoulderrt_01, killer::legion::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_elbowrt_01, killer::legion::joint_hand_rt_02_ik));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_rt_02_ik, killer::legion::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_thumbart_01, killer::legion::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_thumbbrt_01, killer::legion::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_rt_02_ik, killer::legion::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_indexart_01, killer::legion::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_indexbrt_01, killer::legion::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_rt_02_ik, killer::legion::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_fingerart_01, killer::legion::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_fingerbrt_01, killer::legion::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_rt_02_ik, killer::legion::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_ringart_01, killer::legion::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_ringbrt_01, killer::legion::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::legion::joint_hand_rt_02_ik, killer::legion::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_pinkyart_01, killer::legion::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_pinkybrt_01, killer::legion::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::legion::joint_pelvis_01, killer::legion::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_hiprt_01, killer::legion::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::legion::joint_kneert_01, killer::legion::joint_footrt_01));
		}
	}

	{
		// plague bones
		auto& bone = killer_bone[12];

		bone.emplace_back(std::make_pair(killer::plague::joint_head_01, killer::plague::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::plague::joint_necka_01, killer::plague::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::plague::joint_necka_01, killer::plague::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_shoulderlt_01, killer::plague::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_elbowlt_01, killer::plague::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handlt_01, killer::plague::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_thumbalt_01, killer::plague::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_thumbblt_01, killer::plague::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handlt_01, killer::plague::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_indexalt_01, killer::plague::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_indexblt_01, killer::plague::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handlt_01, killer::plague::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_fingeralt_01, killer::plague::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_fingerblt_01, killer::plague::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handlt_01, killer::plague::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_ringalt_01, killer::plague::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_ringblt_01, killer::plague::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handlt_01, killer::plague::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_pinkyalt_01, killer::plague::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_pinkyblt_01, killer::plague::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::plague::joint_pelvis_01, killer::plague::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_hiplt_01, killer::plague::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_kneelt_01, killer::plague::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::plague::joint_necka_01, killer::plague::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_shoulderrt_01, killer::plague::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_elbowrt_01, killer::plague::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handrt_01, killer::plague::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_thumbart_01, killer::plague::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_thumbbrt_01, killer::plague::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handrt_01, killer::plague::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_indexart_01, killer::plague::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_indexbrt_01, killer::plague::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handrt_01, killer::plague::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_fingerart_01, killer::plague::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_fingerbrt_01, killer::plague::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handrt_01, killer::plague::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_ringart_01, killer::plague::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_ringbrt_01, killer::plague::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::plague::joint_handrt_01, killer::plague::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_pinkyart_01, killer::plague::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_pinkybrt_01, killer::plague::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::plague::joint_pelvis_01, killer::plague::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_hiprt_01, killer::plague::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::plague::joint_kneert_01, killer::plague::joint_footrt_01));
		}
	}

	{
		// ghostface bones
		auto& bone = killer_bone[13];

		bone.emplace_back(std::make_pair(killer::ghostface::joint_head_01, killer::ghostface::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::ghostface::joint_necka_01, killer::ghostface::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::ghostface::joint_necka_01, killer::ghostface::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_shoulderlt_01, killer::ghostface::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_elbowlt_01, killer::ghostface::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handlt_01, killer::ghostface::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_thumbalt_01, killer::ghostface::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_thumbblt_01, killer::ghostface::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handlt_01, killer::ghostface::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_indexalt_01, killer::ghostface::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_indexblt_01, killer::ghostface::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handlt_01, killer::ghostface::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_fingeralt_01, killer::ghostface::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_fingerblt_01, killer::ghostface::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handlt_01, killer::ghostface::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_ringalt_01, killer::ghostface::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_ringblt_01, killer::ghostface::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handlt_01, killer::ghostface::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_pinkyalt_01, killer::ghostface::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_pinkyblt_01, killer::ghostface::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::ghostface::joint_pelvis_01, killer::ghostface::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_hiplt_01, killer::ghostface::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_kneelt_01, killer::ghostface::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::ghostface::joint_necka_01, killer::ghostface::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_shoulderrt_01, killer::ghostface::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_elbowrt_01, killer::ghostface::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handrt_01, killer::ghostface::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_thumbart_01, killer::ghostface::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_thumbbrt_01, killer::ghostface::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handrt_01, killer::ghostface::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_indexart_01, killer::ghostface::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_indexbrt_01, killer::ghostface::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handrt_01, killer::ghostface::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_fingerart_01, killer::ghostface::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_fingerbrt_01, killer::ghostface::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handrt_01, killer::ghostface::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_ringart_01, killer::ghostface::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_ringbrt_01, killer::ghostface::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::ghostface::joint_handrt_01, killer::ghostface::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_pinkyart_01, killer::ghostface::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_pinkybrt_01, killer::ghostface::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::ghostface::joint_pelvis_01, killer::ghostface::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_hiprt_01, killer::ghostface::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::ghostface::joint_kneert_01, killer::ghostface::joint_footrt_01));
		}
	}

	{
		// oni bones
		auto& bone = killer_bone[14];

		bone.emplace_back(std::make_pair(killer::oni::joint_head_01, killer::oni::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::oni::joint_necka_01, killer::oni::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::oni::joint_necka_01, killer::oni::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_shoulderlt_01, killer::oni::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_elbowlt_01, killer::oni::joint_hand_lt_02_ik));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_lt_02_ik, killer::oni::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_thumbalt_01, killer::oni::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_thumbblt_01, killer::oni::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_lt_02_ik, killer::oni::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_indexalt_01, killer::oni::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_indexblt_01, killer::oni::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_lt_02_ik, killer::oni::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_fingeralt_01, killer::oni::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_fingerblt_01, killer::oni::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_lt_02_ik, killer::oni::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_ringalt_01, killer::oni::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_ringblt_01, killer::oni::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_lt_02_ik, killer::oni::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_pinkyalt_01, killer::oni::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_pinkyblt_01, killer::oni::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::oni::joint_pelvis_01, killer::oni::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_hiplt_01, killer::oni::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_kneelt_01, killer::oni::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::oni::joint_necka_01, killer::oni::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_shoulderrt_01, killer::oni::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_elbowrt_01, killer::oni::joint_hand_rt_02_ik));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_rt_02_ik, killer::oni::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_thumbart_01, killer::oni::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_thumbbrt_01, killer::oni::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_rt_02_ik, killer::oni::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_indexart_01, killer::oni::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_indexbrt_01, killer::oni::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_rt_02_ik, killer::oni::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_fingerart_01, killer::oni::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_fingerbrt_01, killer::oni::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_rt_02_ik, killer::oni::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_ringart_01, killer::oni::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_ringbrt_01, killer::oni::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::oni::joint_hand_rt_02_ik, killer::oni::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_pinkyart_01, killer::oni::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_pinkybrt_01, killer::oni::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::oni::joint_pelvis_01, killer::oni::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_hiprt_01, killer::oni::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::oni::joint_kneert_01, killer::oni::joint_footrt_01));
		}
	}

	{
		// deathslinger bones
		auto& bone = killer_bone[15];

		bone.emplace_back(std::make_pair(killer::deathslinger::joint_head_01, killer::deathslinger::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::deathslinger::joint_necka_01, killer::deathslinger::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_necka_01, killer::deathslinger::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_shoulderlt_01, killer::deathslinger::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_elbowlt_01, killer::deathslinger::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handlt_01, killer::deathslinger::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_thumbalt_01, killer::deathslinger::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_thumbblt_01, killer::deathslinger::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handlt_01, killer::deathslinger::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_indexalt_01, killer::deathslinger::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_indexblt_01, killer::deathslinger::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handlt_01, killer::deathslinger::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_fingeralt_01, killer::deathslinger::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_fingerblt_01, killer::deathslinger::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handlt_01, killer::deathslinger::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_ringalt_01, killer::deathslinger::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_ringblt_01, killer::deathslinger::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handlt_01, killer::deathslinger::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_pinkyalt_01, killer::deathslinger::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_pinkyblt_01, killer::deathslinger::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_pelvis_01, killer::deathslinger::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_hiplt_01, killer::deathslinger::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_kneelt_01, killer::deathslinger::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_necka_01, killer::deathslinger::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_shoulderrt_01, killer::deathslinger::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_elbowrt_01, killer::deathslinger::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handrt_01, killer::deathslinger::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_thumbart_01, killer::deathslinger::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_thumbbrt_01, killer::deathslinger::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handrt_01, killer::deathslinger::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_indexart_01, killer::deathslinger::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_indexbrt_01, killer::deathslinger::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handrt_01, killer::deathslinger::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_fingerart_01, killer::deathslinger::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_fingerbrt_01, killer::deathslinger::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handrt_01, killer::deathslinger::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_ringart_01, killer::deathslinger::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_ringbrt_01, killer::deathslinger::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::deathslinger::joint_handrt_01, killer::deathslinger::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_pinkyart_01, killer::deathslinger::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_pinkybrt_01, killer::deathslinger::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_pelvis_01, killer::deathslinger::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_hiprt_01, killer::deathslinger::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::deathslinger::joint_kneert_01, killer::deathslinger::joint_footrt_01));
		}
	}

	{
		// executioner bones
		auto& bone = killer_bone[16];

		bone.emplace_back(std::make_pair(killer::executioner::joint_head_01, killer::executioner::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::executioner::joint_necka_01, killer::executioner::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::executioner::joint_necka_01, killer::executioner::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_shoulderlt_01, killer::executioner::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_elbowlt_01, killer::executioner::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handlt_01, killer::executioner::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_thumbalt_01, killer::executioner::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_thumbblt_01, killer::executioner::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handlt_01, killer::executioner::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_indexalt_01, killer::executioner::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_indexblt_01, killer::executioner::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handlt_01, killer::executioner::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_fingeralt_01, killer::executioner::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_fingerblt_01, killer::executioner::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handlt_01, killer::executioner::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_ringalt_01, killer::executioner::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_ringblt_01, killer::executioner::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handlt_01, killer::executioner::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_pinkyalt_01, killer::executioner::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_pinkyblt_01, killer::executioner::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::executioner::joint_pelvis_01, killer::executioner::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_hiplt_01, killer::executioner::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_kneelt_01, killer::executioner::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::executioner::joint_necka_01, killer::executioner::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_shoulderrt_01, killer::executioner::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_elbowrt_01, killer::executioner::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handrt_01, killer::executioner::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_thumbart_01, killer::executioner::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_thumbbrt_01, killer::executioner::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handrt_01, killer::executioner::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_indexart_01, killer::executioner::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_indexbrt_01, killer::executioner::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handrt_01, killer::executioner::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_fingerart_01, killer::executioner::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_fingerbrt_01, killer::executioner::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handrt_01, killer::executioner::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_ringart_01, killer::executioner::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_ringbrt_01, killer::executioner::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::executioner::joint_handrt_01, killer::executioner::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_pinkyart_01, killer::executioner::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_pinkybrt_01, killer::executioner::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::executioner::joint_pelvis_01, killer::executioner::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_hiprt_01, killer::executioner::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::executioner::joint_kneert_01, killer::executioner::joint_footrt_01));
		}
	}

	{
		// blight bones
		auto& bone = killer_bone[17];

		bone.emplace_back(std::make_pair(killer::blight::joint_head_01, killer::blight::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::blight::joint_necka_01, killer::blight::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::blight::joint_necka_01, killer::blight::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_shoulderlt_01, killer::blight::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_elbowlt_01, killer::blight::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handlt_01, killer::blight::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_thumbalt_01, killer::blight::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_thumbblt_01, killer::blight::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handlt_01, killer::blight::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_indexalt_01, killer::blight::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_indexblt_01, killer::blight::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handlt_01, killer::blight::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_fingeralt_01, killer::blight::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_fingerblt_01, killer::blight::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handlt_01, killer::blight::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_ringalt_01, killer::blight::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_ringblt_01, killer::blight::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handlt_01, killer::blight::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_pinkyalt_01, killer::blight::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_pinkyblt_01, killer::blight::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::blight::joint_pelvis_01, killer::blight::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_hiplt_01, killer::blight::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_kneelt_01, killer::blight::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::blight::joint_necka_01, killer::blight::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_shoulderrt_01, killer::blight::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_elbowrt_01, killer::blight::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handrt_01, killer::blight::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_thumbart_01, killer::blight::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_thumbbrt_01, killer::blight::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handrt_01, killer::blight::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_indexart_01, killer::blight::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_indexbrt_01, killer::blight::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handrt_01, killer::blight::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_fingerart_01, killer::blight::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_fingerbrt_01, killer::blight::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handrt_01, killer::blight::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_ringart_01, killer::blight::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_ringbrt_01, killer::blight::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::blight::joint_handrt_01, killer::blight::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_pinkyart_01, killer::blight::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_pinkybrt_01, killer::blight::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::blight::joint_pelvis_01, killer::blight::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_hiprt_01, killer::blight::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::blight::joint_kneert_01, killer::blight::joint_footrt_01));
		}
	}

	{
		// twins bones
		auto& bone = killer_bone[18];

		bone.emplace_back(std::make_pair(killer::twins::joint_head_01, killer::twins::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::twins::joint_necka_01, killer::twins::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::twins::joint_necka_01, killer::twins::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_shoulderlt_01, killer::twins::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_elbowlt_01, killer::twins::joint_hand_lt_02_ik));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_lt_02_ik, killer::twins::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_thumbalt_01, killer::twins::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_thumbblt_01, killer::twins::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_lt_02_ik, killer::twins::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_indexalt_01, killer::twins::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_indexblt_01, killer::twins::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_lt_02_ik, killer::twins::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_fingeralt_01, killer::twins::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_fingerblt_01, killer::twins::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_lt_02_ik, killer::twins::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_ringalt_01, killer::twins::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_ringblt_01, killer::twins::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_lt_02_ik, killer::twins::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_pinkyalt_01, killer::twins::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_pinkyblt_01, killer::twins::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::twins::joint_pelvis_01, killer::twins::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_hiplt_01, killer::twins::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_kneelt_01, killer::twins::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::twins::joint_necka_01, killer::twins::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_shoulderrt_01, killer::twins::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_elbowrt_01, killer::twins::joint_hand_rt_02_ik));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_rt_02_ik, killer::twins::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_thumbart_01, killer::twins::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_thumbbrt_01, killer::twins::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_rt_02_ik, killer::twins::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_indexart_01, killer::twins::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_indexbrt_01, killer::twins::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_rt_02_ik, killer::twins::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_fingerart_01, killer::twins::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_fingerbrt_01, killer::twins::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_rt_02_ik, killer::twins::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_ringart_01, killer::twins::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_ringbrt_01, killer::twins::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::twins::joint_hand_rt_02_ik, killer::twins::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_pinkyart_01, killer::twins::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_pinkybrt_01, killer::twins::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::twins::joint_pelvis_01, killer::twins::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_hiprt_01, killer::twins::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::twins::joint_kneert_01, killer::twins::joint_footrt_01));
		}
	}

	{
		// trickster bones
		auto& bone = killer_bone[19];

		bone.emplace_back(std::make_pair(killer::trickster::joint_head_01, killer::trickster::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::trickster::joint_necka_01, killer::trickster::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::trickster::joint_necka_01, killer::trickster::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_shoulderlt_01, killer::trickster::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_elbowlt_01, killer::trickster::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handlt_01, killer::trickster::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_thumbalt_01, killer::trickster::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_thumbblt_01, killer::trickster::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handlt_01, killer::trickster::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_indexalt_01, killer::trickster::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_indexblt_01, killer::trickster::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handlt_01, killer::trickster::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_fingeralt_01, killer::trickster::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_fingerblt_01, killer::trickster::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handlt_01, killer::trickster::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_ringalt_01, killer::trickster::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_ringblt_01, killer::trickster::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handlt_01, killer::trickster::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_pinkyalt_01, killer::trickster::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_pinkyblt_01, killer::trickster::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::trickster::joint_pelvis_01, killer::trickster::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_hiplt_01, killer::trickster::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_kneelt_01, killer::trickster::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::trickster::joint_necka_01, killer::trickster::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_shoulderrt_01, killer::trickster::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_elbowrt_01, killer::trickster::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handrt_01, killer::trickster::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_thumbart_01, killer::trickster::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_thumbbrt_01, killer::trickster::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handrt_01, killer::trickster::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_indexart_01, killer::trickster::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_indexbrt_01, killer::trickster::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handrt_01, killer::trickster::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_fingerart_01, killer::trickster::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_fingerbrt_01, killer::trickster::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handrt_01, killer::trickster::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_ringart_01, killer::trickster::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_ringbrt_01, killer::trickster::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::trickster::joint_handrt_01, killer::trickster::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_pinkyart_01, killer::trickster::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_pinkybrt_01, killer::trickster::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::trickster::joint_pelvis_01, killer::trickster::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_hiprt_01, killer::trickster::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::trickster::joint_kneert_01, killer::trickster::joint_footrt_01));
		}
	}

	{
		// nemesis bones
		auto& bone = killer_bone[20];

		bone.emplace_back(std::make_pair(killer::nemesis::joint_head_01, killer::nemesis::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::nemesis::joint_necka_01, killer::nemesis::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::nemesis::joint_necka_01, killer::nemesis::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_shoulderlt_01, killer::nemesis::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_elbowlt_01, killer::nemesis::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handlt_01, killer::nemesis::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_thumbalt_01, killer::nemesis::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_thumbblt_01, killer::nemesis::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handlt_01, killer::nemesis::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_indexalt_01, killer::nemesis::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_indexblt_01, killer::nemesis::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handlt_01, killer::nemesis::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_fingeralt_01, killer::nemesis::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_fingerblt_01, killer::nemesis::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handlt_01, killer::nemesis::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_ringalt_01, killer::nemesis::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_ringblt_01, killer::nemesis::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handlt_01, killer::nemesis::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_pinkyalt_01, killer::nemesis::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_pinkyblt_01, killer::nemesis::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::nemesis::joint_pelvis_01, killer::nemesis::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_hiplt_01, killer::nemesis::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_kneelt_01, killer::nemesis::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::nemesis::joint_necka_01, killer::nemesis::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_shoulderrt_01, killer::nemesis::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_elbowrt_01, killer::nemesis::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handrt_01, killer::nemesis::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_thumbart_01, killer::nemesis::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_thumbbrt_01, killer::nemesis::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handrt_01, killer::nemesis::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_indexart_01, killer::nemesis::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_indexbrt_01, killer::nemesis::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handrt_01, killer::nemesis::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_fingerart_01, killer::nemesis::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_fingerbrt_01, killer::nemesis::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handrt_01, killer::nemesis::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_ringart_01, killer::nemesis::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_ringbrt_01, killer::nemesis::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::nemesis::joint_handrt_01, killer::nemesis::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_pinkyart_01, killer::nemesis::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_pinkybrt_01, killer::nemesis::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::nemesis::joint_pelvis_01, killer::nemesis::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_hiprt_01, killer::nemesis::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::nemesis::joint_kneert_01, killer::nemesis::joint_footrt_01));
		}
	}

	{
		// pinhead bones
		auto& bone = killer_bone[21];

		bone.emplace_back(std::make_pair(killer::pinhead::joint_head_01, killer::pinhead::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::pinhead::joint_necka_01, killer::pinhead::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::pinhead::joint_necka_01, killer::pinhead::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_shoulderlt_01, killer::pinhead::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_elbowlt_01, killer::pinhead::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handlt_01, killer::pinhead::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_thumbalt_01, killer::pinhead::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_thumbblt_01, killer::pinhead::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handlt_01, killer::pinhead::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_indexalt_01, killer::pinhead::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_indexblt_01, killer::pinhead::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handlt_01, killer::pinhead::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_fingeralt_01, killer::pinhead::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_fingerblt_01, killer::pinhead::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handlt_01, killer::pinhead::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_ringalt_01, killer::pinhead::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_ringblt_01, killer::pinhead::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handlt_01, killer::pinhead::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_pinkyalt_01, killer::pinhead::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_pinkyblt_01, killer::pinhead::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::pinhead::joint_pelvis_01, killer::pinhead::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_hiplt_01, killer::pinhead::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_kneelt_01, killer::pinhead::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::pinhead::joint_necka_01, killer::pinhead::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_shoulderrt_01, killer::pinhead::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_elbowrt_01, killer::pinhead::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handrt_01, killer::pinhead::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_thumbart_01, killer::pinhead::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_thumbbrt_01, killer::pinhead::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handrt_01, killer::pinhead::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_indexart_01, killer::pinhead::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_indexbrt_01, killer::pinhead::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handrt_01, killer::pinhead::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_fingerart_01, killer::pinhead::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_fingerbrt_01, killer::pinhead::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handrt_01, killer::pinhead::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_ringart_01, killer::pinhead::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_ringbrt_01, killer::pinhead::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::pinhead::joint_handrt_01, killer::pinhead::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_pinkyart_01, killer::pinhead::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_pinkybrt_01, killer::pinhead::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::pinhead::joint_pelvis_01, killer::pinhead::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_hiprt_01, killer::pinhead::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::pinhead::joint_kneert_01, killer::pinhead::joint_footrt_01));
		}
	}

	{
		// artist bones
		auto& bone = killer_bone[22];

		bone.emplace_back(std::make_pair(killer::artist::joint_head_01, killer::artist::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::artist::joint_necka_01, killer::artist::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::artist::joint_necka_01, killer::artist::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_shoulderlt_01, killer::artist::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_elbowlt_01, killer::artist::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handlt_01, killer::artist::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_thumbalt_01, killer::artist::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_thumbblt_01, killer::artist::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handlt_01, killer::artist::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_indexalt_01, killer::artist::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_indexblt_01, killer::artist::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handlt_01, killer::artist::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_fingeralt_01, killer::artist::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_fingerblt_01, killer::artist::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handlt_01, killer::artist::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_ringalt_01, killer::artist::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_ringblt_01, killer::artist::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handlt_01, killer::artist::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_pinkyalt_01, killer::artist::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_pinkyblt_01, killer::artist::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::artist::joint_pelvis_01, killer::artist::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_hiplt_01, killer::artist::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_kneelt_01, killer::artist::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::artist::joint_necka_01, killer::artist::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_shoulderrt_01, killer::artist::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_elbowrt_01, killer::artist::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handrt_01, killer::artist::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_thumbart_01, killer::artist::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_thumbbrt_01, killer::artist::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handrt_01, killer::artist::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_indexart_01, killer::artist::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_indexbrt_01, killer::artist::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handrt_01, killer::artist::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_fingerart_01, killer::artist::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_fingerbrt_01, killer::artist::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handrt_01, killer::artist::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_ringart_01, killer::artist::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_ringbrt_01, killer::artist::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::artist::joint_handrt_01, killer::artist::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_pinkyart_01, killer::artist::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_pinkybrt_01, killer::artist::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::artist::joint_pelvis_01, killer::artist::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_hiprt_01, killer::artist::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::artist::joint_kneert_01, killer::artist::joint_footrt_01));
		}
	}

	{
		// wraith bones
		auto& bone = killer_bone[23];

		bone.emplace_back(std::make_pair(killer::wraith::joint_head_01, killer::wraith::joint_necka_01));
		bone.emplace_back(std::make_pair(killer::wraith::joint_necka_01, killer::wraith::joint_pelvis_01));

		// left
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::wraith::joint_necka_01, killer::wraith::joint_shoulderlt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_shoulderlt_01, killer::wraith::joint_elbowlt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_elbowlt_01, killer::wraith::joint_handlt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handlt_01, killer::wraith::joint_thumbalt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_thumbalt_01, killer::wraith::joint_thumbblt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_thumbblt_01, killer::wraith::joint_thumbclt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handlt_01, killer::wraith::joint_indexalt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_indexalt_01, killer::wraith::joint_indexblt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_indexblt_01, killer::wraith::joint_indexclt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handlt_01, killer::wraith::joint_fingeralt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_fingeralt_01, killer::wraith::joint_fingerblt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_fingerblt_01, killer::wraith::joint_fingerclt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handlt_01, killer::wraith::joint_ringalt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_ringalt_01, killer::wraith::joint_ringblt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_ringblt_01, killer::wraith::joint_ringclt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handlt_01, killer::wraith::joint_pinkyalt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_pinkyalt_01, killer::wraith::joint_pinkyblt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_pinkyblt_01, killer::wraith::joint_pinkyclt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::wraith::joint_pelvis_01, killer::wraith::joint_hiplt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_hiplt_01, killer::wraith::joint_kneelt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_kneelt_01, killer::wraith::joint_footlt_01));
		}

		// right
		{
			// upper body
			bone.emplace_back(std::make_pair(killer::wraith::joint_necka_01, killer::wraith::joint_shoulderrt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_shoulderrt_01, killer::wraith::joint_elbowrt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_elbowrt_01, killer::wraith::joint_handrt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handrt_01, killer::wraith::joint_thumbart_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_thumbart_01, killer::wraith::joint_thumbbrt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_thumbbrt_01, killer::wraith::joint_thumbcrt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handrt_01, killer::wraith::joint_indexart_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_indexart_01, killer::wraith::joint_indexbrt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_indexbrt_01, killer::wraith::joint_indexcrt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handrt_01, killer::wraith::joint_fingerart_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_fingerart_01, killer::wraith::joint_fingerbrt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_fingerbrt_01, killer::wraith::joint_fingercrt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handrt_01, killer::wraith::joint_ringart_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_ringart_01, killer::wraith::joint_ringbrt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_ringbrt_01, killer::wraith::joint_ringcrt_01));

			bone.emplace_back(std::make_pair(killer::wraith::joint_handrt_01, killer::wraith::joint_pinkyart_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_pinkyart_01, killer::wraith::joint_pinkybrt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_pinkybrt_01, killer::wraith::joint_pinkycrt_01));

			// lower body
			bone.emplace_back(std::make_pair(killer::wraith::joint_pelvis_01, killer::wraith::joint_hiprt_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_hiprt_01, killer::wraith::joint_kneert_01));
			bone.emplace_back(std::make_pair(killer::wraith::joint_kneert_01, killer::wraith::joint_footrt_01));
		}
	}
}

std::vector < std::pair < int, int > >& bones::killer::get_bone_array(const sdk::a_slasher_player* slasher) {
	if (slasher->is_trapper()) {
		return killer_bone[0];
	}

	if (slasher->is_hillbilly()) {
		return killer_bone[1];
	}

	if (slasher->is_huntress()) {
		return killer_bone[2];
	}

	if (slasher->is_myers()) {
		return killer_bone[3];
	}

	if (slasher->is_hag()) {
		return killer_bone[4];
	}

	if (slasher->is_doctor()) {
		return killer_bone[5];
	}

	if (slasher->is_leatherface()) {
		return killer_bone[6];
	}

	if (slasher->is_freddy()) {
		return killer_bone[7];
	}

	if (slasher->is_pig()) {
		return killer_bone[8];
	}

	if (slasher->is_clown()) {
		return killer_bone[9];
	}

	if (slasher->is_spirit()) {
		return killer_bone[10];
	}

	if (slasher->is_legion()) {
		return killer_bone[11];
	}

	if (slasher->is_plague()) {
		return killer_bone[12];
	}

	if (slasher->is_ghostface()) {
		return killer_bone[13];
	}

	if (slasher->is_oni()) {
		return killer_bone[14];
	}

	if (slasher->is_deathslinger()) {
		return killer_bone[15];
	}

	if (slasher->is_executioner()) {
		return killer_bone[16];
	}

	if (slasher->is_blight()) {
		return killer_bone[17];
	}

	if (slasher->is_twins()) {
		return killer_bone[18];
	}

	if (slasher->is_trickster()) {
		return killer_bone[19];
	}

	if (slasher->is_nemesis()) {
		return killer_bone[20];
	}

	if (slasher->is_pinhead()) {
		return killer_bone[21];
	}

	if (slasher->is_artist()) {
		return killer_bone[22];
	}

	if (slasher->is_wraith()) {
		return killer_bone[23];
	}

	// to add:
	//  - nurse
	//  - demogorgon
	//  - victor
}