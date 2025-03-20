#include "View.h"

#include <string>

#include "../Model/Model.h"
#include "../imgui/imgui.h"

void View::RenderUI(double &salary, int &choice, double &tax,
                    std::string &country) {
    ImGui::Begin("Tax Calculator");
    ImGui::Text("Select Country for Tax Calculation:");

    if (ImGui::RadioButton("Malaysia", choice == 1)) choice = 1;
    if (ImGui::RadioButton("China", choice == 2)) choice = 2;

    ImGui::InputDouble("Enter Monthly Salary (RM):", &salary);

    if (ImGui::Button("Calculate")) {
        tax = (choice == 1) ? Model::CalculatePCB(salary)
                            : Model::CalculateIIT(salary);
        country = (choice == 1) ? "Malaysia" : "China";
    }

    ImGui::Text("Country: %s", country.c_str());
    ImGui::Text("PCB/IIT Deduction: RM %.2f", tax);
    ImGui::End();
}