##Snort-Panel-CIDETI##

Descripción: Esta Aplicación fue escrita en lenguaje C con el objetivo de administrar de manera eficiente todos los proceso que frecuentemente requiere ejecutar Snort IDS, por medio de la terminal de Unix es posible operar dicho programa. Se decidio implementar dicho programa en terminal debido a que muchas veces el administrador del servidor requiere conectarse remotamente.

Pasos para ejecutar el programa: 

1.- Compilar el programa: Dentro de la terminal, en la ruta donde haya sido descargado el archivo utilizar el comando (sin comillas):
        "gcc interface_ids.c -o Snort-Panel-CIDETI ".
        
        
2.- Ejecutar el programa: Dentro de la terminal ejecutar el siguiente comando:
        ./Snort-Panel-CIDETI
        
Caracteristicas de la aplicación:
•	Comprobar actividad realizada con Snort IDS en tiempo real: inicia el programa de Snort de manera independiente al proceso que captura datos en segundo plano, es útil cuando se quiere visualizar el tráfico que está detectando Snort en la red.

•	Actualizar firmas de Snort IDS: Es ejecutado el Script PulledPork para actualizar las firmas de alertas para Snort. Es importante detener el servicio de Snort IDS y Barnyard2 antes de ejecutar este comando.

•	Detener servicio de Snort IDS: Detiene el proceso en segundo plano que permite detectar alertas en la red.

•	Detener servicio de barnyard2: Detiene el registro de alertas en la base de datos, cabe destacar que si el servicio de Snort IDS está detenido Barnyard2 no escribirá ninguna alerta.

•	Reiniciar servidor Web: Reinicia el servidor web Apache2.

•	Iniciar servicio de SNORT IDS: Inicializa el proceso en segundo plano para Snort(al iniciar el sistema el proceso se ejecuta automáticamente).

•	Iniciar servicio de Barnyard2: Inicializa el proceso en segundo plano para Barnyard2(al iniciar el sistema el proceso se ejecuta automáticamente).

•	Comprobar Servicios Activos: comprueba los servicios que necesita Snort para funcionar adecuadamente en el sistema(proceso de Snort IDS, proceso de barnyard2 y servidor web apache).

•	Ejecutar BASE (interface web para Snort): ejecuta automáticamente en el navegador la interface web BASE.

•	Cambiar dirección IP escucha de Snort IDS: Permite ejecutar un editor de texto ya sea Pico o Notepad con la ruta del archivo snort.conf para cambiar la  IP en la que Snort registra alertas en la red, además contiene un breve manual para configurarlo correctamente. 
