📘 Práctica N°1 — Algoritmos y Estructuras de Datos
📌 Descripción

Implementación de tres algoritmos fundamentales junto con su análisis de complejidad y justificación de estructuras de datos utilizadas.

⚙️ Algoritmos implementados
🔹 1. Verificación de Palíndromo

Determina si una cadena es igual al leerse de izquierda a derecha y viceversa.

Técnica utilizada: dos punteros
Complejidad: O(n)
🔹 2. Segundo valor más alto

Obtiene el segundo mayor valor de un arreglo sin ordenar.

Estrategia: recorrido único
Complejidad: O(n) (más eficiente que O(n log n) de ordenamiento)
🔹 3. Calculadora de tarifas

Simula el cálculo de tarifas según tipo de usuario y distancia.

Tipo: problema de decisión
Complejidad: O(1)
📊 Complejidad de los algoritmos
Algoritmo	Complejidad
Palíndromo	O(n)
Segundo mayor	O(n)
Tarifas	O(1)
🧠 Decisiones de diseño
Arreglos / listas: utilizados para acceso directo y recorrido eficiente.
Strings indexados: ideales para aplicar la técnica de dos punteros.
Variables simples: suficientes para problemas de cálculo directo (tarifas).
Se evita el uso de estructuras innecesarias para mantener eficiencia.
🚀 Mejores prácticas aplicadas
Evitar ordenamientos innecesarios (optimización a O(n))
Uso de constantes para mejorar mantenibilidad
Manejo de casos borde:
Arreglos con menos de 2 elementos
Valores repetidos
Entradas inválidas
📂 Tecnologías usadas
C++
Python
📎 Repositorio

🔗 https://github.com/Enerdev/SEMANA-6-

📚 Referencias
Cormen, T. H., et al. Introduction to Algorithms (2022)
Weiss, M. A. Data Structures and Algorithm Analysis in C++ (2017)
Goodrich, M. T. Data Structures and Algorithms in Python (2014)
