#include "layout.h"
#ifdef LAYOUT_FR

/*

| I | L |   |   | E | S | T |   |   | U | N | E |
| T | R | O | I | S |   | Q | U | A | T | R | E |
| C | I | N | Q | S | I | X |   | S | E | P | T |
| H | U | I | T |   | N | E | U | F | D | I | X |
| K | O | N | Z | E |   | D | O | U | Z | E |   |
| I | D | E | U | X |   | H | E | U | R | E | S |
| M | O | I | N | S |   | E | T |   | D | I | X |
|   |   | V | I | N | G | T | - | C | I | N | Q |
| Q | U | A | R | T |   | D | E | M | I | E |   |
|   |   |   | X | A | V | I | E | R |   |   |   |
|   |   |   |   | * | * | * | * |   |   |   |   |
|   |   |   |   |   |   |   |   |   |   |   |   |

|000|001|002|003|004|005|006|007|008|009|010|011|
|023|022|021|020|019|018|017|016|015|014|013|012|
|024|025|026|027|028|029|030|031|032|033|034|035|
|047|046|045|044|043|042|041|040|039|038|037|036|
|048|049|050|051|052|053|054|055|056|057|058|059|
|071|070|069|068|067|066|065|064|063|062|061|060|
|072|073|074|075|076|077|078|079|080|081|082|083|
|095|094|093|092|091|090|089|088|087|086|085|084|
|096|097|098|099|100|101|102|103|104|105|106|107|
|119|118|117|116|115|114|113|112|111|110|109|108|
|120|121|122|123|124|125|126|127|128|129|130|131|
|143|142|141|140|139|138|137|136|135|134|133|132|

 */

Layout::Layout() {
}

void Layout::getLayout(uint8_t hour, uint8_t minute, uint8_t second, Display* d) {

	if (minute >= 35) {
		hour += 1;
		if (hour >= 24) {
			hour -= 24;
		}
	}

	this->append(d, 0, 1); // il
	this->append(d, 4, 5, 6); // est

	switch (hour) {
		case 1:
		case 13:
			this->append(d, 9, 10, 11); // une
			break;
		case 2:
		case 14:
			this->append(d, 67, 68, 69, 70); // deux
			break;
		case 3:
		case 15:
			this->append(d, 19, 20, 21, 22, 23); // trois
			break;
		case 4:
		case 16:
			this->append(d, 12, 13, 14, 15, 16, 17); // quatre
			break;
		case 5:
		case 17:
			this->append(d, 24, 25, 26, 27); // cinq
			break;
		case 6:
		case 18:
			this->append(d, 28, 29, 30); // six
			break;
		case 7:
		case 19:
			this->append(d, 32, 33, 34, 35); // sept
			break;
		case 8:
		case 20:
			this->append(d, 44, 45, 46, 47); // huit
			break;
		case 9:
		case 21:
			this->append(d, 39, 40, 41, 42); // neuf
			break;
		case 10:
		case 22:
			this->append(d, 36, 37, 38); // dix
			break;
		case 11:
		case 23:
			this->append(d, 49, 50, 51, 52); // onze
			break;
		case 12:
		case 0:
			this->append(d, 54, 55, 56, 57, 58); // douze
			break;
	}

	this->append(d, 61, 62, 63, 64, 65); //heures
	if(hour>1){
	    // heures avec s
	    this->append(d, 60);
	}

    this->minuteStars(d, &minute, 124, 125, 126, 127);

	minute /= 5;
	switch (minute) {
		case 1:
			this->append(d, 84, 85, 86, 87); // cinq
			break;
		case 2:
			this->append(d, 81, 82, 83); // dix
			break;
		case 3:
			this->append(d, 78, 79); // et
			this->append(d, 96, 97, 98, 99, 100); // quart
			break;
		case 4:
			this->append(d, 89, 90, 91, 92, 93); // vingt
			break;
		case 5:
			this->append(d, 89, 90, 91, 92, 93); // vingt
			this->append(d, 88); // -
			this->append(d, 84, 85, 86, 87); // cinq
			break;
		case 6:
			this->append(d, 78, 79); // et
			this->append(d, 102, 103, 104, 105, 106); // demie
			break;
		case 7:
			this->append(d, 72, 73, 74, 75, 76); // moins
			this->append(d, 89, 90, 91, 92, 93); // vingt
			this->append(d, 88); // -
			this->append(d, 84, 85, 86, 87); // cinq
			break;
		case 8:
			this->append(d, 72, 73, 74, 75, 76); // moins
			this->append(d, 89, 90, 91, 92, 93); // vingt
			break;
		case 9:
			this->append(d, 72, 73, 74, 75, 76); // moins
			this->append(d, 96, 97, 98, 99, 100); // quart
			break;
		case 10:
			this->append(d, 72, 73, 74, 75, 76); // moins
			this->append(d, 81, 82, 83); // dix
			break;
		case 11:
			this->append(d, 72, 73, 74, 75, 76); // moins
			this->append(d, 84, 85, 86, 87); // cinq
			break;
		case 12: //Ajout d'un moins pour être cohérent avec les étoiles by DylanCollaud
			this->append(d, 72, 73, 74, 75, 76); // moins
			break;
	}
}

#endif