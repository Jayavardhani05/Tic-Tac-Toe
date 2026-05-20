# TIC-TAC-TOE GAME ENGINE

---

# 2. Introduction

The Tic-Tac-Toe Game Engine is a lightweight console-based multiplayer game developed using the C++ programming language. The system allows two players to play the classic Tic-Tac-Toe game interactively through a terminal interface.

The application demonstrates the implementation of:

* Object-Oriented Programming (OOP)
* 2D Arrays
* Input Validation
* Game State Management
* Win/Tie Detection Algorithms
* Looping Structures
* Console Rendering Techniques

The system is designed to be beginner-friendly while still showcasing structured software engineering practices.

---

# 3. Objective of the Project

The primary objective of this project is to:

* Develop an interactive two-player Tic-Tac-Toe game
* Implement game logic using OOP principles
* Validate player inputs safely
* Detect winners and draw conditions dynamically
* Provide replay functionality
* Demonstrate clean console UI rendering

---

# 4. Technologies Used

| Component            | Technology              |
| -------------------- | ----------------------- |
| Programming Language | C++                     |
| Compiler             | g++ / MinGW             |
| IDE                  | VS Code / Code::Blocks  |
| Platform             | Windows / Linux / macOS |
| Console Interface    | Terminal / CMD          |

---

# 5. Software Requirements

## Minimum Requirements

* C++ Compiler supporting C++11 or later
* Terminal / Command Prompt
* 512 MB RAM
* Any Operating System

---

# 6. Concepts Used

The project uses several important C++ concepts:

* Classes and Objects
* Constructors
* Arrays
* Loops
* Conditional Statements
* Functions
* Encapsulation
* Input Stream Handling
* Matrix Coordinate Mapping
* Game Algorithms

---

# 7. System Architecture

The project is divided into two major sections:

## A. Game Logic Layer

Handles:

* Board initialization
* Move processing
* Player switching
* Win detection
* Tie detection

## B. Runtime Execution Layer

Handles:

* Menu rendering
* User interaction
* Replay handling
* Input validation

---

# 8. Class Description

## Class: `TicTacToe`

This class controls the entire game engine.

### Private Variables

| Variable      | Type       | Purpose                |
| ------------- | ---------- | ---------------------- |
| board         | char[3][3] | Stores board positions |
| currentMarker | char       | Tracks current player  |

---

# 9. Function Explanation

---

## 9.1 resetBoard()

### Purpose

Initializes the board with values from 1 to 9.

### Working

* Fills board cells sequentially
* Sets current player to X

### Example Board

```text
1 | 2 | 3
4 | 5 | 6
7 | 8 | 9
```

---

## 9.2 renderBoard()

### Purpose

Displays the game board visually.

### Features

* Clears terminal screen
* Displays structured board
* Shows current game state

---

## 9.3 processMove(int slotInput)

### Purpose

Processes player moves.

### Logic

* Converts input (1-9) into matrix coordinates
* Verifies cell availability
* Updates board safely

### Coordinate Mapping

| Input | Row | Column |
| ----- | --- | ------ |
| 1     | 0   | 0      |
| 5     | 1   | 1      |
| 9     | 2   | 2      |

---

## 9.4 alternatePlayerTurn()

### Purpose

Switches player turns.

### Logic

```cpp
X -> O
O -> X
```

---

## 9.5 checkWinCondition()

### Purpose

Detects winning combinations.

### Checks

* Horizontal rows
* Vertical columns
* Main diagonal
* Reverse diagonal

### Example Win

```text
X | X | X
```

---

## 9.6 checkTieCondition()

### Purpose

Checks whether the board is completely filled.

### Logic

* If no empty cells remain
* And no player has won
* Declare tie

---

# 10. Program Workflow

```text
START
   ↓
Initialize Board
   ↓
Display Board
   ↓
Take Player Input
   ↓
Validate Move
   ↓
Update Board
   ↓
Check Win?
   ├── YES → Declare Winner
   │
   └── NO
         ↓
    Check Tie?
         ├── YES → Declare Tie
         └── NO
               ↓
         Switch Player
               ↓
            Repeat
```

---

# 11. Features of the System

## Core Features

* Two-player gameplay
* Dynamic board rendering
* Real-time move validation
* Winner detection
* Tie detection
* Replay system
* Cross-platform console execution

---

# 12. Detailed Input and Output Execution

---

# CASE 1 — Normal Gameplay

## Input

```text
Player X → 1
Player O → 5
Player X → 2
Player O → 8
Player X → 3
```

---

## Output

