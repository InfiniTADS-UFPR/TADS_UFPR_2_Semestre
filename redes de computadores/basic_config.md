## Configuração básica

**Configurar ip do computador (Linux)**
```
# ifconfig [interface] [ip] [máscara]
$ ifconfig eth0 192.168.100.1
```

**Configurar Switch (só funciona para Switches gerenciáveis)**
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
