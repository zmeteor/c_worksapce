
<%@ page contentType="text/html; charset=GB2312" %> 
<HTML>
<BODY>
<FONT size = 3>
	����ָ���һ��a��z��Сд��ĸ����£�
<% 
	char a[]=new char[26];
	int m=0;
	for(char c='a';c<='z';c++)
	{ 
		a[m]=c;
		m++;
	}
	int randomIndex=(int)(Math.random()*a.length); 
	char ch=a[randomIndex]; 
	session.setAttribute("count",new Integer(0));
	session.setAttribute("save",new Character(ch));
	
%>
	<BR><A HREF = "guess.jsp">ȥ�������</A>

</FONT>
<BODY>
</HTML>