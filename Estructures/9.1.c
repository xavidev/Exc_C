/* 9.1 Diseña un tipo de datos para representar cada una de las siguientes entidades:
a) Un punto del espacio tridimensional.
b) Un píxel de una imagen en color (RGB).
c) Una imagen en color, de dimensiones máximas 800×600, pero puede tener otras menores.
d) Un número complejo (también llamado número imaginario).
e) Una fecha.
f) Una persona: nombre, fecha de nacimiento y teléfono de contacto.
g) Una agenda con capacidad para guardar 100 personas.
Si los datos que componen un nuevo tipo estructurado son todos del mismo tipo (por ejemplo,
el punto del espacio), ¿Cuándo es mejor utilizar un tipo estructurado homogéneo (vector) y
cuando un tipo estructurado heterogéneo (registro)? */

// Punto del espacio tridimensional

	struct espacioTri	float espacioTri[MAX][MAX][MAX];
	{
		float posx;
		float posy;
		float posz;
	};

// Un píxel de una imagen en color (RGB)

		struct colorRGB		float colorRGB[MAX][MAX][MAX];
		{
			float red;
			float green;
			float blue;
		};

// Una imagen en color, de dimensiones máximas 800x600, pero puede tener otras menores.

		struct colorImg
		{
			int size[800][600];
			float colorRGB[MAX][MAX][MAX];
		};

// Un número complejo (también llamado número imaginario).

		struct complexNum{

			float valorA;
			float valorB;
			float valorC;
		};

// Una fecha
	struct date		int date[MAX][MAX][MAX];
	{
		int dia;
		int mes;
		int año;
	}

// Una persona: nombre,fecha de nacimiento y teléfono de contacto

	struct persona
	{
		char nombre[MAX];
		int date[MAX][MAX][MAX];
		int telf;
	};

// Una agenda con capacidad para guardar 100 personas
	
	struct agenda{

		char nombre[MAX];
		char apellido[MAX];
		char direccion[MAX];
		int telf;
	};

	struct agenda agenda1[100];


