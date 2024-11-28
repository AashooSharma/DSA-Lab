# Contribution Helper

Welcome to the DSA Lab repository! This guide will walk you through the steps to contribute to this repository, even if you're new to GitHub. Follow these instructions to make your contributions to the project.

## Step 1: Set Up Your GitHub Account (If You Don't Have One)

1. Visit [GitHub](https://github.com).
2. Click on **Sign up** and follow the instructions to create your GitHub account.

## Step 2: Fork the Repository

1. Go to the main DSA Lab repository page:  
   [DSA Lab Repository](https://github.com/YourGitHubUsername/DSA-Lab)
2. In the top-right corner of the page, click the **Fork** button. This will create a copy of the repository under your GitHub account.
3. After forking, you’ll be redirected to your own GitHub account where you can see the forked repository.

## Step 3: Clone the Repository to Your Local Machine

1. On your forked repository page, click the green **Code** button.
2. Copy the **HTTPS** URL of the repository.
3. Open your terminal (or Git Bash on Windows), navigate to the directory where you want to store the repository, and run the following command to clone it:

   ```bash
   git clone https://github.com/YourGitHubUsername/DSA-Lab.git
   ```

4. Navigate into the cloned repository:

   ```bash
   cd DSA-Lab
   ```

## Step 4: Create a New Branch

### IMPORTANT: **Do not push code directly to the main branch.**  
You must create a new branch for each task or feature you're working on.

### Branch Naming Convention:

- Your branch name should be **your roll number** or **your name**. For example:
  - `pce24cs807` (for roll number 807 in batch 24)
  - `pce23cs150` (for roll number 150 in batch 23)
  - `abhisheksharma` (if you prefer using your name)

1. Before making any changes, create a new branch to work on. This keeps your changes organized and separate from the main code.
2. Run the following command to create a new branch and switch to it:

   ```bash
   git checkout -b your-branch-name
   ```

   Replace `your-branch-name` with your roll number or name.

## Step 5: Make Changes or Add Files

1. Add or modify the necessary files in the repository.
2. For example, you can:
   - Add a new C++ solution in a specific folder (e.g., Arrays, LinkedLists).
   - Update the README files with your explanation or improvements.
   - Add new test cases or documentation.

## Step 6: Stage Your Changes

Once you're happy with the changes, you need to stage them before committing.

1. Run the following command to stage all changes:

   ```bash
   git add .
   ```

   This will add all modified files to the commit. If you only want to add specific files, replace `.` with the file name(s).

## Step 7: Commit Your Changes

1. Commit your changes with a descriptive message about what you have done:

   ```bash
   git commit -m "Added new question solution for Arrays"
   ```

   Make sure your commit message is clear and describes what was changed.

## Step 8: Push Your Changes to Your Fork

1. Push the changes to the branch you created in your forked repository:

   ```bash
   git push origin your-branch-name
   ```

   Replace `your-branch-name` with the name of your branch.

## Step 9: Create a Pull Request (PR)

1. Go to your forked repository on GitHub.
2. You’ll see a notification about your recent push. Click **Compare & pull request**.
3. On the next page, describe your changes in the pull request message.
4. Click **Create pull request** to submit your changes for review.

## Step 10: Wait for Review and Merge

1. The repository owner (or maintainers) will review your pull request.
2. If everything looks good, they will merge it into the main branch of the repository.

---

## Best Practices for Working on Larger Projects

Working on a large project or a professional project involves following a systematic workflow. Here are some best practices for collaborating effectively in a team:

### 1. **Work on a Separate Branch**
   - Always create a new branch for each task or feature you are working on. This keeps the main branch stable and clean.  
   - Avoid working directly on the `main` branch. It's important to isolate your changes until they are reviewed and ready for integration.

### 2. **Write Clear Commit Messages**
   - Each commit should have a clear, concise message that describes what you’ve done. For example:
     - “Added new sorting algorithm for Arrays.”
     - “Fixed issue in the search function.”
     - “Updated README for better clarity.”
   - This helps others understand the changes without needing to look at the code.

### 3. **Pull Regularly from the Main Branch**
   - Always pull the latest changes from the `main` branch to your local repository before you start working. This ensures that you are working with the most up-to-date code:
     ```bash
     git checkout main
     git pull origin main
     ```
   - This minimizes merge conflicts and keeps your work aligned with others.

### 4. **Keep Pull Requests Focused and Small**
   - It's better to make small, frequent pull requests rather than large, infrequent ones. This makes reviewing easier and faster.
   - Each pull request should ideally focus on one specific feature or fix.

### 5. **Use Descriptive Branch Names**
   - Use meaningful names for your branches that describe the work you're doing. This makes it easier for others to understand what’s being worked on:
     - `feature-add-bubble-sort`
     - `bugfix-fix-array-out-of-bounds`
     - `docs-update-readme`

### 6. **Collaborate and Communicate**
   - If you face any challenges or need help, don’t hesitate to ask your team members. GitHub’s **issues** and **pull requests** can also be used to discuss changes before committing to them.
   - Teamwork and clear communication are key to managing a successful project.

### 7. **Test Your Changes**
   - Before submitting a pull request, ensure your code is well-tested. This includes testing your solution for different input values and edge cases.

### 8. **Keep Your Fork Up to Date**
   - If your team members are making changes to the main repository, regularly fetch and merge their changes into your fork to stay up-to-date:
     ```bash
     git fetch upstream
     git merge upstream/main
     ```

---

## Additional Information

- **Always pull the latest changes** from the main branch before you start working on a new task:
  
  ```bash
  git checkout main
  git pull origin main
  ```

- If you're not familiar with Git or need help, feel free to ask for assistance from other contributors.

---

Happy coding, and thank you for contributing!

