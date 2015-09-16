#include <avr/pgmspace.h>
#include <Average.h>

const PROGMEM uint16_t NemoWeight0[] = { 2614, 2614, 116, 223, 223, 180, 269, 2518, 2815, 1430, 1879, 130, 111, 2687, 4672, 2495, 2495, 1865, 4573, 4644, 4606, 4606, 4624, 2705, 1353, 1397, 1397, 1594, 1857, 1956, 2356, 1930, 1930, 263, 2473, 3499, 1351, 1351, 2357, 4609, 4687, 4661, 4661, 4595, 4599, 4633, 4577, 4577, 4750, 4728, 4745, 4647, 4647, 4764, 4675, 4659, 4562, 4562, 4693, 4549, 4570, 4713, 4713, 4613, 4631, 4571, 4602, 4602, 4708, 4684, 4612, 4707, 4707, 4599, 4640, 4569, 4700, 4700, 4653, 4656, 4658, 4660, 4660, 4657, 4654, 4655, 4657, 4657, 4662, 4532, 473, 695, 695, 849, 284, 284, 171, 173, 164, 136, 136, 133, 435, 1887, 1887, 4712, 4623, 4730, 4730, 4729, 4533, 4726, 4642, 4642, 4477, 4805, 4662, 4477, 4477, 4674, 4771, 4655, 4527, 4527, 4814, 4767, 4657, 4734, 4734, 4697, 4586, 4682, 4663, 4663, 4557, 4684, 4695, 4656, 4656, 4569, 4662, 4649, 4661, 4661, 4663, 4660, 4659, 4663, 4663, 4667, 4572, 107, 107, 107, 4564, 4564, 4744, 4752, 4709, 4565, 4565, 4731, 4584, 4829, 4705, 4705, 4477, 4730, 4732, 4718, 4718, 4595, 4635, 4632, 4639, 4639, 4644, 4639, 4639, 4645, 4645, 4683, 190, 154, 154, 172, 172, 171, 171, 177, 2693, 2693, 4625, 4727, 1484, 3178, 4648, 4648, 4669, 4664, 4713, 4575, 4575, 4657, 4763, 4665, 4665, 4626, 4626, 4664, 4672, 4672, 4673, 4673, 4674, 4674, 4674, 4670, 4675, 4670, 4667, 4667, 4665, 1086, 486, 467, 467, 3923, 3923, 4619, 4652, 4608, 301, 301, 2515, 791, 3124, 3124, 4665, 4598, 4589, 4622, 4622, 4592, 4588, 4594, 4690, 4690, 4645, 4644, 4647, 4643, 4643, 4636, 4640, 4638, 4644, 4644, 4669, 165, 1519, 4480, 4704, 4704, 202, 3001, 3001, 2880, 1383, 401, 270, 110, 110, 1503, 2371, 4605, 4605, 4582, 4581, 2149, 4273, 4273, 4537, 4662, 4651, 4693, 4693, 4720, 4619, 4694, 4655, 4655, 4634, 4651, 4522, 4649, 4649, 4669, 4568, 4603, 4581, 4581, 4705, 4694, 4682, 4625, 4625, 4551, 4665, 4537, 4669, 4669, 4734, 4604, 4572, 4576, 4576, 4663, 4583, 4560, 4600, 4600, 4657, 4616, 4635, 4620, 4620, 4614, 4619, 4620, 4619, 4619, 4626, 4629, 4593, 127, 306, 306, 1263, 1189, 1189, 2934, 3472, 1047, 224, 302, 327, 736, 736, 281, 281, 102, 102, 196, 141, 141, 179, 165, 179, 132, 132, 1356, 4742, 697, 680, 680, 4619, 4704, 4722, 4722, 4741, 4741, 4673, 4734, 4661, 4709, 4709, 4648, 4697, 4623, 4782, 4782, 4690, 4699, 4692, 4697, 4697, 4690, 4691, 4692, 4701, 4701, 4053, 3966, 4698, 460, 460, 115, 229, 229, 174, 145, 176, 176, 182, 123, 123, 978, 3213, 3213, 4641, 2610, 844, 137, 129, 2876, 2876, 3241, 4028, 4705, 4751, 4751, 4602, 4659, 4583, 4811, 4811, 4538, 4820, 4403, 4798, 4798, 4452, 4585, 4658, 4648, 4648, 4759, 4457, 4619, 4634, 4634, 4594, 4672, 4643, 4636, 4636, 4634, 4627, 4634, 4636, 4636, 4627, 3465, 172, 121, 3364, 4604, 1603, 2017, 4615, 4548, 4586, 4549, 4555, 4555, 4568, 4550, 4625, 4707, 4616, 4574, 4581, 4627, 4613, 4613, 4606, 4605, 4605, 4604, 4605, 4599, 4599, 4605, 4604, 4601, 4602, 4617, 1933, 1933, 435, 2429, 2873, 2873, 3040, 3754, 2114, 2179, 2973, 3744, 3744, 4671, 4636, 4685, 4630, 232, 2151, 507, 507, 3043, 2160, 1780, 4479, 1491, 1429, 2876, 2876, 4351, 4571, 4639, 4404, 4404, 4505, 4627, 4422, 4684, 4684, 4406, 4609, 4324, 4725, 4725, 4562, 4465, 4457, 4440, 4440, 4481, 4434, 4525, 4570, 4570, 4449, 4554, 4494, 4472, 4472, 4475, 4513, 4475, 4513, 4513, 4535, 4626, 4713, 4441, 4441, 4460, 4430, 4395, 4533, 4533, 4462, 4498, 3199, 4442, 4442, 4606, 4379, 4609, 4544, 4544, 4536, 1937, 442, 442, 3547, 3547, 4447, 4424, 4478, 4559, 4559, 4491, 4484, 4478, 4445, 4445, 4425, 3070, 3301, 3301, 3355, 2645, 4552, 4660, 4660, 4471, 4530, 4445, 4606, 4606, 4517, 4521, 3741, 3741, 4525, 4747, 4671, 4414, 4414, 4634, 4805, 4568, 4484, 4484, 4578, 4711, 4623, 4679, 4679, 4696, 4544, 4465, 4700, 4700, 4643, 4695, 4593, 4597, 4597, 4598, 4605, 4598, 4610, 4610, 4400, 150, 150, 1694, 3391, 3391, 4573, 1641, 944, 3078, 3078, 3995, 1858, 2140, 4666, 4799, 4594, 4594, 4790, 4696, 4722, 4609, 4523, 4523, 4689, 4563, 4723, 4630, 4630, 4561, 4699, 4614, 4578, 4578, 4604, 4632, 4623, 4625, 4625, 4625, 4629, 4626, 4628, 4628, 4637, 760, 526, 2916, 3122, 217, 2043, 3912, 3912, 4727, 4773, 4678, 4707, 4707, 4608, 4656, 4588, 4734, 4734, 4823, 4616, 4709, 4614, 4614, 4744, 4659, 4621, 4725, 4725, 4571, 4677, 4731, 4687, 4669, 4669, 4617, 4668, 4613, 4851, 4851, 4562, 4659, 4695, 4678, 4678, 4719, 4661, 4668, 4665, 4665, 4672, 4670, 4671, 4666, 4666, 4672, 4671, 4683, 3909, 3909, 4240, 4667, 4667, 4662, 3455, 189, 222, 111, 134, 178, 413, 413, 299, 281, 144, 2380, 4725, 4676, 3341, 3341, 2192, 3078, 3149, 1015, 4550, 4550, 4608, 4550, 1800, 1580, 1580, 1459, 3157, 4602, 4557, 4557, 4582, 4566, 4691, 4624, 4624, 818, 4119, 4611, 4611, 4738, 4683, 4814, 4618, 4618, 4757, 4519, 4754, 4861, 4861, 4498, 4658, 4737, 4806, 4806, 4784, 4774, 4640, 4683, 4683, 4590, 4642, 4658, 4658, 4660, 4654, 4659, 4659, 4547, 4547, 167, 411, 411, 161, 157, 157, 387, 2161, 4803, 4803, 4721, 1447, 1288, 4184, 4184, 4689, 4791, 4681, 4772, 4772, 4717, 4840, 4648, 4768, 4670, 4670, 4745, 4752, 4759, 4759, 4758, 4758, 4759, 4755, 4755, 4754, 4758, 4773, 2028, 392, 4610, 3062, 3062, 4589, 4636, 4731, 4731, 4697, 4697, 4502, 4546, 4753, 4751, 4751, 4666, 4683, 4669, 4693, 4693, 4675, 4671, 4678, 4669, 4669, 4672, 4674, 4683, 1261, 1261, 374, 121, 134, 219, 4690, 4690, 4534, 1928, 2451, 4657, 4645, 4596, 4596, 4660, 4573, 4676, 4584, 4584, 4698, 4634, 4807, 4717, 4717, 4602, 4709, 4582, 4662, 4662, 4605, 4706, 4672, 4686, 4686, 4615, 4713, 4711, 4696, 4696, 4703, 4696, 4692, 4676, 4676, 436, 135, 167, 702, 702, 2638, 2638, 4669, 4699, 4607, 4662, 4662, 4598, 4688, 4653, 4726, 4726, 4725, 4567, 4624, 4570, 4570, 4576, 4575, 4755, 4647, 4647, 4738, 4536, 4723, 4771, 4771, 4661, 4651, 4588, 4718, 4547, 4547, 4659, 4682, 4553, 4699, 4699, 4686, 4559, 4660, 4535, 4535, 4682, 4643, 4643, 4644, 4644, 4646, 4641, 4643, 4640, 4640, 4647, 4644, 4641, 4647, 4647, 4647, 4644, 3302, 216, 268, 509, 4594, 4594, 2702, 3127, 3127, 4000, 2967, 448, 3582, 4661, 4664, 4585, 4749, 4749, 4680, 4676, 4597, 3383, 3383, 4322, 4668, 4610, 4680, 4680, 4636, 4637, 4580, 1918, 1918, 1505, 1660, 1602, 1752, 1752, 1806, 1898, 1409, 159, 4638, 4675, 4707, 4707, 4704, 836, 341, 2137, 4765, 4717, 4666, 4666, 4688, 4599, 4745, 4645, 4645, 4641, 2381, 4723, 4664, 4702, 4702, 4737, 4587, 4591, 4640, 4640, 4733, 4678, 4635, 4626, 4626, 4708, 4681, 4668, 4632, 4632, 4653, 4599, 4685, 4652, 4652, 4663, 4672, 4648, 4648, 4661, 4662, 4658, 4664, 4664, 4664, 4621, 283, 434, 384, 192, 215, 230, 230, 215, 154, 105, 4748, 4709, 4788, 4754, 4754, 4639, 4661, 4778, 4778, 4642, 4722, 4601, 4756, 4756, 4639, 4616, 4811, 4704, 4704, 4633, 4763, 4709, 4651, 4636, 4636, 4731, 4766, 4679, 4655, 4655, 4733, 4668, 4671, 4669, 4669, 4667, 4673, 4667, 4635, 4635, 201, 315, 683, 683, 290, 232, 530, 121, 126, 161, 3402, 4647, 4647, 4611, 4581, 4584, 4531, 4531, 4540, 4550, 4495, 4639, 4639, 4639, 4576, 4686, 4670, 4670, 4638, 1421, 1989, 1536, 1536, 1557, 1467, 2109, 4614, 4614, 3899, 2473, 3122, 3122, 2276, 1585, 186, 205, 343, 343, 176, 930, 4550, 4584, 144, 161, 170, 145, 2473, 4488, 210, 210, 4643, 4657, 4572, 4572, 4613, 4618, 4630, 4567, 4567, 4622, 4606, 4599, 4697, 4618, 4618, 4591, 4581, 2531, 4507, 4604, 4549, 4659, 4659, 4601, 4544, 4603, 4676, 4676, 4606, 4608, 4686, 4596, 4596, 4590, 4691, 4649, 4608, 4608, 4663, 4648, 4632, 4632, 4632, 4661, 4559, 4598, 4630, 4630, 4618, 4616, 4614, 4614, 4614, 4620, 4618, 4542, 473, 2275, 4558, 4661, 2235, 1243, 1243, 1394, 2860, 393, 393, 103, 4547, 4542, 4542, 4627, 4569, 4609, 4634, 4634, 4556, 4616, 4534, 4565, 4565, 4649, 4493, 4561, 4559, 4695, 4695, 4627, 4648, 4635, 4636, 4636, 4626, 4643, 4633, 4640, 4640, 4639, 4552, 4491, 4748, 4658, 4658, 4622, 4607, 4667, 4644, 4644, 4677, 4625, 4640, 4623, 4623, 4661, 4769, 4718, 4635, 4635, 4687, 4741, 4625, 4682, 4682, 4694, 4682, 4679, 4683, 4683, 4684, 4680, 4681, 4680, 4680, 4681, 4684, 4682, 4680, 4680, 4678, 4681, 4681, 4679, 4679, 2904, 4604, 4614, 4681, 4681, 4706, 4599, 4593, 4677, 4677, 4719, 4623, 4605, 4599, 4599, 4613, 4613, 4615, 4615, 4615, 4613, 4619, 4616, 4630, 4630, 1728, 2932, 3108, 3108, 2969, 3300, 2269, 120, 153, 159, 167, 144, 144, 1091, 4664, 4742, 4650, 4592, 4592, 4605, 4610, 4641, 4623, 4623, 4657, 4628, 4641, 4640, 4640, 4642, 4643, 4651, 4650, 4650, 4640, 4659, 3043, 140, 140, 147, 154, 239, 239, 225, 4656, 4614, 4586, 4699, 4699, 4627, 4591, 4629, 4584, 4584, 4669, 4640, 4632, 4635, 4635, 4632, 4636, 4636, 4633, 4633, 4634, 4645, 4588, 180 };
const PROGMEM uint16_t NemoWeight1[] = { 2363, 5095, 5063, 5100, 5074, 5039, 5135, 5077, 5062, 5075, 5023, 5031, 5040, 5051, 5069, 5068, 5068, 5070, 5073, 5070, 5082, 3576 };
const PROGMEM uint16_t NemoWeight2[] = { 5079, 5155, 5060, 5172, 5006, 5176, 5063, 5093, 5137, 4998, 5254, 4945, 5113, 5210, 4979, 5161, 5087, 5042, 5098, 5070, 5197, 4933, 5204, 5003, 5080, 5130, 4955, 5223, 5055, 5035, 5191, 5006, 5070, 5303, 4896, 5150, 5110, 5008, 5096, 4985, 5059, 5069, 5075, 5081, 5082, 5084, 5084, 5085, 5083, 5087, 5086, 5087, 5086, 5083, 5101, 4797, 0 };
const PROGMEM uint16_t NemoWeight3[] = { 4990, 5112, 5018, 5122, 4978, 5125, 5001, 5059, 5140, 5015, 5060, 5156, 4966, 5066, 5101, 5056, 5052, 5053, 5053, 5053, 5059, 5062, 3091 };

Average<float> ave(10);

unsigned int displayInt;
int k;
int arrsize;

void setup() {
  Serial.begin(38400);
  while (!Serial);

  arrsize = sizeof(NemoWeight3) / 2 ;
  Serial.print("arr size : ");
  Serial.println(arrsize);

  int nofchecked = 0;
  
  for (k = 0; k < arrsize; k++)
  {
    displayInt = pgm_read_word_near(NemoWeight3 + k);
    ave.push(displayInt);

    if ( ((ave.maximum() - ave.minimum()) < 100 ) && ( ave.stddev() < 50) && ( nofchecked > 15 ) ) {

      Serial.print("k : ");
      Serial.print(k);
      Serial.print(" : displayInt : ");
      Serial.print(displayInt);

      Serial.print("\t\tMean:   "); Serial.print(ave.mean());
      Serial.print("\t\tStdDev: "); Serial.println(ave.stddev());
    }
    nofchecked++;
  }

}

void loop() {


}