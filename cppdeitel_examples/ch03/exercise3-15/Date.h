

class Date
{
	public:
		Date(int, int, int);
		void setDay(int);
		int getDay();
		void setMonth(int);
		int getMonth();
		void setYear(int);
		int getYear();
		void displayDate();
	private:
		int day;
		int month;
		int year;
};
