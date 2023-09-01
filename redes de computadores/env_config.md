## Configuração do ambiente para as aulas
### *GNS3 nativo no ubunto*
---
**Utilizando o terminal**

Inicialmente é necessário baixar as imagens do `docker` especificas para as aulas, disponibilizadas no link [http://200.17.200.33/docker-gns3.tar](http://200.17.200.33/docker-gns3.tar). Isso pode ser feito com o comando:
```
$ wget http://200.17.200.33/docker-gns3.tar

```

Depois, é necessário instalar o docker. __*Lembre-se*__ que para instalar é necessário a permissão do `sudo`. Utilize os seguintes comandos:
```
$ sudo apt install apt-transport-https curl gnupg-agent ca-certificates software-properties-common -y
$ curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add -
$ sudo add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu focal stable"
$ sudo apt install docker-ce docker-ce-cli containerd.io -y
```

Para verificar se a instalação foi bem sucedida, execute:
```
$ sudo docker run hello-world

// A mensagem recebida deve ser
// Hello from Docker!
// This message shows that your installation appears to be working correctly.
```

Com o docker instalado, podemos importar as imagens baixadas:
```
$ sudo docker load < docker-gns3.tar

```

Para verificar se as imagens foram importadas corretamente, utilize o comando:
```
$ sudo docker images

```
Por fim, para executar o GNS3 precisamos instalar mais dois pacotes:
```
$ sudo apt install gns3-server gns3-gui

```

Com o GNS3 funcionando, podemos fazer as seguintes configurações:

**Utilizando a interface**
