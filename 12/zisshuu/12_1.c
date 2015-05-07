#include <stdio.h>
#include <string.h>
struct mailing {
  char name[60];
  char address[60];
  char address2[60];
  char city[40];
  char state[2];
  long int zip;
};

struct mailing list[2];

void print_mailing(struct mailing mailing){
  printf("name:%s\n", mailing.name);
  printf("address:%s\n", mailing.address);
  printf("address2:%s\n", mailing.address2);
  printf("city:%s\n", mailing.city);
  printf("state:%c%c\n",mailing.state[0], mailing.state[1]);
  printf("zip:%d\n", mailing.zip);
}

int main(){

  strcpy(list[0].name, "hoge");
  strcpy(list[0].address, "hoge");
  strcpy(list[0].address2, "hoge");
  strcpy(list[0].city, "hoge");
  list[0].state[0] = 'A';
  list[0].state[1] = 'B';
  list[0].zip =  11111111;

  print_mailing(list[0]);
}
