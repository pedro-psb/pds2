import random
from dataclasses import Field, dataclass, field
from pathlib import Path

import jinja2 as j2

env = j2.Environment(
    loader=j2.FileSystemLoader("templates"), autoescape=j2.select_autoescape()
)


def to_class(value: str):
    return "".join([w.capitalize() for w in value.split(" ")])


env.filters["to_class"] = to_class
template_ataque_cpp = env.get_template("ArmaAtaque.cpp.j2")
template_ataque_hpp = env.get_template("ArmaAtaque.hpp.j2")

template_defesa_cpp = env.get_template("ArmaDefesa.cpp.j2")
template_defesa_hpp = env.get_template("ArmaDefesa.hpp.j2")

template_personagem_cpp = env.get_template("Personagem.cpp.j2")
template_personagem_hpp = env.get_template("Personagem.hpp.j2")


@dataclass
class ArmaDefesa:
    name: str


def create_noise() -> str:
    noises = ["pish", "teng", "split", "spat", "cleng", "cling", "pash", "tsc"]
    return random.choice(noises) + " " + random.choice(noises)

@dataclass
class ArmaAtaque:
    name: str
    ruido: str = field(default_factory=create_noise)


@dataclass
class Personagem:
    name: str
    frase: str


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
            Personagem("Formiga", "Você não tem chances!"),
            Personagem("Raposa", "Nao há esperanças para voce!"),
            Personagem("Aguia", "A derrota lhe espera!"),
            Personagem("Coruja", "Uhl Uhl!"),
            Personagem("Escorpiao", "Contra mim leva a pior!"),
        ],
    ),
    Spec(
        name="ArmaAtaque",
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


def ensure_dirs(file: Path):
    file.parent.mkdir(parents=True, exist_ok=True)


def main():
    outdir = Path("")
    for spec in spec_list:
        cpp_template = env.get_template(f"{spec.name}.cpp.j2")
        hpp_template = env.get_template(f"{spec.name}.hpp.j2")
        for item in spec.items:
            filename = to_class(item.name)
            dest_cpp = Path(outdir / spec.dir.format(type="cpp") / f"{filename}.cpp")
            dest_hpp = Path(outdir / spec.dir.format(type="hpp") / f"{filename}.hpp")
            ensure_dirs(dest_cpp)
            ensure_dirs(dest_hpp)
            dest_cpp.write_text(cpp_template.render(**item.__dict__))
            dest_hpp.write_text(hpp_template.render(**item.__dict__))


if __name__ == "__main__":
    exit(main())
