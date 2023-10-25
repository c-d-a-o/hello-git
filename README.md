![hey-you-youre-finally-awake-will-smith](https://github.com/c-d-a-o/hello-git/assets/124515922/f2a35f9e-d353-49b9-bc4c-a91e4d450280)

Come on in padawan, start your open source journey with a `hello-git`. Git is a version control system that basically.....let's you have versions. It lets you click a snapshot of your code state and store it in a photo album - the history of your project. Basically no more of this...
<br>
<br>
![Screenshot 2023-10-17 121407](https://github.com/c-d-a-o/hello-git/assets/124515922/48f4fd92-c8f4-495b-997e-71c5a7460db3)

<br>
New code doesn't work? Go back to old version
<br>
Office on fire? Take a snapshot of your code and upload......oh and leave the building after that
<br>
Deleted the entire prod database? Shhhhhh revert to old version. Yeah you get it
<br>
<br>
You need these things before you go to the next steps:
<br>
1. [Install git if you haven't](https://git-scm.com/download/win) (duhhhh)
<br>
2. Create a github account
<br>
And now we getting started for reals

# Step 1: Fork this repo
Would you ever want someone unknown to change your code? Hard pass
<br>
So you gotta make your own copy of that code. How?? Just click on `fork` and follow some simple steps.....Aaaannddd you're done!
<br>
![Screenshot 2023-10-17 012848](https://github.com/c-d-a-o/hello-git/assets/124515922/f3e5f912-bc04-49cb-82ec-95762f345dae)
<br>
<br>
Just remember, your fork is called origin and where you forked from is called upstream
<br>

# Step 2: Bring it to local
Time to embrace the keyboard.
<br>
Open your terminal in the folder you want the code. Run `git clone https://github.com/<your username>/hello-git.git`
<br>
`cd hello-git`
<br>
Set your username and email with `git config --global user.name "YOUR_USERNAME"` and `git config --global user.email "YOUR_EMAIL"`
<br>
I recommend keeping them the same as your github profile but you can do otherwise if you a lil adventurous.
<br>
<br>
Set the upstream with `git remote add upstream https://github.com/c-d-a-o/hello-git.git`
<br>
And check all links attached to your repo with `git remote -v`
<br>

# Step 3: Make a new branch (el psy congroo)
I know it sounds useless right now but ALWAYS MAKE A NEW BRANCH FOR A NEW CHANGE
<br>
This will help you in the years to come. One branch only allows one PR (dunno what this is? we'll cover it). So always make a new one.
<br>
`git branch newbranch` to make the branch
<br>
`git checkout newbranch` to shift to new branch
<br>
<br>
Keep a descriptive name. Smth like `feat: <your-name>` works for this one. An example of well made branch names:
<br>
![Screenshot 2023-10-17 102823](https://github.com/c-d-a-o/hello-git/assets/124515922/7a4518ec-4dbd-45db-85ba-2d5682c02e4c)
<br>

# Step 4: Let your cat walk on your keyboard
It's a gatekept secret in the tech world. Walking cats always write the best code. Brownie points for clean documentation.
<br>
<br>
......Or if you don't have a cat. Just write some code. Like we do (sm1 plz gift me a cat)
<br>
![hackoru](https://github.com/c-d-a-o/hello-git/assets/124515922/99404277-bd7e-4db8-a35f-e2b9ddc20da2)
<br>

# Step 5: Staging your code
Now we wanna take a snapshot of what we wrote. But what files to include?
<br>
This is called staging. We stage the files we wanna include in the snapshot.
<br>
Simply use `git add file.txt` to add file.txt to the staging area
<br>
Want to stage all files? `git add .` is just for you
<br>
Wanna remove a file from staging area? `git restore --staged file.txt` saves the day
<br>

# Step 6: Time to commit (this is not about relationships)
Now it's time to commit your code to history. Now you can revert shitty code. And others can blame you for shitty code. LITERALLY!

![ace-attorney-phoenix-wright](https://github.com/c-d-a-o/hello-git/assets/124515922/333a585c-a8a3-440d-8dec-04688f7c29e4)
<br>
Yeah I wasn't kidding
<br>
<br>
![Screenshot 2023-10-17 111726](https://github.com/c-d-a-o/hello-git/assets/124515922/edc0beac-19f3-49e5-bc41-0d6e12a6a7b4)
<br>

Decide on a good message to let others know what you changed. PLEASE make this message good and do others a favour. No one likes to be confused.
Just add the message to this: `git commit -m "good message"`
And you're done.....for now
<br>

# Step 7: Change original code
Remember, all this change is in your own fork. Time to give it back to the OGs. We do this with a Pull Request (PR) which is basically a digital way to say "Hey! Just review this code and merge this into your repo"
<br>
First push the code to your remote fork using `git push origin <branch-name>`
Now open your fork on github. Just click on `compare and pull request`. Add a good description and submit. Done.
<br>
Now, ~~wait for the endless list of improvements the maintainer sends which you'll forget to change~~ sit back and give yourself a pat on the back for your first PR. 
<br>

# Step ?? : Now what
As a parting gift, we're giving you the only source you'll ever need for git. No problems. EVER AGAIN. [Link](https://www.youtube.com/watch?v=dQw4w9WgXcQ)
.<br>
.<br>
.<br>
.<br>
.<br>
.<br>
.<br>
.<br>
.<br>
Yeah there's none. Keep building, keep learning. I learned this today making this:
<br>
![Screenshot 2023-10-17 112054](https://github.com/c-d-a-o/hello-git/assets/124515922/7375ec7b-661e-4b39-81cf-6c58d83f9513)
<br>
It's never gonna end. You'll stumble along the way - it's a canon event. And then learn even more.
<br>
This is how we stay relevant. How we stop ChatGPT from taking our jobs. [CDAO](https://discord.gg/EkH5um3Mnh), GPT and StackOverflow are your friends in this journey.
<br>
Anyways
<br>
![finnick-zootoropia](https://github.com/c-d-a-o/hello-git/assets/124515922/020a92bd-da87-49e5-9f61-858e86a6b87a)
