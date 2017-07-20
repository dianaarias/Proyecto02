#ifndef QUESTION_H
#define QUESTION_H

#include <string>

class Question
{
private:
	std::string forward; //Texto anterior a las opciones
	std::string backward; //Texto posterior a las opciones
	int points; //Valor obtenido de la respuesta (RadioButton)
public:
	Question();
	~Question();
	inline void set_forward_text( std::string text) {forward = text;}
	inline std::string get_forward_text() {return forward;}

	inline void set_backward_text( std::string text) {backward = text;}
	inline std::string get_backward_text(){ return backward;}

	inline void set_points( int point) { points = point;}
	inline int get_points(){ return points;}
};

#endif // QUESTION_H
