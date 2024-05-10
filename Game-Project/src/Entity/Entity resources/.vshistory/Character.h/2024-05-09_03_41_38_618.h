#pragma once
#include "Entity/Entity.h"
#include "Resources/Loader.h"
#include "Resources/InitSprites.h"
#include <vector>

class Character
{
public:
	Character(sf::Window& window, sf::Texture& texture);
	~Character();
	

//	virtual	void Update(float deltaTime);
//	virtual	void Draw(Window& window);
	sf::Sprite sprite;

public:
	Loader m_Loader;
private:
	
};