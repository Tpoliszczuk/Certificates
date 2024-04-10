

def add_time(start,duration,day='blank'):
    dayofweek={
        'monday':1,
        "tuesday":2,
        'wednesday':3,
        'thursday':4,
        'friday':5,
        'saturday':6,
        'sunday':7
    }
    s = start.split(':')
    sh=int(s[0])
    s=s[1].split(' ')
    sm=int(s[0])
    st=s[1]
    d=duration.split(":")
    dh=int(d[0])
    dm=int(d[1])
    day=str.lower(day)
    if st=='PM':
        sh+=12
    new_m=sm+dm
    new_h=sh+dh+int(new_m/60)
    new_m=new_m%60
    adDays=int(new_h/24)
    new_h=int(new_h%24)


    if new_h==0:
        new_h=12
    if (new_h == 12 and st == 'AM'):
        odp = str(new_h) + ':0' + str(new_m) + ' PM'
    elif (new_h == 12 and st == 'PM'):
        odp = str(new_h) + ':0' + str(new_m) + ' AM'
    elif new_h>12:
        if new_m<10:
            odp = str(new_h - 12) + ':0' + str(new_m) + ' PM'
        else:
            odp = str(new_h-12) + ':' + str(new_m)+' PM'
    else:
        if new_m<10:
            odp = str(new_h) + ':0' + str(new_m) + ' AM'
        else:
            odp=str(new_h)+':'+str(new_m)+' AM'


    if day == 'blank':
        pass
    else:
        today=adDays%7
        if today>7:
            today+=dayofweek[day]-7
        else:
            today+=dayofweek[day]
        reversedict={n:day for day,n in dayofweek.items()}
        if today>7:
            today=today%7
        else:
            pass
        odp+=', '+reversedict[today].capitalize()


    if adDays==1:
        odp+=' (next day)'
    elif adDays>1:
        odp+=f' ({adDays} days later)'
    else:
        pass



    return odp

print(add_time('11:59 AM', '0:02', 'tuesday') )