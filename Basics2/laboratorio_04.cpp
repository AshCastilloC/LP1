int area ( int length , int width );
int main() 
{ 
	int x4 = area(10, -7); // ok: pero rectangulo // con ancho -7? 
	int x5 = area(10.7,9.3);// ok: pero llama a // area (10 ,9) 
	char x6 = area(100, 9999);// ok, pero trunca // el resultado
	return area (4 ,4); 
}
 int area ( int length , int width ) 
{ 
	return length * width ; 
} 
