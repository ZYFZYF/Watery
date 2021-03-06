//
// Created by Mike Smith on 2017/5/5.
//

#ifndef WATERY_CONFIGURE_H
#define WATERY_CONFIGURE_H

#include "../../Framework/Clock/clock.h"

namespace watery
{
	// Message time outs.
	constexpr Microsecond KEYBOARD_EVENT_DEFAULT_TIME_OUT = 50000;
	constexpr Microsecond MESSAGE_EVENT_DEFAULT_TIME_OUT = 50000;
	constexpr Microsecond COLLISION_EVENT_DEFAULT_TIME_OUT = 100000;
	constexpr Microsecond DYING_EVENT_DEFAULT_TIME_OUT = 100000;
	
	// System update intervals.
	constexpr Microsecond SYSTEM_DEFAULT_UPDATE_INTERVAL = 50000;
	constexpr Microsecond INPUT_DEFAULT_UPDATE_INTERVAL = 50000;
	constexpr Microsecond RENDER_DEFAULT_UPDATE_INTERVAL = 16000;
	constexpr Microsecond SOUND_DEFAULT_UPDATE_INTERVAL = 50000;
	constexpr Microsecond SCENE_DEFAULT_UPDATE_INTERVAL = 20000;
	
	// System timer calibration frequency.
	constexpr int SYSTEM_TIMER_CALIBRATION_FREQUENCY = 10;
}

#endif  // WATERY_CONFIGURE_H
