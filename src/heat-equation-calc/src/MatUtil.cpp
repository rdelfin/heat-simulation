//
// Created by rdelfin on 4/21/16.
//

#include "heat-equation-calc/MatUtil.hpp"

Eigen::VectorXd MatUtil::vectorize(const Eigen::MatrixXd &mat) {
    Eigen::VectorXd vec = Eigen::VectorXd::Zero(mat.cols()*mat.rows());
    for(int i = 0; i < mat.rows(); i++)
        for(int j = 0; j < mat.cols(); j++)
            vec[(i*mat.cols())+j] = mat(i, j);

    return vec;
}

Eigen::MatrixXd MatUtil::matricise(const Eigen::VectorXd &vec, int rows, int cols) {
    if(vec.size() != cols * rows) {
        return Eigen::MatrixXd::Zero(1, 1);
    }
    Eigen::MatrixXd mat = Eigen::MatrixXd::Zero(rows, cols);

    for(int i = 0; i < vec.size(); i++) {
        mat(i / cols, i % cols) = vec[i];
    }
}