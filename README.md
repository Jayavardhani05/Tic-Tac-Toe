# TIC-TAC-TOE GAME ENGINE


# 1. Project Title

**Console-Based Tic-Tac-Toe Multiplayer Game Using C++**

---

# 2. Introduction

The Tic-Tac-Toe Game Engine is a console-based multiplayer board game developed using the C++ programming language. The project simulates the classic Tic-Tac-Toe gameplay where two players alternately place markers (`X` and `O`) on a 3×3 board.

The system uses:

* Object-Oriented Programming (OOP)
* 2D Arrays
* Input Validation
* Game Logic Algorithms
* Conditional Processing
* Interactive Console Rendering

The project is lightweight, beginner-friendly, and demonstrates core programming concepts in a practical way.

---

# 3. Objective of the Project

The main objectives are:

* To develop an interactive multiplayer Tic-Tac-Toe game
* To implement clean board rendering
* To validate user input safely
* To detect winning combinations
* To identify tie conditions
* To provide replay functionality
* To demonstrate OOP concepts in C++

---

# 4. Technologies Used

| Component            | Technology           |
| -------------------- | -------------------- |
| Programming Language | C++                  |
| IDE                  | VS Code / CodeBlocks |
| Compiler             | g++                  |
| Platform             | Windows/Linux/macOS  |
| Interface            | Console/Terminal     |

---

# 5. Software Requirements

## Minimum Requirements

* C++ Compiler
* 512 MB RAM
* Terminal / Command Prompt
* Windows/Linux/macOS

---

# 6. Core Concepts Used

The project uses:

* Classes & Objects
* Constructors
* 2D Arrays
* Loops
* Conditional Statements
* Encapsulation
* Input Stream Handling
* Game State Tracking

---

# 7. System Architecture

The project contains two major modules:

---

## A. Game Logic Layer

Responsible for:

* Board initialization
* Move processing
* Player switching
* Win checking
* Tie checking

---

## B. Runtime Execution Layer

Responsible for:

* User interaction
* Match looping
* Replay functionality
* Console rendering

---

# 8. Class Description

## Class: `TicTacToe`

This class controls the complete game engine.

---

## Private Variables

| Variable      | Type       | Description          |
| ------------- | ---------- | -------------------- |
| board         | char[3][3] | Stores game board    |
| currentMarker | char       | Tracks active player |

---

# 9. Function Descriptions

---

# 9.1 resetBoard()

## Purpose

Initializes the game board with values from 1–9.

## Example Board

```text
1 | 2 | 3
4 | 5 | 6
7 | 8 | 9
```

---

# 9.2 renderBoard()

## Purpose

Displays the current board visually in terminal.

## Features

* Clears console screen
* Renders matrix layout
* Displays player moves

---

# 9.3 processMove(int slotInput)

## Purpose

Processes player input.

## Internal Logic

* Converts 1–9 into matrix coordinates
* Verifies slot availability
* Updates board safely

---

## Coordinate Conversion Table

| Input | Row | Column |
| ----- | --- | ------ |
| 1     | 0   | 0      |
| 2     | 0   | 1      |
| 3     | 0   | 2      |
| 4     | 1   | 0      |
| 5     | 1   | 1      |
| 6     | 1   | 2      |
| 7     | 2   | 0      |
| 8     | 2   | 1      |
| 9     | 2   | 2      |

---

# 9.4 alternatePlayerTurn()

## Purpose

Switches active player.

## Logic

```text
X → O
O → X
```

---

# 9.5 checkWinCondition()

## Purpose

Checks all winning combinations.

## Win Checks

### Horizontal Rows

```text
X X X
```

### Vertical Columns

```text
X
X
X
```

### Diagonals

```text
X     X
  X X
X     X
```

---

# 9.6 checkTieCondition()

## Purpose

Detects draw/tie state.

## Logic

* All cells occupied
* No winner detected

---

# 10. Game Workflow

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
Check Winner?
   ├── YES → End Game
   └── NO
         ↓
Check Tie?
   ├── YES → End Game
   └── NO
         ↓
Switch Player
         ↓
Repeat
```

---

# 11. Features of the System

## Main Features

* Multiplayer gameplay
* Dynamic board rendering
* Safe input validation
* Win detection
* Tie detection
* Replay system
* Cross-platform support

---

# 12. GitHub Clone and Execution Commands

---

# Step 1 — Clone Repository

```bash
git clone https://github.com/your-username/tictactoe-game.git
```

---

# Step 2 — Move into Project Directory

```bash
cd Tic-Tac-Toe

```

---

# Step 3 — Compile the Program

## Windows

```bash
g++ tictactoe.cpp -o tictactoe
```

## Linux/macOS

```bash
g++ tictactoe.cpp -o tictactoe
```

---

# Step 4 — Execute the Program

## Windows

```bash
tictactoe.exe
```

## Linux/macOS

```bash
./tictactoe
```

---

# 13. COMPLETE DETAILED INPUT & OUTPUT EXECUTION

---

# CASE 1 — Program Startup

## Output

```text
=========================================
         TIC-TAC-TOE GAME ENGINE
=========================================

             1 | 2 | 3
            ---+---+---
             4 | 5 | 6
            ---+---+---
             7 | 8 | 9

