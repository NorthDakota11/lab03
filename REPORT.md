# Отчет по домашнему заданию лабораторной работы №3

## Тема

CMake-сборка проекта Formatter Inc.

## Суть домашнего задания

В домашнем задании требуется настроить CMake для набора проектов Formatter Inc.:

1. Собрать статическую библиотеку `formatter`.
2. Собрать расширенную библиотеку, использующую `formatter`.
3. Собрать приложение `hello_world`.
4. Собрать приложение `solver`, использующее библиотеки `formatter`, расширенную библиотеку и `solver_lib`.

## Что добавлено в репозиторий

- `formatter_lib` — статическая библиотека форматирования.
- `extended_lib` — расширенная библиотека.
- `hello_world_application` — пример приложения.
- `solver_lib` — библиотека для вычислений.
- `solver_application` — приложение `solver`.

## Команды проверки

```sh
cmake -S . -B _build
cmake --build _build
cmake --build _build --target formatter
cmake --build _build --target hello_world
cmake --build _build --target solver
```

## Ожидаемый результат

После сборки должны быть созданы статические библиотеки и исполняемые файлы `hello_world` и `solver`.

## Ссылка на репозиторий

https://github.com/NorthDakota11/lab03
