 <%@ page import="user.yourbean.Series"%> 
 <jsp:useBean id="lie" type="user.yourbean.Series" scope="request"/>
 <HTML>
 <BODY >
 
 <Table border=1>    
 <tr>      
 <th> 数列的首项</th>     
 <th> <jsp:getProperty name="lie" property="name"/></th>   
 <th> 所求项数</th>
 <th> 求和结果</th>    
 </tr>     
 <td><jsp:getProperty name="lie" property="firstItem"/></td>     
 <td><jsp:getProperty name="lie" property="var"/></td>    
 <td><jsp:getProperty name="lie" property="number"/></td>     
 <td><jsp:getProperty name="lie" property="sum"/></td>    </tr>    
 </Table> 

 </BODY>
 </HTML>