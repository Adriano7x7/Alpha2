
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()

//* (Mostrar un circulo, triangulo y cuadrado)*/
{
// creacion de ventanas
sf::RenderWindow window(sf::VideoMode(650, 270), "Objetos!");
sf::RenderWindow window2(sf::VideoMode(450, 200), "Nombre y Matricula!");
window2.getPosition();

//posicion de ventanas
window.setPosition(sf::Vector2i(200, 250));
window2.setPosition(sf::Vector2i(1000, 250));

//caracteristicas de los objetos.
sf::CircleShape circulo(100.f);
sf::CircleShape cuadrado(100.f, 4);
sf::RectangleShape rectangulo(sf::Vector2f(100.f, 100.f)); // cambia el tamaño a 100x100
rectangulo.setSize(sf::Vector2f(200.f, 150.f));

//color de los objetos
circulo.setFillColor(sf::Color::Red);
cuadrado.setFillColor(sf::Color::Green);
rectangulo.setFillColor(sf::Color::Blue);

//Posicion de los objetos en la ventana
circulo.setPosition(0, 10);
cuadrado.setPosition(210,0);
rectangulo.setPosition(420,30);


sf::Font font;
if (!font.loadFromFile("resources/sansation.ttf"))
return EXIT_FAILURE;

//seleccion de la fuente del texto.
sf::Text textNombre;
textNombre.setFont(font); 
sf::Text textMatricula; 
textMatricula.setFont(font);
sf::Text textCirculo;
textCirculo.setFont(font);
sf::Text textCuadrado;
textCuadrado.setFont(font);
sf::Text textRectangulo;
textRectangulo.setFont(font);

//Tamaño de texto.
textNombre.setCharacterSize(24); 
textMatricula.setCharacterSize(24);
textCirculo.setCharacterSize(24);
textCuadrado.setCharacterSize(24);
textRectangulo.setCharacterSize(24);

//Color de texto.
textNombre.setFillColor(sf::Color::Green);
textMatricula.setFillColor(sf::Color::Blue);
textCirculo.setFillColor(sf::Color::White);
textCuadrado.setFillColor(sf::Color::White);
textRectangulo.setFillColor(sf::Color::White);

//Estylos.
textNombre.setStyle(sf::Text::Bold | sf::Text::Underlined);
textMatricula.setStyle(sf::Text::Bold | sf::Text::Underlined);
textCirculo.setStyle(sf::Text::Bold | sf::Text::Underlined);
textCuadrado.setStyle(sf::Text::Bold | sf::Text::Underlined);
textRectangulo.setStyle(sf::Text::Bold | sf::Text::Underlined);



//Texto.
textNombre.setString("Nombre: Adriano Ernesto de la Cruz");
textMatricula.setString("Matricula:3-16-4237");
textCirculo.setString("Circulo");
textCuadrado.setString("Cuadrado");
textRectangulo.setString("Rectangulo");

//Posicion del Texto
textNombre.setPosition(10, 30);
textMatricula.setPosition(90, 70);
textCirculo.setPosition(60, 210);
textCuadrado.setPosition(250, 210);
textRectangulo.setPosition(455, 210);



while (window.isOpen())
{

	sf::Event event;
	sf::Event event2;

	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();
	}

	window.clear();
	window.draw(circulo);
	window.draw(textCirculo);
	window.draw(cuadrado);
	window.draw(textCuadrado);
	window.draw(rectangulo);
	window.draw(textRectangulo);
	window.display();

	

	while (window2.pollEvent(event2))
	{
		
		if (event2.type == sf::Event::Closed)
			window2.close();
	}

		window2.clear();
		window2.draw(textNombre);
		window2.draw(textMatricula);
		window2.display();
}

}

