public class Persona{
	String nombre; 
	String sexo;
	int edad;

	public void caminar(){
		System.out.println( nombre +" esta caminando");
	}

	public void estudiar(){
		System.out.println(nombre+ " esta estudiando");
	}

	public void comer(String comida){
		System.out.println(nombre+ " esta comiendo "+comida);
	}

	public void pedirCerveza(){
		if(edad>17){
			System.out.println("Dar cerveza");
		}else{
			System.out.println("No cerveza");
		}

	}
}



class Curso{
	public static void main(String[] args) {

		Persona juan = new Persona();
		juan.nombre = "Juanito";
		juan.sexo = "Masculino";
		juan.edad = 17;
		juan.caminar();
		juan.estudiar();
		juan.comer("Tacos");
		juan.pedirCerveza();


		Persona bety = new Persona();

		bety.nombre = "Beatriz";
		bety.sexo = "Femenino";
		bety.edad = 24;
		bety.estudiar();
		bety.caminar();
		bety.comer("Pizza");
		bety.pedirCerveza();

	}
}