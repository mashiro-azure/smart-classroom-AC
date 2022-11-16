// power on
uint16_t ACON[] = {3258, 1658, 394, 432, 394, 432, 396, 1252, 396, 430, 370, 1278, 394, 432, 370, 434, 444, 406, 396, 1250, 370, 1278, 396, 432, 394, 406, 420, 432, 396, 1252, 370, 1278, 396, 432, 396, 432, 418, 408, 394, 430, 396, 434, 394, 430, 394, 432, 396, 430, 394, 432, 370, 456, 368, 456, 394, 432, 394, 432, 370, 1278, 394, 432, 370, 434, 394, 456, 396, 430, 370, 456, 394, 430, 370, 456, 370, 1276, 396, 430, 396, 432, 396, 432, 394, 432, 394, 1254, 396, 1252, 368, 1278, 370, 1278, 394, 1252, 370, 1276, 396, 1254, 396, 1252, 396, 430, 370, 456, 372, 1278, 394, 432, 368, 458, 370, 456, 394, 432, 370, 458, 370, 432, 418, 432, 394, 430, 396, 1252, 394, 1252, 370, 456, 394, 432, 370, 1278, 394, 434, 370, 456, 394, 432, 394, 1254, 368, 456, 394, 434, 368, 1278, 370, 456, 368, 458, 370, 456, 368, 458, 370, 456, 370, 456, 370, 458, 368, 456, 370, 456, 370, 458, 368, 458, 368, 456, 368, 1280, 368, 456, 368, 456, 370, 458, 368, 458, 370, 454, 396, 432, 370, 456, 370, 456, 370, 456, 394, 432, 370, 456, 370, 456, 370, 458, 368, 456, 370, 460, 370, 458, 368, 458, 396, 430, 370, 456, 368, 434, 394, 456, 370, 456, 346, 482, 368, 458, 368, 432, 370, 480, 370, 458, 370, 456, 370, 458, 370, 456, 368, 458, 368, 430, 396, 1282, 364, 458, 346, 480, 370, 1276, 346, 1302, 370, 1278, 346, 1302, 368, 456, 370, 456, 346, 480, 346, 482, 346};

// power off
uint16_t ACOFF[] = {3208, 1706, 346, 482, 368, 458, 344, 1304, 368, 456, 346, 1302, 346, 480, 368, 458, 344, 480, 346, 1302, 370, 1278, 346, 482, 346, 480, 346, 480, 346, 1302, 344, 1302, 346, 480, 344, 458, 368, 480, 346, 480, 370, 456, 370, 458, 346, 482, 346, 480, 370, 456, 346, 480, 346, 480, 368, 456, 370, 458, 368, 1280, 366, 458, 370, 456, 346, 482, 346, 480, 346, 482, 368, 456, 370, 456, 368, 1278, 370, 458, 368, 456, 370, 458, 370, 456, 394, 1254, 370, 460, 394, 430, 370, 458, 374, 452, 368, 458, 370, 458, 368, 1278, 370, 456, 370, 1276, 370, 1282, 368, 1278, 370, 1278, 368, 1278, 370, 1278, 370}; // UNKNOWN B9A754C5

