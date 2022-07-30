#include <iostream>
#include <windows.h>
using namespace std;

class University
{
public:
    int choice;
    int intro()
    {
        system("cls");
        system("color 0D");
        cout << "\n\n\n                              ***************    WELCOME TO SHIVAJI UNIVERSITY KOLHAPUR    ***************" << endl;
        Sleep(300);

        cout << "\n\n                      Shivaji University, Kolhapur is located in Kolhapur, Maharashtra.Established in 1962, the name of the university is named in the memory of the Great Maratha Warrior and the founder of the Maratha Empire Chhatrapati Shivaji.The university has 280 Shivaji affiliated colleges and recognized institutes.Also there are 34 post-graduate departments currently.SUK has established a unique scheme forthe meritious students called 'Shivaji University Merit Scholarship'  offering 500 scholarships and also initiating a research fellowship for Ph.D. students in the PG Departments. It also worked on making opportunities for higher education accessible to rural youth,conducting fundamental and applied research in the field of science and humanities to ensure regional growth and development " << endl;
        Sleep(300);

        cout << "                   Under Graduation is a course that is done after passing from class 12. It is of minimum 3 to 4 years depending on the course the candidate has chosen. An Under Graduate Degree is taken by a candidate after completing their graduation. A postgraduate course is typically one year's duration full time or it can take two years to complete part-time. A postgraduate diploma, postgraduate degree or Master's degree offers the student an advanced level of education in their chosen area of study." << endl
             << endl;
        Sleep(300);
        cout << "\n\nEnter which TYPE OF EDUCATION that you want:    " << endl;
        Sleep(300);

        cout << "        1) Under_Graduate." << endl;
        Sleep(300);
        cout << "        2) Post_Graduate." << endl;

        Sleep(300);
        cin >> choice;
        system("cls");
    }
};

int KIT_college()
{
    string btech_kit = "start  https://vishaldange.github.io/BTECH_KITCLG/";
    system(btech_kit.c_str());
    cin.get();
    return 0;
}
int TKIET_college()
{
    string btech_tkiet = "start https://vishaldange.github.io/BTECH_TKIET/";
    system(btech_tkiet.c_str());
    cin.get();
    return 0;
}
int DYPCET_college()
{
    string btech_dypcet = "start   https://vishaldange.github.io/BTECH_DYPCET/";
    system(btech_dypcet.c_str());
    cin.get();
    return 0;
}
int DYPCOE_college()
{
    string btech_dypsn = "start     https://vishaldange.github.io/BTECH_DYPSN/";
    system(btech_dypsn.c_str());
    cin.get();
    return 0;
}
int JJMAGADUM_college()
{
    string btech_jjmagadum = "start   https://vishaldange.github.io/BTECH_JJMAGADUM/";
    system(btech_jjmagadum.c_str());
    cin.get();
    return 0;
}
int BHARATI_college()
{
    string btech_bharati = "start   https://vishaldange.github.io/BTECH_BHARATI_CLG/";
    system(btech_bharati.c_str());
    cin.get();
    return 0;
}
int computer_science()
{
    int choice; 
    int choice1;
    cout << "YOU SELECTED COMPUTER SCIENCE AND ENGINEERING.....!\n"
         << endl;
    cout << " Which TYPE OF COLLEGE Do you Want ? Enter your choice number.\n                  1)Autonomous college, \n                  2)Non Autonomous." << endl;

    cin >> choice;
    system("cls");
    if (choice == 1)
    {
        cout << "Enter choice number of College that You Want ?\n                   1)KIT(KOLHAPUR),\n                   2)TKIET(WARANA),\n                   3)DYPCET (KASABA BAWADA)" << endl;
        cin >> choice1;
        system("cls");
        if (choice1 == 1)
        {
            KIT_college();
        }
        else if (choice1 == 2)
        {
            TKIET_college();
        }
        else if (choice1 == 3)
        {
            DYPCET_college();
        }
        else
        {
            cout << "Enter valid choice.." << endl;
            computer_science();
        }
    }
    else if (choice == 2)
    {
        cout << "Enter choice number of College that You Want ?\n                   1)DYPCOE(SALOKHENAGAR),\n                   2)JJ MAGADUM (JAYASINGPUR),\n                   3)BHARATI VIDYAPITH(KOLHAPUR)" << endl;
        cin >> choice1;
        system("cls");
        if (choice1 == 1)
        {
            DYPCOE_college();
        }
        else if (choice1 == 2)
        {
            JJMAGADUM_college();
        }
        else if (choice1 == 3)
        {
            BHARATI_college();
        }
        else
        {
            cout << "Enter valid choice.." << endl;
            computer_science();
        }
    }
    else
    {
        cout << "Enter valid choice.." << endl;
        computer_science();
    }
}

