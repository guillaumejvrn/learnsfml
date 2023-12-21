#include <SFML/Graphics.hpp>

int main() {
    sf::RenderWindow fenetre(sf::VideoMode(800, 600), "Ma Fenêtre SFML");

    sf::Font police;
    if (!police.loadFromFile("/home/pepito/Bureau/learnsfml/font/font.ttf")) {
        // Gérer l'erreur de chargement de la police
    }

    sf::Text texte;
    texte.setFont(police);
    texte.setString("Hello, SFML!");
    texte.setCharacterSize(24);
    texte.setFillColor(sf::Color::White);
    texte.setPosition(100, 100);

    while (fenetre.isOpen()) {
        sf::Event evenement;
        while (fenetre.pollEvent(evenement)) {
            if (evenement.type == sf::Event::Closed) {
                fenetre.close();
            }
        }

        fenetre.clear();
        fenetre.draw(texte);  // Dessinez le texte
        fenetre.display();
    }

    return 0;
}
