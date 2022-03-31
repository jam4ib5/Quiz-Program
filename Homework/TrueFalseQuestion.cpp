#include <iostream>
#include "TrueFalseQuestion.h"

using namespace std;

TrueFalseQuestion::TrueFalseQuestion(const std::string& questionText,
	const std::string& correctAnswer)
	: Question(questionText, correctAnswer)
{
	// Nothing here...
}

bool TrueFalseQuestion::IsThisAnswerCorrect(const std::string& answer)
{
	// Simple test to see if things are on the up and up

	if (answer == "True" || answer == "1")
	{
		return CorrectAnswer == "True";
	}
	else if (answer == "False" || answer == "2")
	{
		return CorrectAnswer == "False";
	}
	return false;
}

std::string TrueFalseQuestion::GetPossibleAnswersText()
{
	return "1) True \n2) False";
}