# This file is auto generated
# Do not modify this file

Import('env')
from os.path import realpath

platform = env.get('PIOPLATFORM')
board = env.get('BOARD_MCU')

env.Append(
  LIBPATH=[realpath(board)],
  LIBS=['Module']
)
