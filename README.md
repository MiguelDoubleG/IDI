# IDI

## QtDesigner
  Para poder usar la plantilla, es necesario guardar el archivo .ui del Designer como Form.ui, y cambiar el objectName del QWidget base a MyForm:
  
  
![MyForm](https://i.imgur.com/2H8SpOf.png)


## OpenGl
  Para poder usar Qt con OpenGl, es necesario añadir al fichero .pro lo siguiente: QT += opengl
  
## Compilar
qmake-qt5 y make , luego con ./(nombre del .pro) se ejecutara

