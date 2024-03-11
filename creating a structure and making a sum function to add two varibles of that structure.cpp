//creating a structure and making a sum function to add two varibles of that structure
struct Complex {

	int real;
	int imaginary;

	Complex addComplex(Complex c1, Complex& c2) {

		Complex c3;
		c3.real = c1.real + c2.real;
		c3.imaginary = c1.imaginary + c2.imaginary;

		return c3;
	}

};
