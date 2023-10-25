#include <stdio.h>

void main(){
    // membuat array
    string contact[] = {"Ami", "Ayu", "Budi", "Agus", "Mila"};

    //  mengambil banyaknya isi array
    int length = sizeof(contact) / sizeof(*contact);

    printf("Banyaknya isi array nilai: %d\n", length);
}
