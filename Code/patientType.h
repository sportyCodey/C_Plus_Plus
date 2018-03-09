//header file for patientType

#ifndef H_patientType
#define H_patientType

#include <string>
#include "billType.h"
#include "doctorType.h"
#include "personType.h"

class patientType : personType
{
public:
	patientType();

	patientType(std::string newName, int newAge, 
		std::string newPatientID, double newMedicineCharge,
		double newDoctorCharge, double newRoomCharge, std::string doctorName,
		int doctorAge, std::string newSpeciality);

	void printPatient() const;

private:
	billType bill;
	doctorType patientDoctor;
	void defaultInitialize();
};
#endif 