// 18 C
uint16_t AC18[] = {9782, 9904, 9780, 9892, 4578, 2572, 314, 404, 320, 982, 342, 956, 320, 404, 344, 956, 344, 378, 318, 406, 342, 380, 342, 380, 342, 378, 344, 958, 342, 380, 342, 380, 342, 380, 346, 380, 342, 958, 340, 382, 344, 380, 342, 382, 340, 934, 368, 956, 342, 380, 342, 382, 316, 406, 342, 956, 320, 404, 342, 380, 342, 380, 342, 382, 340, 958, 318, 406, 342, 356, 366, 380, 344, 380, 316, 404, 318, 408, 340, 382, 316, 406, 342, 380, 342, 380, 344, 378, 344, 380, 342, 382, 342, 378, 342, 382, 316, 404, 342, 382, 318, 404, 342, 378, 318, 984, 318, 982, 344, 382, 314, 408, 342, 960, 342, 382, 342, 380, 316, 984, 346, 376, 316, 984, 342, 958, 344, 378, 342, 380, 344, 958, 342, 378, 342, 20424, 344, 982, 342, 378, 344, 380, 342, 380, 342, 382, 342, 956, 346, 376, 342, 958, 342, 380, 344, 380, 340, 380, 346, 380, 340, 382, 340, 380, 344, 380, 342, 380, 344, 956, 342, 956, 344, 956, 342, 934, 368, 956, 344, 956, 342, 956, 346, 956, 342, 378, 342, 382, 340, 380, 342, 378, 344, 380, 342, 380, 342, 380, 342, 380, 344, 380, 340, 382, 342, 380, 344, 378, 342, 380, 342, 378, 318, 406, 340, 382, 342, 378, 342, 380, 342, 382, 340, 380, 342, 380, 344, 378, 342, 380, 342, 378, 342, 382, 340, 382, 342, 380, 342, 380, 342, 380, 344, 378, 316, 408, 342, 380, 340, 958, 342, 380, 342, 380, 342, 956, 344, 380, 342, 956, 344, 378, 342, 378, 4576};

// 19 C
uint16_t AC19[] = {9782, 9904, 9780, 9892, 4578, 2572, 314, 404, 320, 982, 342, 956, 320, 404, 344, 956, 344, 378, 318, 406, 342, 380, 342, 380, 342, 378, 344, 958, 342, 380, 342, 380, 342, 380, 346, 380, 342, 958, 340, 382, 344, 380, 342, 382, 340, 934, 368, 956, 342, 380, 342, 382, 316, 406, 342, 956, 320, 404, 342, 380, 342, 380, 342, 382, 340, 958, 318, 406, 342, 356, 366, 380, 344, 380, 316, 404, 318, 408, 340, 382, 316, 406, 342, 380, 342, 380, 344, 378, 344, 380, 342, 382, 342, 378, 342, 382, 316, 404, 342, 382, 318, 404, 342, 378, 318, 984, 318, 982, 344, 382, 314, 408, 342, 960, 342, 382, 342, 380, 316, 984, 346, 376, 316, 984, 342, 958, 344, 378, 342, 380, 344, 958, 342, 378, 342, 20424, 344, 982, 342, 378, 344, 380, 342, 380, 342, 382, 342, 956, 346, 376, 342, 958, 342, 380, 344, 380, 340, 380, 346, 380, 340, 382, 340, 380, 344, 380, 342, 380, 344, 956, 342, 956, 344, 956, 342, 934, 368, 956, 344, 956, 342, 956, 346, 956, 342, 378, 342, 382, 340, 380, 342, 378, 344, 380, 342, 380, 342, 380, 342, 380, 344, 380, 340, 382, 342, 380, 344, 378, 342, 380, 342, 378, 318, 406, 340, 382, 342, 378, 342, 380, 342, 382, 340, 380, 342, 380, 344, 378, 342, 380, 342, 378, 342, 382, 340, 382, 342, 380, 342, 380, 342, 380, 344, 378, 316, 408, 342, 380, 340, 958, 342, 380, 342, 380, 342, 956, 344, 380, 342, 956, 344, 378, 342, 378, 4576};

