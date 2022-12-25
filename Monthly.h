class Monthly {
private: 
       int MRevID;
       char MRevName[40];      
       char MemberName[20];
       char ContactNO[10];
       
       
public: 
  Monthly();
  void setMonthlyDetails(int MID,const char MName[],const char cName[], const char cNo[]);
  void displayMonthlyDetails();
  void updateMonthlyDeatils();
  ~Monthly(void);
};
