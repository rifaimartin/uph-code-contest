import pygame
from pygame.locals import *
import sys
import random

# Define constants
BLACK = (0, 0, 0)
WINDOW_WIDTH = 640
WINDOW_HEIGHT = 480
FRAMES_PER_SECOND = 30
BALL_WIDTH_HEIGHT = 100
MAX_WIDTH = WINDOW_WIDTH - BALL_WIDTH_HEIGHT
MAX_HEIGHT = WINDOW_HEIGHT - BALL_WIDTH_HEIGHT

# Initialize the world
pygame.init()
window = pygame.display.set_mode((WINDOW_WIDTH, WINDOW_HEIGHT))
clock = pygame.time.Clock()

# Load assets: image(s), sound(s), etc.
ballImage = pygame.image.load('C:/Users/USER/Documents/UPH-CODE/SMT-3/pyGame/images/johan.png')

# Initialize variables
ballX = random.randrange(MAX_WIDTH)
ballY = random.randrange(MAX_HEIGHT)
ballRect = pygame.Rect(ballX, ballY, BALL_WIDTH_HEIGHT, BALL_WIDTH_HEIGHT)

# Loop forever
while True:
    # Check for and handle events
    for event in pygame.event.get():
        # Clicked the close button? Quit pygame and end the program
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        # See if user clicked
        if event.type == pygame.MOUSEBUTTONUP:
            # Check if the click was in the rect of the ball
            # If so, choose a random new location
            if ballRect.collidepoint(event.pos):
                ballX = random.randrange(MAX_WIDTH)
                ballY = random.randrange(MAX_HEIGHT)
                ballRect = pygame.Rect(ballX, ballY, BALL_WIDTH_HEIGHT, BALL_WIDTH_HEIGHT)

    # Do any "per frame" actions

    # Clear the window
    window.fill(BLACK)

    # Draw all window elements
    # Draw the ball at the randomized location
    window.blit(ballImage, (ballX, ballY))

    # Update the window
    pygame.display.update()

    # Slow things down a bit
    clock.tick(FRAMES_PER_SECOND)