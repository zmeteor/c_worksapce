<%@ page contentType="text/html";charset="GB2312" %>
<html>
<body>
<p align center> biaodan </p>
	<from action="" method="post">
		<table>
			<tr>
				<td>用户名</td>
				<td> <input type="text" name="user"> </td>
			</tr>
			<tr>
				<td>密码</td>
				<td> <input type="text" name="passwd"> </td>
			</tr>
			<tr>
				<td>性别</td>
				<td><input type="radio" name="R" value="男">
						<input type="radio" name="R" value="男"></td>
			</tr>
			<tr>
				<td>爱好</td>
				<td><select name="choise">
							<option selected value="1">打球
							<option value="2">音乐
							<option value="3">游泳
						</select>
				</td>
			</tr>
			<tr>
				<td>个人简介</td>
				<td><textarea rows="3" cols="4"></textarea></td>
			</tr>
			<tr>
				<input type="submit" value="提交">
				<input type="reset" value="重置">
		</table>
	</form>
</body>
</html>