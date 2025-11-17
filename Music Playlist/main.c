#include <stdio.h>
#include <string.h>

int main() {
    char songs[100][100];
    int count = 0;
    int choice, i, pos, found, n;
    char search[100];

    while (1) {
        printf("\n===== MUSIC PLAYLIST =====\n");
        printf("1. Add Song(s)\n");
        printf("2. Show Playlist\n");
        printf("3. Search Song\n");
        printf("4. Delete Song\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear buffer

        // 1️⃣ Add songs
        if (choice == 1) {
            if (count == 100) {
                printf("Playlist full!\n");
            } else {
                printf("How many songs do you want to add? ");
                scanf("%d", &n);
                getchar(); // clear enter key
                if (count + n > 100) {
                    printf("Not enough space in playlist!\n");
                    continue;
                }

                for (i = 0; i < n; i++) {
                    printf("Enter song %d: ", i + 1);
                    fgets(songs[count], 100, stdin);

                    // Manually remove '\n'
                    int len = strlen(songs[count]);
                    if (len > 0 && songs[count][len - 1] == '\n') {
                        songs[count][len - 1] = '\0';
                    }

                    count++;
                }
                printf("%d song(s) added!\n", n);
            }
        }

        // 2️⃣ Show playlist
        else if (choice == 2) {
            if (count == 0)
                printf("No songs in playlist!\n");
            else {
                printf("\nYour Playlist:\n");
                for (i = 0; i < count; i++) {
                    printf("%d. %s\n", i + 1, songs[i]);
                }
            }
        }

        // 3️⃣ Search song
        else if (choice == 3) {
            if (count == 0)
                printf("Playlist empty!\n");
            else {
                printf("Enter song name to search: ");
                fgets(search, 100, stdin);
                int len = strlen(search);
                if (len > 0 && search[len - 1] == '\n')
                    search[len - 1] = '\0';

                found = 0;
                for (i = 0; i < count; i++) {
                    if (strcmp(songs[i], search) == 0) {
                        printf("✅ Song found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if (found == 0)
                    printf("❌ Song not found!\n");
            }
        }

        // 4️⃣ Delete song
        else if (choice == 4) {
            if (count == 0)
                printf("Playlist empty!\n");
            else {
                printf("Enter song number to delete: ");
                scanf("%d", &pos);
                getchar(); // clear buffer

                if (pos < 1 || pos > count)
                    printf("Invalid position!\n");
                else {
                    for (i = pos - 1; i < count - 1; i++) {
                        strcpy(songs[i], songs[i + 1]);
                    }
                    count--;
                    printf("Song deleted!\n");
                }
            }
        }

        // 5️⃣ Exit
        else if (choice == 5) {
            printf("Exiting... 🎵\n");
            break;
        }

        // ❌ Invalid choice
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
