<%@ page contentType="text/html;charset=GB2312" %> 
<HTML> 
<BODY> 
<Font size=2> 

<FORM action="lookSum" Method="post" > 
等差数列求和：   
<BR>输入首项:
<Input type=text name="firstItem" size=4>       
输入公差:
<Input type=text name="var" size=4>      
求和项数:
<Input type=text name="number" size=4>
<Input type=submit value="提交">
</FORM>
<FORM action="lookSum" Method="get" >    
等比数列求和：   
<BR>输入首项:
<Input type=text name="firstItem" size=4>       
输入公比:<Input type=text name="var" size=4>       
求和项数:<Input type=text name="number" size=4>  
<Input type=submit value="提交"> 
</FORM>

</Font>
</BODY> 
</HTML>