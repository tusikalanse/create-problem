# 一个用于出题的脚本

## 每个题目文件夹包含如下文件
problem.md: 题目描述

std.cpp: 题目标程

data.cpp: 数据生成器(生成.in输入文件)

gen.py:  数据生成器(用标程生成.out输出文件)

validator.cpp: 检验.in文件合法性

validator.py: 批量检验.in文件脚本

## 使用方法
以linux为例(请考虑判题机是否处理LF与CRLF问题)

```bash ./init.sh 文件夹名```

然后填写problem.md, std.cpp, data.cpp, validator.cpp

```python3 gen.py``` 即可生成输入输出数据

```python3 validator.py``` 检验数据合法性

## TODO
计划将输入数据和输出数据的生成分为两步

计划添加对spj的支持

计划添加一键打包功能，考虑到各个平台需要的压缩包格式不同，暂时不知道怎么做