int civil()
{
    int choice;
    int choice1;
    cout << "YOU SELECTED CIVIL ENGINEERING.....!\n"
         << endl;
    cout << "Select Which TYPE OF COLLEGE Do you Want ?\n                  1)Aotonomous college, \n                  2)Non Autonomous." << endl;

    cin >> choice;
    system("cls");
    if (choice == 1)
    {

        cout << "Enter choice number of College that You Want ?\n                   1)KIT(KOLHAPUR),\n                   2)TKIET(WARANA),\n                   3)DYPCET (KASABA BAWADA)" << endl;
        cin >> choice1;
        system("cls");
        if (choice1 == 1)
        {
            KIT_college();
        }
        else if (choice1 == 2)
        {
            TKIET_college();
        }
        else if (choice1 == 3)
        {
            DYPCET_college();
        }
        else
        {
            cout << "Enter valid choice.." << endl;
            civil();
        }
    }

    else if (choice == 2)
    {

        cout << "Enter choice number of College that You Want ?\n                   1)DYPCOE(SALOKHENAGAR),\n                   2)JJ MAGADUM (JAYASINGPUR),\n                   3)BHARATI VIDYAPITH(KOLHAPUR)" << endl;
        cin >> choice1;

        system("cls");
        if (choice1 == 1)
        {
            DYPCOE_college();
        }
        else if (choice1 == 2)
        {
            JJMAGADUM_college();
        }
        else if (choice1 == 3)
        {
            BHARATI_college();
        }
        else
        {
            cout << "Enter valid choice.." << endl;
            civil();
        }
    }
    else
    {
        cout << "Enter valid choice.." << endl;
        civil();
    }
}

int electrical()
{
    {
        int choice;
        int choice1;
        cout << "YOU SELECTED ELECTRICAL ENGINEERING.....!\n"
             << endl;
        cout << "Select Which TYPE OF COLLEGE Do you Want ?\n                  1)Aotonomous college, \n                  2)Non Autonomous." << endl;

        cin >> choice;
        system("cls");
        if (choice == 1)
        {
            cout << "Enter choice number of College that You Want ?\n                   1)KIT(KOLHAPUR),\n                   2)TKIET(WARANA),\n                   3)DYPCET (KASABA BAWADA)" << endl;
            cin >> choice1;
            system("cls");
            if (choice1 == 1)
            {
                KIT_college();
            }
            else if (choice1 == 2)
            {
                TKIET_college();
            }
            else if (choice1 == 3)
            {
                DYPCET_college();
            }
            else
            {
                cout << "Enter valid choice.." << endl;
                electrical();
            }
        }
        else if (choice == 2)
        {
            cout << "Enter choice number of College that You Want ?\n                   1)DYPCOE(SALOKHENAGAR),\n                   2)JJ MAGADUM (JAYASINGPUR),\n                   3)BHARATI VIDYAPITH(KOLHAPUR)" << endl;
            cin >> choice1;
            system("cls");
            if (choice1 == 1)
            {
                DYPCOE_college();
            }
            else if (choice1 == 2)
            {
                JJMAGADUM_college();
            }
            else if (choice1 == 3)
            {
                BHARATI_college();
            }
            else
            {
                cout << "Enter valid choice.." << endl;
                electrical();
            }
        }
        else
        {
            cout << "Enter valid choice.." << endl;
            electrical();
        }
    }
}

