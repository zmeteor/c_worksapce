
<%@ page contentType="text/html; charset=GB2312" %> 

<TITLE> one.jsp </TITLE>

<HEAD>
  <jsp:include page="head.txt"/>
</HEAD>

<HTML>
<BODY >
  <FORM action="" method=get name=form>
   ������1��100֮���������<INPUT type="text" name="number"> 
   <BR> <INPUT TYPE="submit" value="�ͳ�" name=submit>
  </FORM> 

<%  
    String num=request.getParameter("number");
    if(num==null)
    { 
		num="0";
    }
    try
    {
       int n=Integer.parseInt(num);
       if(n>=1&&n<=50)
       {
		%>
			<jsp:forward page="two.jsp" >
			<jsp:param name="number" value="<%=n%>" />
			</jsp:forward>
		<%   
		}
      else if(n>50&&n<=100)
       {
		%>      
			<jsp:forward page="three.jsp" >
			<jsp:param name="number" value="<%=n%>" />
			</jsp:forward>
		<%   
	   }
     }
    catch(NumberFormatException e)
     {
		%>      
			<jsp:forward page="error.jsp" > 
            <jsp:param name="mess" value="<%=e.toString()%>" />
			</jsp:forward>
		<%   
	}
%>
</BODY>
</HTML>