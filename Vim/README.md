# Was man noch tun muss....
JS Node installieren:
```
curl -sL https://deb.nodesource.com/setup_18.x | sudo -E bash -
sudo apt-get install nodejs -y
cd .vim/bundle/coc.nvim/
yarn install
yarn build
```
...und dann in vim
```
:CocInstall coc-tsserver coc-json coc-pyright coc-clangd
```
