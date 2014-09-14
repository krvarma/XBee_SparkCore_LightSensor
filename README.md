XBee and Spark Core, Part 3 - Analog Input using Light Sensor
-------------------------------------------------------------

Here is the part 3 of my XBee and Spark Core series. This part is about Analog Input using a Light Sensor. In this part AD1 of the Remote XBee is configured as Analog Input. AD1 is connected to Light Senor. As usual this XBee is configured as Router AT and Coordinator is connected to Spark Core via Serial. The Remote XBee is configured to send samples every 1 second and the Spark Core receives this IO Sample data and reads the Light Sensor value.

Same as the previous project, I am using the XBee library and reads the analog data using `getAnalog` method of the `ZBRxIoSampleResponse` class.

To monitor the values, in this part I created a [Freeboard.io](http://www.freeboard.io/) data source and configured a Display Panel.

**Screenshots**

![enter image description here](https://raw.githubusercontent.com/krvarma/XBee_SparkCore_LightSensor/master/images/IMG_0160.JPG)

![enter image description here](https://raw.githubusercontent.com/krvarma/XBee_SparkCore_LightSensor/master/images/IMG_0164.JPG)

![enter image description here](https://raw.githubusercontent.com/krvarma/XBee_SparkCore_LightSensor/master/images/panel.png)