// 20 C
uint16_t AC20[] = {9782, 9904, 9780, 9892, 4578, 2572, 314, 404, 320, 982, 342, 956, 320, 404, 344, 956, 344, 378, 318, 406, 342, 380, 342, 380, 342, 378, 344, 958, 342, 380, 342, 380, 342, 380, 346, 380, 342, 958, 340, 382, 344, 380, 342, 382, 340, 934, 368, 956, 342, 380, 342, 382, 316, 406, 342, 956, 320, 404, 342, 380, 342, 380, 342, 382, 340, 958, 318, 406, 342, 356, 366, 380, 344, 380, 316, 404, 318, 408, 340, 382, 316, 406, 342, 380, 342, 380, 344, 378, 344, 380, 342, 382, 342, 378, 342, 382, 316, 404, 342, 382, 318, 404, 342, 378, 318, 984, 318, 982, 344, 382, 314, 408, 342, 960, 342, 382, 342, 380, 316, 984, 346, 376, 316, 984, 342, 958, 344, 378, 342, 380, 344, 958, 342, 378, 342, 20424, 344, 982, 342, 378, 344, 380, 342, 380, 342, 382, 342, 956, 346, 376, 342, 958, 342, 380, 344, 380, 340, 380, 346, 380, 340, 382, 340, 380, 344, 380, 342, 380, 344, 956, 342, 956, 344, 956, 342, 934, 368, 956, 344, 956, 342, 956, 346, 956, 342, 378, 342, 382, 340, 380, 342, 378, 344, 380, 342, 380, 342, 380, 342, 380, 344, 380, 340, 382, 342, 380, 344, 378, 342, 380, 342, 378, 318, 406, 340, 382, 342, 378, 342, 380, 342, 382, 340, 380, 342, 380, 344, 378, 342, 380, 342, 378, 342, 382, 340, 382, 342, 380, 342, 380, 342, 380, 344, 378, 316, 408, 342, 380, 340, 958, 342, 380, 342, 380, 342, 956, 344, 380, 342, 956, 344, 378, 342, 378, 4576};

// 21 C
uint16_t AC21[] = {9782, 9904, 9780, 9892, 4578, 2572, 314, 404, 320, 982, 342, 956, 320, 404, 344, 956, 344, 378, 318, 406, 342, 380, 342, 380, 342, 378, 344, 958, 342, 380, 342, 380, 342, 380, 346, 380, 342, 958, 340, 382, 344, 380, 342, 382, 340, 934, 368, 956, 342, 380, 342, 382, 316, 406, 342, 956, 320, 404, 342, 380, 342, 380, 342, 382, 340, 958, 318, 406, 342, 356, 366, 380, 344, 380, 316, 404, 318, 408, 340, 382, 316, 406, 342, 380, 342, 380, 344, 378, 344, 380, 342, 382, 342, 378, 342, 382, 316, 404, 342, 382, 318, 404, 342, 378, 318, 984, 318, 982, 344, 382, 314, 408, 342, 960, 342, 382, 342, 380, 316, 984, 346, 376, 316, 984, 342, 958, 344, 378, 342, 380, 344, 958, 342, 378, 342, 20424, 344, 982, 342, 378, 344, 380, 342, 380, 342, 382, 342, 956, 346, 376, 342, 958, 342, 380, 344, 380, 340, 380, 346, 380, 340, 382, 340, 380, 344, 380, 342, 380, 344, 956, 342, 956, 344, 956, 342, 934, 368, 956, 344, 956, 342, 956, 346, 956, 342, 378, 342, 382, 340, 380, 342, 378, 344, 380, 342, 380, 342, 380, 342, 380, 344, 380, 340, 382, 342, 380, 344, 378, 342, 380, 342, 378, 318, 406, 340, 382, 342, 378, 342, 380, 342, 382, 340, 380, 342, 380, 344, 378, 342, 380, 342, 378, 342, 382, 340, 382, 342, 380, 342, 380, 342, 380, 344, 378, 316, 408, 342, 380, 340, 958, 342, 380, 342, 380, 342, 956, 344, 380, 342, 956, 344, 378, 342, 378, 4576};

