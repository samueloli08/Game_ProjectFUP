#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <vector>
#include "../inc/mobs.h"
#include "../inc/equips.h"

using namespace std;

string ecossistema (int n) {
    string lista[15] = {
        "Floresta de Coniferas",
        "Deserto de Sal",
        "Pantano Estagnado",
        "Savana Dourada",
        "Selva Tropical",
        "Tundra Artica",
        "Planalto Vulcanico",
        "Canions Aridos",
        "Floresta de Cogumelos Gigantes",
        "Arquipelago Flutuante",
        "Mar de Cristais",
        "Pantano de Alcatrao",
        "Floresta Petrificada",
        "Planicie de Ossos",
        "Recife de Coral Terrestre"
    };
         return lista[n];

}

vector <string> biomasDescobertos;

mobs gerarMob(string biomaAtual) {

    vector <mobs> lista;

    // Floresta de Coníferas
    if (biomaAtual == "Floresta de Coniferas") {
        lista.push_back(mobs("Lobo", 6, 3));
        lista.push_back(mobs("Batedor Goblin", 5, 2));
        lista.push_back(mobs("Alfa da Matilha", 35, 6));
    }

    // Deserto de Sal
    else if (biomaAtual == "Deserto de Sal") {
        lista.push_back(mobs("Escorpiao Albino", 7, 4));
        lista.push_back(mobs("Esqueleto Desidratado", 5, 3));
        lista.push_back(mobs("Elemental de Miragem", 40, 5));
    }

    // Pântano Estagnado
    else if (biomaAtual == "Pantano Estagnado") {
        lista.push_back(mobs("Crocodilo do Lodo", 10, 4));
        lista.push_back(mobs("Verme das Sombras", 4, 2));
        lista.push_back(mobs("Bruxa da Podridao", 30, 7));
    }

    // Savana Dourada
    else if (biomaAtual == "Savana Dourada") {
        lista.push_back(mobs("Hiena Atroz", 8, 3));
        lista.push_back(mobs("Cacador Gnoll", 9, 4));
        lista.push_back(mobs("Rei Leao Jubadefogo", 45, 8));
    }

    // Selva Tropical
    else if (biomaAtual == "Selva Tropical") {
        lista.push_back(mobs("Serpente Constritora", 12, 3));
        lista.push_back(mobs("Macaco Guerreiro", 7, 3));
        lista.push_back(mobs("Pantera das Sombras", 38, 6));
    }

    // Tundra Ártica
    else if (biomaAtual == "Tundra Artica") {
        lista.push_back(mobs("Urso Polar", 15, 5));
        lista.push_back(mobs("Espectro do Gelo", 10, 4));
        lista.push_back(mobs("Gigante de Gelo", 55, 10));
    }

    // Planalto Vulcânico
    else if (biomaAtual == "Planalto Vulcanico") {
        lista.push_back(mobs("Salamandra de Fogo", 12, 5));
        lista.push_back(mobs("Diabrete de Cinzas", 6, 4));
        lista.push_back(mobs("Wyvern de Magma", 50, 9));
    }

    // Cânions Áridos
    else if (biomaAtual == "Canions Aridos") {
        lista.push_back(mobs("Abutre Gigante", 8, 4));
        lista.push_back(mobs("Bandido das Rochas", 10, 3));
        lista.push_back(mobs("Grifo das Encostas", 42, 7));
    }

    // Floresta de Cogumelos
    else if (biomaAtual == "Floresta de Cogumelos Gigantes") {
        lista.push_back(mobs("Esporo Animado", 4, 2));
        lista.push_back(mobs("Besouro Luminescente", 12, 3));
        lista.push_back(mobs("Micelante Rei", 45, 6));
    }

    // Arquipélago Flutuante
    else if (biomaAtual == "Arquipelago Flutuante") {
        lista.push_back(mobs("Arpia do Vento", 9, 4));
        lista.push_back(mobs("Elemental de Ar", 11, 5));
        lista.push_back(mobs("Dragao das Nuvens", 60, 12));
    }

    // Mar de Cristais
    else if (biomaAtual == "Mar de Cristais") {
        lista.push_back(mobs("Golem de Quartzo", 18, 4));
        lista.push_back(mobs("Aranha de Vidro", 7, 5));
        lista.push_back(mobs("Guardiao de Diamante", 55, 8));
    }

    // Pântano de Alcatrão
    else if (biomaAtual == "Pantano de Alcatrao") {
        lista.push_back(mobs("Bolha de Piche", 14, 3));
        lista.push_back(mobs("Zumbi de Petroleo", 10, 4));
        lista.push_back(mobs("Amalgama Viscosa", 48, 7));
    }

    // Floresta Petrificada
    else if (biomaAtual == "Floresta Petrificada") {
        lista.push_back(mobs("Gargula de Madeira", 15, 4));
        lista.push_back(mobs("Serpente de Pedra", 13, 5));
        lista.push_back(mobs("Ent de Obsidiana", 58, 9));
    }

    // Planície de Ossos
    else if (biomaAtual == "Planicie de Ossos") {
        lista.push_back(mobs("Guerreiro Esqueleto", 8, 4));
        lista.push_back(mobs("Carnical Faminto", 11, 5));
        lista.push_back(mobs("Cavaleiro da Morte", 52, 11));
    }

    // Recife de Coral Terrestre
    else if (biomaAtual == "Recife de Coral Terrestre") {
        lista.push_back(mobs("Caranguejo", 16, 3));
        lista.push_back(mobs("Arraia Flutuante", 9, 5));
        lista.push_back(mobs("Hidra de Coral", 65, 6));
    }

    int i = rand() % lista.size();
    return lista[i];
}

