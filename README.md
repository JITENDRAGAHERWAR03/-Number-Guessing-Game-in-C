# 🎯 Number Guessing Game in C

A simple **console-based Number Guessing Game** written in **C**.  
The program generates a random number between **1 and 100**, and the player must guess it with hints provided after each attempt.

---

## 🚀 Features

- 🎲 Random number generation using `rand()`  
- ⏱ Different result on every run using `srand(time(NULL))`  
- 📈 Helpful hints:
  - Guess too low → *Enter a larger number*
  - Guess too high → *Enter a smaller number*
- 🔢 Counts total number of attempts
- 🖥 Simple and beginner-friendly console UI

---

## 🛠️ Tech Stack

- **Language:** C  
- **Libraries Used:**
  - `stdio.h`
  - `stdlib.h`
  - `time.h`

---

## 📂 Project Structure

```
Number-Guessing-Game/
│
├── guessing_game.c
└── README.md
```
---

## ▶️ How to Run the Program

### 1️⃣ Clone the Repository
```bash
git clone https://github.com/your-username/number-guessing-game.git
```
2️⃣ Navigate to Project Folder
```
cd number-guessing-game
```
3️⃣ Compile the Program
```
gcc guessing_game.c -o guessing_game
```
4️⃣ Run the Game
```
./guessing_game
```
---
🧠 Game Logic Explained

The program generates a random number between 1 and 100

The user enters a guess

The program gives hints until the correct number is guessed

Total attempts are displayed at the end

---
🖥 Sample Output
Welcome to the world of guessing number game!

Please Enter the number between 1 to 100: 45
Enter the larger number

Please Enter the number between 1 to 100: 72
Enter the smaller number

Please Enter the number between 1 to 100: 63
Congratulations!!! You have guessed the number in 3 attempts

Bye Bye! Thank you for playing the game
Developed by: @jitendra

---
📌 Future Improvements

✅ Input validation

🎮 Difficulty levels (Easy / Medium / Hard)

🔁 Replay option

🏆 Performance rating based on attempts

---
👨‍💻 Author

Jitendra Gaherwar

🎓 B.Tech IT Student

💻 Beginner C Programmer & Aspiring Software Developer

---
⭐ Support

If you like this project:

⭐ Star the repository

🍴 Fork it

🧠 Use it to learn C fundamentals

Happy Coding! 🚀
