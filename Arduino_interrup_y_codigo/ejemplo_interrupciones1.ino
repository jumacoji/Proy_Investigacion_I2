//Ejemplo de interrupcion con arduino

int LED = 13; //Se inicializa el led en el pin 13
int Pulsador = 2; //Se inicializa el pulsador en el pin digital 2
volatile int estado = LOW; //Se empieza con el led apagado


void setup()
{
  pinMode(LED, OUTPUT); //Se configura el led como salida
  pinMode (Pulsador, INPUT); //Se configura el pulsador como entrada
  attachInterrupt (digitalPinToInterrupt(Pulsador), ManejarPulsador, RISING); //Se utiliza esta funcion para hacer la interupcion (recomendada por arduino)
  digitalWrite(LED,estado); //Para ir cambiando el led segun el estado
}

void ManejarPulsador () { //Funcion la cual cambia el estado del led
  estado = !estado;

}

void loop (){
  digitalWrite(LED,estado); //Llevarle al led el valor de estado en el bucle
}