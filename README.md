# AI-Enabled Sensory Seat-Belt Design for Posture Recognition and Heart Rate Monitoring

Monitoring passenger posture and heart rate is crucial for enhancing automotive safety and ergonomics. In this work, we present a novel integrated system utilizing Velostat Pressure Sensitive Conductive (PSC) sensors and an accelerometer designed on a seat-belt and passenger seat setup. This system captures spatio-temporal data and employs a Convolutional Neural Network (CNN) model for the classification of five distinct sitting postures and seat-belt usage detection. The accelerometer data is pre-processed to extract heart-rate measurements using an algorithm, ensuring accurate and reliable monitoring. The inclusion of a diverse subject pool and a comprehensive dataset, featuring an unoccupied seat state, ensures robust and realistic performance. The CNN model, interfaced with an edge computing system, achieved high accuracy in posture classification. Additionally, the camera-less approach preserves user privacy, making it suitable for real-world applications. Our compact seat-belt incorporated sensory system represents a significant advancement in passenger monitoring technology, offering a practical and privacy-conscious solution for improving vehicle safety and ergonomics.

## Repository Structure

- **Arduino_Code/**
- **CNN_Code/**
- **CNN_weights/**
- **Dataset/**

Ground truth data was collected using a pulse oximeter and compared with the processed accelerometer data to measure deviations, ensuring accurate heart rate monitoring.

## How to Use

1. **Arduino Code**: Upload the code from the `Arduino_Code/` directory to your Arduino board to start data collection.
2. **CNN Code**: Use the scripts in the `CNN_Code/` directory to train the CNN model. You can also use the pretrained model from the `CNN_pretrained_model/` directory.
3. **Dataset**: The dataset in the `Dataset/` directory can be used for training and evaluating the CNN model.

## Conclusion

The development of this system marks a significant step forward in addressing issues related to driver posture monitoring, driver comfort, preventing fatigue, and enhancing overall vehicle safety. This system can be utilized for improving driver comfort, preventing fatigue, and enhancing overall vehicle safety, making it a valuable tool in modern automotive environments.

## Authors

- Yash Gupta
- Yogesh Goyal

---



Feel free to open an issue or contact us if you have any questions or need further assistance.