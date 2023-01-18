int n,m;
  cin>>n>>m;
  cout<<"enter the value of arr\n";
  int arr[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
  }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        // cin>>arr[i][j];
        cout<<arr[i][j]<<"  ";
    }cout<<"\n";
  }