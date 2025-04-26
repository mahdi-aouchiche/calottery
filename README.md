# CA Lotto Games : PowerBall & Mega Millions & SuperLotto Plus

> Author: Mahdi Aouchiche (<https://github.com/mahdi-aouchiche/calottery>)

## Overview

* PowerBall, Mega Millions, and SuperLotto Plus are very known lotto games in the USA. This program generates random quick picks to play for any game given present rules of the games.
* The selection number range for any game can be easily updated in `ca_lottery.hpp` file.

* As of update date 04/25/2025:
  * `Mega Millions`: pick 5 numbers between 1 and 70 and 1 Mega number between 1 and 24. For updated number ranges check [here](https://www.calottery.com/draw-games/mega-millions#section-content-3-3).
  * `PowerBall`    : pick 5 numbers between 1 and 69 and 1 Power Number between 1 and 26. For updated number ranges check [here](https://www.calottery.com/draw-games/powerball#section-content-3-3).
  * `SuperLotto Plus`: pick 5 numbers between 1 and 47 and 1 Mega number between 1 and 27. For updated number ranges check [here](https://www.calottery.com/draw-games/superlotto-plus#section-content-3-3).

---
> **Note 1**
Verify that the range of numbers to choose from is acurate and updated at the present day for more realistic results.
---
---
> **Note 2**
There is no affiliation with the actual game, it is only a personal project and play responsibily if you intend to play for money.
---
---
> **Note 3**
I am not promoting nor suggesting to play, and I am not going to be involved with any capital gain or loss.
---
> **Important** This is the official website to get more accurate information [here](https://www.calottery.com/).
---

### To run the project nicely use the following commands

```c++
cmake -S . -B build
cmake --build build/ 
```

### 1 executable is created, use one of the commands to run the executable

```c++
./build/quick_pick
```
