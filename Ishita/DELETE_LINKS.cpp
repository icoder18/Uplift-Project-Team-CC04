delete(String a[],string b,int n)
{
	int x;
	for(i=0;i<n;i++){
		if(b==a[i]){
			x=i;
			break;
			}
		}
	for(i=n;i<x;i++){
		a[i]=a[i+1];
	}
    return a;
}
delete_student links()
{
	//delete LINKEDIN
	cout<<"Enter the linkedin link to be deleted"<<endl;
	String b1;
	cin>>b1;
	delete(a1[],b1,n);
	//delete PORTFOLIO
	cout<<"Enter the portfolio link to be deleted"<<endl;
	String b2;
	cin>>b2;
	delete(a2[],b2,n);
	//delete ACHIEVEMENTS
	cout<<"Enter the portfolio link to be deleted"<<endl;
	String b3;
	cin>>b3;
	delete(a3[],b3,n);
	//delete PAPER PUBLISHED
	cout<<"Enter the portfolio link to be deleted"<<endl;
	String b4;
	cin>>b4;
	delete(a4[],b4,n);
	
}
