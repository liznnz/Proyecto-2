#include <string>

class Arbol {
private:
    std::string especie;
    int edad;
    float tam;
    int anch;

public:
    Arbol();
    Arbol(std::string esp, int ed, float ta, float anch) : especie(esp), edad(ed), tam(ta), anch(anch) {};

    std::string get_especie();
    int get_edad();
    float get_tam();
    int get_anch();

    void set_especie(std::string);
    void set_edad(int edad);
    void set_tam(float ta);
    void set_anch(int anch);
    void mostrarInformacion() {
        std::cout << "Especie: " << especie << ", Edad: " << edad << " años" << ",\nTamaño: " << tam << "m" << ", Ancho: " << anch << "m" << std::endl;

    }


};

std::string Arbol::get_especie() {
    return especie;
}

int Arbol::get_edad() {
    return edad;
}

float Arbol::get_tam() {
    return tam;
}

int Arbol::get_anch() {
    return anch;
}

void Arbol::set_especie(std::string esp) {
    especie = esp;
}

void Arbol::set_edad(int ed) {
    edad = ed;
}

void Arbol::set_tam(float ta) {
    tam = ta;
}

void Arbol::set_anch(int anch) {
    anch = anch;
};