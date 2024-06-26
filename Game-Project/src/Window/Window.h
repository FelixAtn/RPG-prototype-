#pragma once
#include <SFML/Graphics.hpp>

class Window
{
public:
	Window();
	~Window();

	bool IsRunning();
	void Update();
	void Clear();
	void Draw(const sf::Drawable& drawable);
	void EndDraw();

	sf::Vector2i& GetPixelPosition();
	sf::Vector2f& GetWorldPosition();
	
	void setWindowView(sf::View view);

public:
	sf::RenderWindow m_WindowRenderer;
private:

	sf::Vector2i m_PixelPosition;
	sf::Vector2f m_WorldPosition;
};

