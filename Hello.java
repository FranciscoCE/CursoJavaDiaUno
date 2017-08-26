public class Hello{
	public static void main(String[] args) {
		

		try {
		System.out.println("Hola "+args[0]+ " como estas?");
	}catch(Exception ){
		System.out.println("La ejecucion correcta es: java Hello [tu nombre]");
	}
	}
}