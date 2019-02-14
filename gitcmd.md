## **git命令行使用说明**

[参考教程](https://www.linuxidc.com/Linux/2018-05/152611.htm)

#### 安装 Ubuntu

在命令行输入：
```
sudo apt install git
```

配置用户名/邮箱/保存密码：
```
git config --global user.name "xxx"
git config --global user.email xxx@git.com
git config --global credential.helper store
```
查看配置文件中添加了刚刚配置的用户名和邮箱：
```
cat .gitconfig
````

添加SSH keys：
```
ssh-keygen -t rsa -C "xxx@git.com"
```
查看ssh key：
```
cat ~/.ssh/id_rsa.pub
```
复制sshkey到GitHub网站上添加进去

测试连接：
```
ssh -T git@github.com
```

#### 使用
创建版本库：
```
git init
```

克隆：
```
git clone repository_url
```

查看当前状态：
```
git status
```

添加文件及修改：
```
git add .
```

提交：
```
git commit -m "message"
```
**Notice：**修改文件之后需要先add，再commit


pull:
```
git pull
```

push:
```
git push origin master
```

删除文件：
```
git rm [file]
git commit
```

show the file differences which are not yet staged:
```
git diff
```

> #### --*git branch*

list all local branches in current repository:
```
git branch
```

create new branch:
```
git branch [branch name]
```

delete the feature branch:
```
git branch -d [branch name]
```

> #### --*git checkout*

switch from one branch to another:
```
git checkout [branch name]
```

creates a new branch and also switches to it:
```
git checkout -b [branch name]
```

> #### --*git merge*

merges the specified branch's history into the curent branch:
```
git merge [branch name]
```
在开发分支上修改代码之后之后需要先切换到base branch上使用merge命令进行合并
