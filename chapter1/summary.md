##  C Preprocessor
`gcc -E -P compilation_example.c`

## Assembly | Intel Syntax
```
$ gcc -S -masm=intel <file>.c
$ cat <file>.s
```

## Generating an object file
```
$ gcc -c <file>.c
$ file <file>.o
```

## Binary Executable
```
$ gcc <file>.c
$ file a.out
```

# Viewing Symbolic info

## Symbols in a.out with readelf

`readelf --syms a.out`

## Stripping an Exec

```
$ strip --strip-all a.out
$ file a.out
$ readelf --sums a.out
```

# Disassembling a Binary (ELF File)

## Inside an Object File

```
$ objdump -sj .rodata <file>.o
...
$ objdump -M intel -d <file>.o
...
```

## Relocations symbols inside an object file

```
$ readelf --relocs <file>.o
```

## Disassembling an Exe with Objdump

```
$ objdump -M intel -d a.out
```

Applies also with stripped executables.


```
$ readelf -p .interp a.out
```
