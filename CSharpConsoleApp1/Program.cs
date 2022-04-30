class Test1
{
	int test_data;//フィールド
	static void Main(string[] args)
	{
		var x = new Test1();//インスタンス化(instantiation)
		var y = new Test1();
		x.test_data = 100;
		y.test_data = 200;
		x = y;//参照（データのコピーではない）
		x.test_data = 5000;
		System.Diagnostics.Debug.WriteLine(x.test_data);
		System.Diagnostics.Debug.WriteLine(y.test_data);

	}
}
