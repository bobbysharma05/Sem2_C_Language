#include<stdio.h>

void sail_southEast(int *latitude,int *longitude){
    (*latitude)--;
    (*longitude)++;
    
}

void sail_southWest(int *latitude,int *longitude){
    (*latitude)--;
    (*longitude)--;

}

void sail_northEast(int *latitude,int *longitude){
    (*latitude)++;
    (*longitude)++;

}

void sail_northWest(int *latitude,int *longitude){
    (*latitude)++;
    (*longitude)--;

}


int main(){
    int latitude, longitude;
    printf("Enter the location (Latitude and Longitude) = ");
    scanf("%d %d",&latitude, &longitude);
    sail_southEast(&latitude,&longitude);
    sail_southEast(&latitude,&longitude);
    sail_northEast(&latitude,&longitude);
    sail_northWest(&latitude,&longitude);
    sail_southWest(&latitude,&longitude);
    printf("%d %d",latitude,longitude);
    return 0;
}