int classe;
vector <string> equipDoPersonagem;

equips Equipamento(int classe) {

    vector <equips> lista2;

    if (classe == 1) {
        lista2.push_back(equips("Quebra-Cercos", 2));
        lista2.push_back(equips("Couraça do Bastião", 2));
        lista2.push_back(equips("Lâmina do Juramento", 4));
        lista2.push_back(equips("Escudo de Ferro-Negro", 2));
        lista2.push_back(equips("Manoplas de Impacto", 5));
    }

    else if (classe == 2) {
        lista2.push_back(equips("Cetro do Ápice Arcano", 2));
        lista2.push_back(equips( "Manto do Tecelão de Éter", 2));
        lista2.push_back(equips("Grimório das Eras Perdidas", 4));
        lista2.push_back(equips("Anel da Mente Aberta", 2));
        lista2.push_back(equips("Tiara de Vidro Estelar", 5));
    }

    else {
        lista2.push_back(equips("Arco Curvo de Vento-Célere", 2));
        lista2.push_back(equips("Aljava Sem Fundo", 2));
        lista2.push_back(equips("Braçadeira do Caçador", 4));
        lista2.push_back(equips("Manto de Camuflagem Espectral", 2));
        lista2.push_back(equips( "Visor de Olho de Águia", 5));
    }

    int i = rand() % lista2.size();
    return lista2[i];
}

