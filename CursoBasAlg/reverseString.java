public class reverseString{
    public String reversestring(String str)
    {
        if(str.isEmpty()){
            return str;
        }
        else{
            return reversestring(str.substring(1))+str.charAt(0);
        }
    }
    public static void main(String[] args){
        reverseString obj = new reverseString();
        String result = obj.reversestring("Algoritmos son amor");
        System.out.println(result);
    
    }
}  