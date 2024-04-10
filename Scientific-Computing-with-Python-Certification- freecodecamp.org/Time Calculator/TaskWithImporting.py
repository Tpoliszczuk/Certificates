import datetime

def add_time(start,duration,day=None):
    s = datetime.datetime.strptime(start, '%I:%M %p').time()
    d=duration.split(":")
    dh=int(d[0])
    dm=int(d[1])
    dayS=str.lower(day)

    if dayS==None:
        dd=1
    elif dayS=="monday":
        dd = 1
    elif dayS == "tuesday":
        dd = 2
    elif dayS == "wednesday":
        dd = 3
    elif dayS == "thursday":
        dd = 4
    elif dayS=='friday':
        dd=5
    elif dayS=='saturday':
        dd=6
    else:
        dd = 7

    #i know its Monday
    dzisiaj=datetime.datetime(year=2024,month=1,day=dd,hour=s.hour,minute=s.minute)
    new_time=dzisiaj+datetime.timedelta(hours=dh,minutes=dm)

    delta=datetime.timedelta(days=dd,hours=dh,minutes=dm)
    new_time.weekday()


    if new_time.weekday()==0:
        dayofweek='Monday'
    elif new_time.weekday()==1:
        dayofweek = 'Tuesday'
    elif new_time.weekday() == 2:
        dayofweek = 'Wednesday'
    elif new_time.weekday() == 3:
        dayofweek = 'Thursday'
    elif new_time.weekday() == 4:
        dayofweek = 'Friday'
    elif new_time.weekday()==5:
        dayofweek='Saturday'
    elif new_time.weekday()==6:
        dayofweek='Sunday'
    else:
        dd = 6

    if new_time.day-dzisiaj.day<1:
        delta=''
    elif new_time.day-dzisiaj.day<2:
        delta='(next day)'
    else:
        delta=f"({new_time.day-dzisiaj.day} days later)"

    if dayS=='blank':
        odp=new_time.time().strftime("%I:%M %p")+ ' ' + delta
    else:
        odp = new_time.time().strftime("%I:%M %p").replace('0',' ')   +', '+dayofweek + ' ' + delta


    return print(odp)

add_time('2:59 AM', '24:00', 'saturDay')