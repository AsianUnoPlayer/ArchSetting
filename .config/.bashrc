#
# ~/.bashrc
#

# If not running interactively, don't do anything
[[ $- != *i* ]] && return

alias ls='ls --color=auto'
alias music_time="pw-loopback -m '[[FL FR]]' --playback-props='[media.class=Audio/Source]'"
PATH=$PATH:$HOME/.local/bin
#PS1='[\u@\h \W]\$ '    default thingy
export PS1="[\[\e[36;40m\]\u\[\e[m\]\[\e[36;40m\]@\[\e[m\]\[\e[36;40m\]\h\[\e[m\] \[\e[31;40m\]\w\[\e[m\]]\\$ "

#lol wtf is this?
[ -f /opt/miniconda3/etc/profile.d/conda.sh ] && source /opt/miniconda3/etc/profile.d/conda.sh

export PATH=$PATH:/opt/miniconda3/conda
