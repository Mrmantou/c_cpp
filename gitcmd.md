## **git命令行使用说明**

[参考教程](https://www.linuxidc.com/Linux/2018-05/152611.htm)

#### 安装 Ubuntu

在命令行输入：
```
sudo apt install git
```

配置用户名邮箱：
```
git config --global user.name "xxx"
git config --global user.email xxx@git.com
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

添加文件：
```
git add .
```

提交：
```
git commit -m "message"
```
pull:
```
git pull
```

push:
```
git push origin master
```