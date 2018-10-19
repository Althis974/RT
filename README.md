# RT

## Introduction

  Le ray tracing, est une technique de calcul d'optique par ordinateur, utilisée pour le rendu en synthèse d'image ou pour des études de systèmes optiques. Elle consiste à simuler le parcours inverse de la lumière : on calcule les éclairages de la caméra vers les objets, puis vers les lumières, alors que dans la réalité, la lumière va de la scène vers l'œil.

  Cette technique reproduit les phénomènes physiques (principe du retour inverse de la lumière de Fermat, lois de Snell-Descartes) que sont la réflexion et la réfraction. Une mise en œuvre naïve du ray tracing ne peut rendre compte de phénomènes optiques tels que les caustiques, l'illumination globale ou encore la dispersion lumineuse (il faut une approche plus élaborée du ray tracing faisant appel à des techniques probabilistes de type méthode de Monte-Carlo, Metropolis ou à la radiosité pour résoudre ces problèmes).

En revanche, contrairement à d'autres algorithmes de synthèse d'image, elle permet de définir mathématiquement les objets à représenter et non pas seulement par une multitude de facettes.

## Objectifs

  Votre objectif est d’être capable, à l’aide de votre programme, de générer des images de synthèse selon la méthode du Ray-Tracing. Ces images de synthèse représentent une scène, vue d’une position et d’un angle spécifiques, définie par des objets géométriques simples, entiers ou partiels, et disposant d’un système d’éclairage.
  
  Le projet comporte une partie obligatoire et de nombreuses options. La partie obligatoire vaut 0 points et les options ne rapportent des points que si la partie obligatoire est complète à 100%. Le projet ne sera validé que si un volume substanciel d’options est présent lors de la soutenance.
