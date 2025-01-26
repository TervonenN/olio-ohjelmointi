#ifndef OLIOARVAUSPELIVOL2_H
#define OLIOARVAUSPELIVOL2_H


class Game {

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;



public:
    Game(int maxNum);
    ~Game();
    void play();
    void printGameResult();


};

#endif // OLIOARVAUSPELIVOL2_H
