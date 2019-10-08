void main(List<String> arguments)
{
  var salary = 15000;
  
  if (salary>20000)
  {
    print("Promoted. Congrats");
  }
  else
  {
    print("Work Hard");
  }
  
  var marks = 70;
  if(marks >=90 && marks<100)
  {
    print("A+");
  }
  else if(marks >=80 && marks<90)
  {
    print("A");
  }
  else if(marks >=70 && marks<80)
  {
    print("B");
  }
  else if(marks >=60 && marks<70)
  {
    print("C");
  }
  else if(marks >=50 && marks<60)
  {
    print("D");
  }
  else
  {
    print("FAIL");
  }
}