// 22 C
uint16_t AC22[] = {9782, 9904, 9780, 9892, 4578, 2572, 314, 404, 320, 982, 342, 956, 320, 404, 344, 956, 344, 378, 318, 406, 342, 380, 342, 380, 342, 378, 344, 958, 342, 380, 342, 380, 342, 380, 346, 380, 342, 958, 340, 382, 344, 380, 342, 382, 340, 934, 368, 956, 342, 380, 342, 382, 316, 406, 342, 956, 320, 404, 342, 380, 342, 380, 342, 382, 340, 958, 318, 406, 342, 356, 366, 380, 344, 380, 316, 404, 318, 408, 340, 382, 316, 406, 342, 380, 342, 380, 344, 378, 344, 380, 342, 382, 342, 378, 342, 382, 316, 404, 342, 382, 318, 404, 342, 378, 318, 984, 318, 982, 344, 382, 314, 408, 342, 960, 342, 382, 342, 380, 316, 984, 346, 376, 316, 984, 342, 958, 344, 378, 342, 380, 344, 958, 342, 378, 342, 20424, 344, 982, 342, 378, 344, 380, 342, 380, 342, 382, 342, 956, 346, 376, 342, 958, 342, 380, 344, 380, 340, 380, 346, 380, 340, 382, 340, 380, 344, 380, 342, 380, 344, 956, 342, 956, 344, 956, 342, 934, 368, 956, 344, 956, 342, 956, 346, 956, 342, 378, 342, 382, 340, 380, 342, 378, 344, 380, 342, 380, 342, 380, 342, 380, 344, 380, 340, 382, 342, 380, 344, 378, 342, 380, 342, 378, 318, 406, 340, 382, 342, 378, 342, 380, 342, 382, 340, 380, 342, 380, 344, 378, 342, 380, 342, 378, 342, 382, 340, 382, 342, 380, 342, 380, 342, 380, 344, 378, 316, 408, 342, 380, 340, 958, 342, 380, 342, 380, 342, 956, 344, 380, 342, 956, 344, 378, 342, 378, 4576};

// 23 C
uint16_t AC23[] = {9782, 9904, 9780, 9892, 4578, 2572, 314, 404, 320, 982, 342, 956, 320, 404, 344, 956, 344, 378, 318, 406, 342, 380, 342, 380, 342, 378, 344, 958, 342, 380, 342, 380, 342, 380, 346, 380, 342, 958, 340, 382, 344, 380, 342, 382, 340, 934, 368, 956, 342, 380, 342, 382, 316, 406, 342, 956, 320, 404, 342, 380, 342, 380, 342, 382, 340, 958, 318, 406, 342, 356, 366, 380, 344, 380, 316, 404, 318, 408, 340, 382, 316, 406, 342, 380, 342, 380, 344, 378, 344, 380, 342, 382, 342, 378, 342, 382, 316, 404, 342, 382, 318, 404, 342, 378, 318, 984, 318, 982, 344, 382, 314, 408, 342, 960, 342, 382, 342, 380, 316, 984, 346, 376, 316, 984, 342, 958, 344, 378, 342, 380, 344, 958, 342, 378, 342, 20424, 344, 982, 342, 378, 344, 380, 342, 380, 342, 382, 342, 956, 346, 376, 342, 958, 342, 380, 344, 380, 340, 380, 346, 380, 340, 382, 340, 380, 344, 380, 342, 380, 344, 956, 342, 956, 344, 956, 342, 934, 368, 956, 344, 956, 342, 956, 346, 956, 342, 378, 342, 382, 340, 380, 342, 378, 344, 380, 342, 380, 342, 380, 342, 380, 344, 380, 340, 382, 342, 380, 344, 378, 342, 380, 342, 378, 318, 406, 340, 382, 342, 378, 342, 380, 342, 382, 340, 380, 342, 380, 344, 378, 342, 380, 342, 378, 342, 382, 340, 382, 342, 380, 342, 380, 342, 380, 344, 378, 316, 408, 342, 380, 340, 958, 342, 380, 342, 380, 342, 956, 344, 380, 342, 956, 344, 378, 342, 378, 4576};

