# Contributing Guide

本仓库用于沉淀计算机基础、后端开发和技术面试相关内容。新增或修改内容时，请优先保持结构清晰、命名统一、可长期维护。

## Directory Rules

| 目录 | 用途 |
| --- | --- |
| `docs/` | 系统化知识笔记 |
| `interview-experience/` | 公司面经、面试复盘 |
| `code/` | 可运行代码示例 |
| `assets/` | PDF、图片等静态资料 |

新增内容时，优先放入已有目录。只有当现有分类明显不合适时，才新增一级或二级目录。

## Naming Rules

- 文件名使用英文小写。
- 单词之间使用连字符 `-`。
- Markdown 文件使用 `.md` 后缀。
- C++ 代码使用 `.cpp` 后缀。
- 文件名应表达主题，避免 `note1.md`、`temp.cpp` 这类临时命名。

示例：

```text
tcp-interview-notes.md
mysql-index-notes.md
quick_sort.cpp
```

## Markdown Style

- 每篇文档只保留一个一级标题。
- 标题层级按顺序使用，避免从 `##` 跳到 `####`。
- 面试题推荐使用以下结构：

```text
## 问题标题

### 核心结论

### 关键要点

### 延伸问题
```

- 外部链接应保留完整 URL，便于回溯来源。
- 不确定的结论需要标注来源或待验证。

## Code Style

- C++ 示例应保证可以独立编译运行。
- 命名保持清晰，避免无意义缩写。
- 只在逻辑不直观处添加必要注释。
- 算法代码优先保持简洁，不引入无关框架。

推荐编译方式：

```bash
g++ -std=c++17 -O2 code/cpp/sorting/quick_sort.cpp -o /tmp/quick_sort
```

## Maintenance Checklist

提交前建议检查：

- README 中是否需要增加索引。
- 新文件是否放在正确目录。
- 文件名是否符合英文小写和连字符规范。
- Markdown 标题层级是否清晰。
- 代码示例是否可以独立运行。

