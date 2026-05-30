# Interview Knowledge

计算机基础与后端开发面试知识库，覆盖计算机网络、操作系统、数据库、C++、数据结构与算法、后端工程基础以及真实面试记录。

本仓库适合用于：

- 系统复习计算机基础知识
- 准备后端/C++/基础架构方向技术面试
- 沉淀面试题、复盘经验和代码模板
- 快速查找高频概念与问答要点

## Repository Structure

```text
Interview-Knowledge/
├── README.md
├── CONTRIBUTING.md
├── docs/
│   ├── backend/
│   ├── computer-network/
│   ├── cpp/
│   ├── data-structure-algorithm/
│   ├── database/
│   └── operating-system/
├── interview-experience/
│   ├── bytedance/
│   ├── huawei/
│   └── wechat/
├── code/
│   └── cpp/
│       └── sorting/
└── assets/
    └── pdf/
```

## Knowledge Map

| 模块 | 内容 | 文档 |
| --- | --- | --- |
| 计算机网络 | TCP/UDP、三次握手、四次挥手、可靠传输、拥塞控制等 | [network-interview-notes.md](docs/computer-network/network-interview-notes.md) |
| 操作系统 | 进程线程、内存管理、IO、Linux 基础等 | [os-interview-notes.md](docs/operating-system/os-interview-notes.md) |
| Linux | Linux 常见命令与系统知识补充 | [linux-notes.md](docs/operating-system/linux-notes.md) |
| 数据库 | 索引、事务、锁、MySQL、Redis 等 | [database-notes.md](docs/database/database-notes.md) |
| C++ | STL、内存模型、面向对象、虚函数、多态等 | [cpp-interview-notes.md](docs/cpp/cpp-interview-notes.md) |
| 后端基础 | 后端工程、服务端常见问题与知识点 | [backend-notes.md](docs/backend/backend-notes.md) |
| 数据结构与算法 | 树、哈希、排序、Top K、BFS、B/B+ 树等 | [dsa-interview-notes.md](docs/data-structure-algorithm/dsa-interview-notes.md) |
| LeetCode | 刷题记录与补充 | [leetcode-notes.md](docs/data-structure-algorithm/leetcode-notes.md) |

## Interview Experience

| 公司/方向 | 文档 |
| --- | --- |
| 字节跳动/飞书一面 | [feishu-first-round.md](interview-experience/bytedance/feishu-first-round.md) |
| 字节跳动 0817 | [bytedance-0817.md](interview-experience/bytedance/bytedance-0817.md) |
| 华为一面 | [first-round.md](interview-experience/huawei/first-round.md) |
| 华为二面 | [second-round.md](interview-experience/huawei/second-round.md) |
| 微信面委会 1 | [interview-committee-1.md](interview-experience/wechat/interview-committee-1.md) |
| 微信面委会 2 | [interview-committee-2.md](interview-experience/wechat/interview-committee-2.md) |

## Code Examples

| 类型 | 文件 |
| --- | --- |
| 归并排序 | [merge_sort.cpp](code/cpp/sorting/merge_sort.cpp) |
| 归并相关实现 | [merge.cpp](code/cpp/sorting/merge.cpp) |
| 快速排序 | [quick_sort.cpp](code/cpp/sorting/quick_sort.cpp) |

## Suggested Learning Path

1. 先复习计算机网络、操作系统、数据库三大基础模块。
2. 再补充 C++、数据结构与算法、后端工程知识。
3. 用代码模板巩固排序、链表、树、哈希、堆等高频实现。
4. 最后阅读真实面经，按公司和岗位方向做针对性复盘。

## Notes Convention

- 每篇笔记尽量保持一个明确主题。
- 标题层级从 `#` 开始，避免跳级。
- 高频面试题建议使用“问题 + 要点 + 延伸”的结构。
- 外部资料链接保留原始来源，方便二次验证。
- 代码示例放在 `code/` 目录，笔记正文只保留核心片段或链接。

## Assets

PDF、图片等非 Markdown 资料统一放在 `assets/` 下。

- [linux-knowledge-5.6.pdf](assets/pdf/linux-knowledge-5.6.pdf)

