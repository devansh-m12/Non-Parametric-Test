# Non-parametric Statistical Tests Library

![Non-parametric Tests]

Welcome to the Non-parametric Statistical Tests Library repository! This repository contains a collection of non-parametric tests commonly used in statistics. Non-parametric tests are valuable tools when the assumptions of parametric tests are not met, making them suitable for analyzing data that may not follow a normal distribution or when sample sizes are small.

## Tests Included

1. **Wilcoxon Rank Sum Test**
   The Wilcoxon rank sum test, also known as the Mann-Whitney U test, is used to compare two independent samples to determine if their distributions are different. It assesses whether the probability of an observation from one group being greater than an observation from the other group is significantly different from 0. This test is appropriate for ordinal or continuous data.

2. **Wilcoxon Signed Rank Test**
   The Wilcoxon signed rank test is used to compare two related samples, often when the data is paired. It assesses whether the medians of the paired differences between the two samples are significantly different from zero. This test is suitable for ordinal or continuous data.

3. **One Sample Sign Test**
   The one-sample sign test is used to determine if the median of a single sample is significantly different from a hypothesized value. It does not assume any specific distribution for the data, making it a robust choice for small samples or non-normally distributed data.

4. **Run Test**
   The run test is used to assess the randomness or lack of patterns in a sequence of binary data. It examines whether there is a tendency for consecutive values to be similar or different.

5. **Two Sample Sign Test**
   The two-sample sign test is a non-parametric alternative to the paired t-test. It is used to compare two related samples, assessing whether the medians of the paired differences are significantly different from zero. This test is appropriate for ordinal or continuous data.

## Usage

To use the non-parametric tests provided in this library, follow these steps:

1. Clone the repository to your local machine using the following command:
   ```
   gh repo clone devansh-m12/Non-Parametric-Test
   ```

2. Navigate to the repository directory:
   ```
   cd Non-Parametric-Test
   ```
## Contributing

Contributions to this repository are welcome! If you have additional non-parametric tests to add or improvements to the existing code, please feel free to submit a pull request. Be sure to follow the repository's guidelines for contribution.

## License

This project is licensed under the [MIT License](LICENSE).

---

We hope this library of non-parametric statistical tests proves to be helpful in your statistical analyses. If you have any questions, suggestions, or feedback, please don't hesitate to open an issue or reach out to us.

Happy testing!
