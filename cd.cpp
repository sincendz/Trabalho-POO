#include "cd.h"

//Construtor
cd::cd(std::string arti , std::string tit , std::vector<std::string> fax, int lanca
, std::string gene, std::vector<std::string> key,int dura, float volu,
 bool cole):Midia(arti, tit, fax, lanca, gene, key){ 
    duracao = dura;
    volume = volu;
    coletania = cole;
}
cd::cd() = default;
//Destrutor
cd::~cd()
{
}

//Duração
void cd::setDuracao(int dura)
{
    if (dura > 0)
        duracao = dura;
    else
        std::cout << "Tem que lançar aqui " << '\n';
}

int cd::getDuracao()
{
    return duracao;
}

//Volume
void cd::setVolume(float vol)
{
    if (vol > 0)
        volume = vol;
    else
        std::cout << "Tem que lançar aqui " << '\n';
      

}

float cd::getVolume()
{
    return volume;
}

//Coletania

void cd::setColetania(bool colet){
    coletania = colet;
}

bool cd::getColetania()
{
    return coletania;
}
