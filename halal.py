import pygame.camera
import cv2


pygame.camera.init()
camlist=pygame.camera.list_cameras()
if (camlist):
    cam=pygame.camera.Camera(camlist[1],(640,480))
    cam.start()
    image=cam.get_image()
    cv2.imshow("Halal_Pig",image)


print (camlist)
