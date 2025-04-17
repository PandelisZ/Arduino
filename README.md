# Solitaire: The Bead Game
Welcome to **Solitaire: The Bead Game**!
This guide will walk you through, in detail and with ASCII art, how to play each round.
---
## 🟣 Game Overview
Solitaire: The Bead Game is a one-player puzzle game using a board with wells (holes) and beads (stones/marbles). Your goal is to remove beads by "jumping" one bead over another into an empty well. The aim is to finish the game with as few beads as possible—ideally just a single one in the center!
---
## 🕹️ Board Setup
Here's the classic "English" solitaire bead board:
```
    O O O
    O O O
O O O O O O O
O O O _ O O O
O O O O O O O
    O O O
    O O O
```
- Each `O` is a **bead**.
- Each `_` is an **empty well** (the starting empty spot).
---
## 📋 How to Play: Rules
1. **Jumping:** You remove a bead by jumping another bead over it into an empty well, horizontally or vertically (NOT diagonally).
2. The bead that is jumped over is removed from the board.
3. Only one bead may be jumped at a time.
4. A move consists of:
   - Selecting a bead to jump.
   - Jumping that bead over an adjacent (horizontally/vertically) bead, *into a directly next empty well*.
   - Removing the bead that was jumped over.
---
## 🔄 Example of a Move (With ASCII Art)
### Starting Area
Suppose we are near the center, with:
```
O O O
O O O
O O O
O O _ O O O O
O O O O O O O
  O O O
  O O O
```
Let's say you want to move a bead into the center empty space (`_`).
Let’s pick the bead just above the center (let's call it position marked by `A`):
#### Step 1: Mark possible move
```
    O O O
    O O O
O O O A O O O
O O O _ O O O
O O O O O O O
    O O O
    O O O
```
`A` is the bead we'll move DOWN over the bead below it.
#### Step 2: After Move
- Bead at `A` jumps over bead below it into the center (`_`).
- The bead that was jumped over is removed.
```
    O O O
    O O O
O O O _ O O O
O O O O O O O
O O O O O O O
    O O O
    O O O
```
(Notice: center position is now `O`, the bead above that space (`A`) became empty, and the bead that was jumped over is removed.)
---
## ▶️ Playing Each Round, Step by Step
1. **Look for a bead with an adjacent (up, down, left, or right) bead and, right next to that, an empty spot.**
2. **Select the bead to jump.**
   - Example:
     ```
     A B _
     ```
     Bead `A` can jump over `B` into the empty space.
3. **Make the jump.**
   - Remove bead `B` (the one jumped over).
   - The starting position of `A` becomes empty.
   - Place a bead in place of the empty position.
   - ASCII diagram:
     ```
     _ _ O       After: _ _ O
     A B _      Moves: _ _ O
     ```
     (Where `A`'s spot is now `_`, `B` is gone, and the previous `_` is now `O`.)
---
## 🏁 End of the Game
- Continue moving beads and removing the jumped bead each move.
- **Try to finish with a single bead remaining, ideally in the center well!**
---
## 🖌️ More ASCII Move Examples
### Example 1: Horizontal Jump
```
Before:
O O _
Choose:
A B _  (move bead `A` right over `B` into `_`)
After:
_ _ O
```
### Example 2: Vertical Jump
```
Before:
O
O
_
Choose:
A
B
_
(move bead `A` DOWN over `B` to the empty spot `_`)
After:
_
_
O
```
---
## 💡 Tips for Success
- **Plan ahead:** Moves you make now can limit your options later!
- **Aim for symmetry:** Try to keep your moves balanced to avoid stranding beads at the corners.
- **Practice makes perfect:** The more you play, the more patterns you'll see.
---
## ♟️ Sample Game Flow (Partial)
Here's what the board might look like through a series of moves:
```
Start:
    O O O
    O O O
O O O O O O O
O O O _ O O O
O O O O O O O
    O O O
    O O O
```
- First move: Jump a central bead into the middle.
```
    O O O
    O O O
O O O O O O O
O O _ O O O O
O O O _ O O O
    O O O
    O O O
```
_and so on..._
---
## 🎯 Objective
Finish the game with only **one bead left**—ideally in the center position!
---
Enjoy playing **Solitaire: The Bead Game**!
Let the beads challenge your mind and patience. 😊