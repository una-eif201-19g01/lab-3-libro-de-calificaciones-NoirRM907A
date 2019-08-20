// Archivo: LibroDeCalificaciones.h

// Alumno: Noel Muñoz Ramírez

// Profesor: Maikol Guzman

// Universidad Nacional

// Fecha: 16/08/2019

#include <iostream>
#include <string>
#include "LibroDeCalificaciones.h"
#include <sstream>
using namespace std;

using std::string;

//Constructor sin Parametros
LibroDeCalificaciones::LibroDeCalificaciones() {
	setNombreCurso(nombreCurso);
	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
			calificaciones[estudiante][examen] = 0;
		}
	}
}

//Constructor con Parametros
LibroDeCalificaciones::LibroDeCalificaciones(const std::string &nombreCurso, int arregloCalificaciones[][EXAMENES]):nombreCurso(nombreCurso) 
{
	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
        calificaciones[estudiante][examen] = arregloCalificaciones[estudiante][examen];
		}
	}
}

//Destructor
LibroDeCalificaciones::~LibroDeCalificaciones() {}

//Set y Get
void LibroDeCalificaciones::setNombreCurso(string &nombreCurso){}
string LibroDeCalificaciones::getNombreCurso() { return nombreCurso; }

//Metodos Privados
int LibroDeCalificaciones::obtenerNotaMaxima() {
	int notaMaxima = 0;
	for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
		for (int examen = 0; examen < EXAMENES; ++examen) {
			if (calificaciones[estudiante][examen] > notaMaxima) {
				notaMaxima = calificaciones[estudiante][examen];
			}
		}
	}
	return notaMaxima;
}

int LibroDeCalificaciones::obtenerNotaMinima() {
	int notaMinima = 100;
	for (int estudiante = 0; estudiante < ESTUDIANTES; ++estudiante) {
		for (int examen = 0; examen < EXAMENES; ++examen) {
			if (calificaciones[estudiante][examen] < notaMinima) {
				notaMinima = calificaciones[estudiante][examen];
			}
		}
	}
	return notaMinima;
}

double LibroDeCalificaciones::obtenerPromedio(const int[], const int nota) {
	int promedio = 0;
	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		promedio = promedio + calificaciones[nota][estudiante];
	}
	return promedio / 3;
}

//Metodos Publicos
std::string LibroDeCalificaciones::obtenerReporteNotas() {
	std::string reporte;
    for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		reporte = reporte + "\Estudiante [" + to_string(estudiante) + "\t";
		for (int examen = 0; examen < EXAMENES; examen++) {
			reporte = reporte + to_string(calificaciones[estudiante][examen]) + "]\t";
		}
		reporte = reporte + to_string(obtenerPromedio([][estudiante])) + "]\t\t\t";
	}
	return reporte;
}


std::string LibroDeCalificaciones::obtenerReporteNotasMaxMin() {
	int notaMax = obtenerNotaMaxima();
	int notaMin = obtenerNotaMinima();
	string reporte;
	for (int estudiante = 0; estudiante < ESTUDIANTES; estudiante++) {
		for (int examen = 0; examen < EXAMENES; examen++) {
			reporte = reporte + "\Nota Maxima [" + to_string(notaMax) + "]\t";
			reporte = reporte + "\Nota Minima [" + to_string(notaMin) + "]\t";
		}
	}
	return reporte;
}