/*
1. more declarative - vector<int> name {42, 42, 42, 42, 42, 42, 42, 42, 42, 42}
2. ^ - vector<int> name = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42}
3. vector<int> name (10, 42) - easiest and best way for our use case;
4. vector<int> name (10) - then loop and assign each index individually
5. vector<int) name; then loop and push_back the value.
*/