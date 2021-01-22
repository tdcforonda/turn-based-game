#pragma once

using namespace System;

public ref class characterData {

private:
	String^ class1;
	String^ class2;
	String^ player;

public:
	void classChoice(String^ choice1, String^ choice2) {

		class1 = choice1;
		class2 = choice2;

	}

	void playerNumber(String^ playnum) {
		player = playnum;
	}

	String^ getcharacterClass1() {
		return class1;
	}

	String^ getCharacterClass2() {
		return class2;
	}

	String^ getplayerNumber() {
		return player;
	}
};