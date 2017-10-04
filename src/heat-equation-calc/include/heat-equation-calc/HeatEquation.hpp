//
// Created by Ricardo Delfin Garcia on 4/20/16.
//

#pragma once

#include <Eigen/Dense>

using Eigen::MatrixXd;

class HeatEquation {
public:
    HeatEquation(const Eigen::VectorXd&, double timestep, double diststep, double alpha);

    Eigen::MatrixXd step();

    ~HeatEquation();
private:
    std::vector<Eigen::VectorXd> timeData;
    Eigen::MatrixXd dx;
    Eigen::MatrixXd dy;
    double timestep, diststep, alpha;

    void initDMat();
};
