# This program checks a student's marks
# and decides pass / fail / distinction

marks = 78

print("Program started")

# First decision
if marks >= 0:

    print("Marks entered are valid")

    # Second decision (inside first if)
    if marks >= 35:

        print("Student has passed")

        # Third decision (inside pass block)
        if marks >= 75:

            print("Student got distinction")

        else:

            print("Student passed but no distinction")

    else:

        print("Student has failed")

else:

    print("Invalid marks")

print("Program ended")
