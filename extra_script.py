Import('env')
from os.path import join, realpath

env.Append(
    LIBPATH=[realpath(join('.', env.get('BOARD_MCU')))],
    LIBS=['Module']
)
