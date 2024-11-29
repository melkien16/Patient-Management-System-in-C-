#include <iostream>
#include <string>
using namespace std;
// Structure of array to patients profiles.

struct PatientProfile {
    string firstName;
    string lastName;
    int age;
    char gender;
    string bloodGroup;
    string allergic;
    int phoneNumber;
}patients[50];

 //This function is used to store patient information
 void patientInfo(int patient_number){
        
    cout << "\n\tFirst Name: ";
    cin >> patients[patient_number].firstName;
    cout << "\tLast Name: ";
    cin >> patients[patient_number].lastName;
    cout << "\tAge: ";
    cin >> patients[patient_number].age;
    cout << "\tGender: ";
    cin >> patients[patient_number].gender;
    cout << "\tBlood Group: ";
    cin >> patients[patient_number].bloodGroup;
    cout << "\tAllergic: ";
    cin >> patients[patient_number].allergic;
    cout << "\tPhone Number: ";
    cin >> patients[patient_number].phoneNumber;
    
    }
 
//This void function is used for display record patient profile
void displayRecord(int patient_number){
    
    cout <<"\n\n***************************\n";
    cout <<"Personal Informations\n";
    cout <<"***************************\n";
    cout << "First Name: " << patients[patient_number].firstName <<endl;
    cout << "Last Name: " << patients[patient_number].lastName <<endl;
    cout << "Age: " << patients[patient_number].age <<endl;
    cout << "Gender: " << patients[patient_number].gender <<endl;
    cout << "Blood Group: " << patients[patient_number].bloodGroup <<endl;
    cout << "Allergic: " << patients[patient_number].allergic <<endl;
    cout << "Phone Number: " << patients[patient_number].phoneNumber <<endl;
     
}

//This void function is used to delete the earlier stored information
void deleteRecord(int patient_number){
    
    patients[patient_number].firstName = " ";
    patients[patient_number].lastName = " ";
    patients[patient_number].age = 0;
    patients[patient_number].gender = ' ';
    patients[patient_number].bloodGroup = ' ';
    patients[patient_number].allergic = " ";
    patients[patient_number].phoneNumber = 0;
    
    cout << "Patient record deleted successfully" << endl;

}

//This function is used to edit the earlier stored information
void editRecord(int patient_number){
        
    cout << "\n\tEnter new First Name: ";
    cin >> patients[patient_number].firstName;
    cout << "\tEnter new Last Name: ";
    cin >> patients[patient_number].lastName;
    cout << "\tEnter new Age: ";
    cin >> patients[patient_number].age;
    cout << "\tEnter new Gender: ";
    cin >> patients[patient_number].gender;
    cout << "\tEnter new Blood Group: ";
    cin >> patients[patient_number].bloodGroup;
    cout << "\tEnter new Allergic: ";
    cin >> patients[patient_number].allergic;
    cout << "\tEnter new Phone Number: ";
    cin >> patients[patient_number].phoneNumber;
    
    cout << "Patient record updated successfully!" << endl;
}

