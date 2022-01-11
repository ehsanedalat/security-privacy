---
title: 'Secure Boot'
date: 2022-01-11
permalink: /posts/2022/secureboot/
tags:
  - security
  - hardening
---

### An Introduction to secure booting

In this post, I will present my recent findings on secure booting. When the OS boot, some programs run in sequence. Each program runs its next program's code. If there is no security feature during boot, an attacker can inject his malicious code into one of the booting programs. Therefore, he can get complete control of the compromised system. The complete threat modeling for the boot process is described in this [link](https://safeboot.dev/threats/). The secure boot mechanism is the defense of such an attack. The checksum of each booting program is calculated and verified during the boot process. In other words, each program proves the integrity of the following running program. Therefore, an attacker can not inject his malicious code. Two different approaches can do this process. The first approach entirely relies on the firmware software, which starts the booting process. For example, for the Debian-based OSes, we can use the method that describes in this [link](https://wiki.debian.org/SecureBoot) and this [link](https://wiki.ubuntu.com/UEFI/SecureBoot). 

In the second approach, we can get help from the TPM module. In other words, we use the hardware facility, and the process relies on firmware software (for example, UEFI) and TPM hardware. [Trusted Computing Group](https://trustedcomputinggroup.org/) (TCG) designed the TPM module. The TPM is a hardware module for saving secrets and cryptographic algorithms for calculating them in a secure place. TCG releases a software stack ([TSS](https://github.com/tpm2-software)) to connect to the TPM and modify it. But it isn't straightforward to implement the secure boot method by TSS and UEFI. [SafeBoot](https://safeboot.dev/) is a suitable replacement. SafeBoot is a library module for implementing secure boot with TPM.

It is worth mentioning that the integrity of UEFI software is essential and should be checked somewhere. Intel processor has [Bootgurad](https://trmm.net/Bootguard/) as the answer for this issue. If the Bootguard policy is in the enforced mode, the checksum of the UEFI is stored in the One Time Program (OTP) fuse in the processor. Each time the UEFI is going to run, its integrity is verified. If it is not confirmed, the device is shut down.

Another issue is that the UEFI software is closed source. Therefore, we can not completely trust it. [Coreboot](https://coreboot.org/) is an alternative open-source firmware software. We could manage the secure boot, including TPM, with the help of Coreboot. We should keep in mind that we can install Coreboot when complete access to Bootguard configurations is possible.

In summary, we conclude that it is a three-phase path for enforcing secure boot:

1. Implementing Software Approach (UEFI Secure Boot)
2. Implementing Software and Hardware Approach with the help of TPM (SafeBoot)
3. Protecting the integrity of UEFI (Bootguard policy) 
4. Installing open-source Coreboot firmware with enabled Bootguard policy
