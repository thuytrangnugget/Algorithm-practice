int migratoryBirds(int[] list_of_birds) {
    Map<Integer, Integer> mp = new HashMap<>();
    int n = list_of_birds.length;
    int[] frequency = new int[n];
    int indexMax = 0;
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
            indexMax = j + 1;
        }
        if (frequency[indexMax] = frequency[i]) {
            if
        }
    }
    return list_of_birds[indexMax];


