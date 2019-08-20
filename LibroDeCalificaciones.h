// Archivo: LibroDeCalificaciones.h

// Alumno: Noel Muñoz Ramírez

// Profesor: Maikol Guzman

// Universidad Nacional

// Fecha: 16/08/2019

#ifndef LIBRODECALIFICACIONES_LIBRODECALIFICACIONES_H
#define LIBRODECALIFICACIONES_LIBRODECALIFICACIONES_H

#include <iostream>
#include <cstdint>
#include <string>
const int ESTUDIANTES = 10;
const int EXAMENES = 3;

class LibroDeCalificaciones {
private:
	//Atributos
	std::string nombreCurso;
	int calificaciones[ESTUDIANTES][EXAMENES];
	//Metodos Privados
	int obtenerNotaMinima();
	int obtenerNotaMaxima();
	double obtenerPromedio(const int[], const int);

public:
	//Constructores
	LibroDeCalificaciones();
	LibroDeCalificaciones(const std::string &nombreCurso, int [][EXAMENES]);

	//Destructor
	~LibroDeCalificaciones();

	//Metodos Set y Get
	void setNombreCurso(std::string &nombreCurso);
	std::string getNombreCurso();

	//void setPos(int fil, int col, int pos);
	//int getPos(int fil, int col);

	std::string obtenerReporteNotas();
	std::string obtenerReporteNotasMaxMin();

};


#endif //LIBRODECALIFICACIONES_LIBRODECALIFICACIONES_H