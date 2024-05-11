#include "mg.h"

int main()
{
    teams team_home(0);
    teams team_away(1);
    float home_final;
    float away_final;
    float percent;
    int diff = team_home.league_point - team_away.league_point;

    team_home.init_var();
    team_away.init_var();
    percent = (diff / 10000) * 2.4;
    home_final = team_home.totalpt * (100 + percent) / 100;
    away_final = team_away.totalpt * (100 + percent) / 100;
    diff = home_final - away_final;
    if (diff > 0)
        cout << "Possibility of winning " << diff << " for " << team_home.team_name << endl;
    else
        cout << "Possibility of winning " << diff * -1 << " for " << team_away.team_name << endl;
    return 1;
}