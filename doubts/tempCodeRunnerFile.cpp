cout<<"enter the distance :"<<endl;
    cin>>d;	
    ini_bill=obj.calc_bill(d);
    cout<<"enter the age :"<<endl;
    cin>>a;
    dis_bill=obj.discount(a,ini_bill);
    cout<<"enter your name :";
    cin>>s;
    cout<<"enter your gender :";
    cin>>gen;
    status=obj.stats(a);
    birth=obj.berth(status);