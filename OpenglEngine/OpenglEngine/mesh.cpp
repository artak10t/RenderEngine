#include "mesh.h"

Mesh::Mesh(Vertex* vertices, unsigned int numVertices)
{
	m_drawCount = numVertices;
	glGenVertexArrays(1, &m_vertexArrayObject);
	glBindVertexArray(m_vertexArrayObject);

	glGenBuffers(1, &m_vertexArrayBuffer);

	glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffer);
	glBufferData(GL_ARRAY_BUFFER, numVertices * sizeof(Vertex), vertices, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glEnableVertexAttribArray(1);

	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(Vertex), 0);
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(Vertex), (void *)12);

	glBindVertexArray(0);
}

Mesh::~Mesh()
{
	glDeleteVertexArrays(1, &m_vertexArrayObject);
}

void Mesh::Draw()
{
	glBindVertexArray(m_vertexArrayObject);

	glDrawArrays(GL_TRIANGLES, 0, m_drawCount);

	glBindVertexArray(0);
}
