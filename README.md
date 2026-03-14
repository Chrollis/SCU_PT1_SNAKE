# Snake Game (Qt Classic)

A feature-packed desktop version of the classic Snake game, built with **C++** and **Qt**.  
Supports single‑player, co‑op, VS mode, and an AI‑driven snake that plays by itself.

## Features

- **Multiple Game Modes**  
  - Single player – classic snake with growing length and speed.  
  - Cooperative (2P) – two snakes share the same food; avoid colliding.  
  - VS (2P) – two snakes compete; head‑to‑head decides winner by score.  
  - AI Demo – A* pathfinding snake runs in the menu; can even take over single‑player as an easter egg.

- **Difficulty Levels** – Easy, Normal, Hard, Extreme (affect starting speed).  
- **Dynamic Speed** – Snake speeds up every 50 points (or when the higher score in VS mode is divisible by 50).  
- **Two Food Types**  
  - Tomato – normal food (+10 pts).  
  - Domado – limited‑time food (+50 pts) that flashes.  
- **Persistent High Scores** – Top 10 (single) / top 5 (co‑op) saved locally.  
- **Pause / Game Over Overlays** – Clean UI using `QStackedWidget`.  
- **Hand‑drawn Sprites** – Retro pixel art style (head, body, tail, food, icons).  
- **Cross‑Platform** – Works on Windows, Linux, macOS (Qt everywhere).

---
## How to Play

- **Player 1** – `W` `A` `S` `D`  
- **Player 2** – `I` `J` `K` `L` (co‑op / VS modes)  
- **Pause** – `P`  
- **Menu navigation** – Mouse clicks

### Rules
- No instant 180° turns (cannot reverse direction).  
- Game ends if a snake hits:
  - the wall,
  - its own body, or
  - the opponent's body.
  - *Co‑op mode*: snakes try to avoid each other.  
  - *VS mode*: head‑to‑head collision decides winner (higher score wins; if equal, Player 1 wins).  
- Food spawns at a fixed interval, independent of snake speed.

---

## Technical Highlights

- **Rendering** – `QGraphicsView` / `QGraphicsScene` for smooth 2D drawing.  
- **State Management** – `QStackedWidget` to switch between menu, game, pause, and game over screens.  
- **Collision & Occupancy** – `QMap<QPoint, Entity*>` for O(log n) lookups of occupied cells.  
- **AI Pathfinding** – A* algorithm with open/closed lists (used in menu demo and easter egg).  
- **Randomness** – `QRandomGenerator` for random food placement.  
- **Memory Safety** – Careful handling of `QGraphicsScene` ownership to avoid crashes.

---

## Acknowledgements

- [Qt Documentation](https://doc.qt.io) – indispensable reference.  
- **Ark Pixel Font** – open‑source 12px proportional font used in the UI.
