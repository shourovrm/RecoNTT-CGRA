## How to setup git

### Step 1:

1. Create the new repo in github
2. Make it public or private, as you wish
3. [optional] setup a PAT which can be used to access github in linux. This can be used for any repo, as long as it is active

### Step 2:

1. Create the local folder with required documents. This folder will be linked to the git. It is better to use the same folder name as the repo name (maybe not true).
2. Initiate:

> git init

3. add all to the git:

> git add .

4. commit it :

> git commit -m "Initial commit"

5. check the branch name:

> git branch

6. If the name is not main, then change it to main:

> git branch -M main

### Step 3:

1. add the remote -

> git remote add origin <repo address>

2. check the remote -

> git remote -v

3. pull from origin - 

> git pull origin main

4. If it is a new branch, then merge it together -

> git merge origin/main --allow-unrelated-histories

5. push it to the github - 

> git push origin main 