int main() {

    setlocale(LC_ALL, "Portuguese_Brazil"); //biblioteca do Portugues
    srand(time(0)); //Semente que alimenta os rand

    cout << "Seja bem-vindo ao RPG!" << endl;

    cout << "Digite o nome do seu personagem: ";
    string nome;
    cin >> nome;

    cout << nome << " agora escolha a sua classe:\n 1. Guerreiro\n 2. Mago\n 3. Arqueiro" << endl;
    cin >> classe;

    if (classe == 1) {
        cout << "Voce escolheu a classe Guerreiro!" << endl;
    } else if (classe == 2) {
        cout << "Voce escolheu a classe Mago!" << endl;
    } else if (classe == 3) {
        cout << "Voce escolheu a classe Arqueiro!" << endl;
    } else {
        cout << "Opção inválida!" << endl;
    }

    cout << "Voce esta pronto para começar sua aventura, " << nome << "!" << endl;
    cout << "Pressione enter para iniciar ..." << endl;
        cin.ignore();
        cin.get();

    //Pontos do personagem inicial
    int vida = 20;
    int poder = 1;
    int locais = 0;
    int equipamentos = 0;
    int pontos = 0;
    int especialEquip = 0;

    //Açoes da Rodada
    int acao;
    string sair;
    string biomaAtual;

    bool jogando = true;
    int contaRodadas = 0;

    while (jogando) {
        contaRodadas++;

        cout << " --- Rodada " << contaRodadas << " Iniciada --- " << endl;

        cout << "Pressione enter para continuar..." << endl;
        cin.get();

        if (contaRodadas > 1) {
        cout << "Você dencansou e recebeu 3 recuperadores. Escolha em que USAR:" << endl;
        cout << "|1| VIDA // |2| PODER // |3| PONTOS DE COMPRA" << endl;
        cin >> acao;
            if (acao == 1) {
                vida += 3;
                cout << "Sua vida agora é : " << vida << endl;
            }
            if (acao == 2) {
                poder += 3;
                cout << "Sua vida agora é : " << poder << endl;
            }
            if (acao == 3) {
                pontos += 3;
                cout << "Sua vida agora é : " << pontos << endl;
            }
        }

        cout << "Jogue os dados para determinar seus PONTOS DE COMPRA" << endl;
        cout << "Pressione enter para jogar os dados..." << endl;
        cin.get();

        int dados = 2+rand() % 9;
        pontos += dados; 


        cout << "Voce obteve " << dados << " nos dados!" << endl;
        cout << "Agora voce possui " << pontos << " pontos" << endl;
        cout << "Pressione enter para continuar..." << endl;
        cin.get();

        cout << "Escolha uma ação: " << endl;
        cout << "1. Evoluir personagem - (são necessários 5 pontos - poder = " << poder << ")" << endl;
        cout << "2. Explorar Bioma  - (são necessários 3 pontos - biomas descobertos = " << locais << ")" << endl;
        cout << "3. Melhorar equipamento - (são necessários 4 pontos - equipamentos = " << equipamentos << ")" << endl;
        cout << endl;

        cin >> acao;

        if (acao == 1) {
            if (pontos >= 5) {
                poder++;
                pontos -= 5;
                cout << "Voce evolui seu poder (poder atual '" << poder << ")" << endl;
                cout << "Pressione enter para continuar..." << endl;
                cin.ignore();
                cin.get();
            }
        }
        else if (acao == 2) {
            if (pontos >= 3) {
                locais++;
                pontos -= 3; 
                int nsorteado = rand() % 14;
                biomaAtual = ecossistema((nsorteado));
                cout << "Voce descobriu o bioma " << biomaAtual << "!" << endl;
                biomasDescobertos.push_back(biomaAtual);
                cout << "Pressione enter para continuar..." << endl;
                cin.ignore();
                cin.get();
            }
        }
        else if (acao == 3) {
            if (pontos >= 4) {
                equipamentos++;
                pontos -= 4;
                if (classe == 1) {
                    equips equipAtual = Equipamento(classe);
                    cout << "Voce recebeu " << equipAtual.nome << "!" << endl;
                    equipDoPersonagem.push_back(equipAtual.nome);
                    especialEquip += equipAtual.poder; 
                    cout << "Ele te concede +" << equipAtual.poder << " pontos no seu Ataque Especial" << endl;
                    cout << "Pressione enter para continuar..." << endl;
                    cin.ignore();
                    cin.get();
                }
                else if (classe == 2) {  
                    equips equipAtual = Equipamento(classe);
                    cout << "Voce recebeu " << equipAtual.nome << "!" << endl;
                    equipDoPersonagem.push_back(equipAtual.nome);
                    especialEquip += equipAtual.poder; 
                    cout << "Ele te concede +" << equipAtual.poder << " pontos no seu Ataque Especial" << endl;
                    cout << "Pressione enter para continuar..." << endl;
                    cin.ignore();
                    cin.get();
                }
                else { 
                    equips equipAtual = Equipamento(classe);
                    cout << "Voce recebeu " << equipAtual.nome << "!" << endl;
                    equipDoPersonagem.push_back(equipAtual.nome);
                    especialEquip += equipAtual.poder; 
                    cout << "Ele te concede +" << equipAtual.poder << " pontos no seu Ataque Especial" << endl;
                    cout << "Pressione enter para continuar..." << endl;
                    cin.ignore();
                    cin.get();
                }
            }
        }

        cout << "Seu status atual: " << endl;
        cout << " -- Vida = " << vida << " HP" <<  endl;
        cout << " -- Poder = " << poder << " PW" << endl;
        cout << " -- Biomas = " << endl;
        if (biomasDescobertos.size() < 1) {
            cout << " -> Nenhum Bioma" << endl;
        }
        else {
            for (string nomes : biomasDescobertos) {
                cout << " -> " << nomes << endl;
            }
        }   
        cout << " -- Equipamentos = " << endl;
        if (equipDoPersonagem.size() < 0) {
            cout << " -> Nenhum Equipamento" << endl;
        }
        else {
            for (string nomes : equipDoPersonagem) {
                cout << " -> " << nomes << endl;
            }
        }
        cout << endl;
        cout << " -- Pontos Acumulados = " << pontos << endl;
        cout << "Pressione enter para continuar..." << endl;
        cin.get();

        if (locais < 1) {
            cout << "Voce nao possui biomas para explorar" << endl;
            cout << "Pressione enter para continuar..." << endl;
            cin.get();
            cout << "Você finalizou a rodada!" << endl;
                cout << "Aperte enter para continuar OU Digite | x | para sair " << endl;
                
                cin.ignore();
                getline(cin, sair) ;
                if (sair == "x" || sair == "X") {
                    jogando = false;
                }
                else {
                    jogando = true;
                }
        }
        else {
            cout << "Explorar um bioma" << endl;
            cout << "Selecione ação" << endl;
            cout << "Digite -| 1 |- pra explorar -| 2 |- para pular" << endl;
            cin >> acao;

            if (acao == 1) {
                cout << "Você adentrou " << biomaAtual << "!" << endl;
                cout << "Pressione enter para continuar..." << endl;
                cin.ignore();
                cin.get();

                mobs inimigo = gerarMob(biomaAtual);
                
                cout << "O " << inimigo.nome << " acaba de aparecer!" << endl;
                cout << "Ele possui " << inimigo.vida << " de HP!" << endl; 
                cout << "Ele infringe " << inimigo.dano << " de Dano!" << endl;
                cout << "Pressione enter para continuar..." << endl;
                cin.get();

                cout << "Escolha o que fazer" << endl;
                cout << "Digite 1 para BATALHAR!" << endl;
                cout << "Digite 2 para FUGIR" << endl;
                cin >> acao;
                
                if (acao == 1) {
                    cout << "A sua BATALHA com " << inimigo.nome << " será lendaria" << endl;
                    cout << "Pressione enter para continuar..." << endl;
                    cin.ignore();
                    cin.get();

                    int hpDeBatalha = inimigo.vida;

                    while (hpDeBatalha > 0) {
                        cout << "Lançar seu ataque" << endl;
                        cout << "Pressione enter para ATACAR..." << endl;
                        cin.get();

                        int nsorteado = rand() % 19;
                        if (nsorteado >= 16) {
                            if (especialEquip > 0) {
                                hpDeBatalha -= (poder + especialEquip);
                                cout << "WOOOAH " << nome << " você acertou um CRÍTICO" << endl;
                                cout << "Uniu sua FORÇA ao PODER dos seus EQUIPAMENTOS" << endl;
                            }
                        }
                        else {
                            hpDeBatalha -= poder;
                            cout << "Que Belo Ataque!!" << endl;
                        }

                        if (hpDeBatalha > 0) {
                        cout << "O " << inimigo.nome << " possui " << hpDeBatalha << "de HP" << endl;
                        }
                        else {
                            cout << "INCRÍVEL " << inimigo.nome << " FOI DERROTADO!!" << endl;
                            break;
                        }

                        cout << "Pressione enter para continuar..." << endl;
                        cin.get();

                        cout << "É parece que ele está irritado, CUIDADO!!" << endl;
                        vida -= inimigo.dano;
                        cout << "WHOOSH!" << endl;
                        if (vida > 0) {
                        cout << "Você sofreu um ataque! " << endl;
                        cout << "Sua vida agora é " << vida << " HP!!" << endl;
                        }
                        else {
                        cout << "Você sofreu um golpe fatal!" << endl;
                        cout << "A sua jornada do Heroi termina aqui !!" << endl;
                        jogando = false;
                        }
                    }
                }
            }

            else if (acao == 2) {
                cout << "Você finalizou a rodada!" << endl;
                cout << "Aperte enter para continuar OU Digite | x | para sair " << endl;
                
                cin.ignore();
                getline(cin, sair) ;
                if (sair == "x" || sair == "X") {
                    jogando = false;
                }
                else {
                    jogando = true;
                }
            }
            else {
                cout << "Comando invalido" << endl;
                cout << "Renicie o jogo" << endl;
                jogando = false;
            }
        }
        
    }
}