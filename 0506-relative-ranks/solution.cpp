class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
    vector<pair<int, int>> score_indices(score.size());

    // Store scores and their indices in a vector
    for (int i = 0; i < score.size(); i++) {
        score_indices[i] = make_pair(score[i], i);
    }

    // Sort the vector based on scores in descending order
    sort(score_indices.rbegin(), score_indices.rend());
        

    vector<string>ranks(score.size());

    // Assign ranks based on the sorted vector
    for (int i = 0; i < score.size(); i++) {
        if (i == 0) {
            ranks[score_indices[i].second] = "Gold Medal";
        } else if (i == 1) {
            ranks[score_indices[i].second] = "Silver Medal";
        } else if (i == 2) {
            ranks[score_indices[i].second] = "Bronze Medal";
        } else {
            ranks[score_indices[i].second] = to_string(i + 1);
        }
    }

    return ranks;
}
};
