#include<stdio.h>
int main(){
int a;
	printf("******************************************************************************************\n");
	printf("PANEL DE ADMINISTRACION PARA SNORT IDS-CIDETI\n");
	printf("Seleccione una de las opciones, para hacerlo escriba el numero de la opción deseada.\n");
	printf("1.-Escaneo Rapido con Snort\n 2.-Actualizar Firmas de Snort\n 3.-Detener Servicio de Snort IDS\n 4.-Detener Servicio Barnyard2\n 5.-Reiniciar servidor Apache\n 6.-Iniciar servicio de Snort(Por defecto esta activo)\n 7.-Iniciar Servicio de Barnyard(Por defecto esta activo)\n 8.-Comprobar Servicios\n 9.-Abrir BASE(Interface web Snort)\n");
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
printf("El servidor Web se ha detenido\n");	
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
printf("Salir\n");	
system("exit");	
}	
	
return 0;	
}