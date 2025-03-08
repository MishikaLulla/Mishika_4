
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{ int choice,bcode,mcode,idate,rdate,code;
  ofstream fout;
  ifstream fin;
   string login,password,n,bn,name,mname,type,bookn; 
     


  cout<<"                                           welcome to library";
    do{
    cout<<endl<<"---------------------------------------------------------------------------------------";
  cout<<"\n1-->member section";
 cout<<"\n2-->librarian";
  cout<<"\n3-->rule book";
  cout<<"\n4-->exit";
  cout<<endl<<endl<<"Please enter the choice";
   cin>>choice;

  switch(choice)
  {
     case 1: cout<<"\nmember section \n****your details****";
      
/*string mname;
string bookn;
string type; */
fin.open("bookdetails.xls");
if (fin.is_open()) {
    cout << "File has been opened" << endl;
}
    else {
    cout << "NO FILE HAS BEEN OPENED" << endl;
}


while (!fin.eof()) {
fin>> mname;
    fin >> bookn;
    fin >> type;
    cout << mname << "\t"<<endl;
  //  cout<<mcode<<"\t";
    cout<< bookn<< "\t"<<endl;
    //cout<<bcode<<"\t";
   // cout<<idate<<"\t";
    //cout<<rdate<<"\t";
   cout << type << "\t"<<endl;
   
   
    }
    fin.close();

                                      
					                   
					                      break;
      case 2:
     // do{
      
       cout<<"\nsection for librarian";
                   int choose;

		       cout<<"\nenter your choice \n1-->data(login/view) \n2-->book(issue/entry)\n3-->exit";
		       cin>>choose;
          
             switch(choose)
            { case 1: cout<<"data";
                            int c;
				do{	
                            cout<<"\n1-->create id\n2-->view registered data\n3-->Go to Previous";
                            cin>>c;
					  switch(c)
					  {case 1:cout<<"create id for new user";
					   			fout.open("libdata.xls",ios::app);
		          	   	     	cout<<endl<<"\nEnter Login Name without space ";
					      		cin>>login;
					   			cout<<"\nEnter Password";
					   			cin>>password;
					   			cout<<"\nAre you faculty or a student?";
					   			cin>>type;
					   			
					   			fout<<endl<<login<<"\t"<<password<<"\t"<<type;
					   			 fout.close();
					  			 break;
					   case 2: cout<<"registered data for old members";
					                   string login,password,type;
					                    fin.open("libdata.xls");
					                    while(getline(fin,login))
					                  	       cout<<endl<<login;
					                      fin.close();
					                      break;
						//case 3: break;
					        }      
							                         
				       }while(c!=3);              
					
					        break;
					            
            case 2: cout<<"book";
					  int ch;
					do{ 	
					  cout<<"\n 1-->member entry \n2-->add book \n3-->view available books \n4-->search book\n5-->Goto previous menu";
					  cin>>ch;
					  switch(ch)
					  {case 1:cout<<"enter details-->member name \nmember code \nbook name \nbook code \nissue date \nreturn date \ntype" ;
					   			fout.open("bookdetails.xls",ios::app);
					   			cout<<"\nmember's name without space";
					   			cin>>mname;
					   			 cout<<"\nEnter member code";
					   			cin>>mcode;
		          	   	     	cout<<endl<<"\nEnter book Name without space ";
					      		cin>>bookn;
					   			cout<<"\nEnter book code";
					   			cin>>bcode;
					               cout<<"\n max days to keep a book";
					               cin>>idate;
					               cout<<"\n returned in days";
					               cin>>rdate;
					               cout<<"\n faculty or student";
					               cin>>type;
					               fout<<endl<<mname<<"\t"<<mcode<<"\t"<<bookn<<"\t"<<bcode<<"\t"<<idate<<"\t"<<rdate<<"\n"<<type;
					               fout.close();
					  break;
					  case 2:cout<<"add book";
					  fout.open("booksdata.xls",ios::app);
		          	   	     	cout<<endl<<"\nEnter book Name without space ";
					      		cin>>n;
					   			cout<<"\nEnter book code";
					   			cin>>code;
					              fout<<endl<<n<<"\t"<<code;
					              fout.close(); 
					  break;
					  case 3:cout<<"view available books";
					   
					                    fin.open("booksdata.xls");
					                    while(getline(fin,n))
					                    cout<<endl<<n;
					                 
					                    
					                    fin.close();
					                    
					  break;
					/*  case 4:cout<<"search book";
					           
					              fin.open("booksdata.xls");
					              
					              while(fin)
					            { fin>>n>>code;
					                     cout<<endl<<"enter book name";
					                      cin>>bn;
					              if(bn==n)
					              break;
					              }
					              cout<<n<<code;
					              cout<<"\n----------------------------- \n------------------";
					              
					              
					                
					    	         break;
					    	         */
					    case 5: break;	         
					  }

					 }while(ch!=5) ;
			case 3: break;

            }		//End of Choose Switch
            break;
      //      }while(choose!=3);
         break;
      
       case 3: cout<<" 1. Access of library is for its members only\n2. Entry in the library shall be through proper identity card only.\n3. Every member is eligible to borrow maximum of four books and must be returned in 15 day against computerized identity card\n4. The book(s) issued should be returned before the due date,failing which, fine of 2 ruppes per day will be collected as per rules.\n5. The requisition for procurement of book(s) in library is available\n6. The availability of books can be checked through library computer.\n7. Library is not responsible for the loss \n8. In case of loss or damage of book(s), double cost of the book will be charged.";
                break;    
        case 4:  break;                
    }       
    }while(choice!=4) ;
  }
  
