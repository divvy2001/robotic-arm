from math import *

# Variables

l1 = 1      # L1
l2 = 1      # L2
x = 1       # X
y = 1       # Y
phi = 1     # Phi

# Equations

theta2 = acos(((x ^ 2) + (y ^ 2) - (l1 ^ 2) - (l2 ^ 2)) / 2 * l1 * l2)

sin_theta_1 = (((l1 + l2 * cos(theta2)) * y) - l2 * sin(theta2) * x) / (x ^ 2 + y ^ 2)
cos_theta_1 = (((l1 + l2 * cos(theta2)) * x) + l2 * sin(theta2) * y) / (x ^ 2 + y ^ 2)
tan_theta_1 = sin(sin_theta_1) / cos(cos_theta_1)

theta1 = atan(tan(tan_theta_1))

theta3 = phi - theta1 - theta2

x = l1 * cos(theta1) + l2 * cos(theta1 + theta2)
y = l1 * sin(theta1) + l2 * sin(theta1 + theta2)