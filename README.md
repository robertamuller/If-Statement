# If-Statement

<h2>índice:</h2>

* [Sobre o Programa](#prog)
* [Cálculo do IMC](#calc)
* [Anos Bissextos](#anos)
* [Testes de funcionalidade](#test)

<h3 id=prog>Sobre o Programa</h3>

Programa feito como resolução da primeira atividade do curso de Estrutura de Dados, em c++. A atividade consiste em uma lista com dois exercícios, "Cálculo IMC" e "Anos Bissextos".

<h3 id=calc>Cálculo do IMC</h3>

Em Calculo-IMC.cpp, o programa calcula e informa o índice de massa corporal (IMC) de uma pessoa, baseado em sua altura, em mestros, e peso (kg). Além disso, classifica o IMC de acordo com a tabela:

<table>
  <thead>
    <tr>
      <th colspan="1">Índice (kg/m^2)</th>
      <th colspan="1">Classificação</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>. < 17</td>
      <td>Muito abaixo do peso</td>
    </tr>
    <tr>
      <td>17 &le; . &le; 18.5</td>
      <td>Abaixo do peso</td>
    </tr>
    <tr>
      <td>18.5 &le; . &le; 25</td>
      <td>Peso normal</td>
    </tr>
    <tr>
      <td>25 &le; . &le; 30</td>
      <td>Acima do peso</td>
    </tr>
    <tr>
      <td>30 &le; . &le; 35</td>
      <td>Obesidade</td>
    </tr>
    <tr>
      <td>35 &le; . &le; 40</td>
      <td>Obesidade severa</td>
    </tr>
    <tr>
      <td>40 &le; . </td>
      <td>Obesidade mórbida</td>
    </tr>
  </tbody>
</table>


<h3 id=anos>Anos Bissextos</h3>

Em anos-bissextos.cpp, o programa recebe um ano como entrada e informa ao usuário se o ano é bissexto ou não, com base em dois critérios

* É divisível por 4, mas não por 100;
* É divisível por 400.


<h3 id=test>Testes de funcionalidade</h3>

b