/*Bank structure (Chapter 17) [B] (b) Page 304 */
/* Author: Sai Date: 2/10/2022 */

#include <stdio.h>

struct bank_customer
{
  int account_number;
  char* name;
  float balance;
}customers[200]={
  {123,"Sai",5000.00},
  {234,"Vikram",54000.00},
  {193,"Mukesh",500.00},
  {113,"Swarada",8000.00},
  {153,"Raja",800.00}
};

void balance_below(struct bank_customer[]);
void withdrawal(int,float,int,struct bank_customer[]);

int main(){
  balance_below(customers);
  withdrawal(234,4000,0,customers);
  withdrawal(193,500,1,customers);
  withdrawal(153,1000,0,customers);

  printf("%f\n",customers[2].balance);

  return 0;
}

void balance_below(struct bank_customer people[]){
  int i;
  for (i=0;i<200;i++){
    if ((people[i].balance < 1000) && (people[i].name!=NULL)){
      printf("%s whose account number is %d.\n",people[i].name,people[i].account_number);
    }
  }
}

void withdrawal(int acc,float money, int in_out ,struct bank_customer people[]){
  int i;
  for (i=0;i<200;i++){
    if (people[i].account_number == acc){
      if ((people[i].balance-money > 1000) || (in_out == 1)){
        if (in_out == 0){
          people[i].balance = people[i].balance - money;
        } else if (in_out == 1){
          people[i].balance = people[i].balance + money;
        }
      } else {
        printf("The balance is insufficient for the specified withdrawal.\n");
      }
    }
  }
}
