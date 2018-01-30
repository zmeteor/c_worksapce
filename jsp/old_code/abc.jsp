<%@ page contentType="text/html; charset=GB2312" %> 
<TITlE> abc.jsp</TITLE>
<HTML>
<BODY>
<TABLE border = "10" cellspacing = "1" cellspacing = "1">
<FONT color = blue>
<SPAN style = 'color : red'>
<tr align="center" >
<th colspan="26">
	大、小写英文字母表
</th>
</tr>

  <%!
	    char ch1='a',ch2 = 'A';
        int i;
  %>
 <tr style = "width:20px;" align="center">
     <%
		for(i=0;i<26;i++)
           {
			    out.print("<td style = 'color:#7D26CD;width:20px' >");
				out.print(ch1 + " "); 
			    out.print("</td>");
				ch1 += 1;
            }
		
      %>
 </tr>
 <tr style = "width:20px;" align="center">
	   <%
		for(i=0;i<26;i++)
           {
			    out.print("<td style = 'color:#FF6600;width:20px'>");
				out.print(ch2 + " ");
				out.print("</td>");
				ch2 += 1;
            }
      %>
  </tr>
</SPAN>
</FONT>
</TABLE>
</BODY>
</HTML>