// 24 C
uint16_t AC24[] = {9782, 9904, 9780, 9892, 4578, 2572, 314, 404, 320, 982, 342, 956, 320, 404, 344, 956, 344, 378, 318, 406, 342, 380, 342, 380, 342, 378, 344, 958, 342, 380, 342, 380, 342, 380, 346, 380, 342, 958, 340, 382, 344, 380, 342, 382, 340, 934, 368, 956, 342, 380, 342, 382, 316, 406, 342, 956, 320, 404, 342, 380, 342, 380, 342, 382, 340, 958, 318, 406, 342, 356, 366, 380, 344, 380, 316, 404, 318, 408, 340, 382, 316, 406, 342, 380, 342, 380, 344, 378, 344, 380, 342, 382, 342, 378, 342, 382, 316, 404, 342, 382, 318, 404, 342, 378, 318, 984, 318, 982, 344, 382, 314, 408, 342, 960, 342, 382, 342, 380, 316, 984, 346, 376, 316, 984, 342, 958, 344, 378, 342, 380, 344, 958, 342, 378, 342, 20424, 344, 982, 342, 378, 344, 380, 342, 380, 342, 382, 342, 956, 346, 376, 342, 958, 342, 380, 344, 380, 340, 380, 346, 380, 340, 382, 340, 380, 344, 380, 342, 380, 344, 956, 342, 956, 344, 956, 342, 934, 368, 956, 344, 956, 342, 956, 346, 956, 342, 378, 342, 382, 340, 380, 342, 378, 344, 380, 342, 380, 342, 380, 342, 380, 344, 380, 340, 382, 342, 380, 344, 378, 342, 380, 342, 378, 318, 406, 340, 382, 342, 378, 342, 380, 342, 382, 340, 380, 342, 380, 344, 378, 342, 380, 342, 378, 342, 382, 340, 382, 342, 380, 342, 380, 342, 380, 344, 378, 316, 408, 342, 380, 340, 958, 342, 380, 342, 380, 342, 956, 344, 380, 342, 956, 344, 378, 342, 378, 4576};

// 25 C
uint16_t AC25[] = {3260, 1650, 400, 428, 396, 430, 398, 1244, 398, 430, 398, 1246, 398, 454, 372, 430, 398, 426, 400, 1244, 398, 1246, 398, 426, 398, 428, 398, 428, 398, 1244, 400, 1246, 398, 428, 400, 426, 398, 426, 400, 428, 402, 426, 398, 426, 400, 426, 398, 428, 400, 428, 398, 428, 398, 426, 402, 426, 398, 428, 400, 1244, 400, 426, 398, 430, 424, 398, 400, 428, 398, 428, 398, 430, 396, 430, 398, 1244, 398, 428, 400, 426, 400, 450, 374, 430, 396, 1248, 396, 428, 398, 430, 396, 426, 400, 426, 400, 426, 400, 426, 398, 1270, 374, 428, 398, 1270, 372, 1244, 400, 1246, 398, 1270, 402, 1220, 398, 1246, 396}; // FUJITSU_AC

// 26 C
uint16_t AC26[] = {9782, 9904, 9780, 9892, 4578, 2572, 314, 404, 320, 982, 342, 956, 320, 404, 344, 956, 344, 378, 318, 406, 342, 380, 342, 380, 342, 378, 344, 958, 342, 380, 342, 380, 342, 380, 346, 380, 342, 958, 340, 382, 344, 380, 342, 382, 340, 934, 368, 956, 342, 380, 342, 382, 316, 406, 342, 956, 320, 404, 342, 380, 342, 380, 342, 382, 340, 958, 318, 406, 342, 356, 366, 380, 344, 380, 316, 404, 318, 408, 340, 382, 316, 406, 342, 380, 342, 380, 344, 378, 344, 380, 342, 382, 342, 378, 342, 382, 316, 404, 342, 382, 318, 404, 342, 378, 318, 984, 318, 982, 344, 382, 314, 408, 342, 960, 342, 382, 342, 380, 316, 984, 346, 376, 316, 984, 342, 958, 344, 378, 342, 380, 344, 958, 342, 378, 342, 20424, 344, 982, 342, 378, 344, 380, 342, 380, 342, 382, 342, 956, 346, 376, 342, 958, 342, 380, 344, 380, 340, 380, 346, 380, 340, 382, 340, 380, 344, 380, 342, 380, 344, 956, 342, 956, 344, 956, 342, 934, 368, 956, 344, 956, 342, 956, 346, 956, 342, 378, 342, 382, 340, 380, 342, 378, 344, 380, 342, 380, 342, 380, 342, 380, 344, 380, 340, 382, 342, 380, 344, 378, 342, 380, 342, 378, 318, 406, 340, 382, 342, 378, 342, 380, 342, 382, 340, 380, 342, 380, 344, 378, 342, 380, 342, 378, 342, 382, 340, 382, 342, 380, 342, 380, 342, 380, 344, 378, 316, 408, 342, 380, 340, 958, 342, 380, 342, 380, 342, 956, 344, 380, 342, 956, 344, 378, 342, 378, 4576};