int main(){
    
    char Choice;
    int patientChoice;
    string patientName;
    
    int patient_number = 0;
    
    mainMenu:
    
    cout <<"\n\t*****************************************";
    cout <<"\n\t\tWelcome to YMY Hospital\n";
    cout <<"\t*****************************************\n\n";
    cout <<"\tPlease Enter Your Preference: " <<endl;
    cout <<"\t\t1. Register for medical services" <<endl;
    cout <<"\t\t2. Get Doctors" <<endl;
    cout <<"\t\t3. Medical services" <<endl;
    cout <<"\t\t4. Get Information About Us" <<endl;
    cout <<"\t\t5. Search for Patient" <<endl;
    cout <<"\t\t6. Delete a Patient record" <<endl;
    cout <<"\t\t7. Edit a Patient's record" <<endl;
    cout <<"\t\t8. Exit" <<endl;
    cout << "\n\tYour choice: ";
    cin >> patientChoice;
//The outer swith statement to choose front preferences
    
    switch (patientChoice){
        case 1:
            cout << "\n\t*****************************************";
            cout << "\n\t\tPatient Registration\n";
            cout << "\t*****************************************";
            
            add:
            
            if(patient_number > 50){
                cout << "\tMaximum number of patients reached "<< endl;
            }
            
            else{
                patientInfo(patient_number);
                patient_number++;    
              }
            
            cout << "\n\tIf you want go back presss 1: ";
            cin >> Choice;
            
            if (Choice == '1')
              goto mainMenu;
            break;
            
        case 2:
            char back;
            cout << "\n\t*****************************************";
            cout << "\n\t\t   Doctors\n";
            cout << "\t*****************************************\n";
            cout << "\t1. Dr. Abel Belay: Dentist" <<endl;
            cout << "\t2. Dr. Selam Belete: Therapist" <<endl;
            cout << "\t3. Dr. Wubshet Kebede: Allergist" <<endl;
            cout << "\t4. Dr. Hailu Tariku: Consulting Doctor" <<endl;
            cout << "\t5. Dr. Hiwot Tesfaye: Psychologist" <<endl;
            cout << "\t6. Back to Main Menu" <<endl;
            cout << "\n\tYour choice: ";
            cin >> back;
            
            if (back == '6')
            goto mainMenu;
            
            else {
               cout <<"\tYour preference is accepted!";
               cout << "\n\tIf you want go to main menu presss 1: ";
               cin >> back;
            
              if (back == '1')
                goto mainMenu;
            }
               
            break;
        
        case 3:
            subMenu:
            cout << "\n\t*****************************************";
            cout << "\n\t\tMedical Services\n";
            cout << "\t*****************************************\n";
            cout << "\t1. Primary Care" <<endl;
            cout << "\t2. Emergency Care" <<endl;
            cout << "\t3. Surgical Care" <<endl;
            cout << "\t4. Check up " <<endl;
            cout << "\t5. Back to Main Menu" <<endl;
            cout << "\n\tYour choice: ";
            cin >> back;
            if (back == '5')
                 goto mainMenu;
            else {
                cout <<"\tYour preference is accepted!";
                cout << "\n\tFor sub menu presss 1: ";
                cin >>back;
                if (back == '1')
                goto subMenu;
            }
            //Inner swith to choose sub medical preferences
            switch (back){
                case '1':
                cout << "\n\t*****************************************";
                cout << "\n\t\tPrimary Care\n";
                cout << "\t*****************************************\n";
                cout << "\t1. Physical Exam" <<endl;
                cout << "\t2. Diagnostic Test" <<endl;
                cout << "\t3. Common Ilness Treatments" <<endl;
                cout << "\t4. Prevantive Care" <<endl;
                cout << "\t5. Back to Sub Menu" <<endl;
                cout << "\t6. Back to Main Menu" <<endl;
                cout << "\n\tYour choice: ";
                cin >> back;
                if (back == '5')
                   goto subMenu;
                else if(back == '6')
                   goto mainMenu;
                else {
                    cout <<"\tYour preference is accepted!";
                    cout << "\n\tFor main menu presss 1: ";
                    cin >>back;
                    if (back == '1')
                    goto subMenu;
                }
                break;
                case 2:
                   cout <<"\tYour preference is accepted!";
                   cout << "\n\tFor main menu presss 1, For sub menu press 2: ";
                   cin >>back;
                   if (back == '1')
                   goto subMenu;
                   
                else if(back == '2')
                   goto mainMenu;
                else 
                   cout <<"\tYour preference is accepted!";
                break;
                case 3:
                cout << "\n\t*****************************************";
                cout << "\n\t\tSurgical Care\n";
                cout << "\t*****************************************\n";
                cout << "\t1. Plastic Surgery" <<endl;
                cout << "\t2. Neurosurgery" <<endl;
                cout << "\t3. General Surgery" <<endl;
                cout << "\t4. Vascular Surgery" <<endl;
                cout << "\t5. Back to Sub Menu" <<endl;
                cout << "\t6. Back to Main Menu" <<endl;
                cout << "\n\tYour choice: ";
                cin >> back;
                if (back == '5')
                   goto subMenu;
                else if(back == '6')
                  goto mainMenu;
                else {
                  cout <<"\nYour preference is accepted!";
                  cout << "\n\tFor main menu presss 1: ";
                  cin >>back;
                  if (back == '1')
                   goto subMenu;
                } 
                break;
            }
            if (back == '5')
            goto mainMenu;
            break;
        
        case 4:
            cout << "\n\n\t*******************************************\n";
            cout << "\t\tYMY Hospital - Healty Community!!\n";
            cout << "\t*******************************************\n";
            cout << "\tAddress : Addis Ababa, Ethiopia" <<endl;
            cout << "\tWebsite : www.ymyhospital.com" <<endl;
            cout << "\tCall : +251983818106, +251988221403" <<endl;
            cout << "\n\tFor main menu presss 1: ";
            cin >>back;
            if (back == '1')
               goto mainMenu;
            break; 
        
        case 5:
            {
            string name;
            cout << "\tEnter the first name of the patient : ";
            cin >> name;
            bool found = false;
            
            for(int i = 0; i < 50; i++){
                if(name == patients[i].firstName){
                    found = true;
                    displayRecord(i);
                }
            }
            
            if(found == false){
                cout << "\tPatient not found!" << endl;
            }
            cout << "\n\tFor main menu presss 1: ";
            cin >>back;
            if (back == '1')
                goto mainMenu;
            break;
            }
        case 6:
            {

            string name;
            cout << "\tEnter first name of the patient : ";
            cin >> name;
            bool found = false;
            
            for(int i = 0; i < 50; i++){
                if(name == patients[i].firstName){
                    found = true;
                    deleteRecord(i);
                }
            }
            
            if(found == false){
                cout << "\tPatient not found!" << endl;
            }
            cout << "\n\tFor main menu presss 1: ";
            cin >>back;
            if (back == '1')
                goto mainMenu;
            break;
            }
        
        case 7:
            {
            string name;
            cout << "\tEnter first name of the patient : ";
            cin >> name;
            bool found = false;
            
            for(int i = 0; i < 50; i++){
                if(name == patients[i].firstName){
                    found = true;
                    editRecord(i);
                }
            }
            if(found == false){
                cout << "\tPatient not found!" << endl;
            }
            cout << "\n\tFor main menu presss 1: ";
            cin >>back;
            if (back == '1')
                goto mainMenu;
            break;
            }
        case 8:
        return 0;
              
    }
}
