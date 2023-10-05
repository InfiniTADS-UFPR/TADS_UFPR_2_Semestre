## Comandos básicos

**Configurar computador (Linux)**
```
# Configurar ip
# ifconfig [interface] [ip] [máscara]
$ ifconfig eth0 192.168.100.1

# Capturar tráfego
$ tcpdump -i [interface] -n
```

**Configurar Switch (só funciona para Switches gerenciáveis openvswitch)**
```
# Mostrar configuração atual
$ ovs-vsctl show

# Deletar bridge
$ ovs-vsctl del-br br0

# Criar nova bridge
$ ovs-vsctl add-br br1

# Adicionar portas na bridge
$ ovs-vsctl add-port br1 eth0

# Listar portas da Bridge:
$ ovs-vsctl list-ports br0

# Deletar porta da Bridge:
$ ovs-vsctl del-port br0 eth2

# Mostrar Bridge que determinada porta está:
$ ovs-vsctl port-to-br eth0

# Help do comando ovs-vsctl:
$ ovs-vsctl -h
```
---

### Sobre VLANS

**Configuração básica de VLAN no Switch**
```
# Cria uma tag para a porta que se conecta na VLAN
$ ovs-vsctl add-port br0 eth0 tag=100

# Configura a porta que irá conectar os Switchs que constituem a VLAN
$ ovs-vsctl add-port br0 eth15 trunks=100,200
```

**Configuração PC (Para que acesse mais de uma VLAN na mesma porta)**
```
# Criar sub-interface VLAN na porta
$ ip link add link eth0 name eth0.100 type vlan id 100
$ ip link set eth0.100 up

# Coloca um ip para a interface
$ ifconfig eth0.100 192.168.100.1

# Remover sub-interface
$ ip link delete eth0.100
```
---

### Sobre Spanning Trees
```
# Habilitar Spanning-Tree:
$ ovs-vsctl set bridge br0 stp_enable=true

# Obter status da Bridge:
$ ovs-vsctl get bridge br0 status

# Obter status da Porta:
$ ovs-vsctl get port eth0 status

# Obter endereço MAC da Bridge:
$ ovs-vsctl get interface br0 mac_in_use

# Obter endereço MAC da Porta:
$ ovs-vsctl get interface eth0 mac_in_use

# Habilitar Rapid Spanning-Tree:
$ ovs-vsctl set bridge br0 rstp_enable=true

# Obter status da Bridge (Rapid Spanning-Tree):
$ ovs-vsctl get bridge br0 rstp_status

# Obter status da Porta (Rapid Spanning-Tree):
$ ovs-vsctl get port eth0 rstp_status
```
---

### Sobre Link-Aggregation (802.3ad)
```
# Criar LAG: 
$ ovs-vsctl add-bond br0 bond0 eth0 eth1 

# Criar o LAG com LACP ativado, modo de balanceamento TCP e rapida convergência: 
$ ovs-vsctl add-bond br0 bond0 eth0 eth1 bond_mode=balance-tcp lacp=active other_config:lacp-time=fast

# Só habilitar balanceamento TCP: 
$ ovs-vsctl set port bond0 bond_mode=balance-tcp

# Só habilitar LACP: 
$ ovs-vsctl set port bond0 lacp=active

# Só aumentar tempo de convergencia: 
$ ovs-vsctl set port bond0 other_config:lacp-time=fast

# Verificar status do LAG: 
$ ovs-appctl bond/show bond0

# Verificar status do LACP: 
$ ovs-appctl lacp/show bond0
```

### Sobre ARP
```
# Listar tabela de endereçamento ARP
$ arp -an

# Deletar endereço da tabela ARP
$ arp -d mac
```

### Tabela de roteamento
```
# Listar tabela de roteamento
$ route -n

# Adicionar rota estática
$ route add -net 172.16.0.0 netmask 255.255.0.0 gw 192.168.0.0.2

# Adicionar default gateway
$ route add default gw 10.0.0.2
```
