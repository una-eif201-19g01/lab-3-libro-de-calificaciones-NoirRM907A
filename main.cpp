// Archivo: Main.cpp

// Alumno: Noel Muñoz Ramírez

// Profesor: Maikol Guzman

// Universidad Nacional

// Fecha: 16/08/2019

#include <iostream>
#include <string>
#include "LibroDeCalificaciones.h"
//using namespace std;

int main()
{
	const int ESTUDIANTES = 10;
	const int EXAMENES = 3;
	int ListaDeCalificaciones[ESTUDIANTES][EXAMENES] = {
		{87,96,70}, {68,87,90}, {94,100,90}, {100,81,82}, {83,65,85},
		{78,87,65}, {85,75,83}, {91,94,100}, {76,72,84}, {87,93,73} 
	};

	LibroDeCalificaciones LibroDeCalificaciones1("Curso Progra I", ListaDeCalificaciones);

	std::cout << LibroDeCalificaciones1.obtenerReporteNotas() << std::endl;

	std::cout << LibroDeCalificaciones1.obtenerReporteNotasMaxMin() << std::endl;

	return 0;
}
//////ggghghh
//////////JGHGFYUFUGHIHUHIHUHUIHUHUHIU
//fdf