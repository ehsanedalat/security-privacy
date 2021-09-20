# This is a repo for Threat modelling cheat sheets

Visit https://insights.sei.cmu.edu/blog/threat-modeling-12-available-methods/ for Threat Modeling: 12 Available Methods. `#Methods`

1 **STRIDE**

STRIDE is currently the most mature threat-modeling method. STRIDE has evolved over time to include new threat-specific tables and the variants STRIDE-per-Element and STRIDE-per-Interaction. STRIDE evaluates the system detail design. It models the in-place system. By building data-flow diagrams (DFDs), STRIDE is used to identify system entities, events, and the boundaries of the system. STRIDE applies a general set of known threats based on its name, which is a mnemonic.
**1-1 STRIDE per element
1-2 STRIDE-per-Interaction
links
**
links: 
https://www.microsoft.com/security/blog/2007/10/29/the-stride-per-element-chart/
https://www.ffri.jp/assets/files/monthly_research/MR201610_STRIDE_Variants_and_Security_Requirements-based_Threat_Analysis_ENG.pdf


**2 Quantitative Threat Modeling Method**

This hybrid method consists of attack trees, STRIDE, and CVSS methods applied in synergy. It aims to address a few pressing issues with threat modeling for cyber-physical systems that had complex interdependences among their components.

The first step of the Quantitative Threat Modeling Method (Quantitative TMM) is to build component attack trees for the five threat categories of STRIDE. This activity shows the dependencies among attack categories and low-level component attributes. After that, the CVSS method is applied and scores are calculated for the components in the tree.

## Mobile Threat Modeling

NIST: [Link](https://nvlpubs.nist.gov/nistpubs/SpecialPublications/NIST.SP.1800-4.pdf)

DHS: [Link](https://www.dhs.gov/publication/st-mobile-device-security-study)
