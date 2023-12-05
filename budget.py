from itertools import permutations

def can_complete_projects(budget, projects):
    current_budget = budget
    for project in projects:
        expenditure, bonus, penalty = project
        bonus = max(0, int(bonus[1:])) if bonus[1:].isdigit() else 0
        penalty = int(penalty[1:]) if penalty[1:].isdigit() else 0

        if current_budget >= expenditure:
            current_budget += bonus + penalty
        else:
            return False  # Budget is not sufficient for the current project

    return True  # All projects can be completed within the given budget

def minPerfectBudget(n, projects):
    max_initial_budget = max(project[0] for project in projects)

    for initial_budget in range(max_initial_budget, 10**5):  # Assuming the upper limit for initial budget
        for perm in permutations(projects):
            if can_complete_projects(initial_budget, perm):
                return initial_budget

# Input reading
n = int(input())
projects = []

for _ in range(n):
    project_info = input().split()
    projects.append((int(project_info[0]), project_info[1], project_info[2]))

# Calculate and print the minimum perfect budget
result = minPerfectBudget(n, projects)
print(result)

