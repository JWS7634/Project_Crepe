class CrepeJson
{
	public:
		void JsonCreate(string Ckey, string CValue);
		const char* JsonRead(string Ckey);
		int JsonUpdate(string Ckey, string CValue);
		int JsonDelete(string Ckey);
		const char* JsonExport();
	private:
		int DataCount = 0;
		string jsonCache = string();
		string** Key;
		string** Value;
};