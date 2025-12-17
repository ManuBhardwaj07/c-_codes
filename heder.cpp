#ifndef CAMPUS_PULSE_H
#define CAMPUS_PULSE_H

#include <string>
#include <vector>

using std::string;
using std::vector;

/*
 * Enum representing a player's morale state
 */
enum class MoraleState {
    CONFIDENT,
    NEUTRAL,
    PRESSURED
};

/*
 * Enum representing campus atmosphere level
 */
enum class CampusEnergyLevel {
    LOW,
    MEDIUM,
    HIGH
};

/*
 * Player class
 * Represents an individual athlete and their morale state
 */
class Player {
private:
    string name;
    int jerseyNumber;
    MoraleState morale;
    int performanceRating;
    int fatigueLevel;

public:
    Player(const string& name, int jerseyNumber);

    // Getters
    string getName() const;
    int getJerseyNumber() const;
    MoraleState getMorale() const;
    int getPerformanceRating() const;

    // Setters
    void setMorale(MoraleState newMorale);
    void adjustPerformance(int delta);
    void adjustFatigue(int delta);

    // Gameplay-related behavior
    void updateMoraleAfterGame(bool win, bool rivalryGame);
};

/*
 * Team class
 * Represents a college football team and its roster
 */
class Team {
private:
    string schoolName;
    vector<Player> roster;
    int teamChemistry;
    CampusEnergyLevel campusEnergy;

public:
    Team(const string& schoolName);

    // Roster management
    void addPlayer(const Player& player);
    vector<Player>& getRoster();

    // Campus pulse management
    int getTeamChemistry() const;
    CampusEnergyLevel getCampusEnergy() const;
    void updateTeamChemistry(int delta);
    void updateCampusEnergy(CampusEnergyLevel level);

    // Game outcome effects
    void processGameResult(bool win, bool rivalryGame);
};

/*
 * Rivalry class
 * Represents a rivalry between two teams
 */
class Rivalry {
private:
    string teamA;
    string teamB;
    int intensityLevel;

public:
    Rivalry(const string& teamA, const string& teamB, int intensityLevel);

    // Getters
    int getIntensityLevel() const;
    bool isRivalryGame(const string& school1, const string& school2) const;
};

/*
 * CampusPulseManager class
 * Central system managing morale and campus-wide effects
 */
class CampusPulseManager {
private:
    Team* team;
    int mediaPressure;

public:
    CampusPulseManager(Team* team);

    // Weekly management actions
    void holdTeamMeeting();
    void adjustPracticeIntensity(int level);
    void respondToMedia(bool positiveResponse);

    // Evaluation
    void evaluateWeeklyPulse();
};

#endif // CAMPUS_PULSE_H
