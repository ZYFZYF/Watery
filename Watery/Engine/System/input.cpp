//
// Created by Mike Smith on 2017/4/17.
//

#include "input.h"

namespace watery
{
	void Input::updating_tasks(void)
	{
		handle_message();
		
		if (_window.key_down(KEY_UP)) { dispatch_message(new KeyboardMessage(KEY_UP)); }
		if (_window.key_down(KEY_DOWN)) { dispatch_message(new KeyboardMessage(KEY_DOWN)); }
		if (_window.key_down(KEY_LEFT)) { dispatch_message(new KeyboardMessage(KEY_LEFT)); }
		if (_window.key_down(KEY_RIGHT)) { dispatch_message(new KeyboardMessage(KEY_RIGHT)); }
	}
}