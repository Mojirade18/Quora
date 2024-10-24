def main():
    quotes = ["The sky is your limit.",
        "Everyone can advise, but only you woukld live the consequence."
    ]
    running = True
    while running:
        gender = input("What is your gender (she/he)? " ).strip().lower()
        if gender == "she":
            print("Hello my beatiful queen!")
        elif gender == "he":
            print("Hello prince charming!")
        else:
            print("Invalid input!")
            continue
        print("1) Do you want to add a new quote?")
        print("2) Do you want to delete the most recent quote you added?")
        print("3) Do you want to edit your most recent qoute?")
        print("4) Do you want to exit?")

        option = input("What option (1-4)? ")

        if option == '1':
            another_quote = input("New qoute: ")
            quotes.append(another_quote)
            print(another_quote)
        elif option == '2':
            quotes.pop()
            for x in quotes:
                print(x)
        elif option == '3':
            new_quote = input("Type in the quote again: ")
            quotes.pop()
            quotes.append(new_quote)
            print(new_quote)
        elif option == '4':
            break
        else:
            print("Invalid input!")

if __name__ == "__main__":
    main()


