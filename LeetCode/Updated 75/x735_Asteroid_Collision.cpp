class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {
        vector<int> myVector;
        myVector.push_back(asteroids[0]);
        for (int i = 1; i < asteroids.size(); i++)
        {
            int curr_ast = myVector.back(), new_ast = asteroids[i];
            int flag = 0;
            while (curr_ast * new_ast < 0)
            {
                flag = 1;
                if (curr_ast < 0)
                {
                    if (curr_ast + new_ast > 0)
                    {
                        myVector.pop_back();
                        myVector.push_back(new_ast);
                    }
                    else if (curr_ast + new_ast == 0)
                    {
                        myVector.pop_back();
                    }
                    else
                        continue;
                }
                else
                {
                    if (curr_ast + new_ast < 0)
                    { 
                        myVector.pop_back();
                        myVector.push_back(new_ast);
                    }
                    else if (curr_ast + new_ast == 0)
                    {
                        myVector.pop_back();
                    }
                    else
                        continue;
                }
            }
            if (!flag)
              myVector.push_back(new_ast);
        }
        return myVector;
    }
};