Player [X], select an open slot (1-9):
```

---

# CASE 2 — First Valid Move

## Input

```text
5
```

## Output

```text
=========================================
         TIC-TAC-TOE GAME ENGINE
=========================================

             1 | 2 | 3
            ---+---+---
             4 | X | 6
            ---+---+---
             7 | 8 | 9

Player [O], select an open slot (1-9):
```

---

# CASE 3 — Second Player Move

## Input

```text
1
```

## Output

```text
=========================================
         TIC-TAC-TOE GAME ENGINE
=========================================

             O | 2 | 3
            ---+---+---
             4 | X | 6
            ---+---+---
             7 | 8 | 9

Player [X], select an open slot (1-9):
```

---

# CASE 4 — Invalid Slot Selection

## Input

```text
1
```

(Already occupied by O)

## Output

```text
[ALERT]: That cell location is invalid or already occupied!
```

---

# CASE 5 — Invalid Number Range

## Input

```text
15
```

## Output

```text
[ALERT]: That cell location is invalid or already occupied!
```

---

# CASE 6 — Non-Numeric Input

## Input

```text
abc
```

## Output

```text
[ALERT]: That cell location is invalid or already occupied!
```

---

# CASE 7 — Winning Match Example

---

## Input Sequence

```text
Player X → 1
Player O → 5
Player X → 2
Player O → 8
Player X → 3
```

---

## Final Board Output

```text
=========================================
         TIC-TAC-TOE GAME ENGINE
=========================================

             X | X | X
            ---+---+---
             4 | O | 6
            ---+---+---
             7 | O | 9
```

---

## Winner Message

```text
*****************************************
   CONGRATULATIONS! PLAYER [X] WINS!
*****************************************
```

---

# CASE 8 — Vertical Win Example

## Input Sequence

```text
X → 1
O → 2
X → 4
O → 5
X → 7
```

---

## Output

```text
             X | O | 3
            ---+---+---
             X | O | 6
            ---+---+---
             X | 8 | 9
```

---

## Result

```text
*****************************************
   CONGRATULATIONS! PLAYER [X] WINS!
*****************************************
```

---

# CASE 9 — Diagonal Win Example

## Input Sequence

```text
X → 1
O → 2
X → 5
O → 3
X → 9
```

---

## Output

```text
             X | O | O
            ---+---+---
             4 | X | 6
            ---+---+---
             7 | 8 | X
```

---

## Result

```text
*****************************************
   CONGRATULATIONS! PLAYER [X] WINS!
*****************************************
```

---

# CASE 10 — Tie Match Example

## Input Sequence

```text
1 2 3 5 4 6 8 7 9
```

---

## Final Board

```text
             X | O | X
            ---+---+---
             X | O | O
            ---+---+---
             O | X | X
```

---

## Output

```text
=========================================
   STALEMATE MATCH: THE GAME IS A TIE!
=========================================
```

---

# CASE 11 — Replay Option

## Output

```text
Would you like to initiate a rematch? (Y/N):
```

---

## Input

```text
Y
```

---

## Result

```text
New match initialized successfully.
```

---

# CASE 12 — Exit Program

## Input

```text
N
```

---

## Output

```text
System environment closed smoothly down. Thank you for playing!
```

---

# 14. Input Validation Techniques

The program safely handles:

| Invalid Scenario | Handling      |
| ---------------- | ------------- |
| Alphabetic input | Stream reset  |
| Invalid range    | Rejected      |
| Occupied slot    | Warning shown |
| Stream errors    | Auto recovery |

---

# 15. Data Structures Used

| Structure           | Purpose              |
| ------------------- | -------------------- |
| 2D Array            | Board representation |
| Boolean Flags       | Match state          |
| Character Variables | Player markers       |
| Loops               | Traversal            |

---

# 16. Algorithms Used

---

# Win Detection Algorithm

Checks:

* Rows
* Columns
* Diagonals

## Time Complexity

```text
O(1)
```

---

# Tie Detection Algorithm

Checks all board cells.

## Time Complexity

```text
O(9)
```

---

# 17. Advantages

* Easy to understand
* Lightweight
* Minimal memory usage
* Interactive
* Beginner-friendly
* Cross-platform

---

# 18. Limitations

* No AI opponent
* No GUI
* No score tracking
* No networking

---

# 19. Future Enhancements

## Planned Upgrades

### 1. AI Opponent

* Minimax algorithm
* Difficulty levels

### 2. GUI Interface

* SFML
* Qt
* SDL

### 3. Multiplayer Online Support

* LAN gameplay
* Internet gameplay

### 4. Persistent Score System

* Win/loss tracking
* Statistics

### 5. Sound Effects

* Victory sound
* Move sound

### 6. Animated Board

* Better visual experience

### 7. Tournament Mode

* Best of 3
* Best of 5

### 8. Player Profiles

* Username system
* History tracking

---

# 20. Conclusion

The Tic-Tac-Toe Game Engine successfully demonstrates the practical implementation of C++ programming fundamentals through a fully interactive console game.

The project showcases:

* Object-Oriented Programming
* Matrix handling
* Input validation
* Game algorithms
* Console rendering
* State management

The application serves as an excellent beginner-to-intermediate level C++ project and provides a strong foundation for future game development projects.
