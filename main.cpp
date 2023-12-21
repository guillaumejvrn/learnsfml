#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::RenderWindow fenetre(sf::VideoMode(800, 600), "Ma Fenêtre SFML");

    while (fenetre.isOpen()) {
        sf::Event evenement;
        while (fenetre.pollEvent(evenement)) {
            if (evenement.type == sf::Event::Closed) {
                fenetre.close();
            }
        }

        fenetre.clear();
        // Dessinez ici
        fenetre.display();
    }

    return 0;
}
