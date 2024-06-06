# AI-Enabled Sensory Seat-Belt Design for Posture Recognition and Heart Rate Monitoring

This repository contains the Arduino code, CNN code, pretrained CNN model, and the dataset used for research on driving posture and heart rate monitoring. The system captures spatio-temporal data using Velostat PSC sensors and a tri-axial accelerometer embedded in a seatbelt and driving chair setup. This data is used to monitor driver posture and heart rate, enhancing driver safety and ergonomics.

## Repository Structure

Arduino_Code/
CNN_Code/
CNN_pretrained_model/
Dataset/

Ground truth data was collected using a pulse oximeter and compared with the processed accelerometer data to measure deviations, ensuring accurate heart rate monitoring.

## How to Use

1. **Arduino Code**: Upload the code from the `Arduino_Code/` directory to your Arduino board to start data collection.
2. **CNN Code**: Use the scripts in the `CNN_Code/` directory to train the CNN model. You can also use the pretrained model from the `CNN_pretrained_model/` directory.
3. **Dataset**: The dataset in the `Dataset/` directory can be used for training and evaluating the CNN model.

## Conclusion

The development of this system marks a significant step forward in addressing issues related to driver posture monitoring, driver comfort, preventing fatigue, and enhancing overall vehicle safety. This system can be utilized for improving driver comfort, preventing fatigue, and enhancing overall vehicle safety, making it a valuable tool in modern automotive environments.

---

Feel free to open an issue or contact us if you have any questions or need further assistance.