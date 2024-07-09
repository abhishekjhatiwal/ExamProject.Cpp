#include<iostream>
using namespace std;

void start_game();
void end_game(int);

int main(){
    string user_input;
    cout<<" ====================Welcome=========================="<<endl;
    cout<<"If you want to start the game then enter 'start' to start :  "<<endl;
    cin>>user_input;

    if (user_input == "start")
    {
        // cout<<" User Entered Play ";
        cout<<" If your answer is correct, then you get 4 points; otherwise, you lose 1 point "<< endl;
        start_game();
    }
    else
    {
        // cout<<"User Didn't Enter play ";
        end_game(0);
    }
    
    return 0;
}

void start_game(){
    char answer;
    int score = 0;

    // Question Start hear
    cout<<"\nQ1. How nuch is 3+3 : "<<endl;
    cout<<" (a) 4"<<endl;
    cout<<" (b) 6"<<endl;
    cout<<" (c) 1"<<endl;
    cout<<" (d) 3"<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'b'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ2. Who is the CEO of Google : "<<endl;
    cout<<" (a) Bill Gates"<<endl;
    cout<<" (b) Jeff Bezose "<<endl;
    cout<<" (c) Suleman"<<endl;
    cout<<" (d) Sundar Pichai"<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'd'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

    cout<<"\nQ3. A sum of money invested at simple interest triples itself in 8 years and becomes n times in 20 years. What is the value of n? "<<endl;
    cout<<" (a) 5 "<<endl;
    cout<<" (b) 6 "<<endl;
    cout<<" (c) 7.5 "<<endl;
    cout<<" (d) 9 "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'b'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

    cout<<"\nQ4. The difference between the simple interest and compound interest on Rs. 100 at 10% for 2 years is ? "<<endl;
    cout<<" (a) 10 "<<endl;
    cout<<" (b) 1 "<<endl;
    cout<<" (c) 5 "<<endl;
    cout<<" (d) None of the above "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'b'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ5. What will be the simple interest on Rs. 8800 for 9 months at 20/3% per annum? "<<endl;
    cout<<" (a) Rs. 230 "<<endl;
    cout<<" (b) Rs. 123 "<<endl;
    cout<<" (c) Rs. 567 "<<endl;
    cout<<" (d) Rs. 440 "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'd'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ6. At what rate percent per annum of simple interest will a certain sum of money become double in 5 years? "<<endl;
    cout<<" (a) 20% "<<endl;
    cout<<" (b) 25% "<<endl;
    cout<<" (c) 30% "<<endl;
    cout<<" (d) None of the above "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'a'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ7. In what time will a sum ₹500 amount to ₹600 at 5% per annum? "<<endl;
    cout<<" (a) 2 Years "<<endl;
    cout<<" (b) 4 Years "<<endl;
    cout<<" (c) 3 Years "<<endl;
    cout<<" (d) None of the above "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'b'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ8. A sum becomes Rs. 10650 in 5 years. and Rs. 11076 in 6 years at simple interest. What is the sum? "<<endl;
    cout<<" (a) Rs. 8946 "<<endl;
    cout<<" (b) Rs. 8740 "<<endl;
    cout<<" (c) Rs. 8520 "<<endl;
    cout<<" (d) Rs. 8800 "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'c'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ9. A sum of money at simple interest doubles in 10 years. In how many years, at the same rate, will it be tripled? "<<endl;
    cout<<" (a) 30 Years "<<endl;
    cout<<" (b) 25 Years "<<endl;
    cout<<" (c) 20 Years "<<endl;
    cout<<" (d) 15 Years "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'c'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ10. A sum of money invested at a certain rate of simple interest per annum amounts to Rs. 14,522 in seven years and to Rs. 18,906 in eleven years. Find the sum invested (in Rs.).  "<<endl;
    cout<<" (a) 6850 "<<endl;
    cout<<" (b) 6900 "<<endl;
    cout<<" (c) 6800 "<<endl;
    cout<<" (d) 6750 "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'a'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ11. Simple interest on a sum of money for 5 years is (2/5) times the principal, the rate for simple interest is  "<<endl;
    cout<<" (a) 13% "<<endl;
    cout<<" (b) 12.55% "<<endl;
    cout<<" (c) 14.99% "<<endl;
    cout<<" (d) 8% "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'd'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ12. The simple interest on a sum for 6 years is Rs. 29250. The rate of interest for the first 2 years is 7 percent per annum and for the next 4 years is 16 percent per annum. What is the sum? "<<endl;
    cout<<" (a) Rs. 36600 "<<endl;
    cout<<" (b) Rs. 37500 "<<endl;
    cout<<" (c) Rs. 35400 "<<endl;
    cout<<" (d) Rs. 38300 "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'b'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ13. What is the simple interest on Rs. 32,000 at 8.5% per annum for period from 10th Feb., 2019 to 24th April, 2019? "<<endl;
    cout<<" (a) Rs. 550 "<<endl;
    cout<<" (b) Rs. 555 "<<endl;
    cout<<" (c) Rs. 544 "<<endl;
    cout<<" (d) Rs. 540 "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'c'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ14. Find the simple interest on ₹2,700 for 8 months at 5 paise per rupee per month. "<<endl;
    cout<<" (a) Rs. 950 "<<endl;
    cout<<" (b) Rs. 720 "<<endl;
    cout<<" (c) Rs. 540 "<<endl;
    cout<<" (d) Rs. 1,080 "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'd'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear\

     // Question Start hear
    cout<<"\nQ15. A simple interest of Rs. 12550 was received on a certain sum after five years at a certain rate of interest per annum. What will be simple interest on double the sum after 8 years at the same rate of interest? "<<endl;
    cout<<" (a) Rs. 32400 "<<endl;
    cout<<" (b) Rs. 36810 "<<endl;
    cout<<" (c) Rs. 40160 "<<endl;
    cout<<" (d) Rs. 48480 "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'c'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ16. If the simple interest charged for 9 months be 0.12 times the money borrowed, what is the rate percent per year? "<<endl;
    cout<<" (a) 15% "<<endl;
    cout<<" (b) 18% "<<endl;
    cout<<" (c) 16% "<<endl;
    cout<<" (d) 12% "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'c'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ17. A sum of money was invested at the rate of 7.5% simple interest per annuum for 4 years. If the investments were for 5 years, the interest earned would have been Rs. 375 more. What was the initial sum invested? "<<endl;
    cout<<" (a) Rs. 4,500 "<<endl;
    cout<<" (b) Rs. 5,000 "<<endl;
    cout<<" (c) Rs. 3,750 "<<endl;
    cout<<" (d) Rs. 4,750 "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'b'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ18. Who is the father of Computers? "<<endl;
    cout<<" (a) James Gosling "<<endl;
    cout<<" (b) Charles Babbage "<<endl;
    cout<<" (c) Dennis Ritchie "<<endl;
    cout<<" (d) Bjarne Stroustrup "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'b'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ19. Which of the following is the correct abbreviation of COMPUTER? "<<endl;
    cout<<" (a) Commonly Occupied Machines Used in Technical and Educational Research "<<endl;
    cout<<" (b) Commonly Operated Machines Used in Technical and Environmental Research "<<endl;
    cout<<" (c) Commonly Oriented Machines Used in Technical and Educational Research "<<endl;
    cout<<" (d) Commonly Operated Machines Used in Technical and Educational Research "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'd'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

     // Question Start hear
    cout<<"\nQ20.  Which of the following is the correct definition of Computer? "<<endl;
    cout<<" (a) Computer is a machine or device that can be programmed to perform arithmetical or logic operation sequences automatically "<<endl;
    cout<<" (b) Computer understands only binary language which is written in the form of 0s & 1s "<<endl;
    cout<<" (c) Computer is a programmable electronic device that stores, retrieves, and processes the data "<<endl;
    cout<<" (d) All of the mentioned "<<endl;
    cout<<"Please Enter 'a' 'b' 'c' or 'd' and press enter : "<<endl;
    cin>>answer;
    if(answer == 'd'){
        cout<<"\n Congrates you entered right Answer! : ";
        score++;
    }
    else{
        cout<<"\n Sorry you choose wrong Answer!"<<endl;
    }
    // Question end hear

    end_game(score);
}

void end_game(int score = 0){
    cout<<"\n Thanks for playing "<<endl;
    cout<<" Your Score is "<<score<<endl;
}