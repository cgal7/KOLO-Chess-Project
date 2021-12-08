#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(500, 500), "KOLO CHESS GAME!");
    
    // Text stuff
    Font font;
    font.loadFromFile(".\\fonts\\arial.ttf");
    string hello = "Play Chess!";
    Text txt;
    txt.setFont(font);
    txt.setString(hello);
    txt.setFillColor(Color::Red);
    txt.setCharacterSize(24);
    txt.setOrigin(txt.getLocalBounds().width / 2.0f, txt.getLocalBounds().height / 2.0f); // sets text origin to the middle of the text
    txt.setPosition(250.f, 480.f);

    // board stuff
    RectangleShape boardBackgroundEdge(Vector2f(330.f, 330.f));
    RectangleShape boardBackground(Vector2f(320.f, 320.f));
    RectangleShape blackSquare1(Vector2f(40.f, 40.f));
    RectangleShape blackSquare2(Vector2f(40.f, 40.f));
    RectangleShape blackSquare3(Vector2f(40.f, 40.f));
    RectangleShape blackSquare4(Vector2f(40.f, 40.f));
    RectangleShape blackSquare5(Vector2f(40.f, 40.f));
    RectangleShape blackSquare7(Vector2f(40.f, 40.f));
    RectangleShape blackSquare6(Vector2f(40.f, 40.f));
    RectangleShape blackSquare8(Vector2f(40.f, 40.f));
    RectangleShape blackSquare9(Vector2f(40.f, 40.f));
    RectangleShape blackSquare10(Vector2f(40.f, 40.f));
    RectangleShape blackSquare11(Vector2f(40.f, 40.f));
    RectangleShape blackSquare12(Vector2f(40.f, 40.f));
    RectangleShape blackSquare13(Vector2f(40.f, 40.f));
    RectangleShape blackSquare14(Vector2f(40.f, 40.f));
    RectangleShape blackSquare15(Vector2f(40.f, 40.f));
    RectangleShape blackSquare16(Vector2f(40.f, 40.f));



    boardBackground.setPosition(Vector2f(40.f, 40.f));
    boardBackground.setFillColor(Color(250,250,250));
    boardBackgroundEdge.setPosition(Vector2f(35.f, 35.f));
    boardBackgroundEdge.setFillColor(Color(5, 5, 5));

    blackSquare1.setPosition(Vector2f(40.f, 40.f));
    blackSquare1.setFillColor(Color(50, 50, 50));
    blackSquare2.setPosition(Vector2f(120.f, 40.f));
    blackSquare2.setFillColor(Color(50, 50, 50));
    blackSquare3.setPosition(Vector2f(200.f, 40.f));
    blackSquare3.setFillColor(Color(50, 50, 50));
    blackSquare4.setPosition(Vector2f(280.f, 40.f));
    blackSquare4.setFillColor(Color(50, 50, 50));
    blackSquare5.setPosition(Vector2f(280.f, 320.f));
    blackSquare5.setFillColor(Color(50, 50, 50));
    blackSquare6.setPosition(Vector2f(40.f, 320.f));
    blackSquare6.setFillColor(Color(50, 50, 50));
    blackSquare7.setPosition(Vector2f(120.f, 320.f));
    blackSquare7.setFillColor(Color(50, 50, 50));
    blackSquare8.setPosition(Vector2f(200.f, 320.f));
    blackSquare8.setFillColor(Color(50, 50, 50));
    blackSquare9.setPosition(Vector2f(80.f, 80.f));
    blackSquare9.setFillColor(Color(50, 50, 50));
    blackSquare10.setPosition(Vector2f(320.f, 80.f));
    blackSquare10.setFillColor(Color(50, 50, 50));
    blackSquare11.setPosition(Vector2f(240.f, 80.f));
    blackSquare11.setFillColor(Color(50, 50, 50));
    blackSquare12.setPosition(Vector2f(160.f, 80.f));
    blackSquare12.setFillColor(Color(50, 50, 50));
    blackSquare13.setPosition(Vector2f(80.f, 280.f));
    blackSquare13.setFillColor(Color(50, 50, 50));
    blackSquare14.setPosition(Vector2f(160.f, 280.f));
    blackSquare14.setFillColor(Color(50, 50, 50));
    blackSquare15.setPosition(Vector2f(320.f, 280.f));
    blackSquare15.setFillColor(Color(50, 50, 50));
    blackSquare16.setPosition(Vector2f(240.f, 280.f));
    blackSquare16.setFillColor(Color(50, 50, 50));


    // Chess pieces
    Texture whiterook;
    whiterook.loadFromFile(".\\images\\w_rook.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite whiterookSprite;
    whiterookSprite.setTexture(whiterook);
    whiterookSprite.setScale(.2f, .2f);
    whiterookSprite.setPosition(48.f, 48.f);

    Texture whiteQueen;
    whiteQueen.loadFromFile(".\\images\\w_queen.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteQueen.setSmooth(true);
    Sprite whiteQueenSprite;
    whiteQueenSprite.setTexture(whiteQueen);
    whiteQueenSprite.setScale(.2f, .2f);
    whiteQueenSprite.setPosition(165.f, 48.f);


    Texture whiteKing;
    whiteKing.loadFromFile(".\\images\\w_king.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteKing.setSmooth(true);
    Sprite whiteKingSprite;
    whiteKingSprite.setTexture(whiteKing);
    whiteKingSprite.setScale(.2f, .2f);
    whiteKingSprite.setPosition(209.f, 48.f);

    Texture whiteBishop;
    whiteBishop.loadFromFile(".\\images\\w_bishop.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteBishop.setSmooth(true);
    Sprite whiteBishopSprite;
    whiteBishopSprite.setTexture(whiteBishop);
    whiteBishopSprite.setScale(.2f, .2f);
    whiteBishopSprite.setPosition(85.f, 48.f);

    Texture whiteknight;
    whiteknight.loadFromFile(".\\images\\w_knight.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteknight.setSmooth(true);
    Sprite whiteknightSprite;
    whiteknightSprite.setTexture(whiteknight);
    whiteknightSprite.setScale(.2f, .2f);
    whiteknightSprite.setPosition(130.f, 48.f);

    Texture whiteknight2;
    whiteknight2.loadFromFile(".\\images\\w_knight.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteknight2.setSmooth(true);
    Sprite whiteknight2Sprite;
    whiteknight2Sprite.setTexture(whiteknight2);
    whiteknight2Sprite.setScale(.2f, .2f);
    whiteknight2Sprite.setPosition(247.f, 48.f);
    
    Texture whiteBishop2;
    whiteBishop2.loadFromFile(".\\images\\w_bishop.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteBishop2.setSmooth(true);
    Sprite whiteBishopSprite2;
    whiteBishopSprite2.setTexture(whiteBishop2);
    whiteBishopSprite2.setScale(.2f, .2f);
    whiteBishopSprite2.setPosition(287.f, 48.f);
    
    // Chess pieces
    Texture whiterook2;
    whiterook.loadFromFile(".\\images\\w_rook.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite whiterookSprite2;
    whiterookSprite2.setTexture(whiterook);
    whiterookSprite2.setScale(.2f, .2f);
    whiterookSprite2.setPosition(330.f, 48.f);
    // pawns
    Texture whitepawn;
    whitepawn.loadFromFile(".\\images\\w_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whitepawn.setSmooth(true);
    Sprite whitepawnSprite;
    whitepawnSprite.setTexture(whitepawn);
    whitepawnSprite.setScale(.2f, .2f);
    whitepawnSprite.setPosition(48.f, 85.f);

    Texture whitepawn2;
    whitepawn2.loadFromFile(".\\images\\w_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whitepawn2.setSmooth(true);
    Sprite whitepawn2Sprite2;
    whitepawn2Sprite2.setTexture(whitepawn);
    whitepawn2Sprite2.setScale(.2f, .2f);
    whitepawn2Sprite2.setPosition(165.f, 85.f);

    Texture whitepawn3;
    whitepawn3.loadFromFile(".\\images\\w_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whitepawn3.setSmooth(true);
    Sprite whitepawn3Sprite3;
    whitepawn3Sprite3.setTexture(whitepawn);
    whitepawn3Sprite3.setScale(.2f, .2f);
    whitepawn3Sprite3.setPosition(209.f, 85.f);

    Texture whitepawn4;
    whiterook.loadFromFile(".\\images\\w_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite whitepawn4Sprite4;
    whitepawn4Sprite4.setTexture(whitepawn);
    whitepawn4Sprite4.setScale(.2f, .2f);
    whitepawn4Sprite4.setPosition(85.f, 85.f);

    Texture whitepawn5;
    whiterook.loadFromFile(".\\images\\w_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite whitepawn5Sprite5;
    whitepawn5Sprite5.setTexture(whitepawn);
    whitepawn5Sprite5.setScale(.2f, .2f);
    whitepawn5Sprite5.setPosition(130.f, 85.f);

    Texture whitepawn6;
    whiterook.loadFromFile(".\\images\\w_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite whitepawn6Sprite6;
    whitepawn6Sprite6.setTexture(whitepawn);
    whitepawn6Sprite6.setScale(.2f, .2f);
    whitepawn6Sprite6.setPosition(247.f, 85.f);

    Texture whitepawn7;
    whiterook.loadFromFile(".\\images\\w_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite whitepawn7Sprite7;
    whitepawn7Sprite7.setTexture(whitepawn);
    whitepawn7Sprite7.setScale(.2f, .2f);
    whitepawn7Sprite7.setPosition(287.f, 85.f);

    Texture whitepawn8;
    whiterook.loadFromFile(".\\images\\w_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite whitepawn8Sprite8;
    whitepawn8Sprite8.setTexture(whitepawn);
    whitepawn8Sprite8.setScale(.2f, .2f);
    whitepawn8Sprite8.setPosition(330.f, 85.f);

    //Black chess pieces

    Texture blackQueen;
    whiteQueen.loadFromFile(".\\images\\b_queen.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteQueen.setSmooth(true);
    Sprite blackQueenSprite;
    blackQueenSprite.setTexture(whiteQueen);
    blackQueenSprite.setScale(.2f, .2f);
    blackQueenSprite.setPosition(165.f, 325.f);

    Texture blackrook;
    whiterook.loadFromFile(".\\images\\b_rook.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite blackrookSprite;
    blackrookSprite.setTexture(whiterook);
    blackrookSprite.setScale(.2f, .2f);
    blackrookSprite.setPosition(48.f, 325.f);



    Texture blackKing;
    whiteKing.loadFromFile(".\\images\\b_king.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteKing.setSmooth(true);
    Sprite blackKingSprite;
    blackKingSprite.setTexture(whiteKing);
    blackKingSprite.setScale(.2f, .2f);
    blackKingSprite.setPosition(209.f, 325.f);

    Texture blackBishop;
    whiteBishop.loadFromFile(".\\images\\b_bishop.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteBishop.setSmooth(true);
    Sprite blackBishopSprite;
    blackBishopSprite.setTexture(whiteBishop);
    blackBishopSprite.setScale(.2f, .2f);
    blackBishopSprite.setPosition(85.f, 325.f);

    Texture blackknight;
    whiteknight.loadFromFile(".\\images\\b_knight.png", IntRect(0, 0, 320, 320));//IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiteknight.setSmooth(true);
    Sprite blackknightSprite;
    blackknightSprite.setTexture(whiteknight);
    blackknightSprite.setScale(.2f, .2f);
    blackknightSprite.setPosition(130.f, 325.f);



    // pawns
    Texture blackpawn;
    whitepawn.loadFromFile(".\\images\\b_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whitepawn.setSmooth(true);
    Sprite blackpawnSprite;
    blackpawnSprite.setTexture(blackpawn);
    blackpawnSprite.setScale(.2f, .2f);
    blackpawnSprite.setPosition(288.f, 288.f);

    Texture blackpawn2;
    whitepawn2.loadFromFile(".\\images\\b_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whitepawn2.setSmooth(true);
    Sprite blackpawn2Sprite2;
    blackpawn2Sprite2.setTexture(blackpawn);
    blackpawn2Sprite2.setScale(.2f, .2f);
    blackpawn2Sprite2.setPosition(165.f, 288.f);

    Texture blackpawn3;
    whitepawn3.loadFromFile(".\\images\\b_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whitepawn3.setSmooth(true);
    Sprite blackpawn3Sprite3;
    blackpawn3Sprite3.setTexture(blackpawn);
    blackpawn3Sprite3.setScale(.2f, .2f);
    blackpawn3Sprite3.setPosition(209.f, 288.f);

    Texture blackpawn4;
    whiterook.loadFromFile(".\\images\\b_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite blackpawn4Sprite4;
    blackpawn4Sprite4.setTexture(blackpawn);
    blackpawn4Sprite4.setScale(.2f, .2f);
    blackpawn4Sprite4.setPosition(85.f, 288.f);

    Texture blackpawn5;
    whiterook.loadFromFile(".\\images\\b_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite blackpawn5Sprite5;
    blackpawn5Sprite5.setTexture(blackpawn);
    blackpawn5Sprite5.setScale(.2f, .2f);
    blackpawn5Sprite5.setPosition(130.f, 288.f);

    Texture blackpawn6;
    whiterook.loadFromFile(".\\images\\b_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite blackpawn6Sprite6;
    blackpawn6Sprite6.setTexture(blackpawn);
    blackpawn6Sprite6.setScale(.2f, .2f);
    blackpawn6Sprite6.setPosition(247.f, 288.f);

    Texture blackpawn7;
    whiterook.loadFromFile(".\\images\\b_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite blackpawn7Sprite7;
    blackpawn7Sprite7.setTexture(blackpawn);
    blackpawn7Sprite7.setScale(.2f, .2f);
    blackpawn7Sprite7.setPosition(287.f, 288.f);

    Texture blackpawn8;
    whiterook.loadFromFile(".\\images\\b_pawn.png", IntRect(0, 0, 320, 320)); // loads a portion of an image only - this image is 1920 x 640 in size with 2 x 6 different chess pieces
    whiterook.setSmooth(true);
    Sprite blackpawn8Sprite8;
   blackpawn8Sprite8.setTexture(blackpawn);
   blackpawn8Sprite8.setScale(.2f, .2f);
   blackpawn8Sprite8.setPosition(330.f, 288.f);




    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        window.clear(Color(220,220,220)); // clear background to a colour each graphics tick/frame 
        // the black squares loaded in.
        window.draw(boardBackgroundEdge);
        window.draw(boardBackground);
        window.draw(blackSquare1);
        window.draw(blackSquare9);
        window.draw(blackSquare2);
        window.draw(blackSquare3);
        window.draw(blackSquare4);
        window.draw(blackSquare5);
        window.draw(blackSquare6);
        window.draw(blackSquare7);
        window.draw(blackSquare8);
        window.draw(blackSquare10);
        window.draw(blackSquare11);
        window.draw(blackSquare12);
        window.draw(blackSquare13);
        window.draw(blackSquare14);
        window.draw(blackSquare15);
        window.draw(blackSquare16);


        // loading in the images
        window.draw(whiterookSprite);
        window.draw(whiterookSprite2);
        window.draw(whiteQueenSprite);
        window.draw(whiteBishopSprite);
        window.draw(whiteBishopSprite2);
        window.draw(whiteknightSprite);
        window.draw(whiteknight2Sprite);
        window.draw(whiteKingSprite);
        window.draw(whitepawnSprite);
        window.draw(whitepawn2Sprite2);
        window.draw(whitepawn3Sprite3);
        window.draw(whitepawn4Sprite4);
        window.draw(whitepawn5Sprite5);
        window.draw(whitepawn6Sprite6);
        window.draw(whitepawn7Sprite7);
        window.draw(whitepawn8Sprite8);
        window.draw(blackrookSprite);
        window.draw(blackknightSprite);
        window.draw(blackQueenSprite);
        window.draw(blackBishopSprite);
        window.draw(blackKingSprite);

        //black pawns
        window.draw(blackpawnSprite);
        window.draw(blackpawn2Sprite2);
        window.draw(blackpawn3Sprite3);
        window.draw(blackpawn4Sprite4);
        window.draw(blackpawn5Sprite5);
        window.draw(blackpawn6Sprite6);
        window.draw(blackpawn7Sprite7);
        window.draw(blackpawn8Sprite8);
       




        //window.draw(whiteKingSprite);
        window.draw(txt); // needs a font loaded to work
        window.display();
    }
    return 0;
}