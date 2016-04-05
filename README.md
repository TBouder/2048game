# 2048_game

[PDF](https://mega.nz/#!Bl5hUbhR!uA8NeTg06cP_qEm8dQ-uWglwQNLgE2e8qSE0dzMdVHY)

>2048 is played on a gray 4×4 grid, with numbered tiles that slide smoothly when a player moves them using the four arrow keys. Every turn, a new tile will randomly appear in an empty spot on the board with a value of either 2 or 4. Tiles slide as far as possible in the chosen direction until they are stopped by either another tile or the edge of the grid. If two tiles of the same number collide while moving, they will merge into a tile with the total value of the two tiles that collided. The resulting tile cannot merge with another tile again in the same move.

>The game is won when a tile with a value of 2048 appears on the board, hence the name of the game. After reaching the 2048 tile, players can continue to play to reach higher scores. When the player has no legal moves (there are no empty spaces and no adjacent tiles with the same value), the game ends.

Bonus :  
- [x] Menu
- [x] Resizable window
- [x] Colors
- [x] Grid between 2\*2 and 9\*9
- [x] Possibility to play with arrows or WASD
- [x] Possibility to play the game after 2048

Requirements :  
- [LIBFT](https://bitbucket.org/Tbouder/libft)  
- C compiler
- GNU

Installation :  
1. git clone https://bitbucket.org/Tbouder/rush_2048game && cd rush_2048game
2. git clone https://bitbucket.org/Tbouder/libft
3. make
4. ./game_2048
