import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yuichi-katagiri/Subjects/Robotics/module_5/ex04/install/circle_movement'
