# **Portable device and mobile application for the detection of ultraviolet radiation in real time with a low cost sensor in Arduino.**
   
**The UV READER mobile application is implemented with Bootstrap and Jquery as a framework, its main screen shows the status of the sensor whether or not it is connected to the application. It also has the last recorded connection and a speedometer that shows the UV radiation index in real-time, with a measurement every second and a delay of one second every three hours.**
**As for the design of the UV speedometer, a JavaScript library called “Gauge.min.js” is used.
The data processing is shown in the upper right in an option called reporting; it displays by date, the measurements that are made. The application table shows the last 100 records that have been entered in the mobile database. Likewise, the data is validated on a graph averaged every 30 minutes..**

![](https://github.com/nvieras/NeBla/blob/master/ImagenesNebla/Interface-UvReader.PNG)

**In the present image the measurement is made with a UV lamp then the other images are the measurements made with the sun's UV rays. In the end the dimensions of NeBla.**
**The data is transmitted to a receiver, on a smart equipment, through a mobile application. The user can read the information and observe the ultraviolet radiation index in a specific place**
**The UV lamp can be found in the following link:** http://bit.ly/LamparaUV-Amazon

![](https://github.com/nvieras/NeBla/blob/master/ImagenesNebla/Kit-UvReader-NeBla.PNG)

**The UV-Reader kit consists of a portable device and mobile application.  NeBla has an Arduino UNO card as its base badge which incorporates a microcontroller program with an architecture of pin connections that allow to establish communication with other cards of different technologies [15] such as: a Secure Digital (SD) card Reading module linked for saving light wave readings on a flat format, a Bluetooth module, a Real-Time Clock (RTC) module and the UV sensor model ML8511 which functions on a 5 volt battery. This comes equipped with an amplifier that can make the con-versation photoelectric dependable to a voltage of UV light that is caught. The NeBla portable equipment proportions an analogical amount of UV light which is detected and needs to be located in a place with a direct view line to an UV source (for this type of job, the UV emission sources are the sun or an UV lamp led). The experi-mental prototype is connected with Bluetooth wireless technology to a mobile UVReader application. The connections are visualized to receive data during the UV (A) sensor and the transmission from a Bluetooth (B) to the mobile device. The portable device uses a feeding source of 9 volts (E) and the RTC (C) to synchronize the system, the SD (D) module is to load data received by the sensor and all the devices linked to the Arduino UNO card (F).**

![](https://github.com/nvieras/NeBla/blob/master/ImagenesNebla/Nebla-PieFoto.png)
**UV levels and index categorization.**

The global UV radiation levels are a type of measurement ultraviolet intensity that the sun radiates on the surface of the Earth [18]. The meteorological information of a country can give data about the exposition in category, value or interval of IUV values (Ultraviiolet Intensity) or both [19].

The World Health Organization (WHO) categorize the radiation levels (ultraviolet) worldwide as it is show non Table 3. Such categorization covers 5 levels with an identifying color in which Green is the lowest level and does not present health risks up to the highest level which is a harmful is the exposure is prolonged and classified with a purple color.   

![](https://github.com/nvieras/NeBla/blob/master/Mediciones/Tabla-Colores.PNG)

**Measurements made.**

**In order to have index values of UV radiation levels and confirmation of equipment functioning, we placed two Nebla prototypes, one in the north and the other one in the south of Guayaquil city at 2°09'25.8"S 79°56'01.8"W and 2°13'39.2"S 79°54'13.9"W respectively. Collecting sensor values every Sunday from the 7th to the 29 of Septembre, 2019, from 07:00:00 to 19:00:00, Such readouts are seen in the following**

![](https://github.com/nvieras/NeBla/blob/master/Mediciones/North-vs-South.png)

**The solmaforo values are constracted (set equipment and the great structure) of the National Meteorology and hydrology institute (INAMHI) located in the Santa Elena province (closest measuring point) in the Libertad County at 127 km from the meas-uring point north and at 135 km from the measuring point south of Guayaquil. Cur-rently, there are no equipment in Guayaquil in the INAMHI. The proported data is to show our comparative is at http://186.42.174.236/IndiceUV2/. It is known that our factors indicate how cloudiness can subdue the UV spectrum. In other words, the months of April and May when the weather changes and there is a cloudy sky, the values of the devices have an accentuated difference within the peninsula**

![](https://github.com/nvieras/NeBla/blob/master/Mediciones/Inamhi-vs-UVReader.png)


**Download APK:** http://bit.ly/Uv-Reader-Apk-Ingles


**Video Project NeBla:** http://bit.ly/Video-NeBla-Project

**Developed by:** jllerena@ups.edu.ec nvieras@est.ups.educ.ec brodriguezm2@est.ups.edu.ec