int mechanical()
{
    {
        int choice;
        int choice1;
        cout << "YOU SELECTED MECHANICAL ENGINEERING.....!\n"
             << endl;
        cout << "Select Which TYPE OF COLLEGE Do you Want ?\n                  1)Aotonomous college, \n                  2)Non Autonomous." << endl;

        cin >> choice;
        system("cls");
        if (choice == 1)
        {
            cout << "Enter choice number of College that You Want ?\n                   1)KIT(KOLHAPUR),\n                   2)TKIET(WARANA),\n                   3)DYPCET (KASABA BAWADA)" << endl;
            cin >> choice1;
            system("cls");
            if (choice1 == 1)
            {
                KIT_college();
            }
            else if (choice1 == 2)
            {
                TKIET_college();
            }
            else if (choice1 == 3)
            {
                DYPCET_college();
            }
            else
            {
                cout << "Enter valid choice.." << endl;
                mechanical();
            }
        }
        else if (choice == 2)
        {
            cout << "Enter choice number of College that You Want ?\n                   1)DYPCOE(SALOKHENAGAR),\n                   2)JJ MAGADUM (JAYASINGPUR),\n                   3)BHARATI VIDYAPITH(KOLHAPUR)" << endl;
            cin >> choice1;
            system("cls");
            if (choice1 == 1)
            {
                DYPCOE_college();
            }
            else if (choice1 == 2)
            {
                JJMAGADUM_college();
            }
            else if (choice1 == 3)
            {
                BHARATI_college();
            }
            else
            {
                cout << "Enter valid choice.." << endl;
                mechanical();
            }
        }
        else
        {
            cout << "Enter valid choice.." << endl;
            mechanical();
        }
    }
}

int bTech_stream(int ch)
{
    system("cls");
    int choice;
    double ch2;

    cout << "You choose B_Tech...!" << endl;
    cout << "In B_Tech there are many streams are available. Select which STREAM do you want: \n                   1)COMPUTER SCIENCE AND ENGINEERING,\n                   2)CIVIL ENGINEERING,\n                   3)ELECTRICAL ENGINEERING,\n                   4)MECHANICAL ENGINEERING.\n"
         << endl;

    cout << "Enter choice number of stream that you want " << endl;
    cin >> choice;
    ch2 = choice;

    system("cls");

    if (choice == 1)
    {
        computer_science();
    }
    else if (choice == 2)
    {
        civil();
    }
    else if (choice == 3)
    {
        electrical();
    }
    else if (choice == 4)
    {
        mechanical();
    }

    else
    {
        cout << "Enter valid choice.." << endl;
        bTech_stream(ch);
    }
}

int bcs_college(int ch)
{
    int choice;
    cout << "You choose BCS...!" << endl;
    cout << "                 BCS, full form Bachelor of Computer Science, is a 3 year undergraduate course with a specialization in the domain of computer science, software and hardware related aspects. The minimum eligibility at least 45% (relaxable for reserved category candidates) at 10+2 with mathematics.BCS course is perfect for students who want to make a career in computers and related subjects. Major Bachelor of Computer Science subjects includes Electronic devices, Digital Electronics, Computer Programming Theory, Discrete Mathematics, Advanced Programming using Python, C++, Java, etc.The Bachelor of Computer Science course curriculum is inclusive of theory and practicals which makes the students well trained and skillful in the field of programming, software, hardware and network." << endl;
    cout << " For BCS there are many colleges are available in Shivaji University Among them Three colleges are as follows: \n                   1)THE NEW COLLEGE,\n                   2)VIVEKANAND COLLEGE,\n                   3)RAJARSHI CHHATRAPATI SHAHU COLLEGE.\n"
         << endl;
    cout << "Enter choice number of college that you want to select ? " << endl;
    cin >> choice;

    if (choice == 1)
    {
        string bcs_newclg = "start  https://vishaldange.github.io/BCS_NEWCLG/";
        system(bcs_newclg.c_str());
        cin.get();
    }
    else if (choice == 2)
    {
        string bcs_vckclg = "start  https://vishaldange.github.io/BCS_VCK/";
        system(bcs_vckclg.c_str());
        cin.get();
    }
    else if (choice == 3)
    {
        string bcs_shahuclg = "start  https://vishaldange.github.io/BCS_SHAHUCLG/";
        system(bcs_shahuclg.c_str());
        cin.get();
    }
    else
    {
        cout << "Enter valid choice.." << endl;
        bcs_college(ch);
    }
}

