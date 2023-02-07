#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>
#include "Disciplina.hpp"

class SalaAula{
	public:
		SalaAula(std::string nome, unsigned int capacidade);
		
		std::string getNome();
		void setNome(std::string nome);

		unsigned int getCapacidade();
		void setCapcidade(unsigned int capacidade);

		void adicionarDisciplina(Disciplina* disciplina);
		void removerDisciplina(Disciplina* disciplina);
		std::list<Disciplina*>& getDisciplinas();
	private:
		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif
