package main

import "fmt"

func findWords(board []][]byte, words []string) []string {
	visited := make([][]bool, len(board))
	for i := range visited {
			visited[i] = make([]bool, len(board[i]))
	}
	t := &Trie{
			next: map[byte]*Trie{},
	}
	
	for i := range board {
			for j := range board[i] {
					insertRec(i, j, board, visited, 0, t)
			}
	}
	
	var res []string
	for _, w := range words {
			if t.search(w) {
					res = append(res, w)
			}
	}
	
	return res
}

func insertRec(i, j int, board [][]byte, visited [][]bool, length int, t *Trie) {
	if length == 10 {
			return
	}
	if i < 0 || i >= len(board) || j < 0 || j >= len(board[i]) {
			return
	}
	if visited[i][j] {
			return
	}
	nt := t.add(board[i][j])
	
	visited[i][j] = true
	defer func() {visited[i][j] = false}()
	
	insertRec(i+1, j, board, visited, length+1, nt)
	insertRec(i-1, j, board, visited, length+1, nt)
	insertRec(i, j+1, board, visited, length+1, nt)
	insertRec(i, j-1, board, visited, length+1, nt)
}

type Trie struct {
	next map[byte]*Trie
}

func (t *Trie) add(b byte) *Trie {
	if nt, ok := t.next[b]; ok {
			return nt
	}
	nt := &Trie{
			next: map[byte]*Trie{},
	}
	t.next[b] = nt
	return nt
}

func (t *Trie) search(w string) bool {
	if len(w) == 0 {
			return true
	}
	if nt, ok := t.next[w[0]]; ok {
			return nt.search(w[1:])
	}
	return false
}

func main() {
	fmt.Println([][]byte{'o','a','a','n'},{'e','t','a','e'},{'i','h','k','r'},{'i','f','l','v'}, []string{"oath","pea","eat","rain"})
}
