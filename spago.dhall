{ name = "console"
, dependencies = [ "prelude", "effect" ]
, packages = ../pure-c/package-sets/packages.dhall
, sources = [ "src/**/*.purs", "test/**/*.purs" ]
}
