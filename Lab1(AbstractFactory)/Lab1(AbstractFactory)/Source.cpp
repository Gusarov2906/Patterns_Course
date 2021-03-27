#include <iostream>
#include "BusStop.h"
#include "BoardBus.h"
#include "BoardTaxi.h"

std::string name_and_surname_arr[300] = {
"Roxie Byrne",
"Jenson Haigh",
"Nida Lam",
"Scarlett-Rose Hendricks",
"Ruby Calderon",
"Tobias Li",
"Eadie Irving",
"Pascal Wills",
"Rian Davila",
"Jordana Bateman",
"Ernie Denton",
"Areebah Kent",
"Nate Pierce",
"Alec Sears",
"Miller Humphries",
"Tiana Marriott",
"Sarah Tang",
"Marley Hunter",
"Yaseen Cantu",
"Aleksandra Bloom",
"Anabella Gunn",
"Mattie Draper",
"Penelope Robertson",
"Jermaine Whitley",
"Denis Duffy",
"Saqib Rubio",
"Callum Day",
"Jillian Power",
"Alistair Cottrell",
"Courtney Rowland",
"Elena Yoder",
"Teddie Cummings",
"Leanne Cisneros",
"Rickie Hubbard",
"Krzysztof Foreman",
"Poppy Devlin",
"Avani Rush",
"Paris Maddox",
"Marcie Koch",
"Taybah Briggs",
"Preston Keller",
"Leonie Barry",
"Mia Doherty",
"Huw Mendoza",
"Mohamad Shields",
"Humaira Dotson",
"Avaya Sullivan",
"Simeon Chase",
"Alana Vang",
"Meera Magana",
"Jordan Newman",
"Nour Byers",
"Madelyn Emery",
"Bartlomiej Preston",
"Harriette Levy",
"Jad East",
"Deen Cohen",
"Isabell Price",
"Jokubas Novak",
"Mairead Green",
"Rahima Short",
"Harlan Olsen",
"Chelsea Mccartney",
"Freddie Woodcock",
"Leopold Finnegan",
"Karter Alexander",
"Sohaib Sadler",
"Shiv Montgomery",
"Beatriz Delaney",
"Alannah Harper",
"Reagan Lawrence",
"Nishat Roberson",
"Bilal Kelley",
"Taine Mellor",
"Rafael Ho",
"Viktor Paul",
"Maheen Greer",
"Eva Delacruz",
"Leonidas Haworth",
"Grayson Hough",
"Norma Lugo",
"Khadeeja Aguirre",
"Neriah Shepherd",
"Grady Bowden",
"Megan Kline",
"Poppie Deacon",
"Kirk Beech",
"John-Paul Washington",
"Yosef Gilliam",
"Naeem Phan",
"Andrea Stout",
"Charles Mcleod",
"Atlanta Mills",
"Duane Fuller",
"Ariyah Shea",
"Una Shannon",
"Betsy Bannister",
"Katerina Cole",
"Lavinia Sharp",
"Beyonce Monte",
"Corinne Mcmanus",
"Montgomery Prosser",
"Denny Field",
"Taryn Rosas",
"Ellie Tang",
"Ronnie Cook",
"Kirsten Whyte",
"Ibraheem Appleton",
"Fatima Mckenna",
"Sakina Lutz",
"Izaan Wynn",
"Khloe Melton",
"Akash Holden",
"Cecil Harper",
"Neive Moses",
"Alessandra Mcgrath",
"Ammara Erickson",
"Anjali Pacheco",
"Franco Graham",
"Shazia Sears",
"Melina Chambers",
"Keeva Lucero",
"Malcolm Sheppard",
"Lindsay Higgins",
"Maisha Harding",
"Dominykas Montoya",
"Catrina Crawford",
"Heena Bravo",
"Ioana Mullen",
"Jordon Mitchell",
"Harmony Healy",
"Izabelle Sanders",
"Lewie Delaney",
"Giacomo Delacruz",
"Sam Rivas",
"Polly Hodson",
"Gregg David",
"Simon Mueller",
"Lyra Albert",
"Daanyal Holman",
"Elise Watt",
"Fredrick Vu",
"Kirandeep Miranda",
"Veronica Schroeder",
"Ira Carpenter",
"Denise Daugherty",
"Ptolemy Rojas",
"Tommy Hendricks",
"Kacie Vega",
"Findlay Trevino",
"Elliott Gunn",
"Shaunna Graves",
"Arjun Hutchings",
"Precious Villanueva",
"Ella-Mae Berg",
"Mildred Stubbs",
"Ashwin Thomson",
"Taio Sweeney",
"Aras Harrington",
"Jace Ramsey",
"Skye Allen",
"Lia Greenaway",
"Digby Mcfadden",
"Willard Hawkins",
"Kristi Matthews",
"Gwion Salinas",
"Hadiya Coles",
"Sulaiman Conrad",
"Zayan Weston",
"Eshan Curry",
"Liam Salazar",
"Mallory Watts",
"Coco Robbins",
"Payton Daniel",
"Ruth Beach",
"Zakariyah Ali",
"Zaynab Petersen",
"Kathleen Howarth",
"Stacie Lawrence",
"Rocco Waters",
"Tayyab Brewer",
"Carrie Byrne",
"Abi Buckley",
"Daisy-Mae Villa",
"Jareth Price",
"Nafisa Foley",
"Chris Bartlett",
"Rehaan O'Neill",
"Amie Huff",
"Philippa Ferreira",
"Dafydd Foster",
"Muna Duffy",
"Gary Goff",
"Spencer Booth",
"Israr Mackay",
"Katya Tierney",
"Aurelia Kramer",
"Alfie-Jay Castaneda",
"Kai Strong",
"Ayla Farmer",
"Amin Lowry",
"Fatimah Bob",
"Vivien Kearns",
"Keeleigh Pike",
"Shakir Hines",
"Khia Hahn",
"Pawel Hulme",
"Olivia-Grace Turnbull",
"Martyn Horne",
"Subhaan Mcmillan",
"India Phillips",
"Haleemah Klein",
"Rikesh Mccarty",
"Ilayda Donnelly",
"Jai Drake",
"Tommy-Lee Dyer",
"Shazia Meadows",
"Aman Huff",
"Alara Prentice",
"Sheikh Meza",
"Roshni Wilkerson",
"Blaine Guerrero",
"Keisha Matthams",
"Jeanne Dickson",
"Darius Joyce",
"Bear Schultz",
"Clinton Reese",
"Dottie Legge",
"Jem Bullock",
"Stephanie Riddle",
"Kendra Valencia",
"Kurt Aldred",
"Arielle Schneider",
"Mohammod Lambert",
"Cassius Fritz",
"Lottie Coombes",
"Emily-Rose Odling",
"Regan Simmons",
"Tomas Roman",
"Adrienne Oconnell",
"Lukasz Wang",
"Kara Wilcox",
"Nelly Reeve",
"Bianka Palacios",
"Wilfred Mcdermott",
"Patrick Downs",
"Dionne Meyers",
"Jaxx Reid",
"Eduardo Gaines",
"Shauna Leech",
"Faisal Miles",
"Jared Mcclain",
"Ziggy Barrow",
"Norma North",
"Pascal Travis",
"Yasmin Riley",
"Lori Trevino",
"Lina Franks",
"Elleanor Gill",
"Emilis Lang",
"Lance Baxter",
"Rihanna Weber",
"Kylo Medina",
"Aneeka Strong",
"Roman Bateman",
"Forrest Evans",
"Zubair Mack",
"Gerard Burt",
"Abel Oconnor",
"Christian Fleming",
"Philippa Sheppard",
"Tanya Macleod",
"Sumayyah Mclaughlin",
"Aaran Carson",
"Aayan Mueller",
"Joss Dejesus",
"Kallum Watts",
"Chaya Lawson",
"Delilah Shea",
"Herman Major",
"Vivek Salt",
"Francis Chan",
"Anam Archer",
"Luca Irwin",
"Ana Cole",
"Myles Rossi",
"Derry Head",
"Anum Preston",
"Karim Deleon",
"Cecelia King",
"Stewart Gilmore",
"Bevan Bourne",
"Ehsan Jensen",
"Jayce Cullen",
"Safaa Sexton",
"Muneeb Flores",
"Hywel Chase",
"Eleasha Tran",
"River Ratcliffe",
"Sharna Rubio" };

