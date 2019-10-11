#include "input.h"

const Uint8* Input::m_keys = NULL;
SDL_Event Input::m_input;
bool Input::m_keyUp = false;
bool Input::m_keyDown = false;
bool Input::m_keyHold = false;
int Input::m_mouseScrollDelta = 0;
int Input::m_mouseAxisX = 0;
int Input::m_mouseAxisY = 0;
int Input::m_mousePositionX = 0;
int Input::m_mousePositionY = 0;

bool Input::GetKey(KeyCode key)
{
	if (m_keyHold) {
		if (m_keys[SDL_SCANCODE_Q] && key == Q)
			return true;
		if (m_keys[SDL_SCANCODE_W] && key == W)
			return true;
		if (m_keys[SDL_SCANCODE_E] && key == E)
			return true;
		if (m_keys[SDL_SCANCODE_R] && key == R)
			return true;
		if (m_keys[SDL_SCANCODE_T] && key == T)
			return true;
		if (m_keys[SDL_SCANCODE_Y] && key == Y)
			return true;
		if (m_keys[SDL_SCANCODE_U] && key == U)
			return true;
		if (m_keys[SDL_SCANCODE_I] && key == I)
			return true;
		if (m_keys[SDL_SCANCODE_O] && key == O)
			return true;
		if (m_keys[SDL_SCANCODE_P] && key == P)
			return true;
		if (m_keys[SDL_SCANCODE_A] && key == A)
			return true;
		if (m_keys[SDL_SCANCODE_S] && key == S)
			return true;
		if (m_keys[SDL_SCANCODE_D] && key == D)
			return true;
		if (m_keys[SDL_SCANCODE_F] && key == F)
			return true;
		if (m_keys[SDL_SCANCODE_G] && key == G)
			return true;
		if (m_keys[SDL_SCANCODE_H] && key == H)
			return true;
		if (m_keys[SDL_SCANCODE_J] && key == J)
			return true;
		if (m_keys[SDL_SCANCODE_K] && key == K)
			return true;
		if (m_keys[SDL_SCANCODE_L] && key == L)
			return true;
		if (m_keys[SDL_SCANCODE_Z] && key == Z)
			return true;
		if (m_keys[SDL_SCANCODE_X] && key == X)
			return true;
		if (m_keys[SDL_SCANCODE_C] && key == C)
			return true;
		if (m_keys[SDL_SCANCODE_V] && key == V)
			return true;
		if (m_keys[SDL_SCANCODE_B] && key == B)
			return true;
		if (m_keys[SDL_SCANCODE_N] && key == N)
			return true;
		if (m_keys[SDL_SCANCODE_M] && key == M)
			return true;
		if (m_keys[SDL_SCANCODE_BACKSPACE] && key == Backspace)
			return true;
		if (m_keys[SDL_SCANCODE_DELETE] && key == Delete)
			return true;
		if (m_keys[SDL_SCANCODE_TAB] && key == Tab)
			return true;
		if (m_keys[SDL_SCANCODE_RETURN] && key == Return)
			return true;
		if (m_keys[SDL_SCANCODE_PAUSE] && key == Pause)
			return true;
		if (m_keys[SDL_SCANCODE_ESCAPE] && key == Escape)
			return true;
		if (m_keys[SDL_SCANCODE_SPACE] && key == Space)
			return true;
		if (m_keys[SDL_SCANCODE_KP_0] && key == Keypad0)
			return true;
		if (m_keys[SDL_SCANCODE_KP_1] && key == Keypad1)
			return true;
		if (m_keys[SDL_SCANCODE_KP_2] && key == Keypad2)
			return true;
		if (m_keys[SDL_SCANCODE_KP_3] && key == Keypad3)
			return true;
		if (m_keys[SDL_SCANCODE_KP_4] && key == Keypad4)
			return true;
		if (m_keys[SDL_SCANCODE_KP_5] && key == Keypad5)
			return true;
		if (m_keys[SDL_SCANCODE_KP_6] && key == Keypad6)
			return true;
		if (m_keys[SDL_SCANCODE_KP_7] && key == Keypad7)
			return true;
		if (m_keys[SDL_SCANCODE_KP_8] && key == Keypad8)
			return true;
		if (m_keys[SDL_SCANCODE_KP_9] && key == Keypad9)
			return true;
		if (m_keys[SDL_SCANCODE_KP_PERIOD] && key == KeypadPeriod)
			return true;
		if (m_keys[SDL_SCANCODE_KP_DIVIDE] && key == KeypadDivide)
			return true;
		if (m_keys[SDL_SCANCODE_KP_MULTIPLY] && key == KeypadMultiply)
			return true;
		if (m_keys[SDL_SCANCODE_KP_MINUS] && key == KeypadMinus)
			return true;
		if (m_keys[SDL_SCANCODE_KP_PLUS] && key == KeypadPlus)
			return true;
		if (m_keys[SDL_SCANCODE_KP_ENTER] && key == KeypadEnter)
			return true;
		if (m_keys[SDL_SCANCODE_UP] && key == UpArrow)
			return true;
		if (m_keys[SDL_SCANCODE_DOWN] && key == DownArrow)
			return true;
		if (m_keys[SDL_SCANCODE_RIGHT] && key == RightArrow)
			return true;
		if (m_keys[SDL_SCANCODE_LEFT] && key == LeftArrow)
			return true;
		if (m_keys[SDL_SCANCODE_INSERT] && key == Insert)
			return true;
		if (m_keys[SDL_SCANCODE_HOME] && key == Home)
			return true;
		if (m_keys[SDL_SCANCODE_END] && key == End)
			return true;
		if (m_keys[SDL_SCANCODE_PAGEUP] && key == PageUp)
			return true;
		if (m_keys[SDL_SCANCODE_PAGEDOWN] && key == PageDown)
			return true;
		if (m_keys[SDL_SCANCODE_F1] && key == F1)
			return true;
		if (m_keys[SDL_SCANCODE_F2] && key == F2)
			return true;
		if (m_keys[SDL_SCANCODE_F3] && key == F3)
			return true;
		if (m_keys[SDL_SCANCODE_F4] && key == F4)
			return true;
		if (m_keys[SDL_SCANCODE_F5] && key == F5)
			return true;
		if (m_keys[SDL_SCANCODE_F6] && key == F6)
			return true;
		if (m_keys[SDL_SCANCODE_F7] && key == F7)
			return true;
		if (m_keys[SDL_SCANCODE_F8] && key == F8)
			return true;
		if (m_keys[SDL_SCANCODE_F9] && key == F9)
			return true;
		if (m_keys[SDL_SCANCODE_F10] && key == F10)
			return true;
		if (m_keys[SDL_SCANCODE_F11] && key == F11)
			return true;
		if (m_keys[SDL_SCANCODE_F12] && key == F12)
			return true;
		if (m_keys[SDL_SCANCODE_0] && key == Alpha0)
			return true;
		if (m_keys[SDL_SCANCODE_1] && key == Alpha1)
			return true;
		if (m_keys[SDL_SCANCODE_2] && key == Alpha2)
			return true;
		if (m_keys[SDL_SCANCODE_3] && key == Alpha3)
			return true;
		if (m_keys[SDL_SCANCODE_4] && key == Alpha4)
			return true;
		if (m_keys[SDL_SCANCODE_5] && key == Alpha5)
			return true;
		if (m_keys[SDL_SCANCODE_6] && key == Alpha6)
			return true;
		if (m_keys[SDL_SCANCODE_7] && key == Alpha7)
			return true;
		if (m_keys[SDL_SCANCODE_8] && key == Alpha8)
			return true;
		if (m_keys[SDL_SCANCODE_9] && key == Alpha9)
			return true;
		if (m_keys[SDL_SCANCODE_COMMA] && key == Comma)
			return true;
		if (m_keys[SDL_SCANCODE_MINUS] && key == Minus)
			return true;
		if (m_keys[SDL_SCANCODE_PERIOD] && key == Period)
			return true;
		if (m_keys[SDL_SCANCODE_SLASH] && key == Slash)
			return true;
		if (m_keys[SDL_SCANCODE_SEMICOLON] && key == Semicolon)
			return true;
		if (m_keys[SDL_SCANCODE_EQUALS] && key == Equals)
			return true;
		if (m_keys[SDL_SCANCODE_LEFTBRACKET] && key == LeftBracket)
			return true;
		if (m_keys[SDL_SCANCODE_BACKSLASH] && key == Backslash)
			return true;
		if (m_keys[SDL_SCANCODE_RIGHTBRACKET] && key == RightBracket)
			return true;
		if (m_keys[SDL_SCANCODE_APOSTROPHE] && key == Quote)
			return true;
		if (m_keys[SDL_SCANCODE_GRAVE] && key == BackQuote)
			return true;
		if (m_keys[SDL_SCANCODE_NUMLOCKCLEAR] && key == Numlock)
			return true;
		if (m_keys[SDL_SCANCODE_CAPSLOCK] && key == CapsLock)
			return true;
		if (m_keys[SDL_SCANCODE_SCROLLLOCK] && key == ScrollLock)
			return true;
		if (m_keys[SDL_SCANCODE_RSHIFT] && key == RightShift)
			return true;
		if (m_keys[SDL_SCANCODE_LSHIFT] && key == LeftShift)
			return true;
		if (m_keys[SDL_SCANCODE_RCTRL] && key == RightControl)
			return true;
		if (m_keys[SDL_SCANCODE_LCTRL] && key == LeftControl)
			return true;
		if (m_keys[SDL_SCANCODE_RALT] && key == RightAlt)
			return true;
		if (m_keys[SDL_SCANCODE_LALT] && key == LeftAlt)
			return true;
		if (m_input.button.button == SDL_BUTTON_LEFT && key == LeftMouse)
			return true;
		if (m_input.button.button == SDL_BUTTON_MIDDLE && key == MiddleMouse)
			return true;
		if (m_input.button.button == SDL_BUTTON_RIGHT && key == RightMouse)
			return true;
	}

	return false;
}

