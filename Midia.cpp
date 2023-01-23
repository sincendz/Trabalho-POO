
#include "Midia.h"

/*Midia::Midia(std::string arti, std::string tit,std::string fax, int lanca, std::string gene,std::string keybo)
{
    titulo = 
}*/

//Construtor
Midia::Midia(std::string arti , std::string tit , std::vector<std::string> fax, int lanca, std::string gene, std::vector<std::string> key)
{
    artista = arti;
    titulo = tit;
    faixas = fax;
    lancamento = lanca;
    genero = gene;
    key_words = key;
}

Midia::Midia() = default;

//Destrutor
Midia::~Midia()
{
    
}

//Artista
std::string Midia::getArtista()
{
    return artista;
}

void Midia::setArtista( std::string art)
{
    artista = art;
}

//Titulo
std::string Midia::getTitulo()
{
    return titulo;
}
void Midia::setTitulo(std::string tit)
{
    titulo = tit;
}

//Faixas
std::vector<std::string> Midia::getFaixas()
{
    return faixas;
}
void Midia::setFaixas(std::vector<std::string> fax)
{
    faixas = fax;
}
	

//Lançamento
int Midia::getLancamento()
{
    return lancamento;
}
void Midia::setLancamento(int lan)
{
    lancamento = lan;
}

//Gênero
std::string Midia::getGenero()
{
    return genero;
}
void Midia::setGenero(std::string gen)
{
    genero = gen;
}

//KeyWord

std::vector<std::string> Midia::getKeyWord()
{
    return key_words;
}

void Midia::setKeyWord(std::vector<std::string> key )
{
    key_words = key;
}
