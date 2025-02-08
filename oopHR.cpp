#include <cstdlib>
#include<ctime>
#include <iostream>

using namespace std;

//Begin Horse class
class Horse{
	private:
		int horseID;
		int position = 0;
		int trackLength;
	public:
		//constructor
		Horse(){
			horseID = 0;
			position = 0;
			trackLength = 0;
		}
		// constructor including parameters
		Horse(int horseID, int trackLength){
			Horse::horseID = horseID;
			Horse::trackLength = trackLength;
		}
		//advance method
		void advance(){
			int coin = rand() % 2;
			Horse::position += coin;
		}

		//printLane method
		void printLane(){
			for(int i = 0 ; i<trackLength; i++){
				if(i != position){
					cout<<". ";
				}else{
					cout<<horseID<<" ";
				}
			}
			cout<<endl;
		}// finish printLane Method

		//isWinner method
		bool isWinner(){
			bool winner = false;
			if(position >= trackLength-1){
			winner = true;
			cout << "Horse " << horseID << " won the race!!" << endl;
		}
		return winner;
	}//end of isWinner method

}; // end of the horse class

//begin race class
class Race{
	private:
		const int trackLength = 10;
		const int numHorses = 5;
		Horse horses[5];
	public:
		//Race constructor
		Race(){
			for(int i = 0;i<numHorses;i++)
				Race::horses[i] = Horse(i,trackLength);
		}// end of the constructor
	
		void run(){
			bool KEEPGOING = true;
			while(KEEPGOING){
				for(int i = 0; i<numHorses; i++){
					horses[i].advance();
					horses[i].printLane();
					if(horses[i].isWinner()){
						KEEPGOING = false;
					}
				}
				//start the user interaction so the game can continue
				if(KEEPGOING){
					string usInput;
					cout<<"Press q to quit or enter to continue: ";
					getline(cin, usInput);

					if(usInput == "q"){
						KEEPGOING = false;
					}
				}//end of the user input
			}

		}//end of the run method
		
};//end of the race method

//Start the main method
int main(){
	srand(time(NULL));
	Race r;
	r.run();
	return 0;
}//end of main method


