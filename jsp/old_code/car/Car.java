package tom.jiafei;

public class Car{
    String number,name,madeTime;
    public String getNumber(){
    	try{byte b[]=number.getBytes("ISO-8859-1");
    	    number=new String(b);    		
    	}
    	catch(Exception e){}
    	return number;
    }
    public void setNumber(String number){
    	this.number=number;
    }
    
    public String getName(){
    	try{byte b[]=name.getBytes("ISO-8859-1");
    	    name=new String(b);    		
    	}
    	catch(Exception e){}
    	return name;
    }
    public void setName(String name){
    	this.name=name;
    }
    
    public String getMadeTime(){
    	try{byte b[]=madeTime.getBytes("ISO-8859-1");
    	madeTime=new String(b);    		
    	}
    	catch(Exception e){}
    	return madeTime;
    }
    public void setMadeTime(String Time){
    	madeTime=Time;
    }
}