# **Portable device and mobile application for the detection of ultraviolet radiation in real time with a low cost sensor in Arduino.**
   
**The UV READER mobile application is implemented with Bootstrap and Jquery as a framework, its main screen shows the status of the sensor whether or not it is connected to the application. It also has the last recorded connection and a speedometer that shows the UV radiation index in real-time, with a measurement every second and a delay of one second every three hours.**
**As for the design of the UV speedometer, a JavaScript library called “Gauge.min.js” is used.
The data processing is shown in the upper right in an option called reporting; it displays by date, the measurements that are made. The application table shows the last 100 records that have been entered in the mobile database. Likewise, the data is validated on a graph averaged every 30 minutes..**

![](https://github.com/nvieras/NeBla/blob/master/ImagenesNebla/Interface-UvReader.PNG)

**In the present image the measurement is made with a UV lamp then the other images are the measurements made with the sun's UV rays. In the end the dimensions of NeBla.**
**The data is transmitted to a receiver, on a smart equipment, through a mobile application. The user can read the information and observe the ultraviolet radiation index in a specific place**
**The UV lamp can be found in the following link:** http://bit.ly/LamparaUV-Amazon

![](https://github.com/nvieras/NeBla/blob/master/ImagenesNebla/Kit-UvReader-NeBla.PNG)

**The UV-Reader kit consists of a portable device and mobile application.  NeBla has an Arduino UNO card as its base badge which incorporates a microcontroller program with an architecture of pin connections that allow to establish communication with other cards of different technologies [15] such as: a Secure Digital (SD) card Reading module linked for saving light wave readings on a flat format, a Bluetooth module, a Real-Time Clock (RTC) module and the UV sensor model ML8511 which functions on a 5 volt battery. This comes equipped with an amplifier that can make the con-versation photoelectric dependable to a voltage of UV light that is caught. The NeBla portable equipment proportions an analogical amount of UV light which is detected and needs to be located in a place with a direct view line to an UV source (for this type of job, the UV emission sources are the sun or an UV lamp led). The experi-mental prototype is connected with Bluetooth wireless technology to a mobile UVReader application. The connections are visualized (see Fig. 2) to receive data during the UV (A) sensor and the transmission from a Bluetooth (B) to the mobile device. The portable device uses a feeding source of 9 volts (E) and the RTC (C) to synchronize the system, the SD (D) module is to load data received by the sensor and all the devices linked to the Arduino UNO card (F).**

![](https://github.com/nvieras/NeBla/blob/master/ImagenesNebla/Nebla-PieFoto.png)
**UV levels and index categorization.**

The global UV radiation levels are a type of measurement ultraviolet intensity that the sun radiates on the surface of the Earth [18]. The meteorological information of a country can give data about the exposition in category, value or interval of IUV values (Ultraviiolet Intensity) or both [19].

The World Health Organization (WHO) categorize the radiation levels (ultraviolet) worldwide as it is show non Table 3. Such categorization covers 5 levels with an identifying color in which Green is the lowest level and does not present health risks up to the highest level which is a harmful is the exposure is prolonged and classified with a purple color.   

![](https://github.com/nvieras/NeBla/blob/master/Mediciones/Tabla-Colores.PNG)

**Measurements made.**

**In order to obtain the results of the UV radiation index for this project, respectively; we place two prototypes in the north and south in the city of Guayaquil 2 ° 09'25.8 "S 79 ° 56'01.8" W and 2 ° 13'39.2 "S 79 ° 54'13.9" W. The data is collected in the date range from April 7, 2019, until September 29, 2019. The schedule is established for the measurement of UV rays in the period from April to September are from 07:00:00 to 19:00:00. The sensor results are measured in (mW/cm2) and the corresponding voltage for each UV unit.**

![](https://github.com/nvieras/NeBla/blob/master/Mediciones/NorthAndSouth.png)

**The values obtained by the two transportable UV READER prototypes during the months of April to September, located to the north of the city as well as to the south, levels comparable to those obtained with fixed equipment are ob-served and of great structure like the one that was lodged in Instituto Nacional de Meteorología e Hidrología (INAMHI).**

![](https://github.com/nvieras/NeBla/blob/master/Mediciones/NorthAndSouth-Inamhi.png)

**Download APK:** http://bit.ly/Apk-UvReader-Ingles


**Video Project NeBla:** http://bit.ly/Video-NeBla-Project

**Developed by:** jllerena@ups.edu.ec nvieras@est.ups.educ.ec brodriguezm2@est.ups.edu.ec
