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

// As duas imagens que devem aparecer são:
// gns3/ubds020       xenial    c66194e62fae   2 years ago    222MB
// gns3/openvswitch   latest    b012d20d6ff6   2 years ago    15.2MB
```
Por fim, para executar o GNS3 precisamos instalar mais dois pacotes:
```
$ sudo add-apt-repository ppa:gns3/ppa
$ sudo apt update
$ sudo apt install gns3-server gns3-gui
```

Com o GNS3 funcionando, podemos fazer as seguintes configurações:

**Utilizando a interface**

Ao executar o GNS3 pela primeira vez, digitando `gns3` no terminal, ele irá abrir um _setup wizard_.

Selecione as seguintes opções:

![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/800d3925-a2b8-4f36-b54a-bc79907dd4b6)
![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/073396e0-8a95-4ee2-bee4-01053ad4c201)
![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/3bce02e1-0c39-4caf-a4bb-79b9bbf52117)

Finalmente, antes de começar a trabalhar com o GNS3, abra as Preferências no menu Editar

![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/9a7d858f-0769-4933-bfaa-cb9b780d56c3)

Vá na última opção chamada **Docker containers** e selecione `new`

![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/1204871f-7085-42f5-baa0-51c195dcf9a9)

Selecione as duas imagens carregadas anteriormente

![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/060dbaa0-071a-4e1d-8f83-d7659ed4b25b)

Configure o nome e a quantidade de adaptadores para as duas imagens, as demais configurações pode deixar o padrão
![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/f34f03b9-e690-4e24-9157-87386df76df0)
![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/f2b898a1-2b95-44c5-9b7c-76f4f0231f76)

Por fim, clique em `ok` para salvar as configurações
![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/9093ffac-20f3-4319-8884-00213b7a8cd4)

Agora é só criar um novo projeto e testar
![image](https://github.com/Salgado2004/TADS_UFPR_2_Semestre/assets/53799801/b984a3ef-07ac-4063-a5f4-e13ca8ccf006)




