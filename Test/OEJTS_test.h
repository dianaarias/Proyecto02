#ifndef OEJTS_TEST_H
#define OEJTS_TEST_H

#include "MainWindow.h"
#include "Question.h"
#include <QApplication>


class OEJTS_test
{
private:
	Question preguntas[32];
public:
	//Constructor del Test
	OEJTS_test();
	//Destructor
	~OEJTS_test();

	int run();
};

#endif // OEJTS_TEST_H
