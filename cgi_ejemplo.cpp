
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    /*https://cybmeta.com/meta-charset-como-y-por-que-utilizarlo-siempre*/
    cout << "Content-type:text/html; charset=utf-8\r\n\r\n";
    
    cout << "<!DOCTYPE html>\n";
    cout << "<html>\n";
    cout << "<head>\n";
    cout << "<title>Hello World - Second CGI Program</title>\n";
    cout << "<meta charset='utf-8'>\n";
    cout << "<style>\n";
    cout << "  body {\n";
    cout << "    text-align: center; /* Centra el texto y elementos inline/inline-block dentro del body */\n";
    cout << "    font-family: sans-serif; /* Opcional: Mejora la fuente */\n";
    cout << "  }\n";
    cout << "  form {\n";
    cout << "    width: 50%; /* Define un ancho para el formulario, ajusta según necesites */\n";
    cout << "    margin: 20px auto; /* 20px de margen arriba/abajo, auto para centrar izquierda/derecha */\n";
    cout << "    padding: 20px; /* Añade algo de espacio interno */\n";
    cout << "    border: 1px solid #ccc; /* Opcional: añade un borde para verlo mejor */\n";
    cout << "    box-shadow: 2px 2px 5px #888888; /* Opcional: añade una sombra */\n";
    cout << "    background-color: #f9f9f9; /* Opcional: color de fondo para el formulario */\n";
    cout << "    /* Por defecto, el text-align: center del body también centrará los elementos dentro del form */ \n";
    cout << "  }\n";
    // Si quieres que los elementos dentro del formulario (label, input) no se centren, descomenta la línea de abajo:
    // cout << "  form { text-align: left; } \n"; /* Restaura la alineación izquierda dentro del form */
    cout << "  label, input { margin: 5px; display: inline-block; } /* Espacio entre elementos del formulario */\n"; // Opcional
    cout << "</style>\n";
    cout << "</head>\n";
    cout << "<body>\n";
    cout << "<form action='cgi_ejemplo.cgi' method='post'>";
    cout << "<label>Enter yout name:</label>\n";
    cout << "<input type='text' name='name'>\n";
    cout << "<input type='submit' name='sbmt' value='enviar'>\n";
    cout << "</form>\n";

    string str = "";
    cin >> str;
    if (str != "")
    {
        cout << "<h2>Hello! your name is: " << str << "</h2>\n";
    }

    cout << "</body>\n";
    cout << "</html>\n";
    return 0;
}