
<%@ page contentType="text/html; charset=GB2312" %> 
<%@ taglib tagdir="/WEB-INF/tags/sj" prefix="computer"%>
<%@ page import = "java.text.*" %>
<HTML><BODY>
   <H3>���������ε������</H3>
   <computer:Trangle sideA="1" sideB="6" sideC="7"/>
   <%

		NumberFormat f=NumberFormat.getInstance();

		f.setMaximumFractionDigits(3);

		Double result=area.doubleValue();
		if(result == -1)
		{
			out.println("���ܹ���������");
		}
		else
		{
			String str=f.format(result);
			out.println("�����ε����Ϊ��"+str);
		}

	%>
</BODY></HTML>