bool Input::GetKeyDown(KeyCode key)
{
	if (m_keyDown)
	{
		m_keyDown = false;
		m_keyHold = true;

		if (m_keys[SDL_SCANCODE_Q] && key == Q)
			return true;
		if (m_keys[SDL_SCANCODE_W] && key == W)
			return true;
		if (m_keys[SDL_SCANCODE_E] && key == E)
			return true;
		if (m_keys[SDL_SCANCODE_R] && key == R)
			return true;
		if (m_keys[SDL_SCANCODE_T] && key == T)
			return true;
		if (m_keys[SDL_SCANCODE_Y] && key == Y)
			return true;
		if (m_keys[SDL_SCANCODE_U] && key == U)
			return true;
		if (m_keys[SDL_SCANCODE_I] && key == I)
			return true;
		if (m_keys[SDL_SCANCODE_O] && key == O)
			return true;
		if (m_keys[SDL_SCANCODE_P] && key == P)
			return true;
		if (m_keys[SDL_SCANCODE_A] && key == A)
			return true;
		if (m_keys[SDL_SCANCODE_S] && key == S)
			return true;
		if (m_keys[SDL_SCANCODE_D] && key == D)
			return true;
		if (m_keys[SDL_SCANCODE_F] && key == F)
			return true;
		if (m_keys[SDL_SCANCODE_G] && key == G)
			return true;
		if (m_keys[SDL_SCANCODE_H] && key == H)
			return true;
		if (m_keys[SDL_SCANCODE_J] && key == J)
			return true;
		if (m_keys[SDL_SCANCODE_K] && key == K)
			return true;
		if (m_keys[SDL_SCANCODE_L] && key == L)
			return true;
		if (m_keys[SDL_SCANCODE_Z] && key == Z)
			return true;
		if (m_keys[SDL_SCANCODE_X] && key == X)
			return true;
		if (m_keys[SDL_SCANCODE_C] && key == C)
			return true;
		if (m_keys[SDL_SCANCODE_V] && key == V)
			return true;
		if (m_keys[SDL_SCANCODE_B] && key == B)
			return true;
		if (m_keys[SDL_SCANCODE_N] && key == N)
			return true;
		if (m_keys[SDL_SCANCODE_M] && key == M)
			return true;
		if (m_keys[SDL_SCANCODE_BACKSPACE] && key == Backspace)
			return true;
		if (m_keys[SDL_SCANCODE_DELETE] && key == Delete)
			return true;
		if (m_keys[SDL_SCANCODE_TAB] && key == Tab)
			return true;
		if (m_keys[SDL_SCANCODE_RETURN] && key == Return)
			return true;
		if (m_keys[SDL_SCANCODE_PAUSE] && key == Pause)
			return true;
		if (m_keys[SDL_SCANCODE_ESCAPE] && key == Escape)
			return true;
		if (m_keys[SDL_SCANCODE_SPACE] && key == Space)
			return true;
		if (m_keys[SDL_SCANCODE_KP_0] && key == Keypad0)
			return true;
		if (m_keys[SDL_SCANCODE_KP_1] && key == Keypad1)
			return true;
		if (m_keys[SDL_SCANCODE_KP_2] && key == Keypad2)
			return true;
		if (m_keys[SDL_SCANCODE_KP_3] && key == Keypad3)
			return true;
		if (m_keys[SDL_SCANCODE_KP_4] && key == Keypad4)
			return true;
		if (m_keys[SDL_SCANCODE_KP_5] && key == Keypad5)
			return true;
		if (m_keys[SDL_SCANCODE_KP_6] && key == Keypad6)
			return true;
		if (m_keys[SDL_SCANCODE_KP_7] && key == Keypad7)
			return true;
		if (m_keys[SDL_SCANCODE_KP_8] && key == Keypad8)
			return true;
		if (m_keys[SDL_SCANCODE_KP_9] && key == Keypad9)
			return true;
		if (m_keys[SDL_SCANCODE_KP_PERIOD] && key == KeypadPeriod)
			return true;
		if (m_keys[SDL_SCANCODE_KP_DIVIDE] && key == KeypadDivide)
			return true;
		if (m_keys[SDL_SCANCODE_KP_MULTIPLY] && key == KeypadMultiply)
			return true;
		if (m_keys[SDL_SCANCODE_KP_MINUS] && key == KeypadMinus)
			return true;
		if (m_keys[SDL_SCANCODE_KP_PLUS] && key == KeypadPlus)
			return true;
		if (m_keys[SDL_SCANCODE_KP_ENTER] && key == KeypadEnter)
			return true;
		if (m_keys[SDL_SCANCODE_UP] && key == UpArrow)
			return true;
		if (m_keys[SDL_SCANCODE_DOWN] && key == DownArrow)
			return true;
		if (m_keys[SDL_SCANCODE_RIGHT] && key == RightArrow)
			return true;
		if (m_keys[SDL_SCANCODE_LEFT] && key == LeftArrow)
			return true;
		if (m_keys[SDL_SCANCODE_INSERT] && key == Insert)
			return true;
		if (m_keys[SDL_SCANCODE_HOME] && key == Home)
			return true;
		if (m_keys[SDL_SCANCODE_END] && key == End)
			return true;
		if (m_keys[SDL_SCANCODE_PAGEUP] && key == PageUp)
			return true;
		if (m_keys[SDL_SCANCODE_PAGEDOWN] && key == PageDown)
			return true;
		if (m_keys[SDL_SCANCODE_F1] && key == F1)
			return true;
		if (m_keys[SDL_SCANCODE_F2] && key == F2)
			return true;
		if (m_keys[SDL_SCANCODE_F3] && key == F3)
			return true;
		if (m_keys[SDL_SCANCODE_F4] && key == F4)
			return true;
		if (m_keys[SDL_SCANCODE_F5] && key == F5)
			return true;
		if (m_keys[SDL_SCANCODE_F6] && key == F6)
			return true;
		if (m_keys[SDL_SCANCODE_F7] && key == F7)
			return true;
		if (m_keys[SDL_SCANCODE_F8] && key == F8)
			return true;
		if (m_keys[SDL_SCANCODE_F9] && key == F9)
			return true;
		if (m_keys[SDL_SCANCODE_F10] && key == F10)
			return true;
		if (m_keys[SDL_SCANCODE_F11] && key == F11)
			return true;
		if (m_keys[SDL_SCANCODE_F12] && key == F12)
			return true;
		if (m_keys[SDL_SCANCODE_0] && key == Alpha0)
			return true;
		if (m_keys[SDL_SCANCODE_1] && key == Alpha1)
			return true;
		if (m_keys[SDL_SCANCODE_2] && key == Alpha2)
			return true;
		if (m_keys[SDL_SCANCODE_3] && key == Alpha3)
			return true;
		if (m_keys[SDL_SCANCODE_4] && key == Alpha4)
			return true;
		if (m_keys[SDL_SCANCODE_5] && key == Alpha5)
			return true;
		if (m_keys[SDL_SCANCODE_6] && key == Alpha6)
			return true;
		if (m_keys[SDL_SCANCODE_7] && key == Alpha7)
			return true;
		if (m_keys[SDL_SCANCODE_8] && key == Alpha8)
			return true;
		if (m_keys[SDL_SCANCODE_9] && key == Alpha9)
			return true;
		if (m_keys[SDL_SCANCODE_COMMA] && key == Comma)
			return true;
		if (m_keys[SDL_SCANCODE_MINUS] && key == Minus)
			return true;
		if (m_keys[SDL_SCANCODE_PERIOD] && key == Period)
			return true;
		if (m_keys[SDL_SCANCODE_SLASH] && key == Slash)
			return true;
		if (m_keys[SDL_SCANCODE_SEMICOLON] && key == Semicolon)
			return true;
		if (m_keys[SDL_SCANCODE_EQUALS] && key == Equals)
			return true;
		if (m_keys[SDL_SCANCODE_LEFTBRACKET] && key == LeftBracket)
			return true;
		if (m_keys[SDL_SCANCODE_BACKSLASH] && key == Backslash)
			return true;
		if (m_keys[SDL_SCANCODE_RIGHTBRACKET] && key == RightBracket)
			return true;
		if (m_keys[SDL_SCANCODE_APOSTROPHE] && key == Quote)
			return true;
		if (m_keys[SDL_SCANCODE_GRAVE] && key == BackQuote)
			return true;
		if (m_keys[SDL_SCANCODE_NUMLOCKCLEAR] && key == Numlock)
			return true;
		if (m_keys[SDL_SCANCODE_CAPSLOCK] && key == CapsLock)
			return true;
		if (m_keys[SDL_SCANCODE_SCROLLLOCK] && key == ScrollLock)
			return true;
		if (m_keys[SDL_SCANCODE_RSHIFT] && key == RightShift)
			return true;
		if (m_keys[SDL_SCANCODE_LSHIFT] && key == LeftShift)
			return true;
		if (m_keys[SDL_SCANCODE_RCTRL] && key == RightControl)
			return true;
		if (m_keys[SDL_SCANCODE_LCTRL] && key == LeftControl)
			return true;
		if (m_keys[SDL_SCANCODE_RALT] && key == RightAlt)
			return true;
		if (m_keys[SDL_SCANCODE_LALT] && key == LeftAlt)
			return true;
		if (m_input.button.button == SDL_BUTTON_LEFT && key == LeftMouse)
			return true;
		if (m_input.button.button == SDL_BUTTON_MIDDLE && key == MiddleMouse)
			return true;
		if (m_input.button.button == SDL_BUTTON_RIGHT && key == RightMouse)
			return true;
	}

	return false;
}

