#include "devices.hpp"
#include "pros/adi.hpp"
#include "pros/distance.hpp"
#include "pros/imu.hpp"

// =========================== Device Definitions =========================== //
// ports
int devi = 0;
pros::Controller master(pros::E_CONTROLLER_MASTER); // master controller

pros::MotorGroup drive_left({1, 2, 3}); // drive groups
pros::MotorGroup drive_right({4, 5, 6});

pros::Motor intake(7); // intake motor

pros::Motor flywheel(8); // flywheel motor

pros::Imu imu(9); // imu sensor

pros::Distance distanceFront(10); // distance sensors to check the triball position in the intake
pros::Distance distanceBack(11);

// 3 wire
pros::ADIDigitalOut poleClamp('a'); // endgame climb clamp
pros::ADIDigitalOut climber('b'); // release for endgame climber

pros::ADIDigitalOut arm('c'); // goal de score arm
pros::ADIDigitalOut barrierClamp('d'); // low barrier clamp