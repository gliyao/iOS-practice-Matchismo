#iOS pratice and note

##1. Class Logistics, Overview of iOS, MVC, Objective-C (January 8, 2013)
###MVC
* Model = _What_ your application is (but not _how_ it is displayed)
* Controller = _How_ your `Model` is presented to the user (UI logic)
* View = Your `Controller`'s monions

###Why do not use `==`

    card.contents isEqualToString: self.contents

用isEqualToString可以不用再去注意其型別的問題

##2. Xcode 4 (January 10,2013)

id: 一個point reference任何物件

`option` + `shift` + `k` = ``

同時顯示.h, .m
選擇兩個檔案後按Editor，然後把第二個按Counterparts -> file.m


##4. Fundation, Attributed Strings (January 17, 2013)
###Class Methods

* common way

```objective-c
- (void)setSuit:(NSString *)suit
{
    if([[PlayingCard valiSuits] containsObject:suit]) _suit = suit;
}
```

* another way ...

```objective-c
- (void)setSuit:(NSString *)suit
{
    if([[self class] validSuits] containsObject:suit) _suti = suit;
}
```

如果你subclass有implemented `validSuits` 的時候, 它會執行你override的validSuit方法