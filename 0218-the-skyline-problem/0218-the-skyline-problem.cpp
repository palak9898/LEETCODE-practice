class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
    vector<pair<int, int>> events;  // Stores {x, height} events
    multiset<int> heights = {0};    // Max heap using multiset
    vector<vector<int>> result;

    // Convert buildings into events
    for (auto& b : buildings) {
        events.push_back({b[0], -b[2]}); // Start event (negative height for max heap)
        events.push_back({b[1], b[2]});  // End event (positive height)
    }

    // Sort events
    sort(events.begin(), events.end());

    int prevMaxHeight = 0;  // Previous max height

    // Process events
    for (auto& [x, h] : events) {
        if (h < 0) {
            heights.insert(-h); // Add building height
        } else {
            heights.erase(heights.find(h)); // Remove building height
        }

        int currMaxHeight = *heights.rbegin(); // Get max height from set

        if (currMaxHeight != prevMaxHeight) {
            result.push_back({x, currMaxHeight});
            prevMaxHeight = currMaxHeight;
        }
    }

    return result;
}
};