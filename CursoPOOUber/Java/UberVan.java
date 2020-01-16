import java.util.ArrayList;
import java.util.Map;

class UberVan extends Car {
    Map<String, ArrayList<String,Integer>> typeCarAccepted;
    Arraylist<String> seatsMaterial;


    String brand;
    String model;

    public UberVan(String license, Account driver,
    Map<String, ArrayList<String,Integer>> typeCarAccepted,
    Arraylist<String> seatsMaterial)
    {
        super(license, driver);
        this.typeCarAccepted = typeCarAccepted;
        this.seatsMaterial = seatsMaterial;
    }

    @Override
    public void setPassenger(Integer passenger) {
        if(passenger==6){
            this.passenger = passenger;
        }
        else{
            System.out.println("Necesitas asignar 6 pasajeros");
        }
    }
}