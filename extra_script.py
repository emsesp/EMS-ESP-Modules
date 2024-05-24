Import('env')
from os.path import join, realpath

if env.get('BOARD_MCU'):
    board = env.get('BOARD_MCU')
else:
    board = env.get('PIOPLATFORM')

env.Append(
    LIBPATH=[realpath(board)],
    LIBS=['Module','ModuleTest1','ModuleTest2']
)
