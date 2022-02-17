# Question 1

Identify the code to get only the year of the given date

### Options

a. new Date(curr_date);
b. new Date(curr_date).getYear();
c. new Date(curr_date).getFullYear();
d. new Date(curr_date).getFullDate();

**Answer:** c


# Question 2

Identify the code to get the current year in typescript

### Options

a. getFullYear();
b. new Date().getFullYear();
c. new Date();
d. Date().getFullYear();

**Answer:** b


# Question 3

Identifyt the code to create a custom pipe (experience) in Angular

### Options

a. ng g p experience
b. ng g c experience
c. create pipe experience
d. None of the above

**Answer:** a


# Question 4

How to combine filter with expression?

### Options

a. Using Dot {{expression. pipe}}
b. Using Comma {{expression, pipe}}
c. Using Slash {{expression / pipe}}
d. Using PIpe {{expression | pipe}}

**Answer:** d


# Question 5

Which of the following is the correct way to apply a filter?

### Options

a. {{ expression | filter1 | filter2 | ... }}
b. {{ {filter1} | {filter2} | ...-expression}}
c. {{ expression | {filter1} | {filter2} | ... }}
d. None of the above

**Answer:** a


# Question 6

Which of the following is not built-in pipe in Angular

### Options

a. DatePipe
b. CurrencyPipe
c. DataPipe
d. PercentPipe

**Answer:** c


# Question 7

Which of the following is the correct way to apply a filter?

### Options

a. Property-value || filter
b. Property-value && filter
c. Property-value | filter

**Answer:** c


# Question 8

Which of the following is true about filter filter?

### Options

a. filter filter is a function which takes text as input.
b. filter filter is used to filter the array to a subset of it based on provided criteria.
c. Both of the above.
d. None of the above.

**Answer:** b


# Question 9

The . . . . . decorator allows us to define the pipe name that is globally available for use in any template in the across application.


### Options

a. pipeName
b. pipeDeco
c. Pipe
d. None

**Answer:** c


# Question 10

Identify the code for getting the experience based on date of join using the custom experience pipe, where we pass the date of join as the value to the custom pipe.

### Options

a.   
transform(value: any): any {
  return new Date() - new Date(value);
}

b. 
transform(value: any): any {
  return new Date().getFullYear() - new Date(value);
}

c. 
transform(value: any): any {
  return new Date().getFullYear() - new Date(value).getFullYear();
}

d. 
transform(value: any): any {
  return new Date(value).getFullYear() - new Date().getFullYear();
}

**Answer:** c

