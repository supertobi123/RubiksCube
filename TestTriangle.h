#pragma once
#include "GameInterface.h"
#include <GL/glew.h>

class TestTriangle : public GameInterface
{
public:
	virtual void Initialize();
	virtual void Render(float aspectRatio);
	virtual void ClearResources();
	virtual void Update(double deltaTime);

private:
	GLuint m_shaderProgram;
	GLuint m_vertexBufferObject; // daten über verticies
	GLuint m_arrayBufferObject; // beinhalten VBO und wie dieses zu interpretieren ist 
	GLint m_transformLocation; 

	float m_turningAngle;

};
