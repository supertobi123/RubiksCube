#pragma once
class GameInterface
{
public:
	virtual void Initialize() {};

	virtual void Update(float deltaTime) {};
	virtual void Render(float aspectRatio) {};

	virtual void ClearResources() {};
};

