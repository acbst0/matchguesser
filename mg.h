#ifndef MG_H
# define MG_H
# include <iostream>

using namespace std;

class teams
{
private:
    //Attack
    float   av_goal_d_xG;
    float   av_goal_d_third;
    float   pass_q_d_posses;
    float   av_sht_d_third;
    float   xG_d_xA;
    float   third_d_passq;
    //Defance
    float   xG_d_avgoal_x;
    float   third_d_shoot_x;
    float   xA_d_xG_x;
    float   passq_d_third_x;
    //Average
    float   attpt;
    float   defpt;
public:
    float   totalpt;
    string  team_name;
    int win;
    int draw;
    int lose;
    int total_match;
    float   av_goal;
    float   av_shoot;
    float   third_area;
    double  xG;
    double  xA;
    double  pass_q;
    double  posses;
    float   av_goal_x;
    float   av_shoot_x;
    float   third_area_x;
    double  xG_x;
    double  xA_x;
    double  pass_q_x;
    int     league_point;
    bool    home_away;
    void teamsinit(bool i)
    {
        home_away = i;
        if (home_away == 0)
            cout << "Name of home team :" << endl;
        else
            cout << "Name of away team :" << endl;
        cin >> team_name;
        cout << team_name << " 's wins :" << endl;
        cin >> win;
        cout << team_name << " 's draws :" << endl;
        cin >> draw;
        cout << team_name << " 's loses :" << endl;
        cin >> lose;
        total_match = win + draw + lose;
        cout << team_name << " 's average goal :" << endl;
        cin >> av_goal;
        cout << team_name << " 's average shot :" << endl;
        cin >> av_shoot;
        cout << team_name << " 's average of entering the opponent's penalty area :" << endl;
        cin >> third_area;
        cout << team_name << " 's xG :" << endl;
        cin >> xG;
        cout << team_name << " 's xA :" << endl;
        cin >> xA;
        cout << team_name << " 's pass quality percent :" << endl;
        cin >> pass_q;
        cout << team_name << " 's possession percent :" << endl;
        cin >> posses;
        cout << team_name << " 's average goals conceded :" << endl;
        cin >> av_goal_x;
        cout << team_name << " 's average opponen's shots :" << endl;
        cin >> av_shoot_x;
        cout << team_name << "'s average of entering the opponent's penalty area for opponent :" << endl;
        cin >> third_area_x;
        cout << team_name << " 's average of opponent's xG :" << endl;
        cin >> xG_x;
        cout << team_name << " 's average of opponent's xA :" << endl;
        cin >> xA_x;
        cout << team_name << " 's opponent's pass accuracy :" << endl;
        cin >> pass_q_x;
        cout << team_name << " 's league's UEFA points :" << endl;
        cin >> league_point;
    }
    void    init_var()
    {
        //Attack
        av_goal_d_xG = av_goal / xG;
        av_goal_d_third = (av_goal / third_area) * 10;
        pass_q_d_posses = pass_q / posses;
        av_sht_d_third = av_shoot / third_area;
        xG_d_xA = xG / xA;
        third_d_passq = third_area * 5 / pass_q;
        attpt = av_goal_d_xG + av_goal_d_third + pass_q_d_posses + av_sht_d_third + xG_d_xA + third_d_passq;
        //Defend
        xG_d_avgoal_x = xG_x / av_goal_x;
        third_d_shoot_x = third_area_x / av_shoot_x;
        xA_d_xG_x = xA_x / xG_x;
        passq_d_third_x = pass_q_x / (third_area_x * 5);
        defpt = xG_d_avgoal_x + third_d_shoot_x + xA_d_xG_x + passq_d_third_x;
        //Total
        totalpt = attpt + defpt;
    }
};

#endif