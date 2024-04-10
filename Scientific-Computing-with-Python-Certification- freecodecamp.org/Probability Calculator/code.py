import copy
import random

class Hat:
    def __init__(self, **kwargs):
        self.contents = [k for k, v in kwargs.items() for _ in range(v)]

    def draw(self, n):
        n = min(n, len(self.contents))
        drawn = random.sample(self.contents, n)
        for item in drawn:
            self.contents.remove(item)
        return drawn

def experiment(hat, expected_balls, num_balls_drawn, num_experiments):
    match_count = 0

    for _ in range(num_experiments):
        hat_copy = copy.deepcopy(hat)
        drawn = hat_copy.draw(num_balls_drawn)
        drawn_dict = {}

        for ball in drawn:
            drawn_dict[ball] = drawn_dict.get(ball, 0) + 1

        match = True

        for color, count in expected_balls.items():
            if drawn_dict.get(color, 0) < count:
                match = False
                break

        if match:
            match_count += 1

    probability = match_count / num_experiments
    return probability
