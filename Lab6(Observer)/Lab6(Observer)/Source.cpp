#include "Deanery.h"
#include "Database.h"

tm createDatetime(int day, int mounth, int year)
{
	tm datetime;
	datetime.tm_year = year - 1900;
	datetime.tm_mon = mounth - 1;
	datetime.tm_mday = day;
	datetime.tm_hour = 0;
	datetime.tm_min = 0;
	datetime.tm_sec = 0;
	return datetime;
}

void generateDB(Database* db)
{
	Educator edu1 = Educator(FIO("Ruby Calderon"));
	Educator edu2 = Educator(FIO("Tobias Li"));
	Educator edu3 = Educator(FIO("Jenson Haigh"));
	Educator edu4 = Educator(FIO("Mattie Draper"));
	Educator edu5 = Educator(FIO("Tiana Marriott"));
	
	Group gr1 = Group("PIN-14");
	Group gr2 = Group("PIN-13");
	Group gr3 = Group("PIN-15");

	gr1.points.push_back(Point(5.00, createDatetime( 3, 04, 2021)));
	gr2.points.push_back(Point(3.00, createDatetime( 3, 04, 2021)));
	gr3.points.push_back(Point(4.50, createDatetime( 3, 04, 2021)));
	gr1.points.push_back(Point(5.00, createDatetime(10, 04, 2021)));
	gr2.points.push_back(Point(3.00, createDatetime(10, 04, 2021)));
	gr3.points.push_back(Point(4.50, createDatetime(10, 04, 2021)));
	gr1.points.push_back(Point(5.00, createDatetime(17, 04, 2021)));
	gr2.points.push_back(Point(3.00, createDatetime(17, 04, 2021)));
	gr3.points.push_back(Point(4.50, createDatetime(17, 04, 2021)));
	gr1.points.push_back(Point(5.00, createDatetime(24, 04, 2021)));
	gr2.points.push_back(Point(3.00, createDatetime(24, 04, 2021)));
	gr3.points.push_back(Point(4.50, createDatetime(24, 04, 2021)));

	edu1.groups.push_back(gr1);
	edu1.groups.push_back(gr2);
	edu1.groups.push_back(gr3);

	gr1.points.clear();
	gr2.points.clear();
	gr3.points.clear();

	gr1.points.push_back(Point(3.11, createDatetime( 8, 04, 2021)));
	gr2.points.push_back(Point(4.38, createDatetime( 8, 04, 2021)));
	gr3.points.push_back(Point(4.81, createDatetime( 8, 04, 2021)));

	edu2.groups.push_back(gr1);
	edu2.groups.push_back(gr2);
	edu2.groups.push_back(gr3);

	gr1.points.clear();
	gr2.points.clear();
	gr3.points.clear();

	gr1.points.push_back(Point(5.00, createDatetime( 5, 04, 2021)));
	gr2.points.push_back(Point(4.00, createDatetime( 5, 04, 2021)));
	gr3.points.push_back(Point(4.50, createDatetime( 5, 04, 2021)));

	edu3.groups.push_back(gr1);
	edu3.groups.push_back(gr2);
	edu3.groups.push_back(gr3);

	gr1.points.clear();
	gr2.points.clear();
	gr3.points.clear();

	gr1.points.push_back(Point(4.18, createDatetime(1, 04, 2021)));
	gr2.points.push_back(Point(4.28, createDatetime(1, 04, 2021)));

	edu4.groups.push_back(gr1);
	edu4.groups.push_back(gr2);

	gr1.points.clear();
	gr2.points.clear();

	gr1.points.push_back(Point(4.55, createDatetime(28, 04, 2021)));
	gr2.points.push_back(Point(4.55, createDatetime(29, 04, 2021)));
	gr3.points.push_back(Point(4.55, createDatetime(30, 04, 2021)));

	edu5.groups.push_back(gr1);
	edu5.groups.push_back(gr2);
	edu5.groups.push_back(gr3);

	Discipline dis1 = Discipline("MathAnalyse");
	Discipline dis2 = Discipline("Programming");
	Discipline dis3 = Discipline("LinealAlgebra");

	dis1.educators.push_back(edu3);
	dis1.educators.push_back(edu4);
	dis2.educators.push_back(edu1);
	dis2.educators.push_back(edu2);
	dis3.educators.push_back(edu5);

	Department dep1 = Department("VM-1");
	Department dep2 = Department("IPOVS");

	dep1.disciplines.push_back(dis1);
	dep1.disciplines.push_back(dis3);
	dep2.disciplines.push_back(dis2);

	db->departments.push_back(dep1);
	db->departments.push_back(dep2);
}

void doNextDay(Database* db, std::vector<Deanery>* vec)
{
	db->nextDay();
	for (int i = 0; i < vec[0].size(); i++)
	{
		vec[0][i].nextDay();
	}
}

int main()
{
	Database db(createDatetime(1,4,2020));
	generateDB(&db);

	std::vector<Deanery> observers;
	observers.push_back(Deanery(0, createDatetime(1, 4, 2020)));
	observers.push_back(Deanery(1, createDatetime(1, 4, 2020)));

	db.attach(&observers[0]);

	bool stop = false;
	char a;
	while (!stop)
	{
		std::cout << "Write 'n' to next day or 's' to stop:";
		std::cin >> a;
		if (a == 'n')
		{
			doNextDay(&db, &observers);
			std::cout << "Today: " << db.getToday().tm_mday << "." << db.getToday().tm_mon << "." << db.getToday().tm_year << std::endl;
		}
		else if (a == 'e')
			stop = true;
	}
	std::cout << "Finished!";
	return 0;
}