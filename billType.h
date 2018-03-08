#ifndef H_billType
#define H_billType
#include <string>

class billType
{
public:
	billType();

	billType(std::string newPatientID,
		double newMedicineCharge, double newDoctorCharge, double newRoomCharge);

	std::string getPatientID() const;

	double getMedicineCharge() const;

	double getDoctorCharge() const;

	double getRoomCharge() const;

	void setPatientID(std::string newPatientID);

	void setMedicineCharge(int newMedicineCharge);

	void setDoctorCharge(int newDoctorCharge);

	void setRoomCharge(int newRoomCharge);

	void printBill() const;

private:
	std::string patientID;
	double medicineCharge;
	double doctorCharge;
	double roomCharge;
};
#endif
