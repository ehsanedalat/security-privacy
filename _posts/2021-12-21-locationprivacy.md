### Your location data are being theft!
In this post, I will briefly discuss issues of location data leakage in smartphones. There are four ways to leak this data.

1. leakage of location data from the cellular network infrastructure.
  - leakage from the operator of the network.
The operator knows that your phone is connected to which BTS antenna at each time of day. So, your approximate location is known to them. 
  - leakage with IMSI catcher method.
An attacker in your neighborhood could investigate your location with a fake antenna tower.
2. leakage of location data from the network.
When you search in Google or purchase a book from Amazon, servers of these online services could know your public IP address and your approximate location.
3. leakage of location data from the OS.
  - Your smartphone's operating system utilizes the location services to find your precise location with the help of GPS, Wi-Fi access points, Bluetooth beacons, and BTS antenna information and signal strength. For example, Google has a database of this information to respond to the Android location services requests.
  - Another point of location information leakage is Google Timeline. It saves all the location information of your phone by default.
  - It is worth mentioning the find my device service in Android and iOS. Some vendors like Samsung also have their own find my device service. These services could access your location data also when your phone is offline or off.
  - When you are taking a photo, the camera saves your location in your image's metadata. Therefore, backup applications like Backup and Sync could access your location data.
4. leakage of location data from the applications.
Applications like Google Maps, Whatsapp, and Instagram collect your location data.
