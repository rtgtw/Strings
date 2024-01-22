#include <iostream>

//Create a function that prints out the ascii code of a letter

void printASCII() {

	char value = 'a';

	while (value != '!') {
		std::cout << "Enter a value: ";
		std::cin >> value;

		std::cout << "ASCII Code: " << static_cast<int>(value) << '\n';
		std::cout << "press \'!\' to quit" << '\n' << '\n';

	}

};











int main() {

	//Checking if two strings are anagrams
	//Use a hash table to increment string variable 1, then decrement variable 2, if it = 0 then its an anagram

	char String1[] = "decimal";
	char String2[] = "medical";

	//Hashtable should be 26 to represent all lowercase numbers
	int hashtable[26] = { 0 };

	int i;




	for (int i = 0; String1[i] != '\0'; i++) {
	
		//Increment the hash table by 1
		hashtable[String1[i] - 97] = hashtable[String1[i] - 97]++;

	};

	//for (int i = 0; i < 26; i++) {
	//	std::cout << hashtable[i] << '\n';
	//}


	//now we decrement string2 from the hash table

	for (i = 0; String2[i] != '\0'; i++) {


		//Decrement the hash table

		hashtable[String2[i] - 97] = hashtable[String2[i] - 97]--;

			if (hashtable[String2[i] - 97] < 0) {

				std::cout << "Not an anagram";
				break;
		}

	};

	if (String2[i] == '\0') {
		std::cout << "Its an anagram" << '\n';
	}

	


	return 0;
};
























/*
* 
* 
* 
* 
//---------------------------------------------------------------------------------//

void printASCII() {

	char value = 'a';

	while (value != '!') {
		std::cout << "Enter a value: ";
		std::cin >> value;

		std::cout << "ASCII Code: " << static_cast<int>(value) << '\n';
		std::cout << "press \'!\' to quit" << '\n' << '\n';

	}

























//char temp;

	//Must be in a single quote, and only 1 alphabet
	//Value 65 is stored
	//temp = 'A';

	//std::cout << temp;


	//Create an array of charecters

	//char X[5] = {'A', 'B', 'C', 'D','E', };

	//for(int i = 0; i < 5; i++){

	//	std::cout << X[i] << ' ';
	//}

	//char X1[] = { 'F','G','H' };

	//Array of charecters, which is a string

	//char name[10] = { 'J','O','H','N','\0' };


	/*for (int i = 0; i < 4; i++) {
		std::cout << name[i] << '\n';

	};*/

	//We should know the end of the string (length) or the end of a string
	// \0 is a string delimeter or end of stirng charecter or null charecter 
	//or string terminator
	//Strings are delimeted, in java string is known by its length
	//To turn a char into a string, you need to use the \0 delimetor to specify the end
	//of a string


	//For a string of 4 letters you need 5 spaces, one for the string delimeter
	//char name1[] = { 'J', 'O', 'H', 'N', '\0', };


	//If you use double quotes this means its a string and it automatically includes the 
	//string delimeter \0

	//char name2[100];


	//std::cin >> name2;

	//std::cout << name2;


	//gets() function lets you enter the full sentence and it will insert into string


//---------------------------------------------------------------------------------//



////Find the length of a string
//char S[] = "welcome";
//int i;
//
//for (i = 0; S[i] != '\0'; i++) {
//
//
//};
//
//
//std::cout << "Length of this string is: " << i;
//












