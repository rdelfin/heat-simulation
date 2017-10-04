//
// Created by rdelfin on 4/20/16.
//

#pragma once

#include <Eigen/Dense>

class Derivative {
public:
    Derivative(int x, int y);

    Eigen::MatrixXd dx(const Eigen::MatrixXd&, double deltaX);
    Eigen::MatrixXd dy(const Eigen::MatrixXd&, double deltaY);

    ~Derivative();
private:

    Eigen::MatrixXd dxLT;
    Eigen::MatrixXd dyLT;
};
