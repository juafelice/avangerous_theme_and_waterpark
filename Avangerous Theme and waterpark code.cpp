//AVANGEROUS WATER AND THEME PARK
#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;
int main()
{

  string name, category= "", selectionAns, addOnAns;
  int numPhone, age, gazebo, qGazebo, locker, qLocker, boya, qBoya, quantity, ans, addOn, quantityC, quantityA, quantityS, totalAddOn;
  double fee, totalFee, totalAll, tax, price, priceA, priceC, priceS,  priceAddOn, date;
  char selection;

  cout<<"Enter your name         : ";
  getline(cin,name);
  cout<<"Enter your number phone : ";
  cin>>numPhone;
  cout<<"Date (dd.mm)            : ";
  cin>>date;
  cout<<"_____________________________________________________________"<<endl;
  cout<<"\n[A = 1-Day Theme Park] \n[B = 1-Day Double Park] \n[C = 1-Day Triple Park] " <<endl;
  cout<<"\nEnter your selection : ";
  cin>>selection;
   cout<<"_____________________________________________________________"<<endl;
  
  switch(selection)
  {
    case 'a':
    case 'A':
        
    selectionAns = "1-DAY THEME PARK";
    cout<<"\nDo you want to buy child's ticket? (3 - 11 years) \n[1 - YES] [0 - NO] : ";
    cin>>ans;
    
    if (ans==1)   // SELECTION A 
      {
        priceC = 59;
    
        cout<<"Please enter your quantity of person : ";
        cin>>quantity;
        
        fee = quantity * priceC;
        category = "CHILD" ;
      }
      
      cout<<"\nDo you want to buy adult's ticket? (12 - 59 years) \n[1 - YES] [0 - NO] : ";
      cin>>ans;
      
    if (ans==1)
      {
        priceA = 97;
        
        cout<<"Please enter your quantity of person: ";
        cin>>quantityA;
        
       fee = fee + (quantity * priceA);
        category = "ADULT";
      }
     cout<<"\nDo you want to buy senior's ticket? (60 + years) \n[1 - YES] [0 - NO] : ";
      cin>>ans; 
  
      if (ans==1)
        {
          priceS=59;
                
          cout<<"Please enter your quantity of person : ";
          cin>>quantityS;
                
          fee = fee + (quantity * priceS);
          category = "SENIOR";
        }
        
          cout<<"\nDo you want to add-on anything? \n[1 - YES] [0 - NO] : ";
          cin>>addOn;
          cout<<endl;
          
          switch (addOn)
          {
          case 1:
          
            cout<<"Do you want to add-on gazebo? \n[1 - YES] [0 - NO] : ";
            cin>>gazebo;
            
            if (gazebo == 1)
            {
              cout<<"How much gazebo do you want to add-on : ";
              cin>>qGazebo;
            
              priceAddOn = qGazebo * 60;
            }
            else
            {
              qGazebo = 0;
              price = 0;
            }
            cout<<"\nDo you want to add-on locker? \n[1 - YES] [0 - NO] : ";
            cin>>locker;
            
            if (locker == 1)
            {
              cout<<"How much locker do you want to add-on : ";
              cin>>qLocker;
              
               priceAddOn = priceAddOn + (qLocker * 10);
            }
            else
            {
              qLocker = 0;
              price = 0;
            }
            cout<<"\nDo you want to add-on boya? \n[1 - YES] [0 - NO] : ";
            cin>>boya;
            
            if (boya == 1)
            {
              cout<<"How much boya do you want to add-on : ";
              cin>>qBoya;
            
              priceAddOn = priceAddOn + (qBoya * 15);
            }
            else
            {
              qBoya = 0;
              price = 0;
            }
          break;
          default: 
          
         
          break;
        }
      		totalAddOn = priceAddOn ; 
		totalFee = fee + price;
    
		tax = totalFee * 0.06;
		totalAll = totalFee + tax;
    cout<<"==============================================================="<<endl;
    cout<<"|          WELCOME TO AVENGEROUS WATER AND THEME PARK!        |"<<endl;
    cout<<"==============================================================="<<endl;
    cout<<"|Name                         : "<<name<<endl;
    cout<<"|Number phone                 : "<<numPhone<<endl;
    cout<<"|Date						 : "<<date<<endl;
    cout<<"|Selection                    : "<<selectionAns<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|"<<endl;
    cout<<"|<Add - on>" <<endl;
    cout<<"|"<<endl;
    cout<<"|Quantity of Gazebo           : "<<qGazebo<<endl;
    cout<<"|Quantity of Boya             : "<<qBoya<<endl;
    cout<<"|Quantity of Locker           : "<<qLocker<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|"<<endl;
    cout<<"|Total Fee Add-On             : "<<totalAddOn<<endl;
    cout<<"|Tax                          : RM"<<tax<<endl;
    cout<<fixed <<setprecision(2) << "|Total Fee                    : RM"<<totalFee<<endl;
    cout<<fixed <<setprecision(2) << "|Total All                    : RM"<<totalAll<<endl;
    cout<<"|"<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;

	break;	
      
    case 'b':
    case 'B':
    	
    	selectionAns = "1-DAY DOUBLE PARK";
      cout<<"\nDo you want to buy child's ticket? (3 - 11 years) \n[1 - YES] [0 - NO] : ";
      cin>>ans;
         if (ans==1)
        {
          priceC = 119;
    
          cout<<"Please enter your quantity of person : ";
          cin>>quantity;
          fee = quantity * priceC;
          category = "CHILD" ;
        }
      
          cout<<"\nDo you want to buy adult's ticket? (12 - 59 years) \n[1 - YES] [0 - NO] : ";
          cin>>ans;
        
      if (ans==1)
        {
          priceA = 145;
        
          cout<<"Please enter your quantity of person: ";
          cin>>quantity;
          
          fee = fee + (quantity * priceA);
          category = "ADULT";
        }
          
          cout<<"\nDo you want to buy senior's ticket? (60 + years) \n[1 - YES] [0 - NO] : ";
          cin>>ans; 
      
      if (ans==1)      
        {
          priceS = 119;
                
          cout<<"Please enter your quantity of person : ";
          cin>>quantity;
                
        	fee = fee + (quantity * priceS);
        	category = "SENIOR";
        }
          cout<<"\nDo you want to add-on anything? \n[1 - YES] [0 - NO] : ";
          cin>>addOn;
          cout<<endl;
          
          switch (addOn)
          {
          case 1:
          
            cout<<"Do you want to add-on gazebo? \n[1 - YES] [0 - NO] : ";
            cin>>gazebo;
            
            if (gazebo == 1)
            {
              cout<<"How much gazebo do you want to add-on : ";
              cin>>qGazebo;
            
              priceAddOn = qGazebo * 60;
            }
            else
            {
              qGazebo = 0;
              price = 0;
            }
            cout<<"\nDo you want to add-on locker? \n[1 - YES] [0 - NO] : ";
            cin>>locker;
            if (locker == 1)
            {
              cout<<"How much locker do you want to add-on : ";
              cin>>qLocker;
              
               priceAddOn = priceAddOn + (qLocker * 10);
            }
            else
            {
              qLocker = 0;
              price = 0;
            }
            cout<<"\nDo you want to add-on boya? \n[1 - YES] [0 - NO] : ";
            cin>>boya;
            
            if (boya == 1)
            {
              cout<<"How much boya do you want to add-on : ";
              cin>>qBoya;
            
              priceAddOn = priceAddOn + (qBoya * 15);
            }
            else
            {
              qBoya = 0;
              price = 0;
            }
          break;
          default: 
          
         
          break;
        }
        
		totalAddOn = priceAddOn ; 
		totalFee = fee + price;
    
		tax = totalFee * 0.06;
		totalAll = totalFee + tax;
    
    cout<<"==============================================================="<<endl;
    cout<<"|          WELCOME TO AVENGEROUS WATER AND THEME PARK!        |"<<endl;
    cout<<"==============================================================="<<endl;
    cout<<"|Name                         : "<<name<<endl;
    cout<<"|Number phone                 : "<<numPhone<<endl;
    cout<<"|Selection                    : "<<selectionAns<<endl;
    cout<<"|Date						 : "<<date<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|"<<endl;
    cout<<"|<Add - on>" <<endl;
    cout<<"|"<<endl;
    cout<<"|Quantity of Gazebo           : "<<qGazebo<<endl;
    cout<<"|Quantity of Boya             : "<<qBoya<<endl;
    cout<<"|Quantity of Locker           : "<<qLocker<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|"<<endl;
    cout<<"|Total Fee Add-On             : "<<totalAddOn<<endl;
    cout<<"|Tax                          : RM"<<tax<<endl;
    cout<<fixed <<setprecision(2) << "|Total Fee                    : RM"<<totalFee<<endl;
    cout<<fixed <<setprecision(2) << "|Total All                    : RM"<<totalAll<<endl;
    cout<<"|"<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;

	break;

      case 'c':
      case 'C':
        
        selectionAns = "1-DAY TRIPLE PARK";
      cout<<"\nDo you want to buy child's ticket? (3 - 11 years) \n[1 - YES] [0 - NO] : ";
      cin>>ans;
    
      if (ans==1)
        {
          priceC = 155;
    
          cout<<"Please enter your quantity of person : ";
          cin>>quantity;
          fee = quantity * priceC;
          category = "CHILD" ;
        }
        cout<<"\nDo you want to buy adult's ticket? (12 - 59 years) \n[1 - YES] [0 - NO] : ";
        cin>>ans;
              if (ans==1)
        {
          priceA = 190;
        
          cout<<"Please enter your quantity of person: ";
          cin>>quantity;
          
          fee = fee + (quantity * priceA);
          category = "ADULT";
        }
      
          cout<<"\nDo you want to buy senior's ticket? (60 + years) \n[1 - YES] [0 - NO] : ";
          cin>>ans; 
      
      if (ans==1)
              
        {
          priceS = 155;
                
          cout<<"Please enter your quantity of person : ";
          cin>>quantityS;
                
          fee = fee + (quantity * priceS);
          category = "SENIOR";
        }
       
          cout<<"\nDo you want to add-on anything? \n[1 - YES] [0 - NO] : ";
          cin>>addOn;
          cout<<endl;
          
          switch (addOn)
          {
          case 1:
          
            cout<<"Do you want to add-on gazebo? \n[1 - YES] [0 - NO] : ";
            cin>>gazebo;
            
            if (gazebo == 1)
            {
              cout<<"How much gazebo do you want to add-on : ";
              cin>>qGazebo;
            
              priceAddOn = qGazebo * 60;
            }
            else
            {
              qGazebo = 0;
              price = 0;
            }
            cout<<"\nDo you want to add-on locker? \n[1 - YES] [0 - NO] : ";
            cin>>locker;
            
            if (locker == 1)
            {
              cout<<"How much locker do you want to add-on : ";
              cin>>qLocker;
      
               priceAddOn = priceAddOn + (qLocker * 10);
            }
            else
            {
              qLocker = 0;
              price = 0;
            }
            cout<<"\nDo you want to add-on boya? \n[1 - YES] [0 - NO] : ";
            cin>>boya;
            
            if (boya == 1)
            {
              cout<<"How much boya do you want to add-on : ";
              cin>>qBoya;
            
              priceAddOn = priceAddOn + (qBoya * 15);
            }
            else
            {
              qBoya = 0;
              price = 0;
            }
          break;
          default: 
          
          break;
        }
   		totalAddOn = priceAddOn ; 
		totalFee = fee + price;
		tax = totalFee * 0.06;
		totalAll = totalFee + tax;
 cout<<"==============================================================="<<endl;
    cout<<"|          WELCOME TO AVENGEROUS WATER AND THEME PARK!        |"<<endl;
    cout<<"==============================================================="<<endl;
    cout<<"|Name                         : "<<name<<endl;
    cout<<"|Number phone                 : "<<numPhone<<endl;
    cout<<"|Selection                    : "<<selectionAns<<endl;
    cout<<"|Date						 : "<<date<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|"<<endl;
    cout<<"|<Add - on>" <<endl;
    cout<<"|"<<endl;
    cout<<"|Quantity of Gazebo           : "<<qGazebo<<endl;
    cout<<"|Quantity of Boya             : "<<qBoya<<endl;
    cout<<"|Quantity of Locker           : "<<qLocker<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;
    cout<<"|"<<endl;
    cout<<"|Total Fee Add-On             : "<<totalAddOn<<endl;
    cout<<fixed <<setprecision(2) << "|Tax                          : RM"<<tax<<endl;
    cout<<fixed <<setprecision(2) << "|Total Fee                    : RM"<<totalFee<<endl;
    cout<<fixed <<setprecision(2) << "|Total All                    : RM"<<totalAll<<endl;
    cout<<"|"<<endl;
    cout<<"|--------------------------------------------------------------"<<endl;

		break;	 
        default:
          selectionAns= "invalid";
          cout<<"Invalid selection, please try again"<<endl;
        break;
		}
	
  return 0;
}
