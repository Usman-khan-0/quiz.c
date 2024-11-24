#include <stdio.h>

void gk();
void sports();
void chemistry();
void physics();
void maths();
void history();
void cs();
void biology();
void programming();
void iq();

int main()
{
    int choice;

    printf("\n****************************\n");
    printf("*  Welcome to the Quiz!  *\n");
    printf("****************************\n\n");

    printf("Test your skills and see how much you know.\n\n");

    printf("There are 10 Multiple Choice Question in each Selected topic.\n");
    printf("You will get 1 point for each correct Answer.\n\n");

    while (1)
    {
        printf("There are various topics for Quiz\n");
        printf("==============================\n");
        printf("1: General Knowledge\n2: Sports\n3: Chemistry\n4: Physics\n5: Mathematics\n6: History\n7: Computer Science\n8: Biology\n9: Programming\n10: IQ\n11: Exit\n");
        printf("==============================\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            gk();
            break;

        case 2:
            sports();
            break;

        case 3:
            chemistry();
            break;

        case 4:
            physics();
            break;

        case 5:
            maths();
            break;

        case 6:
            history();
            break;

        case 7:
            cs();
            break;

        case 8:
            biology();
            break;

        case 9:
            programming();
            break;

        case 10:
            iq();
            break;

        case 11:
            printf("\nExiting the Program!\n");
            return 0;

        default:
            printf("\nInvalid option\n");
            break;
        }
        return 0;
    }
}

