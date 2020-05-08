#ifndef _TILE_HPP_
#define _TILE_HPP_

#include "Vetor2D.hpp"
#include "Ids.hpp"
#include "GerenciadorGrafico.hpp"
#include "GerenciadorEventos.hpp"

namespace exercicio {
  class Tile {
  
    private:
      const Ids::Ids id;
      const char* caminho;
      Vetor2F tamanho;

    public:
      Tile(const Ids::Ids ID, const char* caminhoArquivo, Vetor2F Tamanho);
      virtual ~Tile();
      virtual void inicializar(GerenciadorGrafico& gg, GerenciadorEventos& ge);
      void desenhar(GerenciadorGrafico& gg, const Vetor2F posicao) const;
      const Ids::Ids getId() const;
      virtual void colidir(Ids::Ids idOutro, Vetor2F posicaoOutro, Vetor2U posicao);

  };
}

#endif