# Install wsl2 and Export the disk
```
wsl.exe --update
wsl --set-default-version 2
wsl --install -d Ubuntu
wsl --export Ubuntu E:\wsl\ubuntu.tar
wsl --unregister Ubuntu
wsl --import Ubuntu E:\wsl\ E:\wsl\ubuntu.tar --version 2
wsl --shutdown
wsl -l -v
Ubuntu.exe config --default-user xxx
```