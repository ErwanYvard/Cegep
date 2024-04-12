# Home Assistant

## Installation de Home Assistant sur un PC générique

[https://www.home-assistant.io/installation/generic-x86-64](https://www.home-assistant.io/installation/generic-x86-64)

Utiliser la méthode #1.

## Se connecter en ligne de commande sur HAOS

at the ha> prompt, enter: login
entrer: nmcli radio

Scan les wifi valide enter: nmcli device wifi

Pour ce connecter au wifi enter: nmcli device wifi connect “YOUR_SSID” password “YOUR_WIFI_PASSWORD”
This will try to connect to your SSID and will generate a network profile for you if successfull.
The output will be similar to
"Device 'wlan0' successfully activated with...."
Montre la connexion actuelle enter: nmcli con show

There may be two separate ip addresses on your network: one for ethernet, one for wifi.
Check the ip addresses enter: ip addr show
Now connect to http(s)://your_wifi_ip:8123 in your browser.

## Installation de l'addon ESPHome sur Home Assistant
https://esphome.io/guides/getting_started_hassio

## Configuration initiale du WiFi sur ESP32
Brancher le ESP32 via le port USB sur le serveur HAOS.

Aller dans l'interface, section ESPHome.

Add Devices.

Dans le fichier .yml configurer le WiFi tel que : https://esphome.io/components/wifi


## Achat ESP32
https://www.amazon.ca/KeeYees-Development-Bluetooth-Microcontroller-ESP-WROOM-32/dp/B07QCP2451/ref=sr_1_5?crid=2VPTHM2IO4F4W&dib=eyJ2IjoiMSJ9.zMnsEGvXkt38UBagMPGTY2_UpVn_R3ittvmhp2cjkE0CGmUvWvSMMBuaj-5zMrpv1QTviJxKPgGbC8YGCnITu5eVnXd7NwoMrN9mJuEMNZzHzT0Z56EOZUI49bQJ5Us7iTA3HCP_t2AsSxWGZh6DTOtM1hyhOjfGQNZaaPFHwn9mD1aHY3YS8ghqVXhNirtLhQzl3w4yGXVL5q_Z1G5myKXralZD7GS3UR5__EnKntBoqy-yIem49r3i6zcURR_md4wdXaCwPJu519o6ik6Wc95tEtNgso6YCW-BPtIk93U.zXIBIUpTt3-OLX8sSpnxZUKhGdb-RTVvZZ6jTgnU-Ss&dib_tag=se&keywords=esp32&qid=1712337039&sprefix=esp3%2Caps%2C87&sr=8-5&th=1


