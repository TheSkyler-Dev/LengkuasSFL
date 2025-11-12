# LengkuasSFL Standard Library Reference
The LengkuasSFL standard library (stdlib) provides a set of built-in functions and keywords for sensor preprocessing, filtering, and communication.
It is designed to be lightweight, deterministic, and embedded-friendly while keeping code self-documenting and expressive.

## Design Philosophy
LengkuasSFL is a procedural language.
Although certain syntax may look object-oriented (e.g. MySensor.temp(celcius)), it is **purely syntactic sugar**.
Under the hood, such expressions are rewritten by the compiler as regular function calls:
```
MySensor.temp(celcius)
→ temp(MySensor, celcius)
```
This keeps Lengkuas deterministic and efficient while improving readability.

---
## Core Categories
| Category                         | Description                                              |
| -------------------------------- | -------------------------------------------------------- |
| **Math & Numeric Utilities**     | Rounding, clamping, scaling and other numerical tools.   |
| **Signal & Filter Functions**    | Core functions for preprocessing and noise reduction.    |
| **Sensor Measurement Utilities** | Helpers for interpreting physical sensor data.           |
| **I/O & Messaging**              | Communication primitives for sending and receiving data. |
| **System Utilities**             | Time, logging and async helpers.                         |

## Math & Numeric Utilities
| Function Signature                           | Description                                                                              |
| -------------------------------------------- | ---------------------------------------------------------------------------------------  |
| `limits(value, min?, max?)`                  | Clamps a numeric value to a defined range. If only one bound is given, acts as either a min or max clamp. |
| `rnd(n)`                                     | Rounds a floating-point value to *n* decimal places. Example: `rnd(2)` → round to two decimals.           |
| `normalize(stream)`                          | Normalizes a stream or array to range `[0, 1]`.                                          |
| `clamp(value, min, max)`                     | (Alias of `limits()`) Keeps values within bounds.                                        |
| `scale(value, inMin, inMax, outMin, outMax)` | Maps a reading from one range to another.                                                |

## Sensor Measurement Utilities
| Function Signature             | Description                                                                                                     |
| ------------------------------ | --------------------------------------------------------------------------------------------------------------- |
| `temp(<unit>)`                 | Converts the reading from a temperature sensor `sstream` to the chosen unit. Units: `celcius`, `farenheit`, `kelvin`. Numeric limits are applied automatically. |
| Example                        | `msgOut(tempProbe.temp(celcius))`                                                                               |
| `humidity(<unit>)` *(planned)* | Interprets humidity sensor data (e.g. %RH).                                                                     |
| `pressure(<unit>)` *(planned)* | Converts pressure sensor data to target unit (e.g. `kPa`, `bar`).                                               |

## Signal & Filter Functions
| Function Signature                    | Description                                                                                              |
| ------------------------------------- | -------------------------------------------------------------------------------------------------------- |
| `avg(<sstream>)`                      | Returns the moving average of the last second or N samples from a stream.                                |
| `kalman(<config dict>)`               | Applies a Kalman filter using parameters in a configuration dictionary (e.g. `{"R": 0.01, "Q": 0.1}`).   |
| `loPass(<config dict>)`               | Low-pass filter; configuration dictionary may include keys such as `{"alpha": 0.5}` or `{"window": 10}`. |
| `hiPass(<config dict>)` *(planned)*   | High-pass filter for removing DC bias or drift.                                                          |
| `bandPass(<config dict>)` *(planned)* | Band-pass filter for specific frequency ranges.                                                          |
| `delta(<sstream>)`                    | Calculates the difference (delta) between consecutive readings.                                          |
| `integrate(<sstream>)`                | Integrates sensor values over time.                                                                      |
| `threshold(<sstream>, <value>)`       | Returns `true` if current reading exceeds a threshold.                                                   |
| `debounce(<sstream>, <time_ms>)`      | Software debounce for digital sensors.                                                                   |

# I/O and Communication
| Function Signature      | Description                                                                                            |
| ----------------------- | ------------------------------------------------------------------------------------------------------ |
| `msgIn(target)`         | Receives input from a connected source.                                                                |
| `msgOut(target, value)` | Transmits data to a connected display or bus. The target may be a GPIO pin, UART port, or I²C address. |
| `flush(target)`         | Forces pending transmissions to complete.                                                              |
| `broadcast(value)`      | Sends data to all defined outputs.                                                                     |
Example:
```lengkuas
sstream Display = 0x21
msgOut(Display, tempProbe.temp(celcius).rnd(2))
```

## System Utilities
| Function  Signature             | Description                                         |
| ------------------------------- | --------------------------------------------------- |
| `time()`                        | Returns system uptime or current timestamp.         |
| `sleep(ms)`                     | Pauses execution for the given duration.            |
| `panic(err)`                    | Raises a non-recoverable error and halts execution. |
| `errno()`                       | Returns last error code.                            |

## Asynchronous Functions & Keywords
| Keyword                            | Description                                                                    |
| ---------------------------------- | ------------------------------------------------------------------------------ |
| `desync` / `resync`                | Define an asynchronous code block. Equivalent to an async function definition. |
| `expect`                           | Waits for completion of an asynchronous call.                                  |
| `awaitNext(<sstream>)` *(planned)* | Suspends execution until the next sensor reading is available.                 |
Example:
```lengkuas
desync ProcessTemp(TempSensor)->f64:
    f64 val = TempSensor.temp(celcius)
    val = loPass(TempSensor, {"alpha": 0.4})
    msgOut(Display, val)
    ret val
resync
```

## Chaining and Readability
Most stdlib functions can be chained for clarity.
Chaining is **syntactic sugar**, internally desugared into nested function calls:
```lengkuas
TempSensor.temp(celcius).limits(0,100).rnd(2)
→ rnd(limits(temp(TempSensor, celcius), 0, 100), 2)
```
This feature keeps code readable and self-documenting without introducing true object orientation.

---
## Planned Extensions

- `calibrate(<sstream>, <config dict>)` — apply calibration constants or offsets

- `event(<sstream>)` — asynchronous event listener for sensor triggers

- `fft(<array>)` — simple frequency domain transform (for richer signals)

## Implementation Notes
- All functions are deterministic and stateless unless explicitly defined (e.g. filters maintain minimal state internally).

- `nil` values cannot be passed to stdlib functions. Attempting to do so raises a runtime error.

- The stdlib will be implemented in C/C++ for embedded targets and may have host equivalents in simulators for testing.