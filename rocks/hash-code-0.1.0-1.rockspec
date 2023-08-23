package = "hash-code"
version = "0.1.0-1"
source = {
  url = "git://github.com/edubart/lua-hasher.git",
  tag = "v0.1.0"
}
description = {
  summary = "A simple library for hashing implemented in C",
  detailed = [[
    A small library with hash and encoding functions implemented in C. Currently supports
    blake2b hashing and base58 encode/decode.
  ]],
  homepage = "https://github.com/edubart/lua-hasher",
  license = "MIT"
}
dependencies = {
  "lua >= 5.1",
  "luarocks-build-cpp"
}
build = {
  type = "cpp",
  modules = {
    hash_code = {
      sources = {
        "src/hash_code.cpp",
        "l_hash_code.cpp"
      },
      incdirs = {
        "./src"
      }
    }
  }
}