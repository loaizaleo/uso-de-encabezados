# uso-de-encabezados

Ejemplos de cómo organizar código **C++** usando **archivos de encabezado** (`.h`): una clase contador y una clase para calcular la desviación estándar.

## Objetivo

Aprender a separar la **declaración** de una clase (en el `.h`) de su **uso** (en el `.cpp`), y a usar las guardas `#ifndef / #define / #endif` para evitar definiciones repetidas.

## Lenguaje y tecnologías

- **C++**
- **ROOT** (CERN) para la macro `sencillo.C`

## Archivos

| Archivo | Descripción |
|---|---|
| `counter.h` | Declaración de la clase `counter` (incrementar, decrementar, fijar valor y valor máximo). |
| `counterTest.cpp` | Programa que prueba la clase `counter`. |
| `stdevII.h` | Clase `desviacion` con el método `rms()` para calcular la desviación estándar de un arreglo. |
| `sencillo.C` | Macro de ROOT que lee `datosSencillo.dat` y usa `stdevII.h`. |
| `readme_sql.md` | Plantilla vacía de una introducción a SQL (no tiene relación con el resto). |

## Uso

### Clase `counter`

```bash
g++ counterTest.cpp counter.cpp -o counterTest
./counterTest
```

### Desviación estándar con ROOT

```bash
root -l sencillo.C
```

Requiere el archivo `datosSencillo.dat` (6 números enteros) en la misma carpeta.

## Estado actual

Los ejemplos están **incompletos** y no compilan tal como están:

- **Falta `counter.cpp`**, con la implementación de los métodos de `counter`. Sin él, `counterTest.cpp` da error de enlace (`undefined reference to counter::counter()`).
- En `stdevII.h`, la línea `int o, int n;` es un error de sintaxis (debe ser `int o, n;`).
- `stdevII.h` calcula la media dividiendo entre `n-1` y la desviación entre `n-2`. Lo correcto es dividir la media entre `n` y la desviación muestral entre `n-1` (como en los repositorios `clase` y `funciones`).
- Falta el archivo de datos `datosSencillo.dat`.

## Repositorios relacionados

- [clase](https://github.com/loaizaleo/clase): desviación estándar con una clase en un `.h` (funciona).
- [funciones](https://github.com/loaizaleo/funciones): la misma idea con funciones.
