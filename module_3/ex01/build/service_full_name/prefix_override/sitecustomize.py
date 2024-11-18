import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/yuichi-katagiri/Subjects/Robotics/ex01/install/service_full_name'
