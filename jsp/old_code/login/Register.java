
package mybean.data;
public class Register
{   String logname="",password="",phone="",email="",message="",pic="";
    String backNews; 
    public void setLogname(String name)
    {  logname=name;
    }
   public String getLogname()
    { return logname;
    }
   public void setPassword(String pw)
    {  password=pw;
    }
   public String getPassword()
    { return password;
    }
   public void setEmail(String em)
    {  email=em;
    }
   public String getEmail()
    {  return email;
    }
	 public void setPhone(String ph)
    {  phone=ph;
    }
   public String getPhone()
    {  return phone;
    }
	 public void setMessage(String me)
    {  message=me;
    }
   public String getMessage()
    {  return message;
    }
	 public void setPic(String p)
    {  pic=p;
    }
   public String getPic()
    {  return pic;
    }
   public String getBackNews()
    { return backNews;
    }
   public void setBackNews(String s)
    { backNews=s;
    } 
}