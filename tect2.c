#include<stdio.h>
#include<signal.h>
  void sig_hand(int c)
  {
      printf("tttt");
  }
int main()
{
   signal(SIGINT, sig_hand);
    while (1)
    {
        printf("hello word \n");
        sleep(1);
    }
    return 0;
}

11110000 10011111 10100100 10100011
   240      159      164      163