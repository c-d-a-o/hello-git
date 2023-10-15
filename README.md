![hey-you-youre-finally-awake-will-smith](https://github.com/c-d-a-o/hello-git/assets/124515922/f2a35f9e-d353-49b9-bc4c-a91e4d450280)

Come on in padawan, start your open source journey with a `hello-git`. Git is a version control system that basically.....let's you have versions.
<br>
New code doesn't work? Go back to old version
<br>
Office on fire? Take a snapshot of your code and upload......oh and leave the building after that
<br>
Deleted the entire prod database? Shhhhhh revert to old version. Yeah you get it
<br>
<br>
[Install git if you haven't](https://git-scm.com/download/win) (duhhhh)

# Step 1: Fork this repo
Would you ever want someone unknown to change your code? Hard pass
<br>
So you gotta make your own copy of that code. How?? Just click on the button and follow some simple steps.....Aaaannddd you're done!
<image of fork thngy here>
<br>

# Step 2: Bring it to local
Time to embrace the keyboard.
<br>
Open your terminal in the folder you want the code. Run `git clone blah blah`
<br>

# Step 3: Make a new branch
I know it sounds useless right now but ALWAYS MAKE A NEW BRANCH FOR A NEW CHANGE
<br>
This will help you in the years to come. One branch only allows one PR (dunno what this is? we'll cover it). So always make a new one.
<br>
Keep a descriptive name. Smth like `feat: <your-name>` works for this one
<br>

# Step 4: Let your cat walk on your keyboard
It's a gatekept secret in the tech world. Walking cats always write the best code. Brownie points for clean documentation.
<br>
<br>
......Or if you don't have a cat. Just write some code. Like we do (sm1 plz gift me a cat)
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

# Step 6: Time to commit (this is not about relationships)
Now it's time to commit your code to history. Doing so enables you to revert back shitty code, and enables others to blame you for shitty code. LITERALLY!

![ace-attorney-phoenix-wright](https://github.com/c-d-a-o/hello-git/assets/124515922/333a585c-a8a3-440d-8dec-04688f7c29e4)

Decide on a good message to let others know what you changed. PLEASE make this message good and do others a favour. No one likes to be confused.
Just add the message to this: `git commit -m "good message"`
And you're done.....for now
<br>

# Step 7: Request to change original code
Remember, all this change is in your own fork. Time to give it back to our repo. We do this via a Pull Request (PR) which is basically a digital way to say "Hey! Just review this code and merge this into your repo"
<br>
First push the code to your remote fork using `git push origin <branch-name>`
Now open your fork on github. You'll see a Pull request button. Just click that. Add a good description and submit. Done.
<br>
Ideally, maintainers suggest changes to you. Complete those properly and your PR will  definitely be merged into the real code :D 
