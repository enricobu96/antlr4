# Progetto per il Corso di Automi e Linguaggi Formali

## Istruzioni per il progetto

In questo laboratorio vi si chiede di utilizzare il generatore di parser ANTLR v4 per creare un semplice linguaggio di programmazione imperativa che chiameremo TinyREXX. Il file laboratorio_antlr.zip contiene il generatore di parser ANTLR versione 4.7, le librerie di runtime per il linguaggio C++ per linux, la grammatica che definisce i costrutti di base di TinyREXX ed il codice del syntax checker e del traduttore descritti nel tutorial.

### Svolgimento del laboratorio

Il laboratorio può essere svolto sia da soli che in gruppi di massimo tre persone, e permette di ottenere un bonus di massimo 2 punti che si aggiunge al voto dell'esame scritto. Per consegnare gli esercizi è sufficiente allegare il file con la grammatica ed i file con il codice C++ in un unico file di archivio (.zip, .tar.gz, ecc...) nello spazio sottostante. 

E' sufficiente che uno solo dei componenti del gruppo consegni gli esercizi, indicando i nomi dei componenti del gruppo nello spazio sottostante.

Gli esercizi vanno consegnati entro le ore 23:55 di venerdì 7 Giugno 2019. La consegna in ritardo non dà alcun bonus.

### Esercizio 1

Estendete la grammatica del linguaggio TinyREXX con le seguenti funzionalità:
- **cicli controllati da contatori come**

> do variabile = espressione_i to espressione_t  
>    istruzione1  
>    istruzione2  
>    . . .  
> end

dove:  
*variabile*  
è la variabile di controllo, detta anche contatore. Può essere usata anche all'interno del loop. Il suo valore viene incrementato di 1 ad ogni ciclo.

*espressione_i*  
rappresenta il valore iniziale assegnato alla variabile di controllo ed è il valore che essa ha durante la prima esecuzione del loop.

*espressione_t*  
è l'espressione per il valore finale (to) che la variabile assumerà durante l'ultima esecuzione del loop. Il ciclo termina quando il valore della variabile di controllo supera quello di espressione_t.

- **il costrutto if-then-else:**

> if guardia then  
> do  
>    istruzione 1  
>    istruzione 2  
>    ...  
> end  
> else do  
>    istruzione 3  
>    ...  
> end

dove il *ramo else* è opzionale e può essere omesso.

- **espressioni booleane complesse che utilizzano gli operatori logici & ("and"), | ("or"), \  ("not"), e le parentesi.**

Scrivete almeno due programmi di esempio in TinyREXX che usino i nuovi costrutti e allegateli alla soluzione.

### Esercizio 2

Modificate il codice del traduttore per fare in modo che funzioni per programmi scritti con la grammatica estesa che avete creato per l'Esercizio 1. Provate il funzionamento del traduttore sui programmi di esempio e allegate il codice C++ ottenuto con il traduttore alla soluzione.

## Sviluppo

### Esercizio 1

- [ ] Cicli con contatori
- [ ] if-then-else
- [ ] Espressioni booleane complesse
- [ ] Primo esempio
- [ ] Secondo esempio

### Esercizio 2

- [ ] Implementazione dei cicli con contatori
- [ ] Implementazione di if-then-else
- [ ] Implementazione di espressioni booleane complesse
- [ ] Traduzione del primo esempio
- [ ] Traduzione del secondo esempio

### Link veloci ai file

- [Istruzioni in PDF](https://github.com/enricobu96/TMOALF/blob/master/_docs/laboratorio_antlr.pdf)
- [tinyrexx.g4](https://github.com/enricobu96/TMOALF/blob/master/tinyrexx/tinyrexx.g4) - Sintassi del linguaggio
- [MyListener.cpp](https://github.com/enricobu96/TMOALF/blob/master/tinyrexx/MyListener.cpp) - Implementazione della sintassi
- [MyListener.h](https://github.com/enricobu96/TMOALF/blob/master/tinyrexx/MyListener.h) - File di header
- [Esempio 1](https://github.com/enricobu96/antlr4/blob/master/examples/fibonacci.rexx)
- [Esempio 2](https://github.com/enricobu96/antlr4/blob/master/examples/tipotriangolo.rexx)
- [Traduzione in C++ di Esempio 1](https://www.youtube.com/watch?v=dQw4w9WgXcQ)
- [Traduzione in C++ di Esempio 2](https://www.youtube.com/watch?v=dQw4w9WgXcQ)
