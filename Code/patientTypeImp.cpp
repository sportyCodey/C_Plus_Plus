//implementation file for patientType

#include "stdafx.h"
#include <iostream>
#include <string>
#include "patientType.h"

patientType::patientType()
	:personType()
{
	defaultInitialize();
}

patientType::patientType(std::string newName, int newAge,
	std::string newPatientID, double newMedicineCharge,
	double newDoctorCharge, double newRoomCharge, std::string doctorName,
	int doctorAge, std::string newSpeciality)
	:personType(newName, newAge)
{
	patientDoctor.setName(doctorName);
	patientDoctor.setAge(doctorAge);
	patientDoctor.setSpeciality(newSpeciality);
	bill.setPatientID(newPatientID);
	bill.setMedicineCharge(newMedicineCharge);
	bill.setDoctorCharge(newDoctorCharge);
	bill.setRoomCharge(newRoomCharge);
}

void patientType::printPatient() const
{
	personType::printPerson();
	bill.printBill();
	std::cout << "Doctor info:" << std::endl;
	patientDoctor.printDoctor();
}

void patientType::defaultInitialize()
{
	patientDoctor.setName("");
	patientDoctor.setAge(0);
	patientDoctor.setSpeciality("");
	bill.setPatientID("");
	bill.setMedicineCharge(0.0);
	bill.setDoctorCharge(0.0);
	bill.setRoomCharge(0.0);
}
