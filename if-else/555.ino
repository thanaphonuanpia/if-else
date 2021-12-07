String weekDay = "Friday";
String message = "";
void setup()
{
    Serial.begin(115200);
}

void loop()
{
    if (weekDay == "Monday")
    {
        message = "เรียนวิชาภาษาอังกฤษ";
    }
    else if (weekDay == "Tuesday")
    {
        message = "เรียนวิชาไมโครคอนโทรลเลอร์";
    }
     if (weekDay == "Wennesday")
    {
        message = "เรียนวิชาโครงงาน";
    }
     if (weekDay == "Thursday")
    {
        message = "เรียนวิชาโทรคมนาคมเบื้องต้น";
    }
     if (weekDay == "Friday")
    {
        message = "เรียนวิชาพื้นฐานอิเล็กทรอนิกส์อัจฉริยะ";
    }
    else
    {
        message = "วันหยุดเสาร์-อาทิตย์";
    }
     Serial.println(message);
     delay(2000);
 }
