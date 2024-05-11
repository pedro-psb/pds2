from dataclasses import dataclass

import jinja2 as j2

env = j2.Environment(
    loader=j2.FileSystemLoader("templates"), autoescape=j2.select_autoescape()
)
template_ataque_cpp = env.get_template("ArmaAtaque.cpp.j2")
template_ataque_hpp = env.get_template("ArmaAtaque.hpp.j2")

template_defesa_cpp = env.get_template("ArmaDefesa.cpp.j2")
template_defesa_hpp = env.get_template("ArmaDefesa.hpp.j2")

template_personagem_cpp = env.get_template("Personagem.cpp.j2")
template_personagem_hpp = env.get_template("Personagem.hpp.j2")


@dataclass
class ArmaDefesa:
    name: str


@dataclass
class ArmaAtaque:
    name: str


@dataclass
class Personagem:
    name: str


@dataclass
class Spec:
    name: str
    dir: str
    items: list


spec_list = [
    Spec(
        name="ArmaDefesa",
        dir="acessorios-{type}",
        items=[
            ArmaDefesa("Panela"),
            ArmaDefesa("Escudo de Latao"),
            ArmaDefesa("Escudo de Cobre"),
            ArmaDefesa("Escudo de Prata"),
            ArmaDefesa("Escudo de Ouro"),
        ],
    ),
    Spec(
        name="Personagem",
        dir="personagens-{type}",
        items=[
            Personagem("Formiga"),
            Personagem("Raposa"),
            Personagem("Aguia"),
            Personagem("Coruja"),
            Personagem("Escorpiao"),
        ],
    ),
    Spec(
        name="ArmaDefesa",
        dir="acessorios-{type}",
        items=[
            ArmaAtaque("Espada de Latao"),
            ArmaAtaque("Espada de Bronze"),
            ArmaAtaque("Espada de Cobre"),
            ArmaAtaque("Espada de Prata"),
            ArmaAtaque("Espada de Ouro"),
        ],
    ),
]


def main():
    for spec in spec_list:
        cpp_template = env.get_template(f"{spec.name}.cpp.j2")
        hpp_template = env.get_template(f"{spec.name}.hpp.j2")
