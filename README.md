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
| `counter.cpp` | Implementación de los métodos de `counter`. El contador nunca baja de 0 ni pasa del valor máximo. |
| `counterTest.cpp` | Programa que prueba la clase `counter`. |
| `stdevII.h` | Clase `desviacion` con el método `rms()` para calcular la desviación estándar de un arreglo. |
| `sencillo.C` | Macro de ROOT que lee `datosSencillo.dat` y usa `stdevII.h`. |
| `datosSencillo.dat` | 6 números de ejemplo para `sencillo.C`. |
| `readme_sql.md` | Plantilla vacía de una introducción a SQL (no tiene relación con el resto). |

## Uso

### Clase `counter`

```bash
g++ counterTest.cpp counter.cpp -o counterTest
./counterTest
```

Resultado:

```
Final value of c1 is 49
Final value of c2 is 1
```

### Desviación estándar con ROOT

```bash
root -l sencillo.C
```

Lee los 6 números de `datosSencillo.dat` (`2 4 4 4 5 5`) y muestra su desviación estándar muestral (≈ 1,095).

## Repositorios relacionados

- [clase](https://github.com/loaizaleo/clase): desviación estándar con una clase en un `.h` (funciona).
- [funciones](https://github.com/loaizaleo/funciones): la misma idea con funciones.
