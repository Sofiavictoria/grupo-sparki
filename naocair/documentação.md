# Título do Projeto <h1>

Este é um exemplo de README.md escrito em Markdown para o GitHub.

## Descrição

Esta é a seção de descrição do projeto. Aqui você pode fornecer informações sobre o propósito e os objetivos do projeto.

## Funcionalidades

- Funcionalidade 1: Descrição da funcionalidade 1.
- Funcionalidade 2: Descrição da funcionalidade 2.
- Funcionalidade 3: Descrição da funcionalidade 3.

## Instalação

1. Clone este repositório.
2. Execute o comando `npm install` para instalar as dependências.

## Uso

Aqui você pode fornecer instruções sobre como usar o projeto. Explique os passos necessários e as configurações importantes.

Exemplo de código em Python:


  [vídeo do robô executando](https://youtu.be/We9_DYo-2kw)

  ## Fluxograma
  
  Para melhor visualização das etapas que o Sparki deve realizar, o fluxograma abaixo exemplifica a sequencia e as decisões na qual devem ser seguidas de maneira linear . É inicializado no Void loop com a primeira condição de IF, que representa a leitura do sensor esquerdo, caso tenha detectado algo instantaneamente é ligado o led RGB RED, em seguida o Sparki move para trás e se redireciona para ir a direita em um angulo de 20°
O mesmo processo de repete para segunda condição de IF, onde é realizado a leitura para o sensor direito, quando detectado é ligado led RGB BLUE, logo o Sparki move para trás e se redireciona para ir a esquerda no angulo de 20°.
Em um ultimo caso, quando nenhuma condição IF é verdadeira o Sparki é direcionado a continar seguindo em frente enquanto não houver uma leitura detectada, por isso temos um loop e delay para que haja um tempo de leitura antes da ação
    ![sparki](img/sparki.jpg)
  ![sparki](img/robosparki.avif) 
  
