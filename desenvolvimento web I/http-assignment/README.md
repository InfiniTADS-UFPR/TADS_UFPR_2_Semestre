Tecnologia em Análise e Desenvolvimento de Sistemas

Setor de Educação Profissional e Tecnológica - SEPT

Universidade Federal do Paraná - UFPR

---

*DS122 - Desenvolvimento de Aplicações Web 1*

Prof. Alexander Robert Kutzke

# Atividade: Mensagens HTTP

O servidor `web1.kutzke.com.br` está preparado para responder requisições baseadas no padrão [REST](https://developer.mozilla.org/en-US/docs/Glossary/REST).

Utilize o comando `curl` para interagir com o servidor `web1.kutzke.com.br` e alterar os registro por ele armazenados.

Ao final, preencha no arquivo `README.md`, cada uma dos comandos utilizados e a respectiva saída contendo as mensagens de requisição e resposta (é só colar a saída do comando `curl`).

O site responde às seguintes requisições:

| Verbo HTTP | Padrão UR   | Função                              |
|-----------:|-------------|-------------------------------------|
|        GET | /posts      | Lista posts (index)                 |
|       POST | /posts      | Cria um novo post (create)          |
|        GET | /posts/id   | Exibe o post número "id" (show)     |
|        PUT | /posts/id   | Altera o post número "id" (update)  |
|     DELETE | /posts/id   | Remove o post número "id" (delete)  |

## Exemplo com o método GET

```bash
curl -X GET -v web1.kutzke.com.br/posts   
```

## Respostas
**Nota:** Eu fiz tudo fora de ordem, por isso pode dar alguma confusão 

### GET (listar)

```
$ curl -X GET -v web1.kutzke.com.br/posts
```

```
 Connected to web1.kutzke.com.br (200.236.3.126) port 80 (#0)
> GET /posts HTTP/1.1
> Host: web1.kutzke.com.br
> User-Agent: curl/7.84.0
> Accept: */*
>
* Mark bundle as not supporting multiuse
< HTTP/1.1 200 OK
< Server: nginx/1.25.1
< Date: Fri, 11 Aug 2023 00:44:00 GMT
< Content-Type: application/json; charset=utf-8
< Content-Length: 4016
< Connection: keep-alive
< X-Powered-By: Express
< Vary: Origin, Accept-Encoding
< Access-Control-Allow-Credentials: true
< Cache-Control: no-cache
< Pragma: no-cache
< Expires: -1
< X-Content-Type-Options: nosniff
< ETag: W/"fb0-i0dUXExBQCFBzR/jU7ikUgE3/JM"
<
{ [4016 bytes data]
100  4016  100  4016    0     0   219k      0 --:--:-- --:--:-- --:--:--  245k[
  {
    "id": 1,
    "title": "json-server",
    "author": "typicode"
  },
  {
    "id": 4
  },
  {
    "id": 5
  },
  {
    "title": "teste",
    "author": "testee",
    "id": 6
  },
  {
    "title": "teste",
    "author": "Matheus Grego",
    "id": "20230979"
  },
  {
    "id": "4eKCWSk"
  },
  {
    "{\"title\":\"teste2\",\"author\":\"teste2\"}": "",
    "id": "PGmPi6E"
  },
  {
    "id": "NXLwoS8"
  },
  {
    "id": "K2opChK"
  },
  {
    "title": "atualização",
    "author": "Alisson G. Santos",
    "id": "2N3A47n"
  },
  {
    "id": "65AbbeM"
  },
  {
    "id": "8dXdDS9"
  },
  {
    "title": "teste",
    "author": "teste1",
    "id": "p1JXHiV"
  },
  {
    "teste": "teste",
    "id": "Sm2oyXW"
  },
  {
    "teste": "teste, ahuthor=undefined",
    "id": "Z5C1Ymh"
  },
  {
    "teste": "teste",
    "id": "p7QPUb6"
  },
  {
    "id": "ZRZN-S1"
  },
  {
    "id": "-ZJw3PD"
  },
  {
    "teste": "teste, author=none",
    "id": "h4aX6R-"
  },
  {
    "teste": "teste",
    "teste1": "teste1",
    "id": "3nz2IkN"
  },
  {
    "teste": "teste",
    "tauthor": "none",
    "id": "B3fIuWP"
  },
  {
    "title": "mel na chupeta",
    "author": "mudei",
    "id": "M-lt8lk"
  },
  {
    "title": "teste 321",
    "author": "Gabriel Troni",
    "id": "aCaCade"
  },
  {
    "title": "teste",
    "author": "Eduardo Kuritza",
    "id": "GMkpD2J"
  },
  {
    "title": "teste 123",
    "author": "Alex Kutzke",
    "id": "735Ho0i"
  },
  {
    "title": "OLA TODOS",
    "author": "Mathe N",
    "id": "-mgzy6v"
  },
  {
    "title": "teste 123",
    "author": "Patrick",
    "id": "QN-h9-V"
  },
  {
    "title": "teste 123",
    "author": "leo pamps",
    "id": "hY6dnz8"
  },
  {
    "title": "teste do pedro",
    "author": "Pedro Souza",
    "id": "UIpsQ1E"
  },
  {
    "title": "teste joao",
    "author": "Joao Paes",
    "id": "hjF_36T"
  },
  {
    "title": "teste 123",
    "author": "Rafael Rodrigues Estefanes",
    "id": "VEAtJzf"
  },
  {
    "title": "teste123",
    "author": "Felipe",
    "id": "ajhCv_-"
  },
  {
    "title": "teste 123",
    "author": "Anderson Verboski",
    "id": "-1wGvBC"
  },
  {
    "title": "tads ufpr",
    "author": "Bruno Bletes",
    "id": "KKfBR4O"
  },
  {
    "title": "LuizOtavio",
    "author": "Rafael Cecyn Mendes",
    "id": "zSm7TIR"
  },
  {
    "title": "teste grr20230981",
    "author": "nathieli leal",
    "id": "9y5AD5X"
  },
  {
    "title": "teste 123",
    "author": "Endrews Oliveira",
    "id": "3kneFVt"
  },
  {
    "title": "atividade gitlabshow",
    "author": "Pedro Felipe",
    "id": "_0w7HRf"
  },
  {
    "title": "test test test",
    "author": "Rodolfo",
    "id": "TdB7H5f"
  },
  {
    "title": "Começando bem",
    "author": "Mateus Bespalhok",
    "id": "Ge0TIh_"
  },
  {
    "title": "teste 123",
    "author": "Andre Brito",
    "id": "pfPZ_do"
  },
  {
    "title": "teste 123",
    "author": "maria frank",
    "id": "us31rjZ"
  },
  {
    "title": "teste 123",
    "author": "Luis Sawiniec",
    "id": "g2sazKt"
  },
  {
    "title": "teste 1914",
    "author": "viol",
    "id": "SposYEr"
  },
  {
    "title": "mim de papai",
    "author": "000",
    "id": "hmrqtSe"
  },
  {
    "title": "teste",
    "author": "none",
    "id": "GOX9rs7"
  },
  {
    "title": "editei",
    "author": "Leonardo",
    "id": "2"
  },
  {
    "title": "teste 100",
    "author": "tiago",
    "id": "zYyVR3Z"
  },
  {
    "title": "Como Dar o Bumbum",
    "author": "Alex Kutzke",
    "id": "YKjUAHT"
  },
  {
    "title": "teste 123",
    "author": "Alex kurtzke",
    "id": "aDIIVJv"
  },
  {
    "title": "meuPost",
    "author": "Viviane",
    "id": "iKzwWtW"
  },
  {
    "title": "teste 123",
    "author": "Ricardo Durigon",
    "id": "nIVgCZk"
  },
  {
    "title": "teste 123",
    "author": "Arthur Bap",
    "id": "tOLXZpo"
  },
  {
    "title": "teste 123",
    "author": "Helena Rigoni",
    "id": "lYBuTWM"
  },
  {
    "title": "teste",
    "author": "rodrigo",
    "id": "hnxi15i"
  }
]
* Connection #0 to host web1.kutzke.com.br left intact

```

### POST (criar)

```
$ curl -X POST -v -d 'title=entrei&author=hacker' web1.kutzke.com.br/posts
```

```
 Connected to web1.kutzke.com.br (200.236.3.126) port 80 (#0)
> POST /posts HTTP/1.1
> Host: web1.kutzke.com.br
> User-Agent: curl/7.84.0
> Accept: */*
> Content-Length: 26
> Content-Type: application/x-www-form-urlencoded
>
 [26 bytes data]
* Mark bundle as not supporting multiuse
< HTTP/1.1 201 Created
< Server: nginx/1.25.1
< Date: Fri, 11 Aug 2023 00:19:51 GMT
< Content-Type: application/json; charset=utf-8
< Content-Length: 56
< Location: http://web1.kutzke.com.br/posts/2
< Connection: keep-alive
< X-Powered-By: Express
< Vary: Origin, X-HTTP-Method-Override, Accept-Encoding
< Access-Control-Allow-Credentials: true
< Cache-Control: no-cache
< Pragma: no-cache
< Expires: -1
< Access-Control-Expose-Headers: Location
< X-Content-Type-Options: nosniff
< ETag: W/"38-xHjqHr38jNZAmF+4XezELM+NOQ4"
<
 [56 bytes data]
100    82  100    56  100    26   2508   1164 --:--:-- --:--:-- --:--:--  3904{
  "title": "entrei",
  "author": "hacker",
  "id": 2
}
* Connection #0 to host web1.kutzke.com.br left intact
```

### GET com id (mostrar um registro específico)

```
$ curl -X GET -v web1.kutzke.com.br/posts/2
```

```
 Connected to web1.kutzke.com.br (200.236.3.126) port 80 (#0)
> GET /posts/04UgfCy HTTP/1.1
> Host: web1.kutzke.com.br
> User-Agent: curl/7.84.0
> Accept: */*
>
* Mark bundle as not supporting multiuse
< HTTP/1.1 200 OK
< Server: nginx/1.25.1
< Date: Fri, 11 Aug 2023 00:42:43 GMT
< Content-Type: application/json; charset=utf-8
< Content-Length: 66
< Connection: keep-alive
< X-Powered-By: Express
< Vary: Origin, Accept-Encoding
< Access-Control-Allow-Credentials: true
< Cache-Control: no-cache
< Pragma: no-cache
< Expires: -1
< X-Content-Type-Options: nosniff
< ETag: W/"42-6UwagLs8qeTMaKlAvLRcEvVWBRI"
<
 [66 bytes data]
100    66  100    66    0     0   1896      0 --:--:-- --:--:-- --:--:--  2000{
  "title": "editei",
  "author": "Leonardo",
  "id": "2"
}
* Connection #0 to host web1.kutzke.com.br left intact

```

### PUT com id (alterar um registro específico)

```
$ curl -X PUT -v -d 'title=editei&author=Leonardo' web1.kutzke.com.br/posts/2
```

```
 Connected to web1.kutzke.com.br (200.236.3.126) port 80 (#0)
> PUT /posts/2 HTTP/1.1
> Host: web1.kutzke.com.br
> User-Agent: curl/7.84.0
> Accept: */*
> Content-Length: 28
> Content-Type: application/x-www-form-urlencoded
>
 [28 bytes data]
* Mark bundle as not supporting multiuse
< HTTP/1.1 200 OK
< Server: nginx/1.25.1
< Date: Fri, 11 Aug 2023 00:36:43 GMT
< Content-Type: application/json; charset=utf-8
< Content-Length: 60
< Connection: keep-alive
< X-Powered-By: Express
< Vary: Origin, Accept-Encoding
< Access-Control-Allow-Credentials: true
< Cache-Control: no-cache
< Pragma: no-cache
< Expires: -1
< X-Content-Type-Options: nosniff
< ETag: W/"3c-FLPtVayvBhX07RqV3X993+fyF2E"
<
 [60 bytes data]
100    88  100    60  100    28   3392   1583 --:--:-- --:--:-- --:--:--  5500{
  "title": "editei",
  "author": "Leonardo",
  "id": "2"
}
* Connection #0 to host web1.kutzke.com.br left intact
```

### DELETE com id (apagar um registro específico)

```
$ curl -X DELETE -v web1.kutzke.com.br/posts/2
```

```
* Connected to web1.kutzke.com.br (200.236.3.126) port 80 (#0)
> DELETE /posts/2 HTTP/1.1
> Host: web1.kutzke.com.br
> User-Agent: curl/7.84.0
> Accept: */*
> Content-Length: 4
> Content-Type: application/x-www-form-urlencoded
>
 [4 bytes data]
* Mark bundle as not supporting multiuse
< HTTP/1.1 200 OK
< Server: nginx/1.25.1
< Date: Fri, 11 Aug 2023 00:32:10 GMT
< Content-Type: application/json; charset=utf-8
< Content-Length: 2
< Connection: keep-alive
< X-Powered-By: Express
< Vary: Origin, Accept-Encoding
< Access-Control-Allow-Credentials: true
< Cache-Control: no-cache
< Pragma: no-cache
< Expires: -1
< X-Content-Type-Options: nosniff
< ETag: W/"2-vyGp6PvFo4RvsFtPoIWeCReyIC8"
<
 [2 bytes data]
100     6  100     2  100     4     92    184 --:--:-- --:--:-- --:--:--   300{}
* Connection #0 to host web1.kutzke.com.br left intact
```

