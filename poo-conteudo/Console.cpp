#include "Console.hpp"

#include<iostream>

void Console::imprimirDadosDisciplina(Disciplina& disciplina){
	std::cout << "Disicplina: "<< disciplina.getNome() << std::endl;
	if(disciplina.getProfessor() != nullptr)
		std::cout << "Professor: " << disciplina.getProfessor()->getNome() << std::endl;
	else
		std::cout << "Sem professor" << std::endl;

	std::cout << "Conteudos Ministrados" << std::endl;
	disciplina.imprimirConteudosMinistrados();
}

