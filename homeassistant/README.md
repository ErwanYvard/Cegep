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

## Modifier la PIN dans le fichier yaml
Pour toutes les esp32dev arduino, elles utilisent les nombres GPIO pour les pins.

GPIO0 utliser pour boot, éviter de l'utiliser car peut activer le flash mode si la batterie est faible.

GPIO34-GPIO39 Ne peut-être utiliser pour du output.

GPIO32-GPIO39 Utiliser pour gérer le voltage en analoge.

GPIO2 Utiliser pour connecter la led du board, ou des systèmes binaires.

https://esphome.io/components/esp32.html?highlight=esp32dev

## Achat ESP32
https://www.amazon.ca/KeeYees-Development-Bluetooth-Microcontroller-ESP-WROOM-32/dp/B07QCP2451/ref=sr_1_5?crid=2VPTHM2IO4F4W&dib=eyJ2IjoiMSJ9.zMnsEGvXkt38UBagMPGTY2_UpVn_R3ittvmhp2cjkE0CGmUvWvSMMBuaj-5zMrpv1QTviJxKPgGbC8YGCnITu5eVnXd7NwoMrN9mJuEMNZzHzT0Z56EOZUI49bQJ5Us7iTA3HCP_t2AsSxWGZh6DTOtM1hyhOjfGQNZaaPFHwn9mD1aHY3YS8ghqVXhNirtLhQzl3w4yGXVL5q_Z1G5myKXralZD7GS3UR5__EnKntBoqy-yIem49r3i6zcURR_md4wdXaCwPJu519o6ik6Wc95tEtNgso6YCW-BPtIk93U.zXIBIUpTt3-OLX8sSpnxZUKhGdb-RTVvZZ6jTgnU-Ss&dib_tag=se&keywords=esp32&qid=1712337039&sprefix=esp3%2Caps%2C87&sr=8-5&th=1

## Connecteur pour ESP32
https://www.amazon.ca/-/fr/gp/product/B09M3T6CLH/ref=ewc_pr_img_1?smid=AP29ETNPIWB2J&psc=1
https://www.amazon.ca/-/fr/dexp%C3%A9rimentation-soudure-Arduino-Distribution-connexion/dp/B01EV6LJ7G/ref=pd_bxgy_img_d_sccl_1/131-0542442-6880568?pd_rd_w=lSGVB&content-id=amzn1.sym.5c2f4a04-3107-46ca-9aa1-5c31efa67ff2&pf_rd_p=5c2f4a04-3107-46ca-9aa1-5c31efa67ff2&pf_rd_r=H2XDSC8XNP8DDQCSY2WK&pd_rd_wg=XfWSt&pd_rd_r=d58731f0-f341-44d3-82ef-9a3e6e6254fb&pd_rd_i=B01EV6LJ7G&psc=1
https://www.amazon.ca/-/fr/gp/product/B072Z72Y98/ref=ewc_pr_img_2?smid=A3KL3JVC9E1BY6&psc=1

## Lot de capteur pour ESP32, peut valoir le coup ? 
https://www.amazon.ca/-/fr/modules-capteur-am%C3%A9lior%C3%A9-tutoriel-compatible/dp/B01MG49ZQ5/ref=pd_bxgy_d_sccl_2/131-0542442-6880568?pd_rd_w=lSGVB&content-id=amzn1.sym.5c2f4a04-3107-46ca-9aa1-5c31efa67ff2&pf_rd_p=5c2f4a04-3107-46ca-9aa1-5c31efa67ff2&pf_rd_r=H2XDSC8XNP8DDQCSY2WK&pd_rd_wg=XfWSt&pd_rd_r=d58731f0-f341-44d3-82ef-9a3e6e6254fb&pd_rd_i=B01MG49ZQ5&th=1

