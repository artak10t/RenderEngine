#pragma once
#include <SDL2/SDL.h>
#include <glm/glm.hpp>
#include <iostream>

enum KeyCode 
{ 
Q, W, E, R, T, Y, U, I, O, P, A, S, D, F, G, H, J, K, L, Z, X, C, V, B, N, M, Backspace, Delete, Tab, Return, Pause, Escape, Space,
Keypad0, Keypad1, Keypad2, Keypad3, Keypad4, Keypad5, Keypad6, Keypad7, Keypad8, Keypad9, KeypadPeriod, KeypadDivide, KeypadMultiply, KeypadMinus, KeypadPlus, KeypadEnter,
UpArrow, DownArrow, RightArrow, LeftArrow, Insert, Home, End, PageUp, PageDown, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, Alpha0, Alpha1, Alpha2, Alpha3, Alpha4, Alpha5, Alpha6, Alpha7, Alpha8, Alpha9,
Comma, Minus, Period, Slash, Semicolon, Equals, LeftBracket, Backslash, RightBracket, Quote, BackQuote, Numlock, CapsLock, ScrollLock, RightShift, LeftShift, RightControl, LeftControl, RightAlt, LeftAlt, LeftMouse, MiddleMouse, RightMouse
};

class Input
{
public:
	static void ProcessInput(SDL_Event input, const Uint8 *keys)
	{
		m_input = input;
		m_keys = keys;
	}

	static bool GetKey(KeyCode key);
	static bool GetKeyDown(KeyCode key);
	static bool GetKeyUp(KeyCode key);
	static int GetMouseScrollDelta();
	static int GetMouseAxisHorizontal();
	static int GetMouseAxisVertical();
	static int GetMousePositionX();
	static int GetMousePositionY();

	static void SetKeyDown(bool state) { m_keyDown = state; }
	static void SetKeyUp(bool state) { m_keyUp = state; }
	static void SetMouseScrollDelta(int value) { m_mouseScrollDelta = value; }
	static void SetMouseLockState(bool state);
	static void SetMouseAxisHorizontal(int value) { m_mouseAxisX = value; }
	static void SetMouseAxisVertical(int value) { m_mouseAxisY = value; }
	static void SetMousePositionX(int value) { m_mousePositionX = value; }
	static void SetMousePositionY(int value) { m_mousePositionY = value; }

private:
	static SDL_Event m_input;
	static const Uint8 *m_keys;
	static bool m_keyDown;
	static bool m_keyUp;
	static bool m_keyHold;
	static int m_mouseScrollDelta;
	static int m_mouseAxisX;
	static int m_mouseAxisY;
	static int m_mousePositionX;
	static int m_mousePositionY;
};

