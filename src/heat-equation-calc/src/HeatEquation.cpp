//
// Created by Ricardo Delfin Garcia on 4/20/16.
//

#include "heat-equation-calc/HeatEquation.hpp"

HeatEquation::HeatEquation(const Eigen::VectorXd& init_data, double timestep,
                           double diststep, double alpha)
    : diststep(diststep), timestep(timestep), alpha(alpha) {

    timeData.push_back(init_data);
}

void initD


Eigen::MatrixXd HeatEquation::step() {

    Eigen::MatrixXd next = timeData[timeData.size() - 1];
    Eigen::MatrixXd dx(next.rows(), next.cols());
    Eigen::MatrixXd d2x(next.rows(), next.cols());

    for(int i = 1; i < next.rows() - 1; i++) {
        for(int j = 1; j < next.cols() - 1; j++) {
            dx =
        }
    }
}

HeatEquation::~HeatEquation() {

}