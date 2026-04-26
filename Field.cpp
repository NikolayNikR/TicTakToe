#include "Field.h"

Field::Field(int cell_size, int cells_cnt) {
    sf::RectangleShape cell(sf::Vector2f(cell_size, cell_size));
    cell.setFillColor(sf::Color::White);
    cell.setOutlineColor(sf::Color::Black);
    cell.setOutlineThickness(3);

    std::vector<std::vector<sf::RectangleShape>> field;

    for (int i = 0; i < cells_cnt; i++) {
        field.push_back(std::vector<sf::RectangleShape>());
        for (int j = 0; j < cells_cnt; j++) {
            cell.setPosition(sf::Vector2f(j * cell_size, i * cell_size));

            field[i].push_back(cell);
        }
    }
}

void Field::Draw(sf::RenderWindow& window) {
    for (int i = 0; i < field.size(); i++) {
        for (int j = 0; j < field[i].size(); j++) {
            window.draw(field[i][j]);
        }
    }
}