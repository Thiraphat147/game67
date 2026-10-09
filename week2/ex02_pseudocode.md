```mermaid


```

BEGIN [ชื่อ ตรวจสอบเกรด]
INPUT score
IF score >=80 THEN

    print("A")
    	 ELSE IF score >=70 THEN

    print("B")

    ELSE IF score >=60 THEN

    print("C")

    ELSE IF score >=50 THEN

    print("D")

    ELSE  IF score <50

    print("F")
     END IF


     OUTPUT A & B & C & D & F

END

BEGIN [ชื่อ หาค่าสูงสุดจาก 2 ตัวเลข]
INPUT A

    INPUT B
    	IF a>b THEN
    		print("A")

    ELSE IF

    print("B")

    END IF
    OUTPUT A & B

END

BEGIN [ชื่อ นับจาก 1 ถึง N]
INPUT N

    INT I

    I = 1
    while i <=N

    print 1

    i = i+1

END while
