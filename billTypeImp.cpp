#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include "billType.h"

billType::billType()
{
	patientID = "";
	medicineCharge = 0.0;
	doctorCharge = 0.0;
	roomCharge = 0.0;
}

billType::billType(std::string newPatientID,
	double newMedicineCharge, double newDoctorCharge, double newRoomCharge)
{
	patientID = newPatientID;
	medicineCharge = newMedicineCharge;
	doctorCharge = newDoctorCharge;
	roomCharge = newRoomCharge;
}

std::string billType::getPatientID() const
{
	return patientID;
}

double billType::getMedicineCharge() const
{
	return  medicineCharge;
}

double billType::getDoctorCharge() const
{
	return doctorCharge;
}

double billType::getRoomCharge() const
{
	return roomCharge;
}

void billType::setPatientID(std::string newPatientID)
{
	patientID = newPatientID;
}

void billType::setMedicineCharge(int newMedicineCharge)
{
	medicineCharge = newMedicineCharge;
}

void billType::setDoctorCharge(int newDoctorCharge)
{
	doctorCharge = newDoctorCharge;
}

void billType::setRoomCharge(int newRoomCharge)
{
	roomCharge = newRoomCharge;
}

void billType::printBill() const
{
	std::cout << std::fixed << std::showpoint;
	std::cout << std::setprecision(2);
	
	std::cout << "Bill of patientID: " << patientID << " includes the following ";
	std::cout << "hospital charges: " << std::endl;
	std::cout << "Medicine Charge: $" << medicineCharge << std::endl;
	std::cout << "Doctor charge: $" << doctorCharge << std::endl;
	std::cout << "Room charge: $" << roomCharge << std::endl;
}
