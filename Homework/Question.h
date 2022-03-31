#pragma once

#include <string>
#include <vector>

class Question
{
public:
	
	Question(const std::string& questionText,
		     const std::string& correctAnswer);

	virtual ~Question();

	std::string GetQuestionText();

	virtual std::string GetPossibleAnswersText();
	
	virtual bool IsThisAnswerCorrect(const std::string& answer) = 0;

protected:
	std::string QuestionText;
	std::string CorrectAnswer;
};