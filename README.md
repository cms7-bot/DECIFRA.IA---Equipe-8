# 🎮 REIGNS: IA

> Um jogo de decisões inspirado em *Reigns*, onde você governa uma empresa de Inteligência Artificial e aprende conceitos reais de letramento em IA na prática.

![status](https://img.shields.io/badge/status-em%20desenvolvimento-yellow)

---

## 📖 Sobre o projeto

**REIGNS: IA** é um jogo de decisões por arraste (*swipe*), no estilo do clássico *Reigns*, em que o jogador assume o papel de responsável por uma empresa de Inteligência Artificial. A cada dilema apresentado, é preciso equilibrar quatro pilares — **Confiança pública**, **Investidores**, **Ética/Segurança** e **Inovação** — enquanto aprende, na prática, sobre temas reais como viés algorítmico, alucinação de modelos, deepfakes e privacidade de dados.


### 🎯 Objetivo do jogo

Sobreviver o maior número de dias possível, mantendo os quatro medidores equilibrados. O jogo termina quando qualquer medidor atinge o valor mínimo (0) ou máximo (100), revelando um final com uma lição educativa sobre o conceito de IA relacionado à causa da "queda".

---

## ✨ Funcionalidades

- 🃏 Sistema de decisões por arraste (esquerda/direita), com suporte a mouse e toque
- 📊 Quatro medidores dinâmicos que reagem a cada escolha
- 🔮 Núcleo visual da IA que muda de aparência conforme o estado geral do sistema
- 🔍 Opção de "investigar" um dilema antes de decidir
- 🗣️ Conselheiros que oferecem dicas rápidas sobre o dilema atual
- 🔔 Notificações inesperadas simulando eventos do mundo real
- 💡 Toasts educativos explicando conceitos reais de IA após cada decisão
- 🎚️ Mini-interações (sliders e quizzes) para reforçar o aprendizado
- 🧾 Tela de auditoria periódica revisando decisões anteriores
- 🏁 Múltiplos finais, cada um com uma lição diferente sobre riscos de IA
- 📱 Interface responsiva (desktop e mobile)

---

## 🛠️ Tecnologias utilizadas

| Camada | Tecnologia |
|---|---|
| Interface |  |
| Tipografia | |
| Dados do jogo | |
| Versionamento | Git + GitHub |
| Gestão do projeto | GitHub Projects / Jira |

---


## 🕹️ Como jogar

1. Leia o dilema apresentado no cartão central
2. Arraste o cartão para a **esquerda** ou **direita** para escolher uma das duas opções
3. Acompanhe os quatro medidores no topo da tela
4. Use os gestos extras quando disponíveis:
   - Segurar o cartão → ver prévia do impacto
   - Arrastar para cima → investigar o dilema
   - Duplo toque → consultar um conselheiro
5. Sobreviva o maior número de dias possível sem deixar nenhum medidor zerar ou estourar

---

## 📁 Estrutura do repositório

```
reigns-ia/
├── index.html              # Protótipo jogável (estrutura, estilo e lógica)
├── assets/                 # Imagens, ícones e screenshots
├── docs/                   # Documentação do projeto (entrega acadêmica)
│   ├── visao.md             # Documento de Visão
│   ├── requisitos.md        # Requisitos funcionais e não-funcionais
│   ├── historias-usuario.md # Histórias de usuário (padrão 3Cs)
│   ├── modelagem.md          # Casos de uso e diagramas
│   ├── arquitetura.md        # Arquitetura em alto nível
│   ├── processo.md           # Definição de processo de desenvolvimento
│   └── testes.md             # Estratégias e casos de teste
└── README.md

---

## 📚 Documentação do projeto

Toda a documentação de engenharia de software está disponível na pasta [`/docs`](./docs):

| Documento | Descrição |
|---|---|
| [Visão](./docs/visao.md) | Propósito, escopo e stakeholders do produto |
| [Requisitos](./docs/requisitos.md) | Requisitos funcionais, não-funcionais e restrições |
| [Histórias de Usuário](./docs/historias-usuario.md) | 15+ histórias no padrão 3Cs (Card, Conversation, Confirmation) |
| [Modelagem](./docs/modelagem.md) | Diagrama e descrição de casos de uso |
| [Arquitetura](./docs/arquitetura.md) | Componentes do sistema e decisões técnicas |
| [Processo](./docs/processo.md) | Metodologia, papéis e fluxo de trabalho da equipe |
| [Testes](./docs/testes.md) | Estratégias, tipos de teste e critérios de aceite |

---

## 🗺️ Roadmap

- [x] Protótipo jogável com mecânica principal (swipe + medidores)
- [x] Núcleo visual reativo
- [x] Toasts educativos
- [ ] Tela de auditoria funcional
- [ ] Mini-interações (slider de parâmetro, quiz de viés)
- [ ] Persistência de progresso (recorde de dias sobrevividos)
- [ ] Expansão do baralho de dilemas
- [ ] Versão com backend para ranking entre jogadores

---

## 👥 Equipe

| Nome | Responsabilidade |
|---|---|
| [Caio Moraes] | caio.moraes1102@gmail.com |
| [Nome integrante 2] |  |



