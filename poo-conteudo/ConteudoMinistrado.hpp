#ifndef CONTEUDO_MINISTRADO_HPP
#define CONTEUDO_MINISTRADO_HPP

#include<string>
#include<list>

class ConteudoMinistrado{
	public:
		ConteudoMinistrado(std::string descricao, unsigned short cargaHorariaConteudo);

		std::string& getDescricao();
		unsigned short getCargaHorariaConteudo();
		unsigned int getId();
	private:
		static unsigned int proxId;

		std::string descricao;
		unsigned short cargaHorariaConteudo;
		unsigned int id;
};
#endif
