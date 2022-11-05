#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, texture, VBO2, VAO2, EBO2, texture2;
	float angle = 0;
	float scale = 0;
	float pos = 0;
	float pos1 = 0;
	float left, right;
	double seconds = 0.0;
	float posCamX, posCamY, posCamZ, viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow* window);

	void InitCamera();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void BuildColored();
	void BuildColoredCube();

	void DrawColoredCube();
	void DrawColoredCubeBack();
	void DrawColoredCubeHead();
	void DrawColoredCubeWing1();
	void DrawColoredCubeWing2();
	void DrawColoredCubeBackWing();
	void DrawColoredCubeBuilding();
	void BuildColoredPlane();
	void DrawColoredPlane();
};