int bca_college(int ch)
{
    int X;
X:
    int choice;
    cout << "You choose BCA...!" << endl;
    cout << "\n                   The full form of BCA is Bachelors in Computer Application. BCA is a 3-year undergraduate degree programme that focusses on knowledge on the basics of computer application and software development. A BCA degree is considered to be at per with a BTech/BE degree in Computer Science or Information Technology. The degree helps interested students in setting up a sound academic base for an advanced career in Computer Applications.The course of BCA includes database management systems, operating systems, software engineering, web technology and languages such as C, C++, HTML, Java etc. The fees for BCA generally ranges from INR 37,500 to 5 lakh." << endl;
    cout << " The minimum and most important eligibility criteria for BCA followed across all colleges is 45 per cent marks in Class 12 or equivalent examination. There are no subject level restrictions for pursuing BCA as students with any subjects in Class 11 and 12 can apply for BCA unlike BTech." << endl;
    cout << " For BCA there are many colleges are available in Shivaji University Among them Three colleges are as  /123 /10.follows: \n                   1)THE NEW COLLEGE,\n                   2)VIVEKANAND COLLEGE,\n                   3)GOPAL KRUSHNA GOKJHALE COLLEGE.\n"
         << endl;
    cout << "Enter choice number of college that you want to select ? " << endl;
    cin >> choice;
    system("cls");
    system("color 0D");

    if (choice == 1)
    {
        string bca_new = "start https://vishaldange.github.io/BCA_NEWCLG/";
        system(bca_new.c_str());
        cin.get();
    }
    else if (choice == 2)
    {
        string bca_vck = "start https://vishaldange.github.io/BCA_VCK/";
        system(bca_vck.c_str());
        cin.get();
    }
    else if (choice == 3)
    {
        string bca_gokhale = "start https://vishaldange.github.io/BCA_GOKHALE/";
        system(bca_gokhale.c_str());
        cin.get();
    }

    else
    {
        cout << "Enter valid choice.." << endl;
        bca_college(ch);
    }
}

int shahuInstitude()
{
    string mca_shahuclg = "start  https://vishaldange.github.io/MCA_SHAHU_CLG/";
    system(mca_shahuclg.c_str());
    cin.get();
}
int KIT_MCA()
{
    string mca_kitclg = "start  https://vishaldange.github.io/MCA_KIT/";
    system(mca_kitclg.c_str());
    cin.get();
}
int GCEK()
{
    string mca_gcekclg = "start   https://vishaldange.github.io/MCA_GCEKCLG/";
    system(mca_gcekclg.c_str());
    cin.get();
}
int mca_stream(int ch)
{
    int choice;
    cout << "You Selected MCA.....!" << endl;
    cout << "Enter choice number of college that you want ?\n                   1)Chhatrapati Shahu Institute of Business Education and Research, Kolhapur.\n                   2)KIT's Institute of Management Education & Research,Kolhapur,\n                   3)Government College of Engineering, Karad (GCEK),Kolhapur." << endl;
    cin >> choice;
    system("cls");
    if (choice == 1)
    {
        shahuInstitude();
    }
    else if (choice == 2)
    {
        KIT_MCA();
    }
    else if (choice == 3)
    {
        GCEK();
    }
    else
    {
        cout << "Enter valid choice..." << endl;
        mca_stream(ch);
    }
}

int KIT_MTECH()
{
    string mtech_kitclg = "start  https://vishaldange.github.io/MTECH_KIT/";
    system(mtech_kitclg.c_str());
    cin.get();
}
int DYP_MTECH()
{
    string mtech_dypcet = "start  https://vishaldange.github.io/MTECH_DYPCET/";
    system(mtech_dypcet.c_str());
    cin.get();
}
int DKTE_MTECH()
{
    string mtech_dkteclg = "start  https://vishaldange.github.io/MTECH_DKTECLG/";
    system(mtech_dkteclg.c_str());
    cin.get();
}
int RIT_MTECH()
{
    string mtech_ritclg = "start  https://vishaldange.github.io/MTECH_RIT/";
    system(mtech_ritclg.c_str());
    cin.get();
}

