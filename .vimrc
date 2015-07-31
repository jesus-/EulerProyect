syntax on
color jellybeans
set nu
filetype plugin indent on
set tabstop=4
set shiftwidth=4
set noexpandtab
set clipboard=unnamed

"when searching start looking before press enter
set incsearch
"higlight all the words
set hlsearch

"map double esc to save
map <Esc><Esc> :w<CR>
"map bn and bp as control h and l
map <C-h> :bp<CR>
map <C-l> :bn<CR>
"map F8 to compile and execute in c
map <F8> :w <CR> :!gcc % -o %< && ./%< <CR>

"arline vim, for install 
"do > git clone git@github.com:bling/vim-airline.git
" cp -R vim-airline/* ~/.vim
"make it active
set laststatus=2
"activate the tab line
let g:airline#extensions#tabline#enabled = 1
