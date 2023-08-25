## Configuração básica

**Configurar ip do computador(Linux)**
```
# ifconfig [interface] [ip] [máscara]
$ ifconfig eth0 192.168.100.1

```

**Configurar Switch(só funcionar para Switches gerenciáveis)**
```
# Mostrar configuração atual
$ ovs-vsctl show

# Deletar bridge
$ ovs-vsctl del-br br0

# Criar nova bridge
$ ovs-vsctl add-br br1

# Adicionar portas na bridge
$ ovs-vsctl add-port br1 eth0
```

**Configuração básica de VLAN**
```
# Cria uma tag para a porta que se conecta na VLAN
$ ovs-vsctl add-port br0 eth0 tag=100

# Configura a porta que irá conectar os Switchs que constituem a VLAN
$ ovs-vsctl add-port br0 eth15 trunks=100,200
``` 