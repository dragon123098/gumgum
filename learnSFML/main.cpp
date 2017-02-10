 #include <iostream>
 #include <SFML/Graphics.hpp>

 #define WIDE 400
 #define HIGH 400

 int main()
 {
   sf::RenderWindow window(sf::VideoMode(WIDE, HIGH), "SFML Hello World");

   while(window.isOpen())
   {
     sf::Event event;
     while(window.pollEvent(event))
     {
       if(event.type == sf::Event::Closed)
       {
         window.close();
       }
     }

     window.display();
   }
 }
