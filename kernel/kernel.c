/*
** Amaury PROJECT, 2022
** AmauryOS [WSL: Ubuntu-20.04]
** File description:
** kernel.c
*/

void main() {
    char* video_memory = (char*) 0xb8000;
    *video_memory = 'X';
}