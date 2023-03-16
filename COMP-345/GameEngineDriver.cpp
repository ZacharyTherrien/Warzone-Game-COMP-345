#include <iostream>
#include "GameEngine.h"

void GameEngineDriver() {
	GameEngine engine;
	const string stateNameEnd = "win";
	string command;
	//The main game loop. Continues until the user inputs "end" and someone wins.
	while (engine.isPlaying()) {
		//Output the Game Engine Driver UI and the current state.
		cout << "Game Engine Driver.\n\n"
			<< engine;
		//Get input to change states.
		cout << "\nPlease enter your command:" << endl;
		cin >> command;
		//Before changing state, clear the screen.
		system("cls");
		engine.ChangeState(command);
	}
}

int main() {
	GameEngine engine;
	engine.StartupPhase();
	string s;
	getline(cin, s);
	cout << s;
	return 0;
}