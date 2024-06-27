# This file is auto generated
# Do not modify this file

Import('env')
from os.path import realpath

platform = env.get('PIOPLATFORM')

env.Append(
  LIBPATH=[realpath(platform)],
  LIBS=['Module']
)
