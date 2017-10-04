//
// Created by rdelfin on 4/20/16.
//

#include "heat-equation-calc/Derivative.hpp"
#include "heat-equation-calc/MatUtil.hpp"

Derivative::Derivative(int x, int y) : dxLT(x*y, x*y) {
    dxLT = Eigen::MatrixXd::Zero(x*y, x*y);
    dxLT.setZero();

}

Eigen::MatrixXd Derivative::dx(const Eigen::MatrixXd& mat, double deltaX) {
    Eigen::VectorXd massiveVec = MatUtil::vectorize(mat);

    return MatUtil::matricise(dxLT*massiveVec, mat.rows(), mat.cols());
}

Eigen::MatrixXd Derivative::dy(const Eigen::MatrixXd& mat, double deltaY) {
    Eigen::VectorXd massiveVec = MatUtil::vectorize(mat);

    return MatUtil::matricise(dyLT*massiveVec, mat.rows(), mat.cols());
}

Derivative::~Derivative() {

}
