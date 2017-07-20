# Test: Open Extended Jungian Type Scales 1.2.

El test de personalidad OEJTS, basado en los Indicadores de Jung, es una alternativa al Indicador de Myers-Briggs (MBTI); diseñados para identificar preferencias personales de las personas que lo toman de acuerdo a ciertas escalas. De acuerdo a estos resultados, se pueden realizar evaluaciones pedagógicas, psicológicas e incluso estadísticas del comportamiento de las personas.

El OEJTS identifica 4 categorías, a partir de las cuales se forman 16 tipos de personalidad. Las categorías son Introvertido/Extrovertido (IE), Intuitivo/Percepctivo (SN), Pensante/Sensible (FT) y Perceptivo/Juicioso (JP). 

El test se compone de 32 preguntas o puntos, las cuales exponen pares de rasgos de personalidad con una escala del 1 al 5 entre sí. La persona que toma el test debe elegir un número de la escala que se ajuste a su preferencia o personalidad. Entonces, si por ejemplo se nos da la escala "Interesado 1 2 3 4 5 Aburrido" respecto a una situación determinada, hemos de elegir 1 si nos encontramos muy interesados y nada aburridos, 2 para más interesados que aburridos, 3 se trata de una opción neutral, 4 para más aburridos que interesados y 5 para muy aburridos y nada interesados. 

Para calcular los resultados, hemos de sumar un total de puntos en cada categoría de acuerdo a los números elegidos en la escala de cada pregunta, de la siguiente manera:

* **IE:** 30 - P3 - P7 - P11 + P15 - P19 + P23 + P27 - P31 = ?
* **SN:** 12 + P4 + P8 + P12 + P16 + P20 - P24 - P28 + P32 = ?
* **FT:** 30 - P2 + P6 + P10 - P14 -P18 + P22 - P26 - P30 = ?
* **JP:** 18 + P1 + P5 - P9 + P13 - P17 + P21 - P25 + P29 = ?

Si IE>24, la persona es extrovertida (E) y en caso contrario introvertida (I).
Si SN>24, la persona es intuitiva (N) y en caso contrario es perceptiva (S). 
Si FT>24, la persona es pensante (T) y en caso contrario es sensible (F).
Si JP>24, la persona es perceptiva (P) y en caso contrario es juiciosa (J).
La combinación de las 4 letras dará a conocer el tipo de personalidad del sujeto de examen. 

Un cliente está buscando una implementación gráfica de este test, por medio del conjunto de herramientas y bibliotecas Qt. El punto del test es que pueda ser utilizado fácilmente y en diferentes plataformas (móviles y computadoras), para que pueda ser tomado por diferentes estudiantes universitarios; y con una finalidad de realizar un estudio estadístico. Por ello será necesario que, después de que un número determinado de personas haya tomado el test, su programa genere una gráfica clasificándolos por la carrera que estudian y su género. Se pretende comparar conjuntos de al menos 10 estudiantes de 5 carreras diferentes. 

Las preguntas originales del test OEJTS,  cuya traducción se requiere en la implementación, son las siguientes: 

1. makes lists | 1 2 3 4 5 | relies on memory
2. sceptical | 1 2 3 4 5 | wants to believe
3. bored by time alone | 1 2 3 4 5 | needs time alone
4. accepts things as they are | 1 2 3 4 5 | unsatisfied with the ways things are
5. keeps a clean room | 1 2 3 4 5 | just puts stuff where ever
6. thinks "robotic" is an insult | 1 2 3 4 5 | strives to have a mechanical mind
7. energetic | 1 2 3 4 5 | mellow
8. prefer to take multiple choice test | 1 2 3 4 5 | prefer essay answers
9. chaotic | 1 2 3 4 5 | organized
10. easily hurt | 1 2 3 4 5 | thick-skinned
11. works best in groups | 1 2 3 4 5 | works best alone
12. focused on the present | 1 2 3 4 5 | focused on the future
13. plans far ahead | 1 2 3 4 5 | plans at the last minute
14. wants people's respect | 1 2 3 4 5 | wants their love
15. gets worn out by parties | 1 2 3 4 5 | gets fired up by parties
16. fits in | 1 2 3 4 5 | stands out
17. keeps options open | 1 2 3 4 5 | commits
18. wants to be good at fixing things | 1 2 3 4 5 | wants to be good at fixing people
19. talks more | 1 2 3 4 5 | listens more
20. when describing an event, will tell people what happened | 1 2 3 4 5 | when describing an event, will tell people what it meant
21. gets work done right away | 1 2 3 4 5 | procrastinates
22. follows the heart | 1 2 3 4 5 | follows the head
23. stays at home | 1 2 3 4 5 | goes out on the town
24. wants the big picture | 1 2 3 4 5 | wants the details
25. improvises | 1 2 3 4 5 | prepares
26. bases morality on justice | 1 2 3 4 5 | bases morality on compassion
27. finds it difficult to yell very loudly | 1 2 3 4 5 | yelling to others when they are far away comes naturally
28. theoretical | 1 2 3 4 5 | empirical
29. works hard | 1 2 3 4 5 | plays hard
30. uncomfortable with emotions | 1 2 3 4 5| values emotions
31. likes to perform in front of other people | 1 2 3 4 5 | avoids public speaking
32. likes to know "who?", "what?","when?" | 1 2 3 4 5 | likes to know "why?"