int CSE()
{
    int choice;
    int choice1;
    cout << "You Selected COMPUTER SCIENCE AND ENGINEERING..." << endl;
    cout << "\n                   M.Tech in Computer Science and Engineering is one of the specialized degrees in the Masters Programme for Computer Science enthusiasts. It is an ideal course for students who are more inclined towards the technological aspect in their Bachelor in Computer Science Degree.The course makes the students to have a good understanding of the theoretical foundations and limits of computing, adapting to existing models, techniques, algorithms and data structures.The programme develops an ability to undertake original research in cutting edge computer science and related areas.Elective papers include Modern Algorithm Design, Randomised Algorithm, Graduate Algorithm with Computer Architecture and Programme Analysis." << endl
         << endl;
    cout << "Enter choice number of college that you want?\n                   1)KIT College of Engineering, Kolhapur,\n                   2)Dr DY Patil College of Engineering and Technology (DYPCOET),\n                   3)D.K.T.E. Society's Textile and Engineering Institute , Kolhapur,\n                   4)Rajarambapu Institute of Technology , Kolhapur." << endl
         << endl;
    cin >> choice;
    system("cls");
    if (choice == 1)
    {
        KIT_MTECH();
    }
    else if (choice == 2)
    {
        DYP_MTECH();
    }
    else if (choice == 3)
    {
        DKTE_MTECH();
    }
    else if (choice == 4)
    {
        RIT_MTECH();
    }
    else
    {
        cout << "Error....! Enter valid choice." << endl;
        CSE();
    }
}

int CAD_CAM()
{
    int choice;
    int choice1;
    cout << "You Selected CAD/CAM ENGINEERING..." << endl;
    cout << "\n                   M.Tech CAD/CAM full form is Master of Technology in Computer Aided Design and Computer Aided Manufacturing. It is a two-year-long postgraduate course that deals with the knowledge and skill development in applying computer and scientific principles related to solving engineering and manufacturing problems. There are many job opportunities available for graduates of M.Tech in CAD/CAM courses. Some of the job roles for M.Tech CAD/ CAM graduates are Architectural Designer Conservationist Surveyor Civil Engineer Technician Electrical Designer Aerospace Designer." << endl
         << endl;
    cout << "Enter one for college information\n                   1)KIT College of Engineering, Kolhapur,\n"
         << endl
         << endl;
    cin >> choice;
    system("cls");
    if (choice == 1)
    {
        KIT_MTECH();
    }

    else
    {
        cout << "Error....! Enter valid choice." << endl;
        CAD_CAM();
    }
}

int E_AND_TC()
{
    int choice;
    int choice1;
    cout << "You Selected ELECTRONIC AND TELECOMMUNICATION  ENGINEERING..." << endl;
    cout << "\n                  Master of Technology (M Tech.) in Electronics and Telecommunications Engineering is a postgraduate degree in engineering. It is one of the allied branches of engineering within the Electronics Domain.This industry is one of the fastest-growing industries in India that is growing at a rate of 19.16% per year. India is the second-largest telecommunication market in the world, and would offer a lot of employment opportunities to PG graduates in the field of Electronics and Telecommunication.The minimum eligibility criteria for admission to the course is that the candidates should hold a B.E or B.Tech Degree in the relevant field with an aggregate score of 50% from a recognized university. One of the main eligibility criteria of the M.Tech course is that the candidates are required to pass the GATE or other relevant  Entrance Examination examination.The  M.Tech  Electronics and Telecommunications Syllabus focuses on how the different components of the Communication system interact with each other. This course provides students with sound grounding of electronic engineering plus the theory and applications of communication systems." << endl
         << endl;
    cout << "Enter the choice number of college that you want?\n                   1)KIT College of Engineering, Kolhapur,\n                   2)Dr DY Patil College of Engineering and Technology (DYPCOET),\n                   3)D.K.T.E. Society's Textile and Engineering Institute , Kolhapur,\n                   4)Rajarambapu Institute of Technology , Kolhapur." << endl
         << endl;
    cin >> choice;
    system("cls");
    if (choice == 1)
    {
        KIT_MTECH();
    }
    else if (choice == 2)
    {
        DYP_MTECH();
    }
    else if (choice == 3)
    {
        DKTE_MTECH();
    }
    else if (choice == 4)
    {
        RIT_MTECH();
    }
    else
    {
        cout << "Error....! Enter valid choice." << endl;
        E_AND_TC();
    }
}

