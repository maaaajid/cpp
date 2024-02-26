#include "./Bureaucrat.hpp"
#include "./ShrubberyCreationForm.hpp"
#include <fstream>
#include <string>


ShrubberyCreationForm::ShrubberyCreationForm():AForm("default", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name):AForm(name, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj):AForm(obj)
{
}

ShrubberyCreationForm&  ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
    this->setsign(obj.getSigning());
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

const char  *ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
    return ("Shrubbery has Low grade");
}

const char  *ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
    return ("Shrubbery has high grade");
}

const char  *ShrubberyCreationForm::ShrubberyFormNotSigned::what() const throw()
{
    return ("Shrubbery Form Not Signed");
}


void    ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (this->getExec() >= executor.getGrade() && getSigning() != 0)
    {
        std::ofstream file;
        std::string fileName = getName() + "_shrubbery";
        file.open(fileName.c_str());
        file << "###########################'`################################\n"
        << "###########################  V##'############################\n"
        << "#########################V'  `V  ############################\n"
        << "########################V'      ,############################\n"
        << "#########`#############V      ,A###########################V#\n"
        << "########' `###########V      ,###########################V',#\n"
        << "######V'   ###########l      ,####################V~~~~'',###\n"
        << "#####V'    ###########l      ##P' ###########V~~'   ,A#######\n"
        << "#####l      d#########l      V'  ,#######V~'       A#########\n"
        << "#####l      ##########l         ,####V''         ,###########\n"
        << "#####l        `V######l        ,###V'   .....;A##############\n"
        << "#####A,         `######A,     ,##V' ,A#######################\n"
        << "#######A,        `######A,    #V'  A########'''''##########''\n"
        << "##########,,,       `####A,           `#''           '''  ,,,\n"
        << "#############A,                               ,,,     ,######\n"
        << "######################oooo,                 ;####, ,#########\n"
        << "##################P'                   A,   ;#####V##########\n"
        << "#####P'    ''''       ,###             `#,     `V############\n"
        << "##P'                ,d###;              ##,       `V#########\n"
        << "##########A,,   #########A              )##,    ##A,..,ooA###\n"
        << "#############A, Y#########A,            )####, ,#############\n"
        << "###############A ############A,        ,###### ##############\n"
        << "###############################       ,#######V##############\n"
        << "###############################      ,#######################\n"
        << "##############################P    ,d########################\n"
        << "##############################'    d#########################\n"
        << "##############################     ##########################\n"
        << "##############################     ##########################\n"
        << "#############################P     ##########################\n"
        << "#############################'     ##########################\n"
        << "############################P      ##########################\n"
        << "###########################P'     ;##########################\n"
        << "###########################'     ,###########################\n"
        << "##########################       ############################\n"
        << "#########################       ,############################\n"
        << "########################        d###########P'    `Y#########\n"
        << "#######################        ,############        #########\n"
        << "######################        ,#############        #########\n"
        << "#####################        ,##############b.    ,d#########\n"
        << "####################        ,################################\n"
        << "###################         #################################\n"
        << "##################          #######################P'  `V##P'\n"
        << "#######P'     `V#           ###################P'            \n"
        << "#####P'                    ,#################P'              \n"
        << "###P'                      d##############P''                \n"
        << "##P'                       V##############'                  \n"
        << "#P'                         `V###########'                   \n"
        << "#'                             `V##P'                        \n";
        file.close();
    }
    else if (this->getSigning() == 0)
        throw ShrubberyCreationForm::ShrubberyFormNotSigned();
    else if (this->getExec() <= executor.getGrade())
        throw ShrubberyCreationForm::GradeTooHighException();
}


