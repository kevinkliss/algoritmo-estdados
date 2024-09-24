#include <stdio.h>

//Faça um programa que peça o tamanho de um arquivo para download (em MB) e a velocidade de um link de Internet (em Mbps), calcule e informe o tempo aproximado de download do arquivo usando este link EM MINUTOS.

int main(void){

    //Create variables
    double file_size, download_speed;
    int download_time, seconds;

    //Get the file size from the user
    printf("Say file's size [MB]: ");
    scanf("%lf", &file_size);

    //Get the download speed from the user
    printf("Say download's speed [Mbps]: ");
    scanf("%lf", &download_speed);

    //Convert download speed from Mbps to MBs
    download_speed = download_speed / 8;

    //Calculate download time in minutes:
    download_time = (file_size / download_speed) / 60;
    //Calculate seconds
    seconds = (int)(file_size / download_speed) % 60;
   
    //Display the download time
    printf("Time to download the file: %d minutes and %d seconds", download_time, seconds);

    return 0;
}