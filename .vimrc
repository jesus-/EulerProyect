syntax on
se nu
highlight cType ctermfg=white
set cindent
set smartindent
set tabstop=4
set shiftwidth=4
set expandtab
set hlsearch
map <Esc><Esc> :w<CR>
map <F8> :w <CR> :!gcc % -o %< -lgmp && ./%< <CR>
colors jellybeans
