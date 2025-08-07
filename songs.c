#include <stdio.h>

struct Song {
    char title[100];
    char artist[100];
    int duration; // seconds
};

int main() {
    struct Song s;

    printf("Enter song title: ");
    scanf("%s", s.title);
    printf("Enter artist: ");
    scanf("%s", s.artist);
    printf("Enter duration (in seconds): ");
    scanf("%d", &s.duration);

    printf("\n🎵 Now Playing:\n");
    printf("Title: %s\nArtist: %s\nDuration: %d sec\n", s.title, s.artist, s.duration);
    return 0;
}
