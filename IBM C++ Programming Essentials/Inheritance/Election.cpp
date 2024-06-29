#include <iostream>
using namespace std;

class Election
{
protected:
    long int totalPeople;
    long int noOfWomen;
    long int noOfMen;

public:
    void setTotalPeople(long int totPeople)
    {
        this->totalPeople = totPeople;
    }
    void setNoOfWomen(long int womenCount)
    {
        this->noOfWomen = womenCount;
    }
    void setNoOfMen(long int menCount)
    {
        this->noOfMen = menCount;
    }
    long int getTotalPeople()
    {
        return this->totalPeople;
    }
    long int getNoOfWomen()
    {
        return this->noOfWomen;
    }
    long int getNoOfMen()
    {
        return this->noOfMen;
    }
};

class GeneralElection : public Election
{
public:
    double calcVotePercentage(int partyA, int partyB)
    {
        double votePercentage = ((partyA + partyB) * 100.0) / totalPeople;
        return votePercentage;
    }
    double calcWomenVotePercentage(int womenVotes)
    {
        double womenVotePercentage = (womenVotes * 100.0) / noOfWomen;
        return womenVotePercentage;
    }
    double calcMenVotePercentage(int menVotes)
    {
        double menVotePercentage = (menVotes * 100.0) / noOfMen;
        return menVotePercentage;
    }
};

// main function
int main()
{
    GeneralElection election;

    long int totalPeople, noOfWomen, noOfMen;
    int partyA, partyB, womenVotes, menVotes;
    double votePer, womenVotePer, menVotePer;
    cout << "Enter the number of People:";
    cin >> totalPeople;
    cout << "Enter the number of women:";
    cin >> noOfWomen;
    cout << "Enter the number of men:";
    cin >> noOfMen;
    cout << "Enter the total votes by Party A:";
    cin >> partyA;
    cout << "Enter the total votes by Party B:";
    cin >> partyB;
    cout << "Enter the number of women votes:";
    cin >> womenVotes;
    cout << "Enter the number of men votes:";
    cin >> menVotes;

    election.setTotalPeople(totalPeople);
    election.setNoOfWomen(noOfWomen);
    election.setNoOfMen(noOfMen);

    double votePercentage = election.calcVotePercentage(partyA, partyB);
    double womenVotePercentage = election.calcWomenVotePercentage(womenVotes);
    double menVotePercentage = election.calcMenVotePercentage(menVotes);

    cout << "\nVote Percentage: " << static_cast<int>(votePercentage) << endl;
    cout << "Women Vote Percentage: " << static_cast<int>(womenVotePercentage) << endl;
    cout << "Men Vote Percentage: " << static_cast<int>(menVotePercentage) << endl;

    return 0;
}