bool Input::GetKeyUp(KeyCode key)
{
	if (m_keyUp)
	{
		m_keyUp = false;
		m_keyHold = false;

		if (m_input.key.keysym.sym == SDLK_q && key == Q)
			return true;
		if (m_input.key.keysym.sym == SDLK_w && key == W)
			return true;
		if (m_input.key.keysym.sym == SDLK_e && key == E)
			return true;
		if (m_input.key.keysym.sym == SDLK_r && key == R)
			return true;
		if (m_input.key.keysym.sym == SDLK_t && key == T)
			return true;
		if (m_input.key.keysym.sym == SDLK_y && key == Y)
			return true;
		if (m_input.key.keysym.sym == SDLK_u && key == U)
			return true;
		if (m_input.key.keysym.sym == SDLK_i && key == I)
			return true;
		if (m_input.key.keysym.sym == SDLK_o && key == O)
			return true;
		if (m_input.key.keysym.sym == SDLK_p && key == P)
			return true;
		if (m_input.key.keysym.sym == SDLK_a && key == A)
			return true;
		if (m_input.key.keysym.sym == SDLK_s && key == S)
			return true;
		if (m_input.key.keysym.sym == SDLK_d && key == D)
			return true;
		if (m_input.key.keysym.sym == SDLK_f && key == F)
			return true;
		if (m_input.key.keysym.sym == SDLK_g && key == G)
			return true;
		if (m_input.key.keysym.sym == SDLK_h && key == H)
			return true;
		if (m_input.key.keysym.sym == SDLK_j && key == J)
			return true;
		if (m_input.key.keysym.sym == SDLK_k && key == K)
			return true;
		if (m_input.key.keysym.sym == SDLK_l && key == L)
			return true;
		if (m_input.key.keysym.sym == SDLK_z && key == Z)
			return true;
		if (m_input.key.keysym.sym == SDLK_x && key == X)
			return true;
		if (m_input.key.keysym.sym == SDLK_c && key == C)
			return true;
		if (m_input.key.keysym.sym == SDLK_v && key == V)
			return true;
		if (m_input.key.keysym.sym == SDLK_b && key == B)
			return true;
		if (m_input.key.keysym.sym == SDLK_n && key == N)
			return true;
		if (m_input.key.keysym.sym == SDLK_m && key == M)
			return true;
		if (m_input.key.keysym.sym == SDLK_SPACE && key == Backspace)
			return true;
		if (m_input.key.keysym.sym == SDLK_DELETE && key == Delete)
			return true;
		if (m_input.key.keysym.sym == SDLK_TAB && key == Tab)
			return true;
		if (m_input.key.keysym.sym == SDLK_RETURN && key == Return)
			return true;
		if (m_input.key.keysym.sym == SDLK_PAUSE && key == Pause)
			return true;
		if (m_input.key.keysym.sym == SDLK_ESCAPE && key == Escape)
			return true;
		if (m_input.key.keysym.sym == SDLK_SPACE && key == Space)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_0 && key == Keypad0)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_1 && key == Keypad1)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_2 && key == Keypad2)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_3 && key == Keypad3)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_4 && key == Keypad4)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_5 && key == Keypad5)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_6 && key == Keypad6)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_7 && key == Keypad7)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_8 && key == Keypad8)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_9 && key == Keypad9)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_PERIOD && key == KeypadPeriod)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_DIVIDE && key == KeypadDivide)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_MULTIPLY && key == KeypadMultiply)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_MINUS && key == KeypadMinus)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_PLUS && key == KeypadPlus)
			return true;
		if (m_input.key.keysym.sym == SDLK_KP_ENTER && key == KeypadEnter)
			return true;
		if (m_input.key.keysym.sym == SDLK_UP && key == UpArrow)
			return true;
		if (m_input.key.keysym.sym == SDLK_DOWN && key == DownArrow)
			return true;
		if (m_input.key.keysym.sym == SDLK_RIGHT && key == RightArrow)
			return true;
		if (m_input.key.keysym.sym == SDLK_LEFT && key == LeftArrow)
			return true;
		if (m_input.key.keysym.sym == SDLK_INSERT && key == Insert)
			return true;
		if (m_input.key.keysym.sym == SDLK_HOME && key == Home)
			return true;
		if (m_input.key.keysym.sym == SDLK_END && key == End)
			return true;
		if (m_input.key.keysym.sym == SDLK_PAGEUP && key == PageUp)
			return true;
		if (m_input.key.keysym.sym == SDLK_PAGEDOWN && key == PageDown)
			return true;
		if (m_input.key.keysym.sym == SDLK_F1 && key == F1)
			return true;
		if (m_input.key.keysym.sym == SDLK_F2 && key == F2)
			return true;
		if (m_input.key.keysym.sym == SDLK_F3 && key == F3)
			return true;
		if (m_input.key.keysym.sym == SDLK_F4 && key == F4)
			return true;
		if (m_input.key.keysym.sym == SDLK_F5 && key == F5)
			return true;
		if (m_input.key.keysym.sym == SDLK_F6 && key == F6)
			return true;
		if (m_input.key.keysym.sym == SDLK_F7 && key == F7)
			return true;
		if (m_input.key.keysym.sym == SDLK_F8 && key == F8)
			return true;
		if (m_input.key.keysym.sym == SDLK_F9 && key == F9)
			return true;
		if (m_input.key.keysym.sym == SDLK_F10 && key == F10)
			return true;
		if (m_input.key.keysym.sym == SDLK_F11 && key == F11)
			return true;
		if (m_input.key.keysym.sym == SDLK_F12 && key == F12)
			return true;
		if (m_input.key.keysym.sym == SDLK_0 && key == Alpha0)
			return true;
		if (m_input.key.keysym.sym == SDLK_1 && key == Alpha1)
			return true;
		if (m_input.key.keysym.sym == SDLK_2 && key == Alpha2)
			return true;
		if (m_input.key.keysym.sym == SDLK_3 && key == Alpha3)
			return true;
		if (m_input.key.keysym.sym == SDLK_4 && key == Alpha4)
			return true;
		if (m_input.key.keysym.sym == SDLK_5 && key == Alpha5)
			return true;
		if (m_input.key.keysym.sym == SDLK_6 && key == Alpha6)
			return true;
		if (m_input.key.keysym.sym == SDLK_7 && key == Alpha7)
			return true;
		if (m_input.key.keysym.sym == SDLK_8 && key == Alpha8)
			return true;
		if (m_input.key.keysym.sym == SDLK_9 && key == Alpha9)
			return true;
		if (m_input.key.keysym.sym == SDLK_COMMA && key == Comma)
			return true;
		if (m_input.key.keysym.sym == SDLK_MINUS && key == Minus)
			return true;
		if (m_input.key.keysym.sym == SDLK_PERIOD && key == Period)
			return true;
		if (m_input.key.keysym.sym == SDLK_SLASH && key == Slash)
			return true;
		if (m_input.key.keysym.sym == SDLK_SEMICOLON && key == Semicolon)
			return true;
		if (m_input.key.keysym.sym == SDLK_EQUALS && key == Equals)
			return true;
		if (m_input.key.keysym.sym == SDLK_LEFTBRACKET && key == LeftBracket)
			return true;
		if (m_input.key.keysym.sym == SDLK_BACKSLASH && key == Backslash)
			return true;
		if (m_input.key.keysym.sym == SDLK_RIGHTBRACKET && key == RightBracket)
			return true;
		if (m_input.key.keysym.sym == SDLK_QUOTE && key == Quote)
			return true;
		if (m_input.key.keysym.sym == SDLK_BACKQUOTE && key == BackQuote)
			return true;
		if (m_input.key.keysym.sym == SDLK_NUMLOCKCLEAR && key == Numlock)
			return true;
		if (m_input.key.keysym.sym == SDLK_CAPSLOCK && key == CapsLock)
			return true;
		if (m_input.key.keysym.sym == SDLK_SCROLLLOCK && key == ScrollLock)
			return true;
		if (m_input.key.keysym.sym == SDLK_RSHIFT && key == RightShift)
			return true;
		if (m_input.key.keysym.sym == SDLK_LSHIFT && key == LeftShift)
			return true;
		if (m_input.key.keysym.sym == SDLK_RCTRL && key == RightControl)
			return true;
		if (m_input.key.keysym.sym == SDLK_LCTRL && key == LeftControl)
			return true;
		if (m_input.key.keysym.sym == SDLK_RALT && key == RightAlt)
			return true;
		if (m_input.key.keysym.sym == SDLK_LALT && key == LeftAlt)
			return true;
		if (m_input.button.button == SDL_BUTTON_LEFT && key == LeftMouse)
			return true;
		if (m_input.button.button == SDL_BUTTON_MIDDLE && key == MiddleMouse)
			return true;
		if (m_input.button.button == SDL_BUTTON_RIGHT && key == RightMouse)
			return true;
	}

	return false;
}

int Input::GetMouseScrollDelta() 
{
	int delta = m_mouseScrollDelta;
	m_mouseScrollDelta = 0;

	return delta;
}

void Input::SetMouseLockState(bool state) 
{
	if (state) 
	{
		SDL_SetRelativeMouseMode(SDL_TRUE);
	}
	else 
	{
		SDL_SetRelativeMouseMode(SDL_FALSE);
	}
}

int Input::GetMouseAxisHorizontal() 
{
	int axis = m_mouseAxisX;
	m_mouseAxisX = 0;

	return axis;
}

int Input::GetMouseAxisVertical()
{
	int axis = -m_mouseAxisY;
	m_mouseAxisY = 0;

	return axis;
}

int Input::GetMousePositionX() 
{
	return m_mousePositionX;
}

int Input::GetMousePositionY() 
{
	return m_mousePositionY;
}