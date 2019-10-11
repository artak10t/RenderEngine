#pragma once
#include <glm/glm.hpp>
#include <GL/glew.h>

struct Vertex
{
	Vertex(const glm::vec3& position, const glm::vec2& texCoord)
	{
		this->position = position;
		this->texCoord = texCoord;
	}

	glm::vec3 position;
	glm::vec2 texCoord;
};

class Mesh
{
public:
	Mesh(Vertex* vertices, unsigned int numVertices);
	virtual ~Mesh();

	void Draw();

private:
	Mesh(const Mesh& other) {}
	void operator=(const Mesh& other) {}

	GLuint m_vertexArrayObject;
	GLuint m_vertexArrayBuffer;
	unsigned int m_drawCount;
};
