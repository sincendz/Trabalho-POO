#include "Dvd.h"
#include "cd.h"
#include <string>

using namespace std;

//--------------------------------------------------------------------------------------------------------------------------

	void apagar_fds_dvd(vector<Dvd> &novo){
		int fds;
		cout << "Indici que vc quer apagar: ";
		cin >> fds;
        cin.ignore();
		novo.erase(novo.begin() + (fds-1));

	}


	void apagar_fds_cd(vector<cd> &novo){
		int fds;
		cout << "Indici que vc quer apagar: ";
		cin >> fds;
        cin.ignore();
		novo.erase(novo.begin() + (fds-1));

	}
	
	
	
	
	void menu_mudancas_Dvd(){
		cout << "(1) Artista" << '\n';
		cout << "(2) Titulo" << '\n';
		cout << "(3) Lançamento" << '\n';
		cout << "(4) Genero" << '\n';
		cout << "(5) Formato de Audio" << '\n';
		cout << "(6) Formato de Tela" << '\n';
		cout << "(7) Faixas" << '\n';
		cout << "(8) Legendas" << '\n';
		cout << "(9)KEY WORDS: " << "\n";
		cout << "(0) Sair " << "\n";
	}
	
	
	void mudar_dvd(vector<Dvd> &novo){
		
		
		do
		{	
			int mudar;
			menu_mudancas_Dvd();
			cin >> mudar;

			if(mudar == 1){
				int cd_mud;
				cout << "Numero do Dvd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Nome: " ;
				string new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setArtista(new_nome);

			}

			else if(mudar == 2){
				int cd_mud;
				cout << "Numero do Dvd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Titulo: " ;
				string new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setTitulo(new_nome);
			}

			else if(mudar == 3){
				int cd_mud;
				cout << "Numero do Dvd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Lançamento: " ;
				int new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setLancamento(new_nome);
			}

			else if(mudar == 4){
				int cd_mud;
				cout << "Numero do Dvd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Genero: " ;
				string new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setGenero(new_nome);

			}

			else if(mudar == 5){
				int cd_mud;
				cout << "Numero do Dvd que será mudado: ";
				cin >> cd_mud;

				vector<string> chnd;

				for(int i = 0; i < novo[cd_mud-1].getFaixas().size(); i++){
					cout << "Novo valor para Formato de Audio " << i+1 << ": ";
					string fax;
					cin >> fax;
					chnd.push_back(fax);
			
				}

				novo[cd_mud-1].setFormatoAudio(chnd);
			}

			else if(mudar == 6 ){
				int cd_mud;
				cout << "Numero do Dvd que será mudado: ";
				cin >> cd_mud;

				vector<string> chnd;

				for(int i = 0; i < novo[cd_mud-1].getFaixas().size(); i++){
					cout << "Novo valor para Formato de tela " << i+1 << ": ";
					string fax;
					cin >> fax;
					chnd.push_back(fax);
			
				}

				novo[cd_mud-1].setFormatoTela(chnd);				
			}

			else if(mudar == 7){
				int cd_mud;
				cout << "Numero do Dvd que será mudado: ";
				cin >> cd_mud;

				vector<string> chnd;

				for(int i = 0; i < novo[cd_mud-1].getFaixas().size(); i++){
					cout << "Novo valor para Faixa " << i+1 << ": ";
					string fax;
					cin >> fax;
					chnd.push_back(fax);
			
				}

				novo[cd_mud-1].setFaixas(chnd);
			}

			else if(mudar == 8){
				int cd_mud;
				cout << "Numero do Dvd que será mudado: ";
				cin >> cd_mud;

				vector<string> chnd;

				for(int i = 0; i < novo[cd_mud-1].getFaixas().size(); i++){
				cout << "Novo valor para Legenda " << i+1 << ": ";
					string fax;
					cin >> fax;
					chnd.push_back(fax);
			
				}

				novo[cd_mud-1].setLegendas(chnd);
			}
			else if(mudar == 9){
				int cd_mud;
				cout << "Numero do Dvd que será mudado: ";
				cin >> cd_mud;

				vector<string> chnd;

				for(int i = 0; i < novo[cd_mud-1].getKeyWord().size(); i++){
					cout << "Novo valor para Keyword " << i+1 << ": ";
					string fax;
					cin >> fax;
					chnd.push_back(fax);
			
				}

				novo[cd_mud-1].setKeyWord(chnd);
			}

			else if(mudar == 0){
				break;
			}

		} while (true);
		
	}

	
	
	
	
	
	
	void menu_mudancas_cd(){
		cout << "(1) Artista" << '\n';
		cout << "(2) Titulo" << '\n';
		cout << "(3) Lançamento" << '\n';
		cout << "(4) Genero" << '\n';
		cout << "(5) Duração" << '\n';
		cout << "(6) Volume" << '\n';
		cout << "(7) Faixas" << '\n';
		cout << "(8)KEY WORDS: " << "\n";
		cout << "(0) Sair " << "\n";
	}

	void mudar_cd(vector<cd> &novo){
		
		
		do
		{	
			int mudar;
			menu_mudancas_cd();
			cin >> mudar;

			if(mudar == 1){
				int cd_mud;
				cout << "Numero do cd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Nome: " ;
				string new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setArtista(new_nome);

			}

			else if(mudar == 2){
				int cd_mud;
				cout << "Numero do cd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Titulo: " ;
				string new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setTitulo(new_nome);
			}

			else if(mudar == 3){
				int cd_mud;
				cout << "Numero do cd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Lançamento: " ;
				int new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setLancamento(new_nome);
			}

			else if(mudar == 4){
				int cd_mud;
				cout << "Numero do cd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Genero: " ;
				string new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setGenero(new_nome);

			}

			else if(mudar == 5){
				int cd_mud;
				cout << "Numero do cd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Duração: " ;
				int new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setDuracao(new_nome);
			}

			else if(mudar == 6 ){
				int cd_mud;
				cout << "Numero do cd que será mudado: ";
				cin >> cd_mud;

				cout << "Digite o Novo Volume: " ;
				int new_nome;
				cin >> new_nome;

				novo[cd_mud-1].setVolume(new_nome);
			}

			else if(mudar == 7){
				int cd_mud;
				cout << "Numero do cd que será mudado: ";
				cin >> cd_mud;

				vector<string> chnd;

				for(int i = 0; i < novo[cd_mud-1].getFaixas().size(); i++){
					cout << "Novo valor para Faixa " << i+1 << ": ";
					string fax;
					cin >> fax;
					chnd.push_back(fax);
			
				}

				novo[cd_mud-1].setFaixas(chnd);
			}
			else if(mudar == 8){
				int cd_mud;
				cout << "Numero do cd que será mudado: ";
				cin >> cd_mud;

				vector<string> chnd;

				for(int i = 0; i < novo[cd_mud-1].getKeyWord().size(); i++){
					cout << "Novo valor para Keyword " << i+1 << ": ";
					string fax;
					cin >> fax;
					chnd.push_back(fax);
			
				}

				novo[cd_mud-1].setKeyWord(chnd);
			}

			else if(mudar == 0){
				break;
			}

		} while (true);
		
	}


	void mostrar_dvd(vector<Dvd> &novo){
		for(int i = 0 ; i < novo.size() ; i++){
			cout << "Artista: " << novo[i].getArtista()<< '\n';

			cout << "Titulo: " << novo[i].getTitulo()<< '\n';

			for (int j = 0; j < novo[i].getFaixas().size(); j++)
			{
				cout << "faixa " << j+1 << " " << novo[i].getFaixas()[j] << '\n';
			}
			
			cout << " Lançamento: " << novo[i].getLancamento()<< '\n';

			cout << "Genero " << novo[i].getGenero()<< '\n';

			for (int j = 0; j < novo[i].getKeyWord().size(); j++)
			{
				cout << "keywords " << j+1 << " " << novo[i].getKeyWord()[j] << '\n';
			}

			//Dvd
			for (int j = 0; j < novo[i].getFormatoAudio().size(); j++)
			{
				cout << "Formato de Audio:  " << j+1 << " " << novo[i].getFormatoAudio()[j] << '\n';
			}


			for (int j = 0; j < novo[i].getFormatoTela().size(); j++)
			{
				cout << "Formato da tela:  " << j+1 << " " << novo[i].getFormatoTela()[j] << '\n';
			}


			for (int j = 0; j < novo[i].getLegendas().size(); j++)
			{
				cout << "Lançamento:  " << j+1 << " " << novo[i].getLegendas()[j] << '\n';
			}

			cout << '\n';
			cout << '\n';

		}
		cout << '\n';
		cout << '\n';
	}
	






	void mostrar_cd(vector<cd> & novo){
		for(int i = 0; i < novo.size(); i++){
			//cout << "CD " << i+1 <<'\t';

			cout << "Artista: " << novo[i].getArtista()<< '\n';

			cout << "Titulo: " << novo[i].getTitulo()<< '\n';

			for (int j = 0; j < novo[i].getFaixas().size(); j++)
			{
				cout << "faixa " << j+1 << " " << novo[i].getFaixas()[j] << '\n';
			}
			
			cout << " Lançamento: " << novo[i].getLancamento()<< '\n';

			cout << "Genero " << novo[i].getGenero()<< '\n';

			for (int j = 0; j < novo[i].getKeyWord().size(); j++)
			{
				cout << "keywords " << j+1 << " " << novo[i].getKeyWord()[j] << '\n';
			}

			//CD
			cout << "Duração : " << novo[i].getDuracao() << '\n';

			cout << "Volume : " << novo[i].getVolume() << '\n';

			cout << "Coletania : ";
			if(novo[i].getColetania() == true){
				cout << " sim";
			}
			else if (novo[i].getColetania() == false){
				cout << " não";
			}

			cout << '\n';
			cout << '\n';
			
		}
		cout << '\n';
		cout << '\n';
	}






	void mstrr(vector<cd> & novo,vector<Dvd> &novo2 ){
		cout << "++++++++++CDS++++++"<< '\n';
		mostrar_cd(novo);
		cout << '\n';
		cout << '\n';
		cout << "++++++++++DVDS++++++"<< '\n';

		mostrar_dvd(novo2);
		cout << '\n';
		cout << '\n';
	}

    void dvd_novo(Dvd &novo){
        //quantidade_cd = quantidade_cd + 1;
		//cout << "CD NUMERO : " << quantidade_cd << '\n';
		//Artista 
		string art_nome;
		cout << "Artista : ";
		cin >> art_nome;
		//getline(cin, art_nome);
		novo.setArtista(art_nome);
		cout << '\n';


		//Titulo
		string def_titulo;
		cout << "Titulos: ";
		cin >> def_titulo;
		//getline(cin, def_titulo);
		novo.setTitulo(def_titulo);
		cout << '\n';

		//Faixas
		vector<string> def_faixas;
		string faxixass;
		int quantidade_de_fiaxas;
		cout << "quantidade de faixas: ";
		cin >> quantidade_de_fiaxas;

		for (int i = 0; i < quantidade_de_fiaxas; i++) {
			cout << "Faixa " << i + 1 << ": ";
			//getline(cin, faxixass);
			cin >> faxixass;
			def_faixas.push_back(faxixass);
			cout << '\n';
		}
		novo.setFaixas(def_faixas);
		cout << '\n';

		//Lançamento
		int lanca;
		cout << "Lancamento: ";
		cin >> lanca;
		novo.setLancamento(lanca);

		//Genero
		string gene;
		cout << "Genero: ";
		cin >> gene;
		novo.setGenero(gene);

		//key_words
		string key;
		vector<string> words;
		int quant;
		cout << "Quantidade de Key Words: ";
		cin >> quant;

		for (int i = 0; i < quant; i++)
		{
			cout << "Key Words " << i + 1 << ": ";
			cin >> key;
			words.push_back(key);
		}
		novo.setKeyWord(words);

        //Dvd
		//Formato de Audio
        string formato_a;
		cout << "Formato de Audio : ";
		cin >> formato_a;

		vector<string> formato_audio;
		formato_audio.push_back(formato_a);

		novo.setFormatoAudio(formato_audio);

		//Formato de Tela
		string formato_t;
		cout << "Formato de Tela: ";
		cin >> formato_t;

		vector<string> formato_tela;
		formato_audio.push_back(formato_t);

		novo.setFormatoTela(formato_tela);

		//Formato de Legenda
		string legen;
		vector<string> leg;
		int quantaa;
		cout << "Quantidade de Legendas: ";
		cin >> quantaa;

		for (int i = 0; i < quantaa; i++)
		{
			cout << "Legenda" << i + 1 << ": ";
			cin >> legen;
			leg.push_back(legen);
		}
		novo.setKeyWord(leg);

		system("clear");
    }











	void cd_novo(cd &novo) {
		//quantidade_cd = quantidade_cd + 1;
		//cd novo;
		//cout << "CD NUMERO : " << quantidade_cd << '\n';
		//Artista 
		string art_nome;
		cout << "Artista : ";
		cin >> art_nome;
		cin.ignore();
		//getline(cin, art_nome);
		novo.setArtista(art_nome);
		cout << '\n';


		//Titulo
		string def_titulo;
		cout << "Titulos: ";
		cin >> def_titulo;
		//getline(cin, def_titulo);
		novo.setTitulo(def_titulo);
		cout << '\n';

		//Faixas
		vector<string> def_faixas;
		string faxixass;
		int quantidade_de_fiaxas;
		cout << "quantidade de faixas: ";
		cin >> quantidade_de_fiaxas;

		for (int i = 0; i < quantidade_de_fiaxas; i++) {
			cout << "Faixa " << i + 1 << ": ";
			//getline(cin, faxixass);
			cin >> faxixass;
			def_faixas.push_back(faxixass);
			cout << '\n';
		}
		novo.setFaixas(def_faixas);
		cout << '\n';

		//Lançamento
		int lanca;
		cout << "Lancamento: ";
		cin >> lanca;
		novo.setLancamento(lanca);

		//Genero
		string gene;
		cout << "Genero: ";
		cin >> gene;
		novo.setGenero(gene);

		//key_words
		string key;
		vector<string> words;
		int quant;
		cout << "Quantidade de Key Words: ";
		cin >> quant;

		for (int i = 0; i < quant; i++)
		{
			cout << "Key Words " << i + 1 << ": ";
			cin >> key;
			words.push_back(key);
		}
		novo.setKeyWord(words);

		//CD
		//Duração
		int durac;
		cout << "duracao: ";
		cin >> durac;
		novo.setDuracao(durac);


		//Volume
		float volu;
		cout << "volume: ";
		cin >> volu;
		novo.setVolume(volu);

		//Coletânia
		string cole;
		cout << "Coletania : S/N ";
		cin >> cole;
		if (cole == "S") {
			novo.setColetania(true);
		}
		else if (cole == "N") {
			novo.setColetania(false);
		}

		cout << "CD CADASTRADO" << '\n';

		system("clear");
	}








	void menu() {
		std::cout << "+++++++++++++++++++++++++++++++++++" << '\t' << '\n';
		std::cout << "++       Escolha uma Opção         ++" << '\t' << '\n';
		std::cout << "++  CD.......................: 1   ++" << '\t' << '\n';
		std::cout << "++  DVD......................: 2   ++" << '\t' << '\n';
		std::cout << "++  Mostrar CDS..............: 3   ++" << '\t' << '\n';
		std::cout << "++  Mostrar DVDS.............: 4   ++" << '\t' << '\n';
		std::cout << "++  Mudar CDS................: 5   ++" << '\t' << '\n';
		std::cout << "++  Mudar DVD................: 6   ++" << '\t' << '\n';
		std::cout << "++  Apagar CD................: 7   ++" << '\t' << '\n';
		std::cout << "++  Apagar DVD...............: 8   ++" << '\t' << '\n';
		std::cout << "++  Limpar...................: 9   ++" << '\t' << '\n';
		std::cout << "++  FIM......................: 0   ++" << '\t' << '\n';
		std::cout << "+++++++++++++++++++++++++++++++++++" << '\t' << '\n';
	}


