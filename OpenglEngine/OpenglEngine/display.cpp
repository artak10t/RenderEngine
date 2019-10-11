#include "display.h"

Display::Display(int width, int height, const std::string& title)
{
	m_width = width;
	m_height = height;

	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
	SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

	m_window = SDL_CreateWindow(title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_OPENGL);
	m_glContext = SDL_GL_CreateContext(m_window);

	GLenum status = glewInit();
	if (status != GLEW_OK) 
	{
		std::cerr << "Glew failed to initialize!" << std::endl;
	}

	glEnable(GL_DEPTH_TEST);
	m_isClosed = false;
}

Display::~Display()
{
	SDL_GL_DeleteContext(m_glContext);
	SDL_DestroyWindow(m_window);
	SDL_Quit();
}

bool Display::IsClosed() 
{
	return m_isClosed;
}

void Display::Clear(float r, float g, float b, float a) 
{
	glClearColor(r, g, b, a);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}

void Display::Update() 
{
	SDL_GL_SwapWindow(m_window);

	ProcessInput();
}

void Display::ProcessInput() 
{
	SDL_Event input;
	const Uint8 *keys = SDL_GetKeyboardState(NULL);

	while (SDL_PollEvent(&input))
	{
		Input::ProcessInput(input, keys);

		switch (input.type)
		{
		case SDL_QUIT:
			m_isClosed = true;
			break;

		case SDL_KEYDOWN:
			if (input.key.repeat == 0)
				Input::SetKeyDown(true);
			break;

		case SDL_KEYUP:
				Input::SetKeyUp(true);
			break;

		case SDL_MOUSEBUTTONDOWN:
			if (input.key.repeat == 0)
				Input::SetKeyDown(true);
			break;

		case SDL_MOUSEBUTTONUP:
				Input::SetKeyUp(true);
			break;

		case SDL_MOUSEWHEEL:
				Input::SetMouseScrollDelta(input.wheel.y);
			break;

		case SDL_MOUSEMOTION:
				Input::SetMouseAxisHorizontal(input.motion.xrel);
				Input::SetMouseAxisVertical(input.motion.yrel);
				Input::SetMousePositionX(input.motion.x);
				Input::SetMousePositionY(input.motion.y);
			break;
		}
	}
}
