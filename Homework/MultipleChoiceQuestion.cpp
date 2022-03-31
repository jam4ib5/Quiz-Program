#include <iostream>
#include "MultipleChoiceQuestion.h"

using namespace std;

MultipleChoiceQuestion::MultipleChoiceQuestion(const std::string& questionText, std::vector<std::string> newAnswers,
	const std::string& correctAnswer)
	: Question(questionText, correctAnswer), possibleAnswers  (newAnswers)
{
	// Nothing here...
}

bool MultipleChoiceQuestion::IsThisAnswerCorrect(const std::string& answer)
{
	// Simple test to see if things are on the up and up

	bool isInt = true;
	for (char c : answer)
	{
		if (!std::isdigit(c))
		{
			isInt = false;
			break;
		}
	}

	if (isInt)
	{
		if(std::stoi(answer) == std::stoi(CorrectAnswer))
		{
			return true;
		}
	}
	else
	{
		if (answer == possibleAnswers[std::stoi(CorrectAnswer) - 1])
		{
			return true;
		}
	}

	
	return false;	
}

std::string MultipleChoiceQuestion::GetPossibleAnswersText()
{
	std::string holder;
	
	for (int i = 1; i < possibleAnswers.size() + 1; i++)
	{
		holder.append(std::to_string(i) + ") " + possibleAnswers[i - 1] + "\n");
	}

	return holder;
}