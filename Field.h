#pragma once
#include <SFML\Graphics.hpp>
#include <vector>

class Field
{
public:
	Field(int cell_size, int cells_cnt);

	void Draw(sf::RenderWindow& window);
private:
	std::vector<std::vector<sf::RectangleShape>> field;
};

