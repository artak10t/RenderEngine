#pragma once
#include <string>
#include <GL/glew.h>
#include <fstream>
#include <iostream>
#include "transform.h"
#include "camera.h"

class Shader
{
public:
	Shader(const std::string& fileName);
	virtual ~Shader();

	void Bind();
	void Update(const Transform& transform, const Camera& camera);

private:
	Shader(const Shader& other) {}
	void operator=(const Shader& other) {}

	enum
	{
		TRANSFORM_U,

		NUM_UNIFORMS
	};

	static const unsigned int NUM_SHADERS = 2;
	GLuint m_program;
	GLuint m_shaders[NUM_SHADERS];
	GLuint m_uniforms[NUM_UNIFORMS];
};