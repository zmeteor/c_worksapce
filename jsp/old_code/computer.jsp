
<%@ page contentType="text/html; charset=GB2312" %> 

<FORM action = "" method = post name = form>
<INPUT type = "text"  name = "ok">
<BR><INPUT TYPE = "submit" value = "�ͳ�" name = submit>
</FORM>

	<% 
	    String a = request.getParameter("ok");
		if(a ==null)
		{
			a = "1";
		}
		try
		{
			double number = Integer.parseInt(a);
			out.print(a + "��ƽ����Ϊ��" + Math.sqrt(number));
		}
		catch(NumberFormatException e)
		{
			out.print("<BR>" + "�����������ַ�");
		}
	%>


