<%@ page contentType="text/html";charset="GB2312" %>
<html>
<body>
<p align center> biaodan </p>
	<from action="" method="post">
		<table>
			<tr>
				<td>�û���</td>
				<td> <input type="text" name="user"> </td>
			</tr>
			<tr>
				<td>����</td>
				<td> <input type="text" name="passwd"> </td>
			</tr>
			<tr>
				<td>�Ա�</td>
				<td><input type="radio" name="R" value="��">
						<input type="radio" name="R" value="��"></td>
			</tr>
			<tr>
				<td>����</td>
				<td><select name="choise">
							<option selected value="1">����
							<option value="2">����
							<option value="3">��Ӿ
						</select>
				</td>
			</tr>
			<tr>
				<td>���˼��</td>
				<td><textarea rows="3" cols="4"></textarea></td>
			</tr>
			<tr>
				<input type="submit" value="�ύ">
				<input type="reset" value="����">
		</table>
	</form>
</body>
</html>