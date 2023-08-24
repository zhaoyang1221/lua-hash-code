local hash_code = require 'hash_code'
assert(type(hash_code) == 'table')
assert(hash_code.VERSION == 'hash-code 0.1.2')
assert(hash_code.hash_code)

do
    print("testing hash_code...")
    -- hash_code
    assert(hash_code.hash_code('123123') == 1450572480)
    assert(hash_code.hash_code('hello world123112') == 1387903588)
    assert(hash_code.hash_code('abcabc') == -1424388928)
    assert(hash_code.hash_code('哈哈哈，你好') == -2123919007)
    assert(hash_code.hash_code('哈哈哈，你好') == -2123919007)
    assert(hash_code.hash_code('哈哈哈，你好') == -2123919007)
    assert(hash_code.hash_code('哈哈哈，你好') == -2123919007)
    assert(hash_code.hash_code('哈哈哈，你好') == -2123919007)
    assert(hash_code.hash_code('哈哈哈，你好') == -2123919007)
    assert(hash_code.hash_code('哈哈哈，你好') == -2123919007)
    assert(hash_code.hash_code('哈哈哈，你好') == -2123919007)
    assert(hash_code.hash_code('哈哈哈，你好') == -2123919007)
    print("all test cases pass!")
end