from scapy.all import *

pcap_file = "level02.pcap"
packets = rdpcap(pcap_file)

for packet in packets:
    if packet.haslayer(Raw):
        raw_data = packet[Raw].load
        print("Données:", raw_data)