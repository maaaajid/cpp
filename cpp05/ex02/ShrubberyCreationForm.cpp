#include "Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>


ShrubberyCreationFrom::ShrubberyCreationFrom():AForm("shrubbery", 145, 137)
{
    std::cout << "shrubbery default constructor called" << std::endl;
}

ShrubberyCreationFrom::ShrubberyCreationFrom(std::string name):AForm(name, 145, 137)
{
    std::cout << "shrubbery parametrized constructor called" << std::endl;
}

ShrubberyCreationFrom::ShrubberyCreationFrom(ShrubberyCreationFrom &obj):AForm(obj)
{
    std::cout << "shrubbery copy constructor called" << std::endl;
}

ShrubberyCreationFrom&  ShrubberyCreationFrom::operator=(ShrubberyCreationFrom &obj)
{
    this->setsign(obj.getSigning());
    return (*this);
}

ShrubberyCreationFrom::~ShrubberyCreationFrom()
{
    std::cout << "shrubbery destructor called" << std::endl;
}

void    ShrubberyCreationFrom::execute(Bureaucrat const & executor) const
{
    if (getGrade() >= executor.getGrade() && getSigning() == 0)
    {
        std::ofstream file;
        std::string fileName = getName() + "_shrubbery";
        file.open(fileName.c_str());
        file << "###########################'`################################" << std::endl;
        file << "###########################  V##'############################" << std::endl;
        file << "#########################V'  `V  ############################" << std::endl;
        file << "########################V'      ,############################" << std::endl;
        file << "#########`#############V      ,A###########################V#" << std::endl;
        file << "########' `###########V      ,###########################V',#" << std::endl;
        file << "######V'   ###########l      ,####################V~~~~'',###" << std::endl;
        file << "#####V'    ###########l      ##P' ###########V~~'   ,A#######" << std::endl;
        file << "#####l      d#########l      V'  ,#######V~'       A#########" << std::endl;
        file << "#####l      ##########l         ,####V''         ,###########" << std::endl;
        file << "#####l        `V######l        ,###V'   .....;A##############" << std::endl;
        file << "#####A,         `######A,     ,##V' ,A#######################" << std::endl;
        file << "#######A,        `######A,    #V'  A########'''''##########''" << std::endl;
        file << "##########,,,       `####A,           `#''           '''  ,,," << std::endl;
        file << "#############A,                               ,,,     ,######" << std::endl;
        file << "######################oooo,                 ;####, ,#########" << std::endl;
        file << "##################P'                   A,   ;#####V##########" << std::endl;
        file << "#####P'    ''''       ,###             `#,     `V############" << std::endl;
        file << "##P'                ,d###;              ##,       `V#########" << std::endl;
        file << "##########A,,   #########A              )##,    ##A,..,ooA###" << std::endl;
        file << "#############A, Y#########A,            )####, ,#############" << std::endl;
        file << "###############A ############A,        ,###### ##############" << std::endl;
        file << "###############################       ,#######V##############" << std::endl;
        file << "###############################      ,#######################" << std::endl;
        file << "##############################P    ,d########################" << std::endl;
        file << "##############################'    d#########################" << std::endl;
        file << "##############################     ##########################" << std::endl;
        file << "##############################     ##########################" << std::endl;
        file << "#############################P     ##########################" << std::endl;
        file << "#############################'     ##########################" << std::endl;
        file << "############################P      ##########################" << std::endl;
        file << "###########################P'     ;##########################" << std::endl;
        file << "###########################'     ,###########################" << std::endl;
        file << "##########################       ############################" << std::endl;
        file << "#########################       ,############################" << std::endl;
        file << "########################        d###########P'    `Y#########" << std::endl;
        file << "#######################        ,############        #########" << std::endl;
        file << "######################        ,#############        #########" << std::endl;
        file << "#####################        ,##############b.    ,d#########" << std::endl;
        file << "####################        ,################################" << std::endl;
        file << "###################         #################################" << std::endl;
        file << "##################          #######################P'  `V##P'" << std::endl;
        file << "#######P'     `V#           ###################P'" << std::endl;
        file << "#####P'                    ,#################P'" << std::endl;
        file << "###P'                      d##############P''" << std::endl;
        file << "##P'                       V##############'" << std::endl;
        file << "#P'                         `V###########'" << std::endl;
        file << "#'                             `V##P'" << std::endl;
    }
    else 
    {
        throw Bureaucrat::GradeTooLowException();
    }
}


