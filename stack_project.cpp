
#include<iostream>
#define max_size 5
using namespace std;
template<class type>
class Stack
{
        public:
                int TOP;
                type stk[max_size];

                Stack()
                {
                        TOP=-1;
                }
                void push()
                {
                        if(TOP >= max_size-1)
                        {
                                cout << "STACK IS OVER FLOW...!\n" << endl;
                                return;
                        }
                        TOP++;
                        type n;
                        cout << "enter element to add" << endl;
                        cin >> n;
                        stk[TOP] = n;
                }
                void pop()
                {
                        if(TOP <= -1)
                        {
                                cout << "\034[37mstack underflow\033[0m" << endl;
                                return;
                        }
                        cout << "\033[31m" << stk[TOP] << "  Deleted\033[0m" << endl;
                        TOP--;
                }
                void display()
                {
                        if(TOP<=-1)
                        {
                                cout << "\033[33mStack is empty \033[0m" << endl;
                                return;
                        }
                        int i;
                        for(i=0;i<=TOP;i++)
                                cout <<"\033[33m" << stk[i] << " " << "\033[0m";
                        cout << endl;
                }
};
void count(int a)
{
        static int c=0;
        if(a==0)
        {
                c++;
                if(c>=3)
                {
                        cout << "\033[031mThanks for using our apllication, Please read the manual and comeback properly" << endl;
                        exit(0);
                }
                else if(c==1)
                        cout << "\033[034mPlease read the instructions carefully" << endl;
                else if(c==2)
                        cout << "\033[035mLast chance please take care" << endl;
        }
        else
                c=0;
}
int main()
{
        int op,si=0,sc=0,sf=0,sd=0,ss=0;
        Stack<int> Si;
        Stack<char> Sc;
        Stack<float> Sf;
        Stack<double> Sd;
        Stack<string> Ss;
main_menu:
        while(1)
        {
		  
                cout<<"PLEASE ENTER YOUR OPTION..!"<<endl;
                cout << "\033[32m1. int    2.char    3.float    4.double    5.string    6.exit\033[0m" << endl;

                cin >> op;
                int op1,op2;
                switch(op)
                {
                        case 1:count(1);
                               si++;

                               if(si>1)
                               {
                                       cout <<"\033[30m1) continue_old_stack 2)new_stack\033[0m" << endl;
                                       cin >> op2;
                                       switch(op2)
                                       {
                                               case 1:goto old_int_stack;break;
                                               case 2:goto new_int_stack;
                                                      break;
                                               default:count(0);goto main_menu;
                                       }

                               }
new_int_stack:Si.TOP=-1;
old_int_stack:
	      cout << "\033[36mint stack application is ready to use\033[0m" << endl;
              while(1)
              {
                      cout << "\033[35m1.push 2.pop 3.display_stack 4.main_menu\033[0m" << endl;
                      cin >> op1;
                      switch(op1)
                      {
                              case 1:Si.push();break;
                              case 2:Si.pop();break;
                              case 3:Si.display();break;
                              case 4:goto main_menu;break;
                              default:count(0);goto main_menu;
                      }
              }
              break;
                        case 2:count(1);
                               sc++;
                               if(sc>1)
                               {
                                       cout <<"\033[34m1) continue_old_stack 2)new_stack\033[0m" << endl;
                                       cin >> op2;
                                       switch(op2)
                                       {
                                               case 1:goto old_char_stack;break;
                                               case 2:goto new_char_stack;
                                                      break;
                                               default:count(0);goto main_menu;
                                       }

                               }

new_char_stack:Si.TOP=-1;
old_char_stack:
               cout << "\033[36mchar stack application is ready to use\033[0m" << endl;
               while(1)
               {
                       cout << "\033[35m1.push 2.pop 3.display_stack 4.main_menu\033[0m" << endl;
                       cin >> op1;
                       switch(op1)
                       {
                               case 1:Sc.push();break;
                               case 2:Sc.pop();break;
                               case 3:Sc.display();break;
                               case 4:goto main_menu;break;
                               default:count(0);goto main_menu;
                       }
               }

                        case 3:count(1);
                               sf++;
                               if(sf>1)
                               {
                                       cout << "\033[34m1)continue_old_stack 2)new_stack\033[0m" << endl;
                                       cin >> op2;
                                       switch(op2)
                                       {
                                               case 1: goto old_float_stack;break;
                                               case 2: goto new_float_stack;break;
                                               default:count(0);goto main_menu;
                                       }

                               }
new_float_stack: Sf.TOP=-1;
old_float_stack:
   cout << "\033[036mfloat stack application is ready to use\033[0m" << endl;
                 while(1)
                 {
                         cout << "\033[35m1.push 2.pop 3.display_stack 4.main_menu\033[0m" << endl;
                         cin >> op1;
                         switch(op1)
                         {
                                 case 1:Sf.push();break;
                                 case 2:Sf.pop();break;
                                 case 3:Sf.display();break;
                                 case 4:goto main_menu;break;
                                 default:count(0);goto main_menu;
                         }
                 }
                 break;
                        case 4:count(1);
                               sd++;
                               if(sd>1)
                               {
                                       cout << "\033[34m1)Continue_old_stack 2)new_stack \033[0m" << endl;
                                       cin >> op2;
                                       switch(op2)
                                       {
                                               case 1:goto old_double_stack;break;
                                               case 2:goto new_double_stack;break;
                                               default:count(0);goto main_menu;
                                       }
                               }
                               cout << "\033[36mDouble stack application is ready to use\033[0m" << endl;
new_double_stack:Sf.TOP=-1;
old_double_stack:
                 while(1)
                 {
                         cout << "\033[35m1.push 2.pop 3.display_stack 4.main_menu\033[0m" << endl;
                         cin >> op1;
                         switch(op1)
                         {
                                 case 1:Sd.push();break;
                                 case 2:Sd.pop();break;
                                 case 3:Sd.display();break;
                                 case 4:goto main_menu;break;
                                 default:count(0);goto main_menu;
                         }
                 }
                 break;
                        case 5:count(1);
                               ss++;
                               if(ss>1)
                               {
                                       cout << "\033[34m1)Continue_old_stack  2)new_stack\033[0m" << endl;
                                       cin >> op2;
                                       switch(op2)
                                       {
                                               case 1:goto old_string_stack;break;
                                               case 2:goto new_string_stack;break;
                                               default:count(0);goto main_menu;
                                       }
                               }
                               cout << "\033[36mstring stack application is ready to use\033[0m" << endl;
new_string_stack:Ss.TOP=-1;
old_string_stack:
                 while(1)
                 {
                         cout << "\033[035m1.push 2.pop 3.display_stack 4.main_menu\033[0m" << endl;
                         cin >> op1;
                         switch(op1)
                         {
                                 case 1:Ss.push();break;
                                 case 2:Ss.pop();break;
                                 case 3:Ss.display();break;
                                 case 4:goto main_menu;break;
                                 default:count(0);goto main_menu;
                         }
                 }
                 break;
                        case 6: count(1);
                                exit(0);
                        default:count(0);goto main_menu;
                }

        }
}
                                                                                                            
