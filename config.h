

// Maximum velocity for each axis in millimeter per minute.
#define MAX_VELOCITY_MM_PER_MIN_X  24000
#define MAX_VELOCITY_MM_PER_MIN_Y  12000
#define MAX_VELOCITY_MM_PER_MIN_Z  600
#define MAX_VELOCITY_MM_PER_MIN_E  1500
#define MIN_VELOCITY_MM_PER_MIN    1
// Average velocity for endstop calibration procedure
#define CALIBRATION_VELOCITY_MM_PER_MIN = 300

// Stepper motors steps per millimeter for each axis.
#define STEPPER_PULSES_PER_MM_X  100
#define STEPPER_PULSES_PER_MM_Y  100
#define STEPPER_PULSES_PER_MM_Z  400
#define STEPPER_PULSES_PER_MM_E  150

// Invert axises direction, by default(False) high level means increase of
// position. For inverted(True) axis, high level means decrease of position.
#define STEPPER_INVERTED_X  True
#define STEPPER_INVERTED_Y  False
#define STEPPER_INVERTED_Z  False
#define STEPPER_INVERTED_E  True

// Invert zero end stops switches. By default(False) low level on input pin
// means that axis in zero position. For inverted(True) end stops, high level
// means zero position.
#define ENDSTOP_INVERTED_X  True
#define ENDSTOP_INVERTED_Y  True
#define ENDSTOP_INVERTED_Z  False  // Auto leveler

// Workplace physical size.
#define TABLE_SIZE_X_MM  200
#define TABLE_SIZE_Y_MM  200
#define TABLE_SIZE_Z_MM  220

// Mixed settings.
#define STEPPER_PULSE_LENGTH_US  2
#define STEPPER_MAX_ACCELERATION_MM_PER_S2  3000  // for all axis, mm per sec^2
#define SPINDLE_MAX_RPM  10000
#define EXTRUDER_MAX_TEMPERATURE  250
#define BED_MAX_TEMPERATURE  100
#define MIN_TEMPERATURE  40


// -----------------------------------------------------------------------------
// Pins configuration.

// Enable pin for all steppers, low level is enabled.
#define STEPPERS_ENABLE_PIN  26
#define STEPPER_STEP_PIN_X   21
#define STEPPER_STEP_PIN_Y   16
#define STEPPER_STEP_PIN_Z   12
#define STEPPER_STEP_PIN_E   8

#define STEPPER_DIR_PIN_X  20
#define STEPPER_DIR_PIN_Y  19
#define STEPPER_DIR_PIN_Z  13
#define STEPPER_DIR_PIN_E  7

#define SPINDLE_PWM_PIN  4
#define FAN_PIN  27
#define EXTRUDER_HEATER_PIN  18
#define BED_HEATER_PIN  22
#define EXTRUDER_TEMPERATURE_SENSOR_CHANNEL  2
#define BED_TEMPERATURE_SENSOR_CHANNEL  1

#define ENDSTOP_PIN_X  23
#define ENDSTOP_PIN_Y  10
#define ENDSTOP_PIN_Z  25
// -----------------------------------------------------------------------------
// #  Behavior config

// # Run command immediately after receiving and stream new pulses, otherwise
// # buffer will be prepared firstly and then command will run.
// # Before enabling this feature, please make sure that board performance is
// # enough for streaming pulses(faster then real time).
#define INSTANT_RUN  True

// # If this parameter is False, error will be raised on command with velocity
// # more than maximum velocity specified here. If this parameter is True,
// # velocity would be decreased(proportional for all axises) to fit the maximum
// # velocity.
#define AUTO_VELOCITY_ADJUSTMENT  True

// # Automatically turn on fan when extruder is heating, boolean value.
#define AUTO_FAN_ON  True