#include <iostream>
#include "display.h"
#include "mesh.h"
#include "shader.h"
#include "transform.h"
#include "texture.h"
#include "camera.h"

#define WIDTH 1280
#define HEIGHT 960
#define ZNEAR 0.01
#define ZFAR 1000

int main(int argc, char** argv)
{
	Display display(WIDTH, HEIGHT, "OpenglEngine");

	Camera MainCamera(glm::vec3(0, 0, -5), 70, (float)display.Width() / display.Height(), (float)ZNEAR, (float)ZFAR);

	Vertex vertices[] = { Vertex(glm::vec3(1, 1, -1), glm::vec2(1, 1)), //Back
						  Vertex(glm::vec3(-1, 1, -1), glm::vec2(0, 1)), 
						  Vertex(glm::vec3(-1, -1, -1), glm::vec2(0, 0)),
						  Vertex(glm::vec3(1, 1, -1), glm::vec2(1, 1)),
						  Vertex(glm::vec3(1, -1, -1), glm::vec2(1, 0)),
						  Vertex(glm::vec3(-1, -1, -1), glm::vec2(0, 0)),

						  Vertex(glm::vec3(1, 1, 1), glm::vec2(1, 1)), //Front
						  Vertex(glm::vec3(-1, 1, 1), glm::vec2(0, 1)),
						  Vertex(glm::vec3(-1, -1, 1), glm::vec2(0, 0)),
						  Vertex(glm::vec3(1, 1, 1), glm::vec2(1, 1)),
						  Vertex(glm::vec3(1, -1, 1), glm::vec2(1, 0)),
						  Vertex(glm::vec3(-1, -1, 1), glm::vec2(0, 0)),

						  Vertex(glm::vec3(-1, 1, 1), glm::vec2(1, 1)), //Left
						  Vertex(glm::vec3(-1, 1, -1), glm::vec2(0, 1)),
						  Vertex(glm::vec3(-1, -1, -1), glm::vec2(0, 0)), 
						  Vertex(glm::vec3(-1, 1, 1), glm::vec2(1, 1)),
						  Vertex(glm::vec3(-1, -1, 1), glm::vec2(1, 0)),
						  Vertex(glm::vec3(-1, -1, -1), glm::vec2(0, 0)),
	
						  Vertex(glm::vec3(1, 1, 1), glm::vec2(1, 1)), //Right
						  Vertex(glm::vec3(1, 1, -1), glm::vec2(0, 1)),
						  Vertex(glm::vec3(1, -1, -1), glm::vec2(0, 0)), 						  
						  Vertex(glm::vec3(1, 1, 1), glm::vec2(1, 1)),
						  Vertex(glm::vec3(1, -1, 1), glm::vec2(1, 0)),
						  Vertex(glm::vec3(1, -1, -1), glm::vec2(0, 0)),
	
						  Vertex(glm::vec3(1, 1, 1), glm::vec2(1, 1)), //Top
						  Vertex(glm::vec3(1, 1, -1), glm::vec2(0, 1)),
						  Vertex(glm::vec3(-1, 1, -1), glm::vec2(0, 0)),
						  Vertex(glm::vec3(1, 1, 1), glm::vec2(1, 1)),
						  Vertex(glm::vec3(-1, 1, 1), glm::vec2(1, 0)),
						  Vertex(glm::vec3(-1, 1, -1), glm::vec2(0, 0)),
	
						  Vertex(glm::vec3(1, -1, 1), glm::vec2(1, 1)), //Bottom
						  Vertex(glm::vec3(1, -1, -1), glm::vec2(0, 1)),
						  Vertex(glm::vec3(-1, -1, -1), glm::vec2(0, 0)),
						  Vertex(glm::vec3(1, -1, 1), glm::vec2(1, 1)),
						  Vertex(glm::vec3(-1, -1, 1), glm::vec2(1, 0)),
						  Vertex(glm::vec3(-1, -1, -1), glm::vec2(0, 0)) };

	Mesh mesh(vertices, sizeof(vertices) / sizeof(vertices[0]));
	Transform transform;
	Shader shader("./shaders/StandardShader");
	Texture texture("./textures/box.png");

	float y = 0;
	float x = 0;

	float cameraSpeed = 0.1f;

	while (!display.IsClosed())
	{
		display.Clear(0.15f, 0.15f, 0.15f, 1.0f);

		shader.Bind();
		shader.Update(transform, MainCamera);
		texture.Bind(0);
		mesh.Draw();

		display.Update();

		y += 0.01f;
		x += 0.01f;
		transform.Rotation().y = y;
		transform.Rotation().x = x;

		std::cout << Input::GetMousePositionY () << std::endl;

		if (Input::GetKeyDown(LeftShift)) 
			cameraSpeed = 0.5f;
		if (Input::GetKeyUp(LeftShift))
			cameraSpeed = 0.1f;

		if (Input::GetKey(W)) 
			MainCamera.Position() += cameraSpeed * glm::vec3(0, 0, -1);
		if (Input::GetKey(S))
			MainCamera.Position() -= cameraSpeed * glm::vec3(0, 0, -1);
		if (Input::GetKey(A))
			MainCamera.Position() += cameraSpeed * glm::vec3(-1, 0, 0);
		if (Input::GetKey(D))
			MainCamera.Position() -= cameraSpeed * glm::vec3(-1, 0, 0);
		if (Input::GetKey(Q))
			MainCamera.Position() += cameraSpeed * glm::vec3(0, -1, 0);
		if (Input::GetKey(E))
			MainCamera.Position() -= cameraSpeed * glm::vec3(0, -1, 0);
	}

	return 0;
}