int main()
{
	srand(time(NULL));
	while (1)
	{
		BoardBus busFactory;
		BoardTaxi taxiFactory;
		BusStop busStop;
		int nd, np;
		std::cout << "Write number of drivers:";
		std::cin >> nd;
		std::cout << "Write number of passengers on bus stop: "; 
		std::cin >> np;
		for (int i = 0; i < nd; i++)
		{
			busStop.drivers.push_back(Driver(FIO(name_and_surname_arr[rand() % 300]),'b'));
		}
		for (int i = 0; i < np; i++)
		{
			busStop.passengers.push_back(Passenger(FIO(name_and_surname_arr[rand() % 300])));
		}
		//busStop.output();
		bool flag = true;
		while (flag)
		{
			int choosen;
			std::cout << "Choose action:\n1:Add bus\n2:Add taxi\n3:Output bus-stop\n4:restart\nYour action:";
			std::cin >> choosen;
			switch (choosen)
			{
			case 1:
				std::cout << std::endl;
				busFactory.getReadyBus(&busStop.drivers[rand() % busStop.drivers.size()], busStop.passengers).run(busStop.passengers);
				std::cout << std::endl;
				break;
			case 2:
				std::cout << std::endl;
				taxiFactory.getReadyTaxi(&busStop.drivers[rand() % busStop.drivers.size()], busStop.passengers).run(busStop.passengers);
				std::cout << std::endl;
				break;
			case 3:
				std::cout << std::endl;
				busStop.output();
				std::cout << std::endl;
				break;
			case 4:
				flag = false;
				break;
			default:
				break;
			}
		}
	}


	/*BoardBus busFactory;
	BoardTaxi taxiFactory;
	BusStop bs;
	ReadyBus rb1;
	ReadyBus rb2;
	ReadyTaxi rt1;
	ReadyTaxi rt2;
	ReadyTaxi rt3;
	ReadyTaxi rt4;
	bs.drivers.push_back(Driver(FIO(fio_arr[0]), 'b'));
	bs.drivers.push_back(Driver(FIO(fio_arr[1]), 'a'));
	bs.drivers.push_back(Driver(FIO(fio_arr[2]), 'b'));
	bs.drivers.push_back(Driver(FIO(fio_arr[3]), 'a'));
	bs.drivers.push_back(Driver(FIO(fio_arr[4]), 'b'));
	bs.drivers.push_back(Driver(FIO(fio_arr[5]), 'b'));
	for (int i = 6; i < 37; i++)
	{
		bs.passengers.push_back(Passenger(FIO(fio_arr[i])));
	}
	bs.output();
	rb1 = busFactory.getReadyBus(&bs.drivers[1],bs.passengers);
	rb1.run(bs.passengers);
	rt1 = taxiFactory.getReadyTaxi(&bs.drivers[1], bs.passengers);
	rt1.run(bs.passengers);
	rb1 = busFactory.getReadyBus(&bs.drivers[0], bs.passengers);
	rb1.run(bs.passengers);
	rt2 = taxiFactory.getReadyTaxi(&bs.drivers[2], bs.passengers);
	rt2.run(bs.passengers);
	rt3 = taxiFactory.getReadyTaxi(&bs.drivers[3], bs.passengers);
	rt3.run(bs.passengers);
	rt4 = taxiFactory.getReadyTaxi(&bs.drivers[3], bs.passengers);
	rt4.run(bs.passengers);
	rt4 = taxiFactory.getReadyTaxi(&bs.drivers[4], bs.passengers);
	rt4.run(bs.passengers);
	rb2 = busFactory.getReadyBus(&bs.drivers[5], bs.passengers);
	rb2.run(bs.passengers);

	bs.output();	*/
	return 0;
}