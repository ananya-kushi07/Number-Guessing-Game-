# Number Guessing Game

This is a simple command-line Number Guessing Game written in C++. The player has to guess a randomly generated number within a specified range and with a limited number of attempts (lives).

## How to Play

1. When you run the program, it will display a welcome message and ask you to guess a number between 0 and 50.
2. You have 5 lives (attempts) to guess the correct number.
3. After each guess:
    - If your guess is lower than the target number, you will be prompted to guess higher.
    - If your guess is higher than the target number, you will be prompted to guess lower.
    - If your guess is correct, you win!
4. If you run out of lives without guessing the correct number, you lose.

## How to Run

1. Make sure you have a C++ compiler (like `g++`) installed.
2. Compile the code:

    ```bash
    g++ miniproject1.cpp -o guessing_game
    ```

3. Run the executable:

    ```bash
    ./guessing_game
    ```

## Example Output

```
WELCOME TO NUMBER GUESSING GAME
CHOOSE A NUMBER BETWEEN 0 AND 50
Enter your choice of number
25
YOUR ENTRY IS LOW! GUESS HIGH 
you have 4 left
Enter your choice of number
40
YOUR GUESS IS HIGH! GUESS LOW
you have 3 left
...
CONGRATULATIONS!!YOU WON THE GAME
```

## Notes

- The number to guess is randomly generated each time you play.
- The range is between 0 (inclusive) and 50 (exclusive).
- If you want to change the range or number of lives, you can modify the values of `min`, `max`, and `lives` in the code.

## License

This project is for educational purposes and has no specific license.
