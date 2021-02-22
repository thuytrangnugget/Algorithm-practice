
int migratoryBirds(int[] list_of_birds) {
    int result = list_of_birds[0];
    int count = 1;

    for (int i = 0; i < list_of_birds.length - 1; i++) {
        int birdToCheck = list_of_birds[i];
        int countBird = 1;
        if (birdToCheck == -1) {
            continue;
        }

        for (int j = i + 1; j < list_of_birds.length; j++) {
            int birdToCount = list_of_birds[j];
            if (birdToCount == birdToCheck) {
                countBird++;
                list_of_birds[j] = -1;
            }
        }
        
        if (countBird > count || ((countBird == count) && birdToCheck < result)) {
        result = birdToCheck;
        count = countBird;
        }
    }
    return result;
}
