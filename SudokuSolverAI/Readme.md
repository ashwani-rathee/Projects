I’m currently a teaching assistant for the graduate-level AI class taught by my advisor Shlomo Zilberstein at UMass Amherst. In one of the homework assignments, the students had to write some code that solves sudoku puzzles. This means I’ve been talking about how to use AI algorithms to solve sudoku way too much lately. Because it’s fresh on my mind, I figured I’d write a quick and dirty blog post that discusses how we can use a simple AI algorithm to solve sudoku puzzles and similar games.

Photo by Marijakes on Pixabay
The Map Coloring Problem
Before getting to sudoku, let’s go over a traditional example in AI, which is a rite of passage at this point. Suppose we have to color a map with different colors where no two neighboring regions can have the same color. Simply put, we just need to paint each region of the map a different color and none of the regions that neighbor each other can have the same color. For example, let’s say we want to color the paradigmatic example of Australia that’s used in practically every AI class:

Now, if we had to color this map three different colors, say red, green and blue, this would be a valid solution to our map coloring problem:

As a quick aside, to turn this map into a representation that can be understood by an algorithm, we can turn it into a graph where each node represents a region and each edge represents whether or not two regions neighbor each other like this:

Notice how the region Tasmania isn’t connected to any other region. This means that we can color that region whatever we want. On the other hand, since the region Southern Australia is connected to several other regions, we have to be careful there.
Constraint Satisfaction Problems
More broadly, the map coloring problem that we’ve discussed here is an instance of what we call a constraint satisfaction problem in AI. We usually refer to it as a CSP though. Formally, a CSP has a few attributes:
A set of n variables X = {X1, X2, …, Xn} where each variable X1 needs to be assigned a value.
A set of n domains D = {D1, D2, …, Dn} where each domain Di = {V1, V2, …, Vm} has m possible values for each variable Xi. In other words, each variable has a domain, and each domain has every possible (though perhaps invalid) value for that variable.
A set of p constraints C = {C1, C2, …, Cp} where each constraint C1 constrains some of the variables.
In short, we have a set of variables that we need to find values for, a set of domains that tell us all of the possible values for each variable, and a set of constraints that constrain the values in some way.
Once we’ve specified a CSP, the goal is to find a solution that assigns a value to each of the variables but satisfies every constraint. That’s it!
Now, if we were to go back to our map coloring problem for Australia from before, we can easily specify a CSP that looks like this:
Variables. X = {WA, NT, SA, Q, NSW, V, T}. Each variable represents a region of Australia.
Domains. D = {{Red, Green, Blue}, …, {Red, Green, Blue}}. Each domain just has the colors red, green, and blue.
Constraints. C = {WA != NT, WA != SA, NT != SA, NT != Q, SA != Q, SA = NSW, SA != Q, SA != NSW, SA != V, Q != NSW, NSW != V}. Each constraint makes sure no neighboring regions have the same color.
Backtracking Search
While it’s awesome that we’ve represented the map coloring problem as a CSP, how do we even solve it? That’s where backtracking search comes in. Backtracking search is just a search algorithm that finds some assignment that satisfies a CSP. At a very high level, the algorithm assigns a value to each variable one-by-one until either reaching a valid assignment or an invalid assignment that violates some constraint, at which point it backtracks to a place in the search where there are no violations yet. To give you a little more detail, after taking in a CSP and an empty assignment as parameters, backtracking search does this:
If the assignment is complete, return the assignment.
Select a variable from the CSP that hasn’t been assigned a value yet.
For each value in the domain of the variable that satisfies the constraints, perform the following steps.
— Add the value to the assignment.
— Call the backtracking search with the partial assignment recursively.
—If the backtracking search returns a valid assignment, return it.
—Else, remove the value from the assignment.
Return false.
To give you another perspective, backtracking search just ends up being a search tree. Each level of the search tree is associated with a single variable and its valid values. At the final level of the search tree, if it’s even possible to get there, there will be an assignment such that each variable is assigned a valid value. This means that the assignment is the answer to our CSP. Visually, we can illustrate backtracking search in the following way:

Here’s the pseudocode of backtracking search if you’re into that:
function recursiveBacktrackingSearch(assignment, csp):
  if assignment.isComplete():
    return assignment
  variable = selectUnassignedVariable(csp.variables())
  for each value in orderDomainValues(csp.domain()):
    if assignment.isConsistentWith(csp.constraints()):
      assignment.add(variable, value)
      result = recursiveBacktrackingSearch(assignment, csp)
      if result is false:
        return result
      assignment.remove(variable, value);
  return false
