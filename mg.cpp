#include "mg.h"

void	greeding()
{
	cout << "----------------------------" << endl;
	cout << "  Welcome to Match Guesser  " << endl;
	cout << "----------------------------" << endl;
	cout << "If you have problem to find " << endl;
	cout << "stats of teams you can read " << endl;
	cout << "README file. Also don't for-" << endl;
	cout << "get that these guesses are  " << endl;
	cout << "NOT certain. Do not play bet" << endl;
	cout << "with these guesses. Thanks. " << endl << endl;
}

int main()
{
	greeding();
    teams team_home;
    teams team_away;
	team_home.teamsinit(0);
	team_away.teamsinit(1);
    float home_final;
    float away_final;
    float percent;
    float diff = team_home.league_point - team_away.league_point;

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