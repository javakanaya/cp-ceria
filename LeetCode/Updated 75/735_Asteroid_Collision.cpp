class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        vector<int> myVector;
        for (int i = 0; i < asteroids.size(); i++)
        {
            if (myVector.empty())
            {
                myVector.push_back(asteroids[i]);
                continue;
            }
            int curr_ast = myVector.back(), new_ast = asteroids[i];
            int flag = 1;
            while (!myVector.empty() && curr_ast > 0 && new_ast < 0)
            {
                if (curr_ast + new_ast > 0)
                {
                    flag = 0;
                    break;
                }
                else if (curr_ast + new_ast == 0)
                {
                    flag = 0;
                    myVector.pop_back();
                    break;
                }
                else
                {
                    myVector.pop_back();
                }

                if (!myVector.empty())
                    curr_ast = myVector.back();
            }
            if (flag)
                myVector.push_back(new_ast);
        }
        return myVector;
    }
};