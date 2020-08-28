int exit()
{
return 0;
}

void delete_sdt_deadline()
{
  int status;
  	char fname[20];
    cout<<"Enter 1 to delete tasks. /n/n Enter 2 to delete exams. /n/n Enter 3 to delete deadlines. /n/n Press any key to exit."
  if(ch==1)
  {
	cout<<"Enter name of file of tasks, you want to delete : "<<endl;
	gets(fname);
	status=remove(fname);
	if(status==0)
	{
		cout<<"Task "<<fname<<" deleted successfully..!!\n";
	}
	else
	{
		cout<<"Unable to delete file "<<fname<<"\n";
	}
	getch();
 }
 else if(ch==2)
 {
 cout<<"Enter name of file of exams, you want to delete : "<<endl;
	gets(fname);
	status=remove(fname);
	if(status==0)
	{
		cout<<"Exam "<<fname<<" deleted successfully..!!\n";
	}
	else
	{
		cout<<"Unable to delete file "<<fname<<"\n";
	}
	getch();
 }
 else if(ch==3)
 {
  cout<<"Enter name of file of deadline, you want to delete : "<<endl;
	gets(fname);
	status=remove(fname);
	if(status==0)
	{
		cout<<"Deadline "<<fname<<" deleted successfully..!!\n";
	}
	else
	{
		cout<<"Unable to delete Deadline "<<fname<<"\n";
	}
	getch();
}
else
{
exit();
 getch();
}
}
