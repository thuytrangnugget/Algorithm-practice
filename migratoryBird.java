
int migratoryBirds(int[] list_of_birds) {
    Map<Integer, Integer> mp = new HashMap<>();
    int n = list_of_birds.length;
    int[] frequency = new int[n];
    int max = 0;

    for (int i = 0; i < n; i++) {
        if (mp.containsKey(list_of_birds[i])) {
            mp.put(list_of_birds[i], mp.get(list_of_birds[i]) + 1);
        }
        else {
            mp.put(list_of_birds[i], 1);
        }
        frequency[i] = mp.get(list_of_birds[i]);
    }

    for (int j = 0; j < n - 1; j++) {
        if (frequency[j] < frequency[j + 1]) {
            max = frequency[j + 1];
        }
    }

    int[] suitableBirds;
    for (int j = 0; j < n ; j++) {   
        if (frequency[j] == max) {
            suitableBirds[j] = list_of_birds[j];
        }
    }

    int birdWeNeed = suitableBirds[0];
    for (int k = 0; k < suitableBirds.length; k++) {
        if (suitableBirds[k] < birdWeNeed) {
            birdWeNeed = suitableBirds[k];
        }
    }

    return birdWeNeed;

}
