#include <stdio.h>
#include <string.h>

struct airplane_reservation {
  char flight_number[50];
  char from_airport_code[4];
  char to_airport_code[4];
  char departure[6];
  char arrival[6];
};

typedef struct airplane_reservation reservation;

void print_reservation(reservation r){
  printf("flight number:%s\n", r.flight_number);
  printf("from_airport_code:%s\n", r.from_airport_code);
  printf("to_airport_code:%s\n", r.to_airport_code);
  printf("departure:%s\n", r.departure);
  printf("arrival:%s\n", r.arrival);
  printf("\n");

}

void listup_flight(char from1[], char from2[], reservation list[], int size){
  int i;
  for(i = 0; i < size; i++){
    if((strcmp(from1, list[i].from_airport_code))*(strcmp(from2, list[i].from_airport_code)) == 0)
      print_reservation(list[i]);
  }
}

int main(){
  reservation list[3];

  strcpy(list[0].flight_number, "flight number 1");
  strcpy(list[0].from_airport_code, "A11");
  strcpy(list[0].to_airport_code, "B11");
  strcpy(list[0].departure, "11:03");
  strcpy(list[0].arrival, "13:20");

  strcpy(list[1].flight_number, "flight number 2");
  strcpy(list[1].from_airport_code, "A11");
  strcpy(list[1].to_airport_code, "B22");
  strcpy(list[1].departure, "13:30");
  strcpy(list[1].arrival, "14:45");

  strcpy(list[2].flight_number, "flight number 3");
  strcpy(list[2].from_airport_code, "B11");
  strcpy(list[2].to_airport_code, "C11");
  strcpy(list[2].departure, "8:03");
  strcpy(list[2].arrival, "15:20");

  listup_flight("A11", "D04", list, 3);
}
