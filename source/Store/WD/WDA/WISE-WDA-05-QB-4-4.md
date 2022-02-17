# Question 1

Statement-A: Components are Inconsistent in Angular
Statement-B: Services are Consistent in Angular

### Options

a. Both Statements A and Statement B are True
b. Statements A is True and Statement B is False
c. Statements A is False and Statement B is True
d. Both Statements A and Statement B are False

**Answer:** a


# Question 2

Identify the correct place to provide canActivate method for Register Component in the constant routes variable of the Routes Class?

### Options

a. {canActivate:[AuthGuard], path:'register', component:RegisterComponent}
b. {path:'register', canActivate:[AuthGuard], component:RegisterComponent}
c. {path:'register', component:RegisterComponent, canActivate:[AuthGuard]}
d. {path:'', canActivate:[AuthGuard], component:RegisterComponent}

**Answer:** b


# Question 3

Identify the code for creating the guard with "auth" as the name in Angular

### Options

a. ng g c auth --skip-tests
b. ng g p auth --skip-tests
c. ng g s auth --skip-tests
d. ng g g auth --skip-tests

**Answer:** d


# Question 4

Auth Guard contains a predefined canActivate method which returns boolean value?

### Options

a. True
b. False 

**Answer:** a


# Question 5

What does path:'**' represents in routing?

### Options

a. default path
b. empty path
c. wild card
d. none of the above 

**Answer:** c


# Question 6

Identify the code for creating the service with "emp" as the name in Angular.

### Options

a. ng g c emp --skip-tests
b. ng g p emp --skip-tests
c. ng g s emp --skip-tests
d. ng g g emp --skip-tests

**Answer:** c


# Question 7

Identify the code to be provided in the Routes collection, if the corresponding routerLink component is not identified.

### Options

a. {path:'', component:PagenotfoundComponent}
b. {path:'**', component:PagenotfoundComponent}
c. {path:'**', PagenotfoundComponent}
d. {path:'', PagenotfoundComponent}

**Answer:** b


# Question 8

 Identify the code to be provided for making the childern for a particular ParentComponent.

### Options

a. 
{path:'parent', 
children:[ 
{path:'', component:ParentComponent}, 
{path:'child1', component:Child1Compoent}, 
{path:'child2', component:Child2Compoent} 
]}

b. 
{path:'parent', children:[ 
{path:'parent', component:ParentComponent}, 
{path:'child1', component:Child1Compoent}, 
{path:'child2', component:Child2Compoent} ]}

c. 
{path:'', component:ParentComponent}
children:[{path:'child1', 
component:Child1Compoent}, {path:'child2', 
component:Child2Compoent}]

d. 
{path:'parent', component:ParentComponent}
children:[{path:'child1', 
component:Child1Compoent}, {path:'child2', 
component:Child2Compoent}]

**Answer:** a


# Question 9

Identify the correct router link path to be displayed in the URL when we call the Childerns (child1 and child2) from the ParentComponent?

### Options

a. 
<a routerLink="/child1"> Child1 </a> <br/>
<a routerLink="/child2"> Child1 </a>

b. 
<a routerLink="./child1"> Child1 </a> <br/>
<a routerLink="./child2"> Child1 </a>

c. 
<a routerLink="Parent/child1"> Child1 </a> <br/>
<a routerLink="Parent/child2"> Child1 </a>

d. 
<a routerLink="child1"> Child1 </a> <br/>
<a routerLink="child2"> Child1 </a>

**Answer:** b


# Question 10

In order to validate the current user from the list of users, we generally validate the user account in typescript using:

### Options

a. if
b. for
c. forEach
d. foreach

**Answer:** c

