#include<stdio.h>
int main(){

int a;
int b;

        printf("******************************************************************************************\n");
        printf("PANEL DE ADMINISTRACION PARA SNORT IDS-CIDETI\n");
        printf("Seleccione una de las opciones, para hacerlo escriba el numero de la opción deseada.\n");
printf("1.-Escaneo Rapido con Snort\n");
printf("2.-Actualizar Firmas de Snort\n");
printf("3.-Detener Servicio de Snort IDS\n");
printf("4.-Detener Servicio Barnyard2\n");
printf("5.-Reiniciar servidor web\n");
printf("6.-Iniciar Servicio Snort IDS(Por defecto iniciado)\n");
printf("7.-Iniciar Servicio Barnyard2(Por defecto iniciado)\n");
printf("8.-Estado de Servicios de Snort IDS\n");
printf("9.-Abrir GUI-WEB BASE en el navegado\n");
printf("10.-Cambiar direccion IP escucha de Snort IDS(Red que monitorea Snort)\n"); 

      printf("Ingrese un numero:\n");
        scanf("%i",&a);
        printf("******************************************************************************************\n");
if(a==1){
printf("Ejecutando Snort IDS\n");
system("/usr/local/bin/snort -A console -q -u snort -g snort -c /etc/snort/snort.conf -i eth0");
}
if(a==2){
printf("Actualizando Firmas para Snort IDS\n");
system("pulledpork.pl -c /etc/snort/pulledpork.conf");
}
if(a==3){
printf("Servicio Snort detenido, no se detectaran intrusiones hata el reinicio del sistema\n");
system("service snort stop");
}
if(a==4){
printf("Servicio Barnyard2 detenido, no se guardaran alertas en la BD hasta el reinicio del sistema\n");
system("service barnyard2 stop");
}
if(a==5){
printf("El servidor Web se ha reiniciado\n");
system("service apache2 restart");
}
if(a==6){
printf("Servicio Snort IDS iniciado\n");
system("service snort start");
}
if(a==7){
printf("Servicio Barnyard2 Iniciado\n");
system("service barnyard2 start");
}
if(a==8){
printf("Lista de servicios Snort\n");
system("service snort status");
system("service barnyard2 status");
system("service apache2 status");
}
if(a==9){
system("/usr/bin/firefox localhost/base/base_main.php");
}
if(a==10){
printf("\nAl ser abierto el arhivo Snort.conf encuentre la linea 45.\n La linea indicada contiene la cadena de texto: ipvar HOME_NET direccionIP/subfijo\n Finalmente guardar cambios.");
printf("Ejemplos de como podria quedar la linea despues de su modificacion: \n\n ipvar HOME_NET 177.242.7.0/22\n  ipvar HOME_NET 10.10.10.0/8\n  ipvar HOME_NET 192.168.70.0");
printf("\nSeleccione un editor de Texto\n 1.-pico\n 2.-notepadqq(GUI)\n");
printf("SELECCIONE EDITOR:");
scanf("%i",&b);
if(b==1){
system("pico /etc/snort/snort.conf");
}
if(b==2){
system("notepadqq /etc/snort/snort.conf");
}
}//if a
return 0;
}

