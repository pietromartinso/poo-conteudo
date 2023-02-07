#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "ConteudoMinistrado.hpp"
#include "Pessoa.hpp"
class SalaAula;//forward declaration
//include "SalaAula.hpp"

class Disciplina{
	public:
		Disciplina(std::string nome, SalaAula* sala);

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int cargaHoraria);
		
		Pessoa* getProfessor();
		void setProfessor(Pessoa* professor);

		void adicionarAluno(Pessoa* aluno);
		void removerAluno(Pessoa* aluno);
		void removerAluno(unsigned long cpf);
		std::list<Pessoa*>& getAlunos();

		void setSalaAula(SalaAula* sala);
		SalaAula* getSalaAula();

		void imprimeDados(std::string& cabecalho, unsigned int& cargaTotalCurso);

		void adicionarConteudoMinistrado(std::string conteudo, unsigned short cargaHorariaConteudo);
		void imprimirConteudosMinistrados();
	private:
		std::string nome;
		unsigned short int cargaHoraria;

		Pessoa* professor;
		SalaAula* sala;
		std::list<Pessoa*> alunos;
		std::list<ConteudoMinistrado*> conteudos;
};
#endif
