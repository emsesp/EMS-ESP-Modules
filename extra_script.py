# This file is auto generated
# Do not modify this file

Import('env')
from os.path import realpath

if env.get('BOARD_MCU'):
  board = env.get('BOARD_MCU')
else:
  board = env.get('PIOPLATFORM')

env.Append(
  LIBPATH=[realpath(board)],
  LIBS=['ModuleTest1', 'Module', 'ModuleTest2']
)
