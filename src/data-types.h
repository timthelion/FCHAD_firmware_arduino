//Frame Handlers
///Initialization Frame
////Touch sensors
typedef struct{
 unsigned char * touchStates;
 long * touchSensorValues;
}TouchSensors;
////Braille Cell
////Pings
////Events
typedef struct{
 unsigned long int start;
 unsigned long int phase;
 unsigned long int next;
 void (*onEvent)();
}EventHandler;
////Standard initializers