That’s it! That’ll give us an assignment that solves our CSP. But can we do better than that? It turns out that there are some optimizations that make backtracking search more efficient. Let’s go over each one of those now.
Variable Ordering
Take a look at the selectUnassignedVariable(csp.variables()) function in the pseudocode. Notice how we didn’t actually describe how that function works. Does it select an unassigned variable randomly? Does it pick an unassigned variable in some sort of order? Or does it do something even more complex than either of those things? In short, we can use a few heuristics to select our unassigned variables in a decent order. These heuristics typically cut out huge regions of the state space (or a huge number of assignments that would normally be tried out), making backtracking search much faster.
The first heuristic is called the minimum-remaining-values heuristic. Just as the name implies, this heuristic picks the unassigned variable that has the fewest legal values remaining. This enables the backtracking search to select an unassigned value that will most likely cause a failure soon. By the way, it’s sometimes called the most-constrained-variable heuristic. Call it whatever you want though.
What happens if there are two unassigned variables that have the same number of fewest legal values remaining? That’s where the degree heuristic comes in. If there’s a tie between two unassigned variables, we can simply pick the unassigned variable that’s involved in the most constraints. The goal of this is to reduce the branching factor of backtracking search as much as possible. It’s also referred to as the most-constraining-variable heuristic. Just rolls right off the tongue…
Value Ordering
Now that we’ve ordered the unassigned variables in a better way, we can think about how to order the values of an unassigned variable that’s just about to be assigned a value. In the pseudocode, you’ll see that this happens in the orderDomainValues(csp.domain()) function. A good way to order the values of an unassigned variable is to use the least-constraining-value heuristic. This heuristic just selects the value that rules out the fewest choices for the variables that are constrained by the unassigned variable. Why would we want to do this? While the heuristics for ordering variables try to cause failures as quickly as possible, the heuristic for ordering values aims to give backtracking search as much flexibility as possible for the other unassigned variables that will be assigned a value in the future.
Constraint Propagation
Last but not least, we’ll discuss one more really important way to improve backtracking search. Consider the following situation. Suppose the algorithm just assigned a value to some unassigned variable. This unassigned variable in turn constrains some other unassigned variable in our CSP. For example, in the map coloring problem, let’s say we marked the variable Western Australia down as red. What does this mean for the variables Northern Territory and Southern Australia? It means that they both can’t be red now. In fact, they could only be green and blue. While backtracking search doesn’t currently account for this type of inference, we could certainly add it. When we add the ability for backtracking search to modify the domains of other unassigned variables when it assigns a value to some variable, we’re implementing what we call constraint propagation.
Although there are many sophisticated forms of constraint propagation, we’ll only talk about the simplest one in this post: forward checking. In forward checking, when some variable is assigned value, backtracking search does the following two things:
It calculates each unassigned variable that neighbors that variable.
It deletes every value from the domain of each neighboring variable that’s inconsistent with the new value of that variable.
To illustrate this idea, it’s time to go back to the map coloring problem again. Suppose backtracking search just started to solve the map coloring problem. In other words, backtracking search hasn’t assigned a value to any of the variables yet like this:

Let’s say we assign red to the variable Western Australia. By using forward checking, backtracking search can modify the domains of the neighboring unassigned variables Northern Territory and Southern Australia like what we see below. You’ll notice that both of those unassigned neighboring variables no longer have the color red in their domains. Why? It’s because the variable Western Australia has been assigned the color red, which means the variables Northern Territory and Southern Australia can’t be red.

Let’s go one step further by assigning the color green to the variable Queensland. What does forward checking do now? It eliminates the color green from the domains of the variables Northern Territory, Southern Australia, and New South Wales.

Let’s talk about why this would make backtracking search faster. Basically, it does two things. First, it causes failures early because if one of the domains of the unassigned variables becomes empty, we can immediately backtrack. Second, it reduces the number of assignments that backtracking search has to try out. Simply put, by eliminating values from the domains of each unassigned variable, backtracking search naturally has to try less values.
Sudoku Puzzles
It’s finally time to explain how we can solve sudoku by using a CSP. It’s surprising super easy. Like any CSP, we have to come up with the set of variables, the set of domains, and the set of constraints. Let’s do that now.
Variables. X = {A1, A2, …, I8, I9}. We’ll just have a variable for each cell in the sudoku puzzle for a total of 81 variables. To give you a sense of what this notation means, the variable A1 is just a variable that represents the cell in the Ath row and the 1st column. For any cell that’s filled in with a value already, we’ll just automatically set those to that value. Easy.
Domains. D = {1, 2, 3, 4, 5, 6, 7, 8, 9}. For the domain of each variable, we’ll just start with all of the numbers from 1 to 9. Keep in mind that forward checking will trim these domains over time. Note that, for a cell that has a number already, it’ll just have a domain with a single number.
Constraints. We’ll have three types of constraints here: a constraint that says all of the variables in each column has to differ, all of the variables in each row has to differ, and all of the variables in each square has to differ. Nothing too tricky. Let’s formalize these types of constraints below.
Column Constraints. AllDiff(A1, B1, C1, D1, E1, F1, G1, H1, I1), …, AllDiff(A9, B9, C9, D9, E9, F9, G9, H9, I9). There will be a total of 9 column constraints because there are 9 columns.
Row Constraints. AllDiff(A1, A2, A3, A4, A5, A6, A7, A8, A9), …, AllDiff(I1, I2, I3, I4, I5, I6, I7, I8, I9). Again, we’ll have a total of 9 row constraints because there are 9 rows.
Square Constraints. AllDiff(A1, A2, A3, B1, B2, B3, C1, C2, C3) …, AllDiff(G7, G8, G9, H7, H8, H9, I7, I8, I9). And, surprise, we’ll have 9 square constraints because there are 9 squares.
Once you’ve defined sudoku as a CSP, you’re done! All you have to do now is feed the CSP into your backtracking search algorithm to get the answer to any sudoku puzzle. You’d be surprised how fast it is too. Even the hardest sudoku puzzles for a person can be solved in way less than a second.
