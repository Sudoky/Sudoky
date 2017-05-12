#include <stdlib.h>
#include <stdio.h>
#include </usr/include/SFML/Graphics.hpp>
#include <iostream>
using namespace std;
int Menu();
int main()
{
	int n;
	n=Menu();
	cout<<n;
	system("PAUSE");
    return 0;
}
int Menu()
{
	int n=1, i;
    char ch;
    sf::RenderWindow window(sf::VideoMode(750,750),"Sudoku");
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }
    return 0;
}
