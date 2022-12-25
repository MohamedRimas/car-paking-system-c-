class Hourly {
private: 
       int HRevID;
       char HRevName[40];      
       char CustomerName[20];
       char ContactNo[10];
            
public: 
   Hourly();
   void setHourlyDetails(int H_ID,const char hName[],const char cName[],const char cNo[]);
   void displayHourlyDetails();
   void updateHourlyDeatils();
   ~Hourly(void);

};