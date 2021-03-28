![.gitignore](https://desarrolloweb.com/archivoimg/general/4011.jpg)


### ¿Por qué es conveniente incluirlo?
Porque sirve para decirle a Git qué archivos o directorios completos debe ignorar y no subir al repositorio de código. 


### ¿Cuándo se debe hacer?

No hay motivo para no usarlo en cualquier proyecto, porque que no todos los archivos y carpetas son necesarios de gestionar a partir del sistema de control de versiones.
Hay código que no necesitas enviar a Git, ya sea porque sea privado para un desarrollador en concreto y no lo necesiten (o lo deban) conocer el resto de las personas. 
Pueden ser también archivos binarios con datos que no necesitas mantener en el control de versiones, como diagramas, instaladores de software, etc.


### ¿Cómo usaría la página https://www.gitignore.io/?

Básicamente permite escribir en un campo de búsqueda los nombres de todas las herramientas, sistemas, frameworks, lenguajes, etc.
Seleccionas todos los valores y luego generas el archivo de manera automática.
Escribes cada una de las palabras y pulsas la tecla enter para ir creando los "chips". Te debe aparecer algo como esto:


![.gitignore](https://desarrolloweb.com/archivoimg/general/4009.png)


Le das a generar, y una vez generado el código de tu gitignore, ya solo te queda copiarlo y pegarlo en tu archivo .gitignore, en la raíz de tu proyecto.


### ¿Cómo configuraría el archivo .gitignore?

Dentro del archivo .gitignore colocarás texto plano, con todas las carpetas que quieres que Git simplemente ignore, así como los archivos.
Las entradas de este archivo también pueden seguir un patrón coincidente:
~~~
* se utiliza como una coincidencia comodín.

/ se usa para ignorar las rutas relativas al archivo .gitignore.

# es usado para agregar comentarios
~~~


Este es un ejemplo de cómo puede lucir el archivo .gitignore :
~~~

  # Ignora archivos del sistema Mac 
  
  .DS_store

  # Ignora la carpeta node_modules
  
  node_modules

  # Ignora todos los archivos de texto
  
  *.txt

  # Ignora los archivos relacionados a API keys
  
  .env

  # Ignora archivos de configuración SASS
  
  .sass-cache
  
  ~~~
