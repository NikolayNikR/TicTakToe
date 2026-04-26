#include <SFML\Graphics.hpp>
#include <vector>
#include "Field.h"

const int FIELD_SIZE = 900;
const int CELLS_CNT = 3;

int main() {
    sf::RenderWindow window(sf::VideoMode(FIELD_SIZE, FIELD_SIZE), "TicTacToe");

    int cell_size = FIELD_SIZE / CELLS_CNT;
    Field field(cell_size, CELLS_CNT);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        field.Draw(window);
        window.display();
    }
}