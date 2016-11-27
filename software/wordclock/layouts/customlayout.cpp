#include "customlayout.h"

/*

| I | L |   |   | E | S | T |   |   | U | N | E |
| T | R | O | I | S |   | Q | U | A | T | R | E |
| C | I | N | Q | S | I | X |   | S | E | P | T |
| H | U | I | T |   | N | E | U | F | D | I | X |
| K | O | N | Z | E |   | D | O | U | Z | E |   |
| I | D | E | U | X |   | H | E | U | R | E | S |
| M | O | I | N | S |   | E | T |   | D | I | X |
|   |   | V | I | N | G | T | - | C | I | N | Q |
| Q | U | A | R | T |   | D | E | M | I |   |   |
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
CustomLayout::CustomLayout() {
}

void CustomLayout::getLayout(uint8_t hour, uint8_t minute, uint8_t second, Display* d) {

	this->append(d, 48, 71, 72); // kim
	this->append(d, 78, 79); // et
	this->append(d, 111, 112, 113, 114, 115, 116); // xavier
	this->append(d, 7, 9, 13, 15, 17, 30, 34); // hearth part 1
	this->append(d, 38, 40, 56); // hearth part 2
}

char* CustomLayout::getDebugLayout() {
	return "";
}