```text
=========================================
         TIC-TAC-TOE GAME ENGINE
=========================================

             X | X | X
            ---+---+---
             4 | O | 6
            ---+---+---
             7 | O | 9

*****************************************
   CONGRATULATIONS! PLAYER [X] WINS!
*****************************************
```

---

# CASE 2 — Invalid Input Handling

## Input

```text
Player X → 1
Player O → 1
```

---

## Output

```text
[ALERT]: That cell location is invalid or already occupied!
```

---

# CASE 3 — Tie Match

## Input Sequence

```text
1 2 3 5 4 6 8 7 9
```

---

## Output

```text
=========================================
   STALEMATE MATCH: THE GAME IS A TIE!
=========================================
```

---

# CASE 4 — Replay Option

## Input

```text
Would you like to initiate a rematch? (Y/N): Y
```

---

## Output

```text
Board reset successfully.
Starting new match...
```

---

# 13. Input Validation Mechanism

The system safely handles:

| Invalid Scenario      | Handling          |
| --------------------- | ----------------- |
| Non-numeric input     | Stream cleared    |
| Slot outside 1-9      | Rejected          |
| Occupied slot         | Warning displayed |
| Invalid stream states | Auto recovery     |

---

# 14. Data Structures Used

| Structure           | Purpose              |
| ------------------- | -------------------- |
| 2D Array            | Game board storage   |
| Character Variables | Player tracking      |
| Loops               | Traversal            |
| Boolean Flags       | Match state tracking |

---

# 15. Algorithms Used

---

## Win Detection Algorithm

The engine compares:

* Row values
* Column values
* Diagonal values

### Time Complexity

```text
O(1)
```

---

## Tie Detection Algorithm

Traverses all 9 cells.

### Time Complexity

```text
O(9)
```

---

# 16. Advantages of the System

* Lightweight application
* Very low memory usage
* Easy to understand
* Beginner-friendly
* Demonstrates OOP concepts
* Cross-platform support
* Interactive gameplay

---

# 17. Limitations

* No AI opponent
* Console-only UI
* No score tracking
* No multiplayer networking
* No graphical interface

---

# 18. Future Enhancements

The project can be upgraded with:

## Planned Improvements

### 1. AI Opponent

* Easy/Medium/Hard difficulty
* Minimax algorithm

### 2. GUI Interface

* SFML
* SDL
* Qt

### 3. Multiplayer Networking

* LAN support
* Online gameplay

### 4. Persistent Scoreboard

* Store wins/losses
* Save statistics

### 5. Sound Effects

* Move sounds
* Victory music

### 6. Animated Board

* Smooth transitions
* Better UI rendering

### 7. Tournament Mode

* Best-of-3
* Best-of-5

### 8. Player Profiles

* Custom usernames
* Match history

---

# 19. How to Compile and Run

---

## Step 1 — Save File

Save the source file as:

```text
tictactoe.cpp
```

---

## Step 2 — Open Terminal

Navigate to the project folder.

---

## Step 3 — Compile

### Windows (MinGW)

```bash
g++ tictactoe.cpp -o tictactoe
```

### Linux/macOS

```bash
g++ tictactoe.cpp -o tictactoe
```

---

## Step 4 — Run Program

### Windows

```bash
tictactoe.exe
```

### Linux/macOS

```bash
./tictactoe
```

---

# 20. GitHub Clone Commands

## Clone Repository

```bash
git clone https://github.com/your-username/tictactoe-game.git
```

---

## Enter Project Folder

```bash
cd Tic-Tac-Toe

```

---

## Compile Project

```bash
g++ tictactoe.cpp -o tictactoe
```

---

## Execute Program

```bash
./tictactoe
```

---

# 21. Sample Terminal Session

```text
=========================================
         TIC-TAC-TOE GAME ENGINE
=========================================

             1 | 2 | 3
            ---+---+---
             4 | 5 | 6
            ---+---+---
             7 | 8 | 9

Player [X], select an open slot (1-9): 5

Player [O], select an open slot (1-9): 1

Player [X], select an open slot (1-9): 9

Player [O], select an open slot (1-9): 2

Player [X], select an open slot (1-9): 3

*****************************************
   CONGRATULATIONS! PLAYER [X] WINS!
*****************************************
```

---

# 22. Conclusion

The Tic-Tac-Toe Game Engine successfully demonstrates the practical implementation of C++ programming fundamentals through an interactive game environment.

The project effectively showcases:

* Object-oriented programming
* Matrix manipulation
* Input validation
* Game state management
* Win/tie algorithms
* Interactive console rendering

This project serves as an excellent beginner-to-intermediate level demonstration of software design principles and logical problem-solving using C++.