void gk()
{
    int choice, answer, score = 0;
    printf("\n==============================");
    printf("\n--- General Knowledge Quiz ---\n");
    printf("==============================\n");
    printf("Choose the Subfield in General Knowledge\n");
    printf("==============================\n");
    printf("1: World Wide\n2: Pakistan\n");
    printf("==============================\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        // Question 1
        printf("\nQ1: How many continents are there?\n");
        printf("1: 5 \n2: 6\n3: 7\n4: 8\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 3)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 2
        printf("\nQ2: What is the capital of the United States?\n");
        printf("1: New York \n2: Washington, D.C.\n3: Los Angeles\n4: Chicago\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 3
        printf("\nQ3: What is the smallest country in the world?\n");
        printf("1: Monaco \n2: Vatican City\n3: San Marino\n4: Liechtenstein\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 4
        printf("\nQ4: Which is the longest river in the world?\n");
        printf("1: Amazon \n2: Nile\n3: Nile\n4: Mississippi\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 5
        printf("\nQ5: Which country is known as the \"Land of the Midnight Sun\"?\n");
        printf("1: Iceland \n2: Finland\n3: Sweden\n4: Norway\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 4)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 6
        printf("\nQ6: What is the capital of Japan?\n");
        printf("1: Tokyo \n2: Seoul\n3: Beijing\n4: Bangkok\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 1)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 7
        printf("\nQ7: Which is the largest ocean on Earth?\n");
        printf("1: Atlantic Ocean \n2: Indian Ocean\n3: Pacific Ocean\n4: Arctic Ocean\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 3)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 8
        printf("\nQ8: What is the tallest mountain in the world?\n");
        printf("1: Mount Kilimanjaro \n2: K2\n3: Mount Elbrus\n4: Mount Everest\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 4)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 9
        printf("\nQ9: Which country gifted the Statue of Liberty to the United States?\n");
        printf("1: England \n2: France\n3: Spain\n4: Italy\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 10
        printf("\nQ10: Who painted the \"Mona Lisa\"?\n");
        printf("1: Vincent van Gogh \n2: Pablo Picasso\n3: Leonardo da Vinci\n4: Claude Monet\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 3)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        printf("\n\nYou score %d/10 in General Knowledge\n", score);

        if (score >= 8)
        {
            printf("\n\t\t* Welldone! *\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\n\t\t* Good! *\n");
        }
        else
        {
            printf("\n\t\t* Fair! *\n");
        }
    break;

case 2:
printf("\nQ1: What is the national language of Pakistan?\n");
        printf("1: Punjabi \n2: Urdu\n3: Sindhi\n4: Pashto\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 2
        printf("\nQ2: Who is known as the \"Father of the Nation\" in Pakistan?\n");
        printf("1: Muhammad Ali Jinnah \n2: Allama Iqbal\n3: Liaquat Ali Khan\n4: Sir Syed Ahmed Khan\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 1)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 3
        printf("\nQ3: What is the capital city of Pakistan?\n");
        printf("1: Karachi \n2: Lahore\n3: Islamabad\n4: Peshawar\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 3)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 4
        printf("\nQ4: Which river is the longest in Pakistan?\n");
        printf("1: Ravi \n2: Chenab\n3: Indus\n4: Sutlej\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 3)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 5
        printf("\nQ5: What is the national flower of Pakistan?\n");
        printf("1: Jasmine \n2: Rose\n3: Tulip\n4: Sunflower\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 1)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 6
        printf("\nQ6: Who wrote Pakistan's national anthem?\n");
        printf("1: Allama Iqbal \n2: Faiz Ahmed Faiz\n3: Liaquat Ali Khan\n4: Hafeez Jullundhri\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 4)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 7
        printf("\nQ7: Which is the largest province of Pakistan by area?\n");
        printf("1: Punjab \n2: Sindh\n3: Khyber Pakhtun Khwah\n4: Balochistan\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 4)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 8
        printf("\nQ8: 9. What is the name of Pakistan’s highest peak?\n");
        printf("1: Nanga Parbat \n2: K2\n3: Broad Peak\n4: Gasherbrum I\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 9
        printf("\nQ9: Which country gifted the Statue of Liberty to the United States?\n");
        printf("1: England \n2: France\n3: Spain\n4: Italy\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 2)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        // Question 10
        printf("\nQ10: Who painted the \"Mona Lisa\"?\n");
        printf("1: Vincent van Gogh \n2: Pablo Picasso\n3: Leonardo da Vinci\n4: Claude Monet\n");
        printf("Enter your answer: ");
        scanf("%d", &answer);
        if (answer == 3)
        {
            printf("\n\t\t* Right Answer *\n");
            score++;
        }
        else
        {
            printf("\n\t\t* Wrong Answer *\n");
        }

        printf("\n\nYou score %d/10 in General Knowledge\n", score);

        if (score >= 8)
        {
            printf("\n\t\t* Welldone! *\n");
        }
        else if (score < 8 && score >= 5)
        {
            printf("\n\t\t* Good! *\n");
        }
        else
        {
            printf("\n\t\t* Fair! *\n");
        }
    break;
    }
}

void sports()
{
    int answer, score = 0;
    printf("\n==============================");
    printf("\n--- Sports Quiz ---\n");
    printf("==============================\n");

    // Question 1
    printf("\nQ1: ");
    printf("Which country has won the most FIFA World Cups in football?\n");
    printf("1: Germany \n2: Brazil\n3: Italy\n4: Argentina\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 2
    printf("\nQ2: ");
    printf("Who is known as the \"Lightning Bolt\" in athletics?\n");
    printf("1: Carl Lewis \n2: Mo Farah\n3: Usain Bolt\n4: Michael Johnson\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 3
    printf("\nQ3: ");
    printf("Which country has won the most Cricket World Cups?\n");
    printf("1: India \n2: England\n3: West Indies\n4: Austraila\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 4
    printf("\nQ4: ");
    printf("What is the duration of a standard football match?\n");
    printf("1: 60 minutes \n2: 80 minutes\n3: 90 minutes\n4: 120 minutes\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 5
    printf("\nQ5: ");
    printf("Who holds the record for the most goals in football history?\n");
    printf("1: Pele \n2: Lionel Messi\n3: Diego Maradona\n4: Cristiano Ronaldo\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 6
    printf("\nQ6: ");
    printf("Which country won the first-ever FIFA World Cup?\n");
    printf("1: Uruguay \n2: Brazil\n3: Germany\n4: Argentina\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 7
    printf("\nQ7: ");
    printf("What is the nickname of the New Zealand rugby team?\n");
    printf("1: Springboks \n2: Wallabies\n3: Kiwis\n4: All Blacks\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 8
    printf("\nQ8: ");
    printf("Which bowler has the most wickets in Test cricket history?\n");
    printf("1: Shane Warne \n2: Muttiah Muralitharan\n3: James Anderson\n4: Glenn McGrath\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 9
    printf("\nQ9: ");
    printf("Who won the first ICC Cricket World Cup in 1975?\n");
    printf("1: England \n2: India\n3: Australia\n4: West Indies\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 10
    printf("\nQ10: ");
    printf("What is the duration of a standard professional boxing round?\n");
    printf("1: 2 minutes \n2: 3 minutes\n3: 4 minutes\n4: 5 minutes\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    printf("\n\nYou score %d/10 in General Knowledge\n", score);

    if (score >= 8)
    {
        printf("\n\t\t* Welldone! *\n");
    }
    else if (score < 8 && score >= 5)
    {
        printf("\n\t\t* Good! *\n");
    }
    else
    {
        printf("\n\t\t* Fair! *\n");
    }
}

void chemistry()
{
    int answer, score = 0;
    printf("\n==============================");
    printf("\n--- Chemistry Quiz ---\n");
    printf("==============================\n");

    // Question 1
    printf("\nQ1: ");
    printf("What is the chemical symbol for water?\n");
    printf("1: H2O2\n2: H2O\n3: HO2\n4: HO\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 2
    printf("\nQ2: ");
    printf("Which gas is most abundant in the Earth's atmosphere?\n");
    printf("1: Oxygen \n2: Carbon Dioxide\n3: Nitrogen\n4: Hydrogen\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 3
    printf("\nQ3: ");
    printf("Which element is known as the \"king of chemicals\"?\n");
    printf("1: Carbon \n2: Sulfur\n3: Hydrogen\n4: Chlorine\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 4
    printf("\nQ4: ");
    printf("What is formed when an acid reacts with a base?\n");
    printf("1: Water only \n2: Salt and water\n3: Gas and water\n4: Hydrogen gas\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 5
    printf("\nQ5: ");
    printf("What type of bond involves the sharing of electrons?\n");
    printf("1: Ionic Bond \n2: Covalent Bond\n3: Hydrogen Bond\n4: Metallic Bond\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 6
    printf("\nQ6: ");
    printf("Which compound is known as quicklime?\n");
    printf("1: CaO \n2: CaCO3\n3: MgO\n4: Na2CO3\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 7
    printf("\nQ7: ");
    printf("What are elements in Group 18 of the periodic table called?\n");
    printf("1: Alkali Metals \n2: Hallogens\n3: Noble Gases\n4: Transition Metals\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 8
    printf("\nQ8: ");
    printf("What is the lightest element?\n");
    printf("1: Helium \n2: Hydrogen\n3: Oxygen\n4: Lithium\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 9
    printf("\nQ9: ");
    printf("Which acid is commonly found in vinegar?\n");
    printf("1: Citric Acid \n2: Sulphuric Acid\n3: Hydrochloric Acid\n4: Acetic Acid\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 10
    printf("\nQ10: ");
    printf("Which radioactive element did Marie Curie discover?\n");
    printf("1: Uranium \n2: Polonium\n3: Thorium\n4: Radium\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    printf("\n\nYou score %d/10 in General Knowledge\n", score);

    if (score >= 8)
    {
        printf("\n\t\t* Welldone! *\n");
    }
    else if (score < 8 && score >= 5)
    {
        printf("\n\t\t* Good! *\n");
    }
    else
    {
        printf("\n\t\t* Fair! *\n");
    }
}

void physics()
{
    int answer, score = 0;
    printf("\n==============================");
    printf("\n--- Physics Quiz ---\n");
    printf("==============================\n");

    // Question 1
    printf("\nQ1: ");
    printf("What is the unit of force?\n");
    printf("1: Joule\n2: Watt\n3: Newton\n4: Pascal\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 2
    printf("\nQ2: ");
    printf("What is the speed of light in a vacuum?\n");
    printf("1: 3 x 10^6 m/s \n2: 3 x 10^8 m/s\n3: 3 x 10^5 m/s \n4: 3 x 10^3 m/s\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 3
    printf("\nQ3: ");
    printf("Which physical quantity is measured in joules?\n");
    printf("1: Power \n2: Energy\n3: Force\n4: Pressure\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 4
    printf("\nQ4: ");
    printf("What does the first law of thermodynamics state?\n");
    printf("1: Energy is created \n2: Energy is destroyed\n3: Energy is infinite\n4: Energy is conserved\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 5
    printf("\nQ5: ");
    printf("What does inertia depend on?\n");
    printf("1: Velocity \n2: Mass\n3: Force\n4: Acceleration\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 6
    printf("\nQ6: ");
    printf("Which law explains the motion of a rocket?\n");
    printf("1: Newton's First Law \n2: Newton's Second Law\n3: Newton's Third Law\n4: Law of Conservation of Energy\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 7
    printf("\nQ7: ");
    printf("What is the term for the product of mass and velocity?\n");
    printf("1: Work \n2: Momentum\n3: Force \n4: Energy\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 8
    printf("\nQ8: ");
    printf("What is the unit of temperature in the SI system?\n");
    printf("1: Celcius \n2: Fahrenheit\n3: Kelvin\n4: Joule\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 9
    printf("\nQ9: ");
    printf("What is absolute zero?\n");
    printf("1: 0 C \n2: 0 K\n3: -273 K \n4: 100 C\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 10
    printf("\nQ10: ");
    printf("What is the bending of light called?\n");
    printf("1: Reflection \n2: Refraction\n3: Diffraction \n4: Dispersion\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    printf("\n\nYou score %d/10 in General Knowledge\n", score);

    if (score >= 8)
    {
        printf("\n\t\t* Welldone! *\n");
    }
    else if (score < 8 && score >= 5)
    {
        printf("\n\t\t* Good! *\n");
    }
    else
    {
        printf("\n\t\t* Fair! *\n");
    }
}

void maths()
{
    int answer, score = 0;
    printf("\n==============================");
    printf("\n--- Mathematics Quiz ---\n");
    printf("==============================\n");

    // Question 1
    printf("\nQ1: ");
    printf("What is (x + 2)(x - 3)?\n");
    printf("1: x^2 - x - 6 \n2: x^2 + x - 6\n3: x^2 + x + 6 \n4: x^2 - x + 6\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 2
    printf("\nQ2: ");
    printf("Solve for x: 2x+5=15\n");
    printf("1: 5 \n2: 10\n3: 2.5 \n4: 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 3
    printf("\nQ3: ");
    printf("What is the area of a rectangle with length 10 and width 5?\n");
    printf("1: 25 \n2: 50\n3: 30 \n4: 15\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 4
    printf("\nQ4: ");
    printf("What is the formula for the area of a circle?\n");
    printf("1: (pi)r^2 \n2: 2(pi)r\n3: (pi)r^2 \n4: (pi)d\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 5
    printf("\nQ5: ");
    printf("What is the hypotenuse of a right triangle with legs 3 and 4?\n");
    printf("1: 5 \n2: 6\n3: 7 \n4: 8\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 6
    printf("\nQ6: ");
    printf("What is the mean of 5, 10, 15, and 20?\n");
    printf("1: 10 \n2: 12.5\n3: 15 \n4: 25\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 7
    printf("\nQ7: ");
    printf("If a die is rolled, what is the probability of rolling a 6?\n");
    printf("1: 1/6 \n2: 1/3\n3: 1/2 \n4: 2/3\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 8
    printf("\nQ8: ");
    printf("Is 17 a prime number?\n");
    printf("1: Yes \n2: No\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 9
    printf("\nQ9: ");
    printf("If a coin is tossed, what is the probability of getting heads??\n");
    printf("1: 1/2 \n2: 1/3\n3: 1 \n4: 1/4\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 10
    printf("\nQ10: ");
    printf("What is the probability of rolling an even number on a standard six-sided die?\n");
    printf("1: 1/2 \n2: 1/3\n3: 2/3 \n4: 1/6\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    printf("\n\nYou score %d/10 in General Knowledge\n", score);

    if (score >= 8)
    {
        printf("\n\t\t* Welldone! *\n");
    }
    else if (score < 8 && score >= 5)
    {
        printf("\n\t\t* Good! *\n");
    }
    else
    {
        printf("\n\t\t* Fair! *\n");
    }
}

void history()
{
    int answer, score = 0;
    printf("\n==============================");
    printf("\n--- History Quiz ---\n");
    printf("==============================\n");

    // Question 1
    printf("\nQ1: ");
    printf("The Great Wall of China was built primarily to protect against which group?\n");
    printf("1: Huns \n2: Mongols\n3: Japanese \n4: Koreans\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 2
    printf("\nQ2: ");
    printf("Who is known as the \"Father of History\"?\n");
    printf("1: Herodotus \n2: Socrates\n3: Aristotle \n4: Plato\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 3
    printf("\nQ3: ");
    printf("Which civilization is credited with the invention of writing?\n");
    printf("1: Egyptians \n2: Greeks\n3: Sumerians \n4: Indus Valley Civilization\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 4
    printf("\nQ4: ");
    printf("Who was the Muslim leader during the Crusades known for recapturing Jerusalem?\n");
    printf("1: Salauddin \n2: Genghis Khan\n3: Sultan Suleiman \n4: Timur\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 5
    printf("\nQ5: ");
    printf("Who discovered America in 1492?\n");
    printf("1: Amerigo Vespucci \n2: Christopher Columbus\n3: Vasco da Gamma \n4: Ferdinand Magellan\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 6
    printf("\nQ6: ");
    printf("The French Revolution began in which year?\n");
    printf("1: 1789 \n2: 1793\n3: 1804 \n4: 1815\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 7
    printf("\nQ7: ");
    printf("Who was the first President of the United States?\n");
    printf("1: Abraham Lincoln \n2: John Adams\n3: Thomas Jefferson \n4: George Washington\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 8
    printf("\nQ8: ");
    printf("In which year did the Industrial Revolution begin?\n");
    printf("1: 16th century \n2: 17th century\n3: 18th century \n4: 19th century\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 9
    printf("\nQ9: ");
    printf("Who was the German leader during World War II?\n");
    printf("1: Otto von Bismarck \n2: Kaiser Wilhelm II\n3: Heinrich Himmler \n4: Adolf Hitler\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 10
    printf("\nQ10: ");
    printf("When was the World War II started\n");
    printf("1: 1941 \n2: 1940\n3: 1939 \n4: 1938\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    printf("\n\nYou score %d/10 in General Knowledge\n", score);

    if (score >= 8)
    {
        printf("\n\t\t* Welldone! *\n");
    }
    else if (score < 8 && score >= 5)
    {
        printf("\n\t\t* Good! *\n");
    }
    else
    {
        printf("\n\t\t* Fair! *\n");
    }
}

void cs()
{
    int answer, score = 0;
    printf("\n==============================");
    printf("\n--- Computer Science Quiz ---\n");
    printf("==============================\n");

    // Question 1
    printf("\nQ1: ");
    printf("Which part of the computer performs calculations?\n");
    printf("1: Monitor \n2: CPU\n3: GPU \n4: RAM\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 2
    printf("\nQ2: ");
    printf("What does RAM stand for?\n");
    printf("1: Random Access Memory \n2: Read-Only Memory\n3: Rapid Access Memory \n4: Run Access Memory\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 3
    printf("\nQ3: ");
    printf("What is the smallest unit of data in a computer?\n");
    printf("1: Byte \n2: Bit\n3: Nibble \n4: Word\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 4
    printf("\nQ4: ");
    printf("What is the main function of an operating system?\n");
    printf("1: Virus Protection \n2: Manage hardware and software resources\n3: Wite code \n4: Play music\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 5
    printf("\nQ5: ");
    printf("What does GUI stand for?\n");
    printf("1: General User Interface \n2: Graphical User Interface\n3: Graphical Utility Interface \n4: General Utility Interface\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 6
    printf("\nQ6: ");
    printf("Which of these is an open-source operating system?\n");
    printf("1: Windows \n2: Linux\n3: MacOS \n4: iOS\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 7
    printf("\nQ7: ");
    printf("What does IP stand for in networking?\n");
    printf("1: Internet Protocol \n2: Inter Protocol\n3: Intranet Protocol \n4: Internal Protocol\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 8
    printf("\nQ8: ");
    printf("What does DNS stand for?\n");
    printf("1: Domain Name Service \n2: Domain Name System\n3: Digital Network System \n4: Data Name Service\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 9
    printf("\nQ9: ");
    printf("What is the full form of LAN?\n");
    printf("1: Large Area Network \n2: Local Area Network\n3: Long Access Network \n4: Low Area Network\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 10
    printf("\nQ10: ");
    printf("What does BUS stand for in computer architecture?\n");
    printf("1: Binary User System \n2: Built-in Universal System\n3: Binary Unit System \n4: None of these\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    printf("\n\nYou score %d/10 in General Knowledge\n", score);

    if (score >= 8)
    {
        printf("\n\t\t* Welldone! *\n");
    }
    else if (score < 8 && score >= 5)
    {
        printf("\n\t\t* Good! *\n");
    }
    else
    {
        printf("\n\t\t* Fair! *\n");
    }
}

void biology()
{
    int answer, score = 0;
    printf("\n==============================");
    printf("\n--- Biology Quiz ---\n");
    printf("==============================\n");

    // Question 1
    printf("\nQ1: ");
    printf("What is the basic unit of life?\n");
    printf("1: Tissue \n2: Cell\n3: Organ \n4: Organism\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 2
    printf("\nQ2: ");
    printf("What is the powerhouse of the cell?\n");
    printf("1: Ribosome \n2: Nucleus\n3: Golgi body \n4: Mitochondria\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 3
    printf("\nQ3: ");
    printf("Which part of the brain controls balance and coordination?\n");
    printf("1: Cerebrum \n2: Cerebellum\n3: Brainstem \n4: Hypothalamus\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 4
    printf("\nQ4: ");
    printf("What type of tissue transports water in plants?\n");
    printf("1: Phloem \n2: Xylem\n3: Epidermis \n4: Cambium\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 5
    printf("\nQ5: ");
    printf("What are the reproductive structures in flowers called?\n");
    printf("1: Leaves \n2: Petals\n3: Stigma and stamen \n4: Stem\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 6
    printf("\nQ6: ");
    printf("How many chromosomes are there in a normal human cell?\n");
    printf("1: 23 \n2: 46\n3: 48 \n4: 25\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 7
    printf("\nQ7: ");
    printf("What is the genetic material of a virus?\n");
    printf("1: Proteins \n2: Carbohydrates\n3: Lipids \n4: DNA or RNA\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 8
    printf("\nQ8: ");
    printf("Which type of blood group is called the universal donor?\n");
    printf("1: A \n2: B\n3: AB \n4: O\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 9
    printf("\nQ9: ");
    printf("What is the study of fungi called?\n");
    printf("1: Zoology \n2: Botany\n3: Mycology \n4: Ecology\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 10
    printf("\nQ10: ");
    printf("Which organ is responsible for detoxifying chemicals in the human body?\n");
    printf("1: Heart \n2: Kidney\n3: Lungs \n4: Liver\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    printf("\n\nYou score %d/10 in General Knowledge\n", score);

    if (score >= 8)
    {
        printf("\n\t\t* Welldone! *\n");
    }
    else if (score < 8 && score >= 5)
    {
        printf("\n\t\t* Good! *\n");
    }
    else
    {
        printf("\n\t\t* Fair! *\n");
    }
}

void programming()
{
    int answer, score = 0;
    printf("\n==============================");
    printf("\n--- Programming Quiz ---\n");
    printf("==============================\n");

    // Question 1
    printf("\nQ1: ");
    printf("Which of the following is not a programming language?\n");
    printf("1: Python \n2: HTML\n3: JavaScript \n4: Java\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 2
    printf("\nQ2: ");
    printf("What is the main function of a variable in programming?\n");
    printf("1: Store data \n2: Perform Calculations\n3: Display Output \n4: Debug errors\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 3
    printf("\nQ3: ");
    printf("What is an algorithm?\n");
    printf("1: A programming language \n2: A set of rules ot steps to solve a problem\n3: A debugging tool \n4: A type of data structure\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 4
    printf("\nQ4: ");
    printf("What does a break statement do in a loop?\n");
    printf("1: Skips the next iteration \n2: Restart the loop immediately\n3: Restart the loop \n4: Does nothing\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 5
    printf("\nQ5: ");
    printf("Which of these is a conditional operator in C?\n");
    printf("1: && \n2: ?:\n3: == \n4: =\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 6
    printf("\nQ6: ");
    printf("Which loop executes at least once, regardless of condition?\n");
    printf("1: for loop \n2: while loop\n3: do-while loop \n4: infinte loop\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 7
    printf("\nQ7: ");
    printf("Which data type is used to store decimal values in C?\n");
    printf("1: int \n2: char\n3: double \n4: float\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 8
    printf("\nQ8: ");
    printf("What does IDE stand for in programming?\n");
    printf("1: Integrated Development Environment \n2: Internal Debugging Environment\n3: Independent Development Emulator \n4: Integrated Debugging Emulator\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 9
    printf("\nQ9: ");
    printf("What is the full form of API?\n");
    printf("1: Application Process Interface \n2: Application Protocol Interface\n3: Application Programming Interface \n4: Application Process Integration\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 10
    printf("\nQ10: ");
    printf("Which symbol is used to terminate a statement in C++?\n");
    printf("1: , \n2: .\n3: : \n4: ;\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    printf("\n\nYou score %d/10 in General Knowledge\n", score);

    if (score >= 8)
    {
        printf("\n\t\t* Welldone! *\n");
    }
    else if (score < 8 && score >= 5)
    {
        printf("\n\t\t* Good! *\n");
    }
    else
    {
        printf("\n\t\t* Fair! *\n");
    }
}

void iq()
{
    int answer, score = 0;
    printf("\n==============================");
    printf("\n--- IQ Quiz ---\n");
    printf("==============================\n");

    // Question 1
    printf("\nQ1: ");
    printf("If you rearrange the letters \"CIFAIPC,\" you get the name of a:\n");
    printf("1: Country \n2: Ocean\n3: City \n4: Animal\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 2
    printf("\nQ2: ");
    printf("What comes next in the sequence: 1, 4, 9, 16, 25, ...?\n");
    printf("1: 30 \n2: 64\n3: 36 \n4: 49\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 3
    printf("\nQ3: ");
    printf("Which number should replace the question mark: 3, 6, 9, ?, 15?\n");
    printf("1: 10 \n2: 11\n3: 12 \n4: 13\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 4
    printf("\nQ4: ");
    printf("Which is the odd one out?\n");
    printf("1: Triangle \n2: Circle\n3: Rectangle \n4: Cube\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 4)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 5
    printf("\nQ5: ");
    printf("A car travels at 60 km/h for 2 hours. How far does it travel?\n");
    printf("1: 60 km \n2: 100 km\n3: 120 km \n4: 150 km\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 3)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 6
    printf("\nQ6: ");
    printf("What comes next in the series: A, C, E, G, ...?\n");
    printf("1: H \n2: I\n3: J \n4: K\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 7
    printf("\nQ7: ");
    printf("What comes next in the pattern: 2, 5, 10, 17, 26, ...?\n");
    printf("1: 35 \n2: 37\n3: 38 \n4: 39\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 8
    printf("\nQ8: ");
    printf("Which letter is missing: _BCD, EFGH, IJKL?\n");
    printf("1: A \n2: M\n3: X \n4: N\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 9
    printf("\nQ9: ");
    printf("Which word is a synonym of \"happy\"?\n");
    printf("1: Sad \n2: Joyful\n3: Angry \n4: Tired\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 2)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    // Question 10
    printf("\nQ10: ");
    printf("If \"CAT\" is coded as 3120, how is \"DOG\" coded?\n");
    printf("1: 4150 \n2: 4170\n3: 4151 \n4: 5121\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);
    if (answer == 1)
    {
        printf("\n\t\t* Right Answer *\n");
        score++;
    }
    else
    {
        printf("\n\t\t* Wrong Answer *\n");
    }

    printf("\n\nYou score %d/10 in General Knowledge\n", score);

    if (score >= 8)
    {
        printf("\n\t\t* Welldone! *\n");
    }
    else if (score < 8 && score >= 5)
    {
        printf("\n\t\t* Good! *\n");
    }
    else
    {
        printf("\n\t\t* Fair! *\n");
    }
}
