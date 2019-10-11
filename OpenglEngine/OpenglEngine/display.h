#pragma once
#include <SDL2/SDL.h>
#include <string>
#include <GL/glew.h>
#include <iostream>
#include "input.h"

class Display
{
public:
	Display(int width, int height, const std::string& title);
	virtual ~Display();

	bool IsClosed();
	void Clear(float r, float g, float b, float a);
	void Update();

	inline int& Width() { return m_width; }
	inline int& Height() { return m_height; }

private:
	Display(const Display& other) {}
	void operator=(const Display& other) {}

	void ProcessInput();

	SDL_Window* m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;

	int m_width;
	int m_height;
};

