# import matplotlib.pyplot as plt
# import numpy as np

# def generate_star_points(num_points, outer_radius, inner_radius):
#     """Генерация точек звезды (внешние и внутренние)"""
#     points = []
#     for i in range(num_points):
#         angle = i * 2 * np.pi / num_points
#         # Внешние точки (на внешнем радиусе)
#         outer_x = outer_radius * np.cos(angle)
#         outer_y = outer_radius * np.sin(angle)
#         points.append((outer_x, outer_y))
        
#         # Внутренние точки (на внутреннем радиусе)
#         inner_x = inner_radius * np.cos(angle + np.pi / num_points)  # сдвиг для внутренних точек
#         inner_y = inner_radius * np.sin(angle + np.pi / num_points)
#         points.append((inner_x, inner_y))
    
#     return points

# def plot_star_trajectory(num_points, outer_radius, inner_radius):
#     """Рисует траекторию движения робота по звезде с чередующимися вершинами"""
#     # Генерация точек звезды
#     points = generate_star_points(num_points, outer_radius, inner_radius)

#     # Массив для хранения траектории
#     trajectory_x = []
#     trajectory_y = []

#     # Симуляция движения по звезде, соединение внешних и внутренних точек
#     for i in range(num_points):
#         outer_point = points[2 * i]  # Внешняя точка
#         inner_point = points[2 * i + 1]  # Внутренняя точка

#         # Добавление точки на траекторию
#         trajectory_x.append(outer_point[0])
#         trajectory_y.append(outer_point[1])

#         trajectory_x.append(inner_point[0])
#         trajectory_y.append(inner_point[1])

#     # Построение графика
#     plt.figure(figsize=(6, 6))
#     plt.plot(trajectory_x, trajectory_y, marker='o', linestyle='-', color='b', label="Траектория")
#     plt.scatter(*zip(*points), color='r', label="Вершины звезды")  # Точки звезды
#     plt.gca().set_aspect('equal', adjustable='box')  # Сохраняем соотношение сторон
#     plt.title("Траектория движения по звезде")
#     plt.xlabel("X")
#     plt.ylabel("Y")
#     plt.grid(True)
#     plt.legend()
#     plt.show()

# # Параметры
# num_points = 5  # количество внешних точек звезды
# outer_radius = 1.0  # внешний радиус
# inner_radius = 0.4  # внутренний радиус

# # Построение траектории
# plot_star_trajectory(num_points, outer_radius, inner_radius)

import matplotlib.pyplot as plt
import numpy as np

# Функция для генерации точек эллипса
def calculate_ellipse_points(major, minor, points):
    """Генерация точек эллипса с учётом смещения, чтобы пройти через (0, 0)."""
    ellipse_points = []
    for i in range(points):
        angle = 2 * np.pi * i / points
        x = major * np.cos(angle)  # Центр остается в (0, 0)
        y = minor * np.sin(angle)
        ellipse_points.append((x, y))
    return ellipse_points

# Параметры эллипса
major = 7.0  # Большая полуось
minor = 1.0    # Малая полуось
points = 100    # Количество точек для аппроксимации эллипса

# Генерация точек эллипса
ellipse_points = calculate_ellipse_points(major, minor, points)

# Разделение точек по осям x и y
x_vals, y_vals = zip(*ellipse_points)

# Построение графика
plt.figure(figsize=(6, 6))
plt.plot(x_vals, y_vals, label="Траектория эллипса")
plt.title('Траектория эллипса')
plt.xlabel('X')
plt.ylabel('Y')
plt.axis('equal')  # Сохранение пропорций осей
plt.grid(True)
plt.legend()
plt.show()

