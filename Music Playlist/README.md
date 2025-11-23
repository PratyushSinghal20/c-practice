# 🎵 Music Playlist Program (C)

This project is a simple **Music Playlist Manager** written in C using **arrays** and **string handling**. It allows users to add, view, search, and delete songs using a menu-driven program.

---

## 📌 Features

### ✔️ 1. Add Songs

* User can add one or multiple songs at a time.
* Each song is stored as a string in a 2D character array.
* Automatically prevents overflow if playlist is full.

### ✔️ 2. Show Playlist

* Displays the complete list of songs.
* Shows song number and its name.

### ✔️ 3. Search Song

* User can search for a song by name.
* Performs exact match using `strcmp()`.
* Shows the song position if found.

### ✔️ 4. Delete Song

* Deletes a song based on its position.
* Shifts all remaining songs upward to keep playlist continuous.

### ✔️ 5. Exit Program

* Stops the execution cleanly.

---

## 🧠 Concepts Used

* 2D arrays (`char songs[100][100]`)
* String handling functions: `fgets()`, `strlen()`, `strcmp()`, `strcpy()`
* Menu-driven programming using `while(1)` loop
* Input validation
* Basic data shifting for deletion

---

## ⚙️ How to Run

1. Save the program as `playlist.c`
2. Compile using any C compiler:

   ```bash
   gcc playlist.c -o playlist
   ```
3. Run the program:

   ```bash
   ./playlist
   ```

---

## 📂 Project Structure

```
📁 MusicPlaylist
│
├── playlist.c       # Main source code
└── README.md        # Project documentation
```

---

## 📘 Sample Menu Output

```
===== MUSIC PLAYLIST =====
1. Add Song(s)
2. Show Playlist
3. Search Song
4. Delete Song
5. Exit
Enter your choice:
```

---

## 🚀 Future Improvements

* Add file handling to save playlist permanently
* Add edit song option
* Add playlist shuffle feature
* Improve search to partial match (e.g., strstr)

---

## 👨‍💻 Author

**Pratyush**

Simple, clean, and easy C program for beginners learning arrays and string manipulation.

🎶 *Happy coding and enjoy managing your playlist!*
