#ifndef MIDIA_H
#define MIDIA_H

#include <iostream>
#include <vector>
class Midia
{
private:
	//Artista
    std::string artista;

	//Título
	std::string titulo;

	//faixas :
	std::vector<std::string> faixas;
	
	//Lançamento
	int lancamento;

	//Gênero
	std::string genero;
	
	//keywords
	std::vector<std::string> key_words;

public:
    //Midia(std::string , std::string, std::string , int , std::string, std::string);
	Midia(std::string , std::string, std::vector<std::string>, int , std::string , std::vector<std::string>);
    Midia();
	~Midia();

	//Artista
    std::string getArtista();
	void setArtista(std::string );

	//Titulo
	std::string getTitulo();
	void setTitulo(std::string);

	//Faixas
	std::vector<std::string> getFaixas();
	void setFaixas(std::vector<std::string>);
	

	//Lançamento
	int getLancamento();
	void setLancamento(int );

	//Gênero
	std::string getGenero();
	void setGenero(std::string );

	//KeyWord
	std::vector<std::string> getKeyWord();
	void setKeyWord(std::vector<std::string>);

};
#endif