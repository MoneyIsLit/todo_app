


#make all the aray elements to lower case



def choose_word(round_no,topic):
    computer = ["python", "computer", "javascript", "monitor", "golang","java","windows","linux","macbook","keyboard"]
    education = ["science","commerce","arts","business","management","logistics","medical","dental","ayurvedic","electronics"]
    sports = ["Cricket","football","kabaddi","volleyball","tennis","basketball","tabletennis","hockey","rubgy","koko"]
    celebrity = ["shahrukh","yash","salman","sunil","virat","hardhik","dharshan","ameer","aishwarya","rohith"]
    department = ["economic","computer","physics","mechanical","chemistry","biology","civil","blockchain","agriculture","aqualculture"]
    match topic:
        case 1:
            return education[round_no%len(education)]
        case 2:
            return computer[round_no%len(computer)]
        case 3:
            return sports[round_no%len(sports)]
        case 4:
            return celebrity[round_no%len(celebrity)]
        case 5:
            return department[round_no%len(department)]
        case _:
            return print("Invlaid Number")
        
        








def display_word(word, guessed_letters):
    # for letter in word :
    #     if letter in word[0] :
    #         print(letter, end=" ")
    # for letter in word :
    #     if letter in word[-1] :
    #         print(letter, end=" ")
            
    for letter in word:
        if letter in guessed_letters:
            print(letter, end=" ")
        else:
            print("_", end=" ") 
    print()




def hangman():
    name = input("Enter your name: ")
    print("choose topics (1 to 10 ) : 1.education 2.computer 3.sports 4.celebrity 5.department")
    topic_valut = []
    # topic = int(input())
    # if topic in topic_valut :
    #     print("Already chosen!")
    # while True:
    #     topic = int(input())
    #     if topic in topic_valut:
    #         print("Already chosen!")
    #         continue
    #     else:
    #         topic_valut.append(topic)
    #         break
    
    while True:    
        topic = int(input())
        break

    score = 0
    round_no = 0

    print("\n🎮 HANGMAN GAME")
    print("Player:", name)
    print("Rules:")
    print("- Guess one letter at a time")
    print("- 6 wrong attempts allowed per round")
    print("- Correct guess: +10 points")
    print("- Wrong guess: -5 points")
    print("- Score continues to next round")
    print("- Game ends when attempts become 0")
    

    while True:
        topic_valut = []


        if topic in topic_valut:
            print("Already Chosen")
            continue
        else:
            topic_valut.append(topic)
        word = choose_word(round_no,topic)
        guessed_letters = []
        attempts = 6

        if round_no>10:
            print("You won the game!")
            break

        print("\n-------------------------")
        print("Round:", round_no)
        print("Word Length:", len(word))
        print("Attempts Left:", attempts)
        guessed_letters.append(word[0])
        guessed_letters.append(word[-1])
        

        
        
        
        while attempts > 0:
            display_word(word, guessed_letters)
            guess = input("Enter a letter: ").lower()

            if guess in guessed_letters:
                print("Already guessed. Try another letter.")
                continue

            guessed_letters.append(guess)

            if guess in word:
                score += 10
                print("Correct guess!")
            else:
                attempts -= 1
                score -= 5
                print("Wrong guess!")

            print("Attempts Left:", attempts)
            print("Score:", score)
            match attempts:
                case 5:
                    print("   O   ")
                case 4:
                    print("   O   ")
                    print("   |   ")
                case 3:
                    print("   O   ")
                    print("  /|   ")
                case 2:
                    print("   O   ")
                    print("  /|\\  ")
                case 1:
                    print("   O   ")
                    print("  /|\\   ")
                    print("  /      ")  
            
            # if attempts == 4:
            #     print(f"   O   ")
            #     print(f"  /|\\    ")
                

            win = True
            for letter in word:
                if letter not in guessed_letters:
                    win = False

            if win:
                print("\n🎉 You guessed the word:", word)
                print("Score carried forward:", score)
                round_no += 1
                break
            
            


            
        if attempts == 0:
            print("\n❌ GAME OVER")
            print("Player:", name)
            print("Final Score:", score)
            print("Rounds Completed:", round_no - 1)
            print(f"   O   ")
            print(f"  /|\\    ")
            print(f"  / \\    ")
            break
        
    print()

hangman()