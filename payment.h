class Payment{

private:
  int p_ID;
  char p_Type[25];
  char p_Status[20];

public:
  void payment(int pP_ID, char pP_Type[], char pP_Status[]);
  void displayPaymentDetails();
  void addDetails();
  void getUpdatePaymentDetails();
  char removeDetails();
};
