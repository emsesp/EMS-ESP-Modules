# This file is auto generated. Do not modify.

Import('env')
from os.path import realpath

board = env.get('BOARD_MCU')

if board:
  env.Append(
    LIBPATH=[realpath(board)],
    LIBS=['Module']
  )
