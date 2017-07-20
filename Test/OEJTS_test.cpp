#include "OEJTS_test.h"


OEJTS_test::OEJTS_test()
{
//	for(int index = 0; index < 32; ++index){
//		preguntas[index] = new Question();
//	}
	preguntas[0].set_forward_text("makes lists");
	preguntas[0].set_backward_text("relies on memory");
	preguntas[1].set_forward_text("sceptical");
	preguntas[1].set_backward_text("wants to believe");
	preguntas[2].set_forward_text("bored by time alone");
	preguntas[2].set_backward_text("needs time alone");
	preguntas[3].set_forward_text("accepts things as they are");
	preguntas[3].set_backward_text("unsatisfied with the ways things are");
	preguntas[4].set_forward_text("keeps a clean room");
	preguntas[4].set_backward_text("just puts stuff where ever");
	preguntas[5].set_forward_text("thinks \"robotic\" is an insult ");
	preguntas[5].set_backward_text("strives to have a mechanical mind");
	preguntas[6].set_forward_text("energetic");
	preguntas[6].set_backward_text("mellow");
	preguntas[7].set_forward_text("prefer to take multiple choice test");
	preguntas[7].set_backward_text("prefer essay answers");
	preguntas[8].set_forward_text("chaotic");
	preguntas[8].set_backward_text("organized");
	preguntas[9].set_forward_text("easily hurt");
	preguntas[9].set_backward_text("thick-skinned");
	preguntas[10].set_forward_text("works best in groups");
	preguntas[10].set_backward_text("works best alone");
	preguntas[11].set_forward_text("focused on the present");
	preguntas[11].set_backward_text("focused on the future");
	preguntas[12].set_forward_text("plans far ahead");
	preguntas[12].set_backward_text("plans at the last minute");
	preguntas[13].set_forward_text("wants people's respect");
	preguntas[13].set_backward_text("wants their love");
	preguntas[14].set_forward_text("gets worn out by parties");
	preguntas[14].set_backward_text("gets fired up by parties");
	preguntas[15].set_forward_text("fits in");
	preguntas[15].set_backward_text("stands out");
	preguntas[16].set_forward_text("keeps options open");
	preguntas[16].set_backward_text("commits");
	preguntas[17].set_forward_text("wants to be good at fixing things");
	preguntas[17].set_backward_text("wants to be good at fixing people");
	preguntas[18].set_forward_text("talks more");
	preguntas[18].set_backward_text("listens more");
	preguntas[19].set_forward_text("when describing an event, will tell people what happened");
	preguntas[19].set_backward_text("when describing an event, will tell people what it meant");
	preguntas[20].set_forward_text("gets work done right away");
	preguntas[20].set_backward_text("procrastinates");
	preguntas[21].set_forward_text("follows the heart");
	preguntas[21].set_backward_text("follows the head");
	preguntas[22].set_forward_text("stays at home");
	preguntas[22].set_backward_text("goes out on the town");
	preguntas[23].set_forward_text("wants the big picture");
	preguntas[23].set_backward_text("wants the details");
	preguntas[24].set_forward_text("improvises");
	preguntas[24].set_backward_text("prepares");
	preguntas[25].set_forward_text("bases morality on justice");
	preguntas[25].set_backward_text("bases morality on compassion");
	preguntas[26].set_forward_text("finds it difficult to yell very loudly");
	preguntas[26].set_backward_text("yelling to others when they are far away comes naturally");
	preguntas[27].set_forward_text("theoretical");
	preguntas[27].set_backward_text("empirical");
	preguntas[28].set_forward_text("works hard");
	preguntas[28].set_backward_text("plays hard");
	preguntas[29].set_forward_text("uncomfortable with emotions");
	preguntas[29].set_backward_text("values emotions");
	preguntas[30].set_forward_text("likes to perform in front of other people");
	preguntas[30].set_backward_text("avoids public speaking");
	preguntas[31].set_forward_text("likes to know \"who?\", \"what?\",\"when?\"");
	preguntas[31].set_backward_text("likes to know \"why?\"");
}

OEJTS_test::~OEJTS_test()
{
	delete[] preguntas;
}

