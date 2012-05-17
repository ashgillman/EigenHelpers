/*=========================================================================
 *
 *  Copyright David Doria 2011 daviddoria@gmail.com
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0.txt
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 *=========================================================================*/

#ifndef EigenHelpers_H
#define EigenHelpers_H

// Eigen
#include <Eigen/Dense>

namespace EigenHelpers
{

typedef std::vector<Eigen::VectorXf, Eigen::aligned_allocator<Eigen::VectorXf> > VectorOfVectors;

float SumOfRow(const Eigen::MatrixXf& m, const unsigned int rowId);

float SumOfVector(const Eigen::VectorXf& v);

float SumOfAbsoluteDifferences(const Eigen::VectorXf& a, const Eigen::VectorXf& b);

std::vector<float> EigenVectorToSTDVector(const Eigen::VectorXf& vec);

void OutputVectors(const VectorOfVectors& vectors);

void OutputMatrixSize(const Eigen::MatrixXf& m);

Eigen::MatrixXf TruncateColumns(const Eigen::MatrixXf& m, const unsigned int numberOfColumnsToKeep);

Eigen::VectorXf ComputeMeanVector(const EigenHelpers::VectorOfVectors& vectors);

Eigen::MatrixXf ConstructCovarianceMatrix(const EigenHelpers::VectorOfVectors& vectors);

}
  
#endif
