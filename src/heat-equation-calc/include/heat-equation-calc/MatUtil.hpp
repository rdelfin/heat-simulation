//
// Created by rdelfin on 4/21/16.
//

#pragma once

#include <Eigen/Dense>

class MatUtil {
public:
    static Eigen::VectorXd vectorize(const Eigen::MatrixXd& mat);
    static Eigen::MatrixXd matricise(const Eigen::VectorXd& vec, long rows, long cols);
};

