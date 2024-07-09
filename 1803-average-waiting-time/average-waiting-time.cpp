class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int totalTime = customers[0][0];
        cout << totalTime << endl;
        int timeTaken = 0;
        int counter = 0;
        double avgTime = 0.0;
        int FinishingTime = 0, var2 = 0, var3 = 0;
        for (int i = 0; i < customers.size(); i++) {
            for (int j = 0; j < customers[i].size(); j++) {
                if (j == 1) {
                    if (customers[i][j - 1] > totalTime) {
                        FinishingTime = customers[i][j - 1] + customers[i][j];
                        var3=FinishingTime-customers[i][j-1];
                        totalTime = FinishingTime;
                        avgTime+=var3;
                    } else {
                        FinishingTime = totalTime + customers[i][j];
                        var3 = FinishingTime - customers[i][j - 1];
                        totalTime = FinishingTime;
                        avgTime += var3;
                    }
                    cout << FinishingTime << "\t" << var3 << "\t" << totalTime
                         << "\t" << avgTime << "\t" << endl;
                }
                // cout<<customers[i][j]<<"\t";
            }
            counter = i + 1;
        }
        cout << avgTime << "\t" << counter;
        avgTime = avgTime / counter;
        // cout<<totalTime<<"\t"<<timeTaken<<"\t"<<avgTime;
        return avgTime;
    }
};