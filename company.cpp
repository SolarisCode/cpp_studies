/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   company.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 19:55:29 by melkholy          #+#    #+#             */
/*   Updated: 2023/06/29 22:00:36 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class	AbstractEmployee {
	virtual void askForPormotion() = 0;
};

class	Employee: AbstractEmployee {
protected:
	std::string	Name;
	std::string	Company;
	int			Age;
	const int	ID;

public:
	Employee(std::string name, std::string company, int age, int id)
		: Name(name), Company(company), Age(age), ID(id) {}		// initialization list way to initialize class attributes.
	void	setName(std::string name)
	{
		this->Name = name;
	}
	void	setCom(std::string company)
	{
		this->Company = company;
	}
	void	setAge(int age)
	{
		if (age >= 18)
			this->Age = age;
	}
	std::string	getName(void)
	{
		return (this->Name);
	}
	std::string	getCom(void)
	{
		return (this->Company);
	}
	int	getAge() {
		return (this->Age);
	}
	void	infoAbout(void)
	{
		std::cout << "Name: " << this->Name << std::endl;
		std::cout << "Company: " << this->Company << std::endl;
		std::cout << "Age: " << this->Age << std::endl;
	}
	void	askForPormotion(void) {
		if (Age > 30)
			std::cout << this->Name << " got pormoted!" << std::endl;
		else
			std::cout << this->Name << ", pormotion denied!" << std::endl;
	}
	virtual void	work(void) const {
		std::cout << this->Name << " is writing emails and backlog tasks." << std::endl;
	}
	~Employee(void)
	{
		std::cout << "Object " << this->Name << " has been destroyed" << std::endl;
	}
};

class	Developer: protected Employee {
private:
	std::string	FavProgrammingLang;

public:
	Developer(std::string name, std::string company, int age, int id, std::string lang)
		: Employee(name, company, age, id) {	// initializing the base class attributes.
		this->FavProgrammingLang = lang;
	}
	void	setFavLang(std::string lang) {
		this->FavProgrammingLang = lang;
	}
	std::string	getFavLang(void) {
		return (this->FavProgrammingLang);
	}
	void	fixBug(void) const {
		std::cout << Name << " fixed some bugs using " << this->FavProgrammingLang << std::endl;
	}
	void	work(void) const {
		std::cout << Name << " is writing " << this->FavProgrammingLang << " code." << std::endl;
	}
	~Developer(void) {
		std::cout << "Developer is destroyed!\n";
	}
};

class	Teacher: public Employee {
private:
	std::string	Subject;

public:
	Teacher(std::string name, std::string school, int age, int id, std::string subject)
		: Employee(name, school, age, id) {
		this->Subject = subject;
	}
	void	setSubject(std::string sub) {
		this->Subject = sub;
	}
	std::string	getSubject() {
		return (this->Subject);
	}
	void	prepareLesson(void) const {
		std::cout << Name << " is preparing " << this->Subject << " lesson." << std::endl;
	}
	void	work(void) const {
		std::cout << Name << " is teaching " << this->Subject << std::endl;
	}
};

int	main(void)
{
	// Employee	employee1 = Employee("Mohammed", "Google", 29);
	Employee	employee2 = Employee("Ahmed", "Amazon", 28, 2);
	Teacher		naser = Teacher("Naser", "Matarya", 55, 1, "Math");
	Developer	mo("Mohammed", "Google", 37, 28, "C");
	// employee2.work();
	// mo.work();
	// naser.work();
	mo.work();
	Employee	*e1 = &naser;
	Employee	*e2 = &mo;
	e1->work();
	std::cout << e1->getName() << " is teaching in " << e1->getCom() << " "<< naser.getSubject() << std::endl;
	e2->work();
	// naser.prepareLesson();
	// naser.setSubject("Ryadyat");
	// naser.prepareLesson();
	// std::cout << employee2.getName() << " is a good emplooyee." << std::endl;
	// employee2.infoAbout();
	// mo.infoAbout();
	// mo.fixBug();
	// mo.setFavLang("C++");
	// mo.fixBug();
	// mo.askForPormotion();
	// employee1.infoAbout();
	// employee2.infoAbout();
	// employee2.setAge(34);
	// employee1.askForPormotion();
	// employee2.askForPormotion();
	// employee1.setAge(19);
	// std::cout << "Name is " << employee1.getName() << std::endl;
	// std::cout << "Age is " << employee1.getAge() << std::endl;
	// std::cout << employee2.getName() << " Company is " << employee2.getCom() << std::endl;
}
