"syntax on
syntax on

"access the clipboard through register *
set clipboard=unnamed

"options tabs, hardtab equivalent 4 spaces
set tabstop=4
set shiftwidth=4
set noexpandtab

"set number lines
set nu

"when searching start looking before press enter
set incsearch
"higlight all the words
set hlsearch

"map double esc to save
map <Esc><Esc> :w<CR>

"map bn and bp as control h and l
map <C-h> :bp<CR>
map <C-l> :bn<CR>

"show buffers and select one
nnoremap gb :ls<CR>:b<Space>

"show regs and insert one
nnoremap gr :reg<CR>:normal "

"map F8 to compile and execute in c
map <F8> :w <CR> :!gcc % -o %< && ./%< <CR>

if filereadable(glob("~/.vim/colors/jellybeans.vim"))
	"set colours
	colors jellybeans
else
	echom "Not colors file, execute:"
	echom "curl https://raw.githubusercontent.com/nanotech/jellybeans.vim/master/colors/jellybeans.vim > ~/.vim/colors/jellybeans.vim"
endif

if filereadable(glob("~/.vim/plugin/airline.vim"))
	"load vimairline
	set laststatus=2
	"activate the tab line
	let g:airline#extensions#tabline#enabled = 1
else
	echom "No arline plugin, execute:"
	echom "git clone git@github.com:bling/vim-airline.git"
	echom "cp -R vim-airline/* ~/.vim/"
	echom "rm -rf vim-arline/"
endif