int MECH()
{
    int choice;
    int choice1;
    cout << "You Selected ELECTRONIC AND TELECOMMUNICATION  ENGINEERING..." << endl;
    cout << "\n                  M.Tech Mechanical engineering is a 2-year postgraduate degree course that deals with studying engineering, physics, and materials science to design, analyze, manufacture, and maintain mechanical systems. The main aim of the course is to train the students in areas involving design, production and operation of machinery. The graduates pursuing the course of M.Tech Mechanical Engineering have a wide number of job opportunities in various domains such as engineering, physics and operation of machinery. The course of M.Tech Mechanical Engineering has a very scope of jobs with a decent salary package both in private and public sectors of the organizations." << endl
         << endl;
    cout << "Enter the choice number of college that you want?\n                   1)KIT College of Engineering, Kolhapur,\n                   2)Dr DY Patil College of Engineering and Technology (DYPCOET),\n                   3)D.K.T.E. Society's Textile and Engineering Institute , Kolhapur,\n                   4)Rajarambapu Institute of Technology , Kolhapur." << endl
         << endl;
    cin >> choice;
    system("cls");
    if (choice == 1)
    {
        KIT_MTECH();
    }
    else if (choice == 2)
    {
        DYP_MTECH();
    }
    else if (choice == 3)
    {
        DKTE_MTECH();
    }
    else if (choice == 4)
    {
        RIT_MTECH();
    }
    else
    {
        cout << "Error....! Enter valid choice." << endl;
        MECH();
    }
}

int mTech_stream(int ch)
{
    {
        int choice;
        cout << "You choose M_Tech...!\n                    M Tech Full Form is Master of Technology. M Tech duration is 2 years. It deals with existing technologies and creates new paths for research and development. This degree is offered in 4 different categories such as Regular or Full Time, Sponsored, Part-time and project staff." << endl;
        cout << "In M_Tech there are many streams are available. Select which STREAM do you want: \n                   1)COMPUTER SCIENCE AND ENGINEERING,\n                   2)CAD/CAM  ENGINEERING,\n                   3)ELECTRONIC AND TELECOMMUNICATION  ENGINEERING.\n                   4)MECHANICAL ENGINEERING.\n"
             << endl;

        cout << "Enter the choice number of stream that  you want ? " << endl;
        cin >> choice;
        system("cls");

        if (choice == 1)
        {
            CSE();
        }
        else if (choice == 2)
        {
            CAD_CAM();
        }
        else if (choice == 3)
        {
            E_AND_TC();
        }
        else if (choice == 4)
        {
            MECH();
        }
        else
        {
            cout << "Error.......! Enter valid choice.." << endl;
            mTech_stream(ch);
        }
    }
}

class course : public University
{
public:
    int ch;
    void fun1()
    {
        if (choice == 1)
        {
            cout << "You choose Under_Graduate...!" << endl;
            cout << "                       There are a lot of courses are provided by Shivaji University Kolhapur, in which  For Under Graduate there are three\ncources are provided which are as follows:  \n                   1)B.Tech (bachelor of Technology),\n                   2)BCS (bachelor of Computer Science),\n                   3)BCA (bachelor of Computer Application)" << endl;
            cout << "Enter the choice number of course that you want.." << endl;
            cin >> ch;
            system("cls");

            if (ch == 1)
            {
                bTech_stream(ch);
            }

            else if (ch == 2)
            {
                bcs_college(ch);
            }
            else if (ch == 3)
            {
                bca_college(ch);
            }
            else
            {
                cout << "Enter valid choice.." << endl;
                fun1();
            }
        }
        else if (choice == 2)
        {
            cout << "\n You choose Post_Graduate...!" << endl;

            cout << "\n\n For Post Graduate there are Two courses are provided which are as follows: \n                   1)MCA (Master of Computer Application),\n                   2)M.Tech (Master of Technology)." << endl;
            cout << "Enter the choice number of course that you want.." << endl;
            cin >> ch;
            system("cls");

            if (ch == 1)
            {
                mca_stream(ch);
            }

            else if (ch == 2)
            {
                mTech_stream(ch);
            }
            
            else
            {
                cout << "Enter valid choice.." << endl;
                fun1();
            }
            
        }
        else
        {
            cout << "Error! Enter Valid choice..." << endl;
            intro();
        }
    }
};

int main()
{
    course u;
    u.intro();
    u.fun1();
    return 0;
}