{// Si no separamos especificamente el error seria: 

	if (x<=0 | | y<=0) throw 
		runtime error(”argumento no positivo”); 
		// | | significa ”o” 
	int area1 = area(x,y); 
	if (z<=2) 
		throw
			runtime error(”argumento no positivo”);
	int area2 = framed area(1,z); 
	if (y<=2 | | z<=2) 
		throw
			runtime error(”argumento no positivo”); 
	int area3 = framed area(y,z); 
	double ratio = double(area1)/area3; 
	//convertir a double } 
