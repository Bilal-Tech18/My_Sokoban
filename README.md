# My Sokoban
My Sokoban is a custom implementation of the classic Sokoban game, developed in C. The objective of the game is to push boxes onto designated storage locations while navigating through a warehouse map.

![sokoban-1735](https://github.com/user-attachments/assets/4a85fcb2-71b1-4f8d-be1e-9bf6314b0e87)

## Author

- [Bilal-Tech18](https://github.com/Bilal-Tech18)

## Features

- Custom map loading from a file
- Real-time rendering using the **ncurses** library
- Interactive gameplay with keyboard controls
- Win and lose conditions based on game state
- Comprehensive error handling for invalid inputs or maps
- Modular and maintainable codebase

## Requirements

To compile and execute My Sokoban, you need:

- **ncurses** library for terminal rendering

### Installing ncurses on Ubuntu or Debian:

```sudo apt install libncurses5-dev```

### Compilation

To compile the project, run the following command in the root directory:

```make```

This will generate an executable named my_sokoban.

### Execution

To execute the game, run:

```./my_sokoban <map>```

Example:

```./my_sokoban maps/level1.txt```

<map>: Specify the path to a file containing the warehouse map.

### Help Command

To view usage instructions, run:

```./my_sokoban -h```

Output:

    USAGE
        ./my_sokoban map
    DESCRIPTION
        map  file representing the warehouse map, containing '#'
        for walls, 'P' for the player, 'X' for boxes, and 'O' for storage locations.

### Error Handling

If an invalid map file is provided, an error message will be displayed.
If no map is specified, the program will prompt you to provide one or display the help message.

### Project Structure

The project is organized into modules for better readability and maintainability:

    main.c: Entry point for the game
    sources/read_me.c: Displays usage and help information
    sources/create_map.c: Handles map creation and validation
    sources/calc_size_file.c: Calculates the size of the map file
    sources/open_and_read.c: Opens and reads the map file
    sources/print_the_map.c: Renders the map in the terminal
    sources/get_pos.c: Retrieves player and object positions
    sources/update_map.c: Updates the map state after each move
    sources/update_map_two.c: Additional map update logic
    sources/initialise_window.c: Initializes the ncurses window
    sources/error_handling.c: Handles errors for invalid maps
    sources/error_handling_two.c: Additional error handling
    sources/loop_main.c: Main game loop
    sources/for_the_win.c: Checks for win conditions
    sources/for_the_lose.c: Checks for lose conditions

How It Works

The game starts by loading a map file provided by the user.
The player moves using keyboard controls (arrow keys).
The goal is to push all the boxes (X) onto the storage locations (O).
The game ends when all boxes are in the correct positions (win) or no valid moves are possible (lose).

Unit Tests

The project includes unit tests for various modules. To run the tests:

Compile the test suite:

    make tests_run

Execute the tests:

    ./unit_tests

Code coverage is enabled for the test suite.
