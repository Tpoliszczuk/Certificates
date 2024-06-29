#include <iostream>
using namespace std;

class Heroine
{
protected:
    double earningsPerDay;

public:
    void setEarningsPerDay(double earnings)
    {
        earningsPerDay = earnings;
    }

    double getEarningsPerDay()
    {
        return earningsPerDay;
    }

    virtual long calcEarnings(int noOfDays)
    {
        return static_cast<long>(earningsPerDay * noOfDays);
    }
};

class MovieHeroine : public Heroine
{
private:
    int daysRun;

public:
    void setDaysRun(int days)
    {
        daysRun = days;
    }

    int getDaysRun()
    {
        return daysRun;
    }

    long calcEarnings(int noOfDays) override
    {
        long totalEarnings = Heroine::calcEarnings(noOfDays);

        if (daysRun > 100)
        {
            totalEarnings += totalEarnings * 10 / 100;
        }
        else if (daysRun > 50)
        {
            totalEarnings += totalEarnings * 5 / 100;
        }

        return totalEarnings;
    }
};

class AdvertisementModel : public Heroine
{
private:
    int rating;

public:
    void setRating(int rate)
    {
        rating = rate;
    }

    int getRating()
    {
        return rating;
    }

    long calcEarnings(int noOfDays) override
    {
        long totalEarnings = Heroine::calcEarnings(noOfDays);

        if (rating > 5)
        {
            totalEarnings += 10000;
        }
        else if (rating > 2)
        {
            totalEarnings += 5000;
        }

        return totalEarnings;
    }
};

int main()
{
    double earningsPerDay;
    int movieDays, movieRunDays, adDays, adRating;

    cout << "Enter the earnings per day: ";
    cin >> earningsPerDay;

    cout << "Enter the number of days for movie: ";
    cin >> movieDays;

    cout << "Enter the number of days movie run: ";
    cin >> movieRunDays;

    cout << "Enter the number of days for advertisement: ";
    cin >> adDays;

    cout << "Enter the Advertisement rating: ";
    cin >> adRating;

    MovieHeroine movieHeroine;
    AdvertisementModel adModel;

    movieHeroine.setEarningsPerDay(earningsPerDay);
    movieHeroine.setDaysRun(movieRunDays);

    adModel.setEarningsPerDay(earningsPerDay);
    adModel.setRating(adRating);

    cout << "Earnings for Movie: " << movieHeroine.calcEarnings(movieDays) << endl;
    cout << "Earnings for Advertisement: " << adModel.calcEarnings(adDays) << endl;

    return 0;
}
