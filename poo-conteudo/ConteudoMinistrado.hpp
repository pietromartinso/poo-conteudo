#ifndef CONTEUDO_MINISTRADO_HPP
#define CONTEUDO_MINISTRADO_HPP

#include<string>
#include<list>

class ConteudoMinistrado{
	public:
		static unsigned int proxId;
		ConteudoMinistrado(std::string descricao, unsigned short cargaHorariaConteudo);

		std::string& getDescricao();
		unsigned short getCargaHorariaConteudo();
		unsigned int getId();
	private:

		std::string descricao;
		unsigned short cargaHorariaConteudo;
		unsigned int id;
};
#endif