//--------------------------------------------------------------------------------------------------------------------------









int main() {

	//cout << "Aperte 1" << '\n';
	
	vector<cd> cds_drive;
	vector<Dvd> dvds_drive;
	



	do
	{
		//system("clear");
		menu();
		int escolha;
		cout << "Escolha um numero: ";
		cin >> escolha;

		if(escolha == 1)
		{
			cd novo_cd;
			cd_novo(novo_cd);
			cds_drive.push_back(novo_cd);
		}
		else if(escolha == 2)
		{
			Dvd novo_dvd;
			dvd_novo(novo_dvd);
			dvds_drive.push_back(novo_dvd);
		}
		else if(escolha == 3)
		{
			system("clear");
			mostrar_cd(cds_drive);
		}
		else if(escolha == 4)
		{
			system("clear");
			mostrar_dvd(dvds_drive);
		}
		else if(escolha == 5){mudar_cd(cds_drive);}
		else if(escolha == 6){mudar_dvd(dvds_drive);}
		else if(escolha == 7){apagar_fds_cd(cds_drive);}
		else if(escolha == 8){apagar_fds_dvd(dvds_drive);}
		else if(escolha == 9){system("clear");}
		else if(escolha == 11){mstrr(cds_drive,dvds_drive);}
		else if(escolha == 0)
		{
			system("clear");
			return false;
		}
	} while (true);
	


}

