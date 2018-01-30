
<%@ page contentType="text/html;charset=GB2312" %> 

<HEAD>
<%@ include file="whead.txt" %>
</HEAD> <HTML> 
<BODY bgcolor=cyan><Font size=2>
	<CENTER> 
	<BR><table border=2> 
	<tr> 
	<th>登录</th>
	</tr>
	<FORM action="helpLogin" Method="post"> 
	<tr>
	<td>登录名称:<Input type=text name="logname"></td>
	</tr> 
	<tr>
	<td>输入密码:<Input type=password name="password"></td>
	</tr> 
	</table> 
	<BR><Input type=submit name="g" value="提交"> 
	</Form> 
	</CENTER> 
</BODY>
</HTML>