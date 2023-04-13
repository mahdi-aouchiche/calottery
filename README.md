# CA Lottery Games : PowerBall & Mega Millions

> Author: Mahdi Aouchiche (<https://github.com/mahdi-aouchiche/calottery>)

## Overview

* PowerBall and Mega Millions are very known lotto games in the USA. This program generates random quick picks to play for both games given present rules of the games.
* The selection number range for either game can be easily updated in `ca_lottery.hpp` file.

* As of today's date 04/13/2023:
  * `Mega Millions`: pick 5 numbers between 1 and 70 and 1 Mega number between 1 and 25. For updated number ranges check [here](https://www.calottery.com/draw-games/mega-millions#section-content-3-3).
  * `PowerBall`    : pick 5 numbers between 1 and 69 and 1 Power Number between 1 and 26. For updated number ranges check [here](https://www.calottery.com/draw-games/powerball#section-content-3-3).

> Note 1: Verify that the range of numbers to choose from is acurate and updated at the present day for better results.
> Note 2: this is not an affiliated with the actual game, it is only a personal project and play responsibily if you intend to play for money.
> Note 3: I am not promotting nor suggesting to play, and I am not going to be involved with any capital gain or loss.
> Important: This is the official website to get more accurate information [here](https://www.calottery.com/).

### To run the project nicely use the following commands

```c++
cmake -S . -B build
cmake --build build/ 
```

### 1 executable is created, use one of the commands to run the executable

```c++
./build/quick_pick
```
