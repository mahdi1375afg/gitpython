# Basics

- [Basic workflow](https://www.youtube.com/watch?v=3a2x1iJFJWc)
- [gitflow](https://www.youtube.com/watch?v=1SXpE08hvGs)
- [How to work in Team](https://blog.hipolabs.com/how-to-work-in-a-team-version-control-and-git-923dfec2ac3b)

> [!important]
> - [How to git as team](https://www.robinwieruch.de/git-team-workflow)

- [BitBucket merge/rebase](https://www.atlassian.com/de/git/tutorials/merging-vs-rebasing)
- [Git sync](https://www.atlassian.com/de/git/tutorials/syncing)
- [git-team-workflow-cheatsheet](https://jameschambers.co.uk/git-team-workflow-cheatsheet)

> [!important]
> - [Branching and merging](https://git-scm.com/book/en/v2/Git-Branching-Basic-Branching-and-Merging)

# Config
## First-Time Git Setup
```shell
# Identity
git config --global user.name "Novan@_"
git config --global user.email johndoe@example.com
# git config --global user.email ******users.noreply.github.com
# Editor(see "git config core.editor commands")
git config --global core.editor "nano -w"
# Make main default branch for 'git init'
git config --global init.defaultBranch main 
# Checking Your Settings
git config --list
# Global gitignore
git config --global core.excludesfile ~/.global-gitignore
```
# Man
* Delete repo local
```shell
cd /path/to/repo/
rm -rf .git
```

[[git config core.editor commands]]

# [[git-Create new repo from local directory]]

# [[GitHub Pages]]