/*

----------------------------------------------------------------------------------------

//Change the case, upper case to lower case or vice versa
	//Difference is 32 from upper case to lowercase

	char A[] = "wElCoMe";
	int i;

	for (i = 0; A[i] != '\0'; i++) {


		//Turns uppercase to lowercase
		if (A[i] >= 'A' && A[i] <= 'Z') {

			A[i] = A[i] + 32;
		}
	};



	char B[] = "wElcoMe";

	//Turns lower case to upper case
	for (i = 0; B[i] != '\0'; i++) {

		if (B[i] >= 'a' && B[i] <= 'z') {

			B[i] = B[i] - 32;
		}


	};




	std::cout << A;
	std::cout << B;











----------------------------------------------------------------------------------------


char A[] = "How are you ";

	int i;
	int vCount = 0;
	int cCount = 0;

	//'\0' is the string delimeter, which represents the end of a string
	//We know that when the index reaches \0 that is the end of the string or its length
	//the string delimeter is always at the end of a string, how are you\0


	//Find out how many vowels are inside of a string
	for (i = 0; A[i] != '\0'; i++) {

		if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u' || \
			A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U') {

			vCount++;
	}
		else if (A[i] >= 'a' && A[i] <= 'z' || A[i] >= 'A' && A[i] <= 'Z') {
			cCount++;
		}












----------------------------------------------------------------------------------------



	char A[] = "How are   you";

	int i;
	int word = 1;


	//How to count words in a string
	//Spaces help us identify words
	//Spaces + 1 = words
	//continuous or consecutive spaces are called white spaces


	for (i = 0; A[i] != '\0'; i++) {

		if (A[i] == ' ' && A[i - 1] != ' ') {

			word++;
	}

	};


	std::cout << word;

	return 0;









--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




char A[] = "How are   you";

	int i;
	int word = 1;


	//How to count words in a string
	//Spaces help us identify words
	//Spaces + 1 = words
	//continuous or consecutive spaces are called white spaces


	for (i = 0; A[i] != '\0'; i++) {

		if (A[i] == ' ' && A[i - 1] != ' ') {

			word++;
	}

	};


	std::cout << word;








--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------








#include <iostream>


int valid(char* name) {

	int i;

	for(i = 0; name[i] != '\0'; i++){

		if (!(name[i] >= 'A' && name[i] <= 'Z') && !(name[i] >= 'a' && name[i] <= 'z') && !(name[i] >= '48' && name[i] <= '57')) {

			//this is false
			return 0;
		}

	}
	//this is true;
	return 1;
};




int main() {


	//validate a string
	//scan and check each alphabet

	char A[] = "Hel1lo";




	if (valid(A)) {

		std::cout << "Valid String";
	}u
	else {
		std::cout << "Invalid stirng";
	}



	return 0;


};








--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



int valid(char* name) {

	int i;

	for(i = 0; name[i] != '\0'; i++){

		if (!(name[i] >= 'A' && name[i] <= 'Z') && !(name[i] >= 'a' && name[i] <= 'z') && !(name[i] >= '48' && name[i] <= '57')) {

			//this is false
			return 0;
		}

	}
	//this is true;
	return 1;
};




int main() {


	//validate a string
	//scan and check each alphabet

	char A[] = "Hel1lo";




	if (valid(A)) {

		std::cout << "Valid String";
	}
	else {
		std::cout << "Invalid stirng";
	}



	return 0;









--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




	//Reversing a string



	// array 1
	char A[] = "Python";

	//array 2 which is where we want to copy the reverse
	char B[7];

	//index i which traverses through the first array
	int i;

	//index j which traverses through the second array
	int j;
	for (i = 0; A[i] != '\0'; i++) {


	}

	//This is because after our for loop, i is going to be at \0, so we want to get the last letter so i-1
	i = i - 1;

	//when i reaches -1 we know that we are done traversing through array one and thats when we can stop
	//we also know at this point we can add \0 to array 2
	for (j = 0; i >= 0; j++,i--) {

		B[j] = A[i];

	}
	B[j] = '\0';



	std::cout << B;







--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





int main() {

	//Reverse char by swap
	//We need to scan, know the length

	char A[] = "Python";

	//temp char variable
	char t;


	//At the end
	int j;
	//At the beginning
	int i;

	for (j = 0; A[j] != '\0'; j++) {
	};

	j = j - 1;

	for (i = 0; i < j; i++, j--) {

		//need a temp in order to swap
		t = A[j];
		A[j] = A[i];
		A[i] = t;

	};

	std::cout << A;
	return 0;


};






--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------






	//Reverse char by swap
	//We need to scan, know the length

	char A[] = "Python";

	//temp char variable
	char t;


	//At the end
	int j;
	//At the beginning
	int i;

	for (j = 0; A[j] != '\0'; j++) {
	};

	j = j - 1;

	for (i = 0; i < j; i++, j--) {

		//need a temp in order to swap
		t = A[j];
		A[j] = A[i];
		A[i] = t;

	};

	std::cout << A;
	return 0;






--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





int main() {


	char String1[] = "finding";

	//Create a hash table the length of lower case alphabets (26)
	//Initialize all values to 0
	int Hashtable[26] = { 0 };

	//Create a for loop that iterates through the string, and incrementing the hashtable to keep count of the letters
	//while the index does not equal the null character which is the end of the string
	for (int i = 0; String1[i] != '\0'; i++) {

		//coult also just do += 1 but i want to type it out
		Hashtable[String1[i] - 'a'] = Hashtable[String1[i] - 'a']++;

	 };

	for (int i = 0; i < 26; i++) {
		std::cout << Hashtable[i] << '\n';
	}

	//Extract the duplicates from the hashtable

	for (int i = 0; i < 26; i++) {


		if (Hashtable[i] > 1) {
			std::cout << "Duplicate:  " << i + 97 <<'\n';

			char Duplicate = i + 97;

			std::cout << "Duplicate letter: " << Duplicate << '\n';
		}
	}







--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------




//Look for a duplicate inside of a string using bitwise operators AND and OR

//Create string that we will test to see if there is a duplicate
	char String1[] = "finding";



//Create an integer variable which we will use to insert bits to compare with the string
// 4 bytes so 32 bits in total, initialize it to 0, to have all the bits be 0
	int bitwiseMap = 0;

//We need another integer variable that we will store the value of 1 or 0
	int valueStore = 0;

//Create a for loop which will iterate through the string
//Then we will set the bitwiseMap to 1 and shift the 1 to equal the letter of the string to set it inside of the bitwise map
//If the letter already has a 1 then we know it is a duplicate and can print the value
	for (int i = 0; String1[i] != '\0'; i++) {

		//set the bitwise map to 1
		bitwiseMap = 1;

		//find out which letter we are on, shift the bitwisemap 1 to that location and determine if it is 1 or 0
		//if it is 0 then we want to input 1 to represent a hit, if it is 1 then we want to print duplicate since its a duplicate
		//Shift 1 to String1[i] - 97 spaces, then we want that to equal the new bitwiseMap value
		bitwiseMap = bitwiseMap << (String1[i] - 97);

		//Now the value 1 is shifted inside of bitwiseMap, compare it to valueStore, if 0 is there then include 1, if 1 is there then say its a duplicate
		//We can use AND bitwise operator &, to determine if its on or not, if its 0 then its going to be off, if its 1 then its going to be on
		if ((bitwiseMap & valueStore) > 0) {

			std::cout << String1[i] << " is a duplicate." << '\n';

		}
		else {

			valueStore = (bitwiseMap | valueStore);
		}


		};










	return 0;








--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



int main() {

	//Checking if two strings are anagrams
	//Use a hash table to increment string variable 1, then decrement variable 2, if it = 0 then its an anagram

	char String1[] = "decimal";
	char String2[] = "medical";

	//Hashtable should be 26 to represent all lowercase numbers
	int hashtable[26] = { 0 };

	int i;




	for (int i = 0; String1[i] != '\0'; i++) {

		//Increment the hash table by 1
		hashtable[String1[i] - 97] = hashtable[String1[i] - 97]++;

	};

	//for (int i = 0; i < 26; i++) {
	//	std::cout << hashtable[i] << '\n';
	//}


	//now we decrement string2 from the hash table

	for (i = 0; String2[i] != '\0'; i++) {


		//Decrement the hash table

		hashtable[String2[i] - 97] = hashtable[String2[i] - 97]--;

			if (hashtable[String2[i] - 97] < 0) {

				std::cout << "Not an anagram";
				break;
		}

	};

	if (String2[i] == '\0') {
		std::cout << "Its an anagram" << '\n';
	}




	return 0;
};








--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------












----------------------------------------------------------------------------------------


*/