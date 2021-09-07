#pragma once
#include <vector>
#include <Eigen/Eigen>

// viusalize trajectory
void draw_trajector(const std::vector <Eigen::Isometry3d> &poses, const char * option);

// read trajectory file 
void read_trajectory_file(const std::string & file_address);

// split string
std::vector<std::string> split(const std::string &str, const std::string &pattern);
