# Отчет по домашнему заданию лабораторной работы №3

## Тема

CMake-сборка проекта Formatter Inc.

## Суть домашнего задания

В домашнем задании требуется настроить CMake для всего набора проектов Formatter Inc.:

1. Собрать статическую библиотеку `formatter` из каталога `formatter_lib`.
2. Собрать расширенную библиотеку `formatter_ex`, которая использует `formatter`.
3. Собрать приложение `hello_world`, использующее `formatter_ex`.
4. Собрать библиотеку `solver_lib`.
5. Собрать приложение `solver`, использующее `formatter_ex` и `solver_lib`.

## Что добавлено в репозиторий

- `formatter_lib` — статическая библиотека форматирования.
- `formatter_ex_lib` — расширенная библиотека.
- `hello_world_application` — приложение `hello_world`.
- `solver_lib` — библиотека для вычислений.
- `solver_application` — приложение `solver`.
- Корневой `CMakeLists.txt`, который собирает все пять частей.

## Команды проверки

```sh
cmake -S . -B _build
cmake --build _build
cmake --build _build --target formatter
cmake --build _build --target formatter_ex
cmake --build _build --target hello_world
cmake --build _build --target solver_lib
cmake --build _build --target solver
```

## Ожидаемый результат

После сборки должны быть созданы статические библиотеки `formatter`, `formatter_ex`, `solver_lib` и исполняемые файлы `hello_world`, `solver`.

## Ссылка на репозиторий

https://github.com/NorthDakota11/lab03
