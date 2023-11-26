#include <cstdlib> 
#include <ctime> 
#include <iostream> 

using namespace std; 

char getComputerMove(){
 
    int move; 
    srand(time(NULL)); 
    move = rand() % 3; 
    if (move == 0) {
        return 'p'; 
    } 
    else if (move == 1) { 
        return 's'; 
    } 
    else{
    	return 'r'; 
	}
} 


int getResults(char playerMove, char computerMove) {
	
    if (playerMove == computerMove) { 
        return 0; 
    } 
    if (playerMove == 's' && computerMove == 'p') { 
        return 1; 
    } 
    if (playerMove == 's' && computerMove == 'r') { 
        return -1; 
    } 
    if (playerMove == 'p' && computerMove == 'r') { 
        return 1; 
    } 
    if (playerMove == 'p' && computerMove == 's') { 
        return -1; 
    } 
    if (playerMove == 'r' && computerMove == 'p') { 
        return -1; 
    } 
    if (playerMove == 'r' && computerMove == 's') { 
        return 1; 
    } 
    return 0; 
} 


int main() {

    char playerMove;
    cout << "\nWelcome to Rock Paper Scissor Game!!!!!\n"; 
    cout<< "Rock vs Paper->Paper wins\nRock vs Scissor->Rock wins\nPaper vs Scissor->Scissor" << endl;
    int n,i;
    cout<<"\nHow many times you wanna play the game:";
	cin>>n;
	int playerPoint=0;
	int computerPoint=0;
    for(i=0;i<n;i++){
	 
        cout << "\nEnter r for ROCK, p for PAPER, and s for SCISSOR\n"; 
        
        cin >> playerMove; 
        if (playerMove == 'p' || playerMove == 'r' || playerMove == 's') {
        	
            char computerMove = getComputerMove(); 

            int result = getResults(playerMove, computerMove); 

            if (result == 0) {
			    cout << "\nGame Draw!\n"; 
            } 
            
            else if (result == 1) {
                cout << "\nCongratulations! Player won the game!\n"; 
                cout << "player get 2 points\n";
                playerPoint+=2;
            } 

            else { 
                cout << "\nOh! Computer won the game!\n"; 
                cout << "computer get 2 points\n";
                computerPoint+=2;
            } 

            cout << "Your Move: " << playerMove << endl; 

            cout << "Computer's Move: " << computerMove << endl; 
        } 

        else { 
            cout << "\nInvalid Player Move!!! Please Try Again." << endl; 
        } 
    }
    
    cout << "\n\nYour total points:"<< playerPoint<<endl;
    
    cout << "computers total points:"<< computerPoint<<endl;
    
    if(playerPoint==computerPoint){
    	cout<<"\nMatch Draw!!!"<<endl;
	}
	else if(playerPoint>=computerPoint){
		cout<<"\nYou win"<<endl;
	}
	else{
		cout<<"\ncomputer win"<<endl;
	}
    return 0; 
}