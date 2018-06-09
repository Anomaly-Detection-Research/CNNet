/* 
 * File:   FCLayer.hpp
 * Author: heshan
 *
 * Created on June 7, 2018, 8:46 PM
 */

#ifndef FCLAYER_HPP
#define FCLAYER_HPP

#include <iostream>
#include <Eigen>
#include "Activation.hpp"

class FCLayer {
public:
    FCLayer();
    /**
     * Constructor
     * 
     * @param dimensions: dimensions of the input matrix (depth, height, width)
     * @param outputs: no of outputs
     */
    FCLayer(std::tuple<int, int, int> dimensions, int outputs);
    /**
     * 
     * @param orig
     */
    FCLayer(const FCLayer& orig);
    /**
     * 
     */
    virtual ~FCLayer();
    /**
     * Initialize weight matrix and bias values
     * 
     * @return 0
     */
    int initMat();
    /**
     * 
     * @param input: input matrix 
     * @return 
     */
    Eigen::RowVectorXd forward(Eigen::MatrixXd * input);
private:
    int depth, height, width, outputs;
    Eigen::MatrixXd ** weights;
    Eigen::MatrixXd bias;
    Eigen::MatrixXd output;
    
};

#endif /* FCLAYER_HPP */

