#  (c) Copyright 2018 Xilinx, Inc. All rights reserved.
#
#  This file contains confidential and proprietary information
#  of Xilinx, Inc. and is protected under U.S. and
#  international copyright and other intellectual property
#  laws.
#
#  DISCLAIMER
#  This disclaimer is not a license and does not grant any
#  rights to the materials distributed herewith. Except as
#  otherwise provided in a valid license issued to you by
#  Xilinx, and to the maximum extent permitted by applicable
#  law: (1) THESE MATERIALS ARE MADE AVAILABLE "AS IS" AND
#  WITH ALL FAULTS, AND XILINX HEREBY DISCLAIMS ALL WARRANTIES
#  AND CONDITIONS, EXPRESS, IMPLIED, OR STATUTORY, INCLUDING
#  BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, NON-
#  INFRINGEMENT, OR FITNESS FOR ANY PARTICULAR PURPOSE; and
#  (2) Xilinx shall not be liable (whether in contract or tort,
#  including negligence, or under any other theory of
#  liability) for any loss or damage of any kind or nature
#  related to, arising under or in connection with these
#  materials, including for any direct, or any indirect,
#  special, incidental, or consequential loss or damage
#  (including loss of data, profits, goodwill, or any type of
#  loss or damage suffered as a result of any action brought
#  by a third party) even if such damage or loss was
#  reasonably foreseeable or Xilinx had been advised of the
#  possibility of the same.
#
#  CRITICAL APPLICATIONS
#  Xilinx products are not designed or intended to be fail-
#  safe, or for use in any application requiring fail-safe
#  performance, such as life-support or safety devices or
#  systems, Class III medical devices, nuclear facilities,
#  applications related to the deployment of airbags, or any
#  other applications that could lead to death, personal
#  injury, or severe property or environmental damage
#  (individually and collectively, "Critical
#  Applications"). Customer assumes the sole risk and
#  liability of any use of Xilinx products in Critical
#  Applications, subject only to applicable laws and
#  regulations governing limitations on product liability.
#
#  THIS COPYRIGHT NOTICE AND DISCLAIMER MUST BE RETAINED AS
#  PART OF THIS FILE AT ALL TIMES.
#
#----------------------------------------------------------------------
#  ASCII Pinout File
#
#  Device   : xc7s6cpga196
#  Date     : 8/9/2018 18:54:08
#  Revision : 1.1
#  Status   : Production
#
#  These package specifications are released coincident with production
#  release of a particular device. Customers receive formal notification
#  of any subsequent changes.
#
#----------------------------------------------------------------------
#  Modification History
#  | Date    : 1/17/2016
#  | Revision: 0.1
#  | Status  : Evaluation Only
#  | Details : Initial creation.
#-----------------------------------------------------------------------------
#  | Date    : 03/22/2017
#  | Revision: 0.2
#  | Status  : Evaluation Only
#  | Details : Initial creation.
#-----------------------------------------------------------------------------
#  | Date    : 08/09/2017
#  | Revision: 0.3
#  | Status  : Evaluation Only
#  | Details : regenration with latest layout
#-----------------------------------------------------------------------------
#  | Date    : 08/30/2017
#  | Revision: 0.4
#  | Status  : Evaluation Only
#  | Details : replaced Bank 0 by -1 for all NC
#-----------------------------------------------------------------------------
#  | Date    : 09/20/2017
#  | Revision: 0.5
#  | Status  : Evaluation Only
#  | Details : VCCO33_14 & VCCO33_34 are chnaged to UNBONDED.
#-----------------------------------------------------------------------------
#  | Date    : 10/04/2017
#  | Revision: 0.6
#  | Status  : Evaluation Only
#  | Details : Bank 14 changed to 0 for DXP and DXN
#-----------------------------------------------------------------------------
#  | Date    : 11/06/2017
#  | Revision: 1.0
#  | Status  : Engineering Sample
#  | Details : Moved to Engineering Sample
#-----------------------------------------------------------------------------
#  | Date    : 03/19/2018
#  | Revision: 1.1
#  | Status  : Production
#  | Details : Moved to Production
# Notes   : Scale_Factor = 0.90
#----------------------------------------------------------------------

#set_property -dict { PACKAGE_PIN A10    IOSTANDARD LVCMOS33 } [get_ports { clk }]; #IO_L13P_T2_MRCC_14 Sch=gclk
#create_clock -add -name sys_clk_pin -period 83.33 -waveform {0 41.66} [get_ports { clk }];

#set_property -dict { PACKAGE_PIN A13    IOSTANDARD LVCMOS33 } [get_ports { enable }]; #IO_0_14
#set_property -dict { PACKAGE_PIN C10    IOSTANDARD LVCMOS33 } [get_ports { rst }]; #IO_0_14
#set_property -dict { PACKAGE_PIN C11    IOSTANDARD LVCMOS33 } [get_ports { x_ready }]; #IO_0_14

#set_property -dict { PACKAGE_PIN F12    IOSTANDARD LVCMOS33 } [get_ports { x_in[9] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN E12    IOSTANDARD LVCMOS33 } [get_ports { x_in[8] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN G12    IOSTANDARD LVCMOS33 } [get_ports { x_in[7] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN F13    IOSTANDARD LVCMOS33 } [get_ports { x_in[6] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN G14    IOSTANDARD LVCMOS33 } [get_ports { x_in[5] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN F14    IOSTANDARD LVCMOS33 } [get_ports { x_in[4] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN H11    IOSTANDARD LVCMOS33 } [get_ports { x_in[3] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN H12    IOSTANDARD LVCMOS33 } [get_ports { x_in[2] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN J13    IOSTANDARD LVCMOS33 } [get_ports { x_in[1] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN H13    IOSTANDARD LVCMOS33 } [get_ports { x_in[0] }]; #IO_0_14

#set_property -dict { PACKAGE_PIN H2    IOSTANDARD LVCMOS33 } [get_ports { y_out[9] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN J1    IOSTANDARD LVCMOS33 } [get_ports { y_out[8] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN H1    IOSTANDARD LVCMOS33 } [get_ports { y_out[7] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN J4    IOSTANDARD LVCMOS33 } [get_ports { y_out[6] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN J3    IOSTANDARD LVCMOS33 } [get_ports { y_out[5] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN L2    IOSTANDARD LVCMOS33 } [get_ports { y_out[4] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN K1    IOSTANDARD LVCMOS33 } [get_ports { y_out[3] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN K3    IOSTANDARD LVCMOS33 } [get_ports { y_out[2] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN K2    IOSTANDARD LVCMOS33 } [get_ports { y_out[1] }]; #IO_0_14
#set_property -dict { PACKAGE_PIN L4    IOSTANDARD LVCMOS33 } [get_ports { y_out[0] }]; #IO_0_14

#set_property -dict { PACKAGE_PIN M5    IOSTANDARD LVCMOS33 } [get_ports { out_ready }]; #IO_0_14


#M2   IO_L20P_T3_34                 3                  34    NA            NA                  HR        NA
#M1   IO_L20N_T3_34                 3                  34    NA            NA                  HR        NA
#N2   IO_L21P_T3_DQS_34             3                  34    NA            NA                  HR        NA
#N1   IO_L21N_T3_DQS_34             3                  34    NA            NA                  HR        NA
#P4   IO_L22P_T3_34                 3                  34    NA            NA                  HR        NA
#N3   IO_L22N_T3_34                 3                  34    NA            NA                  HR        NA
#P3   IO_L23P_T3_34                 3                  34    NA            NA                  HR        NA
#P2   IO_L23N_T3_34                 3                  34    NA            NA                  HR        NA
#N4   IO_L24P_T3_34                 3                  34    NA            NA                  HR        NA
#M4   IO_L24N_T3_34                 3                  34    NA            NA                  HR        NA

#H2   IO_L14N_T2_SRCC_34            2                  34    NA            NA                  HR        NA
#J1   IO_L15P_T2_DQS_34             2                  34    NA            NA                  HR        NA
#H1   IO_L15N_T2_DQS_34             2                  34    NA            NA                  HR        NA
#J4   IO_L16P_T2_34                 2                  34    NA            NA                  HR        NA
#J3   IO_L16N_T2_34                 2                  34    NA            NA                  HR        NA
#L2   IO_L17P_T2_34                 2                  34    NA            NA                  HR        NA
#K1   IO_L17N_T2_34                 2                  34    NA            NA                  HR        NA
#K3   IO_L18P_T2_34                 2                  34    NA            NA                  HR        NA
#K2   IO_L18N_T2_34                 2                  34    NA            NA                  HR        NA
#L4   IO_L19P_T3_34

#Pin  Pin Name                      Memory Byte Group  Bank  VCCAUX Group  Super Logic Region  I/O Type  No-Connect
#M9   DONE_0                        NA                 0     NA            NA                  CONFIG    NA
#A8   TCK_0                         NA                 0     NA            NA                  CONFIG    NA
#A7   CCLK_0                        NA                 0     NA            NA                  CONFIG    NA
#L10  M0_0                          NA                 0     NA            NA                  CONFIG    NA
#L8   M1_0                          NA                 0     NA            NA                  CONFIG    NA
#N7   INIT_B_0                      NA                 0     NA            NA                  CONFIG    NA
#M7   TDI_0                         NA                 0     NA            NA                  CONFIG    NA
#M6   TDO_0                         NA                 0     NA            NA                  CONFIG    NA
#L9   M2_0                          NA                 0     NA            NA                  CONFIG    NA
#N9   CFGBVS_0                      NA                 0     NA            NA                  CONFIG    NA
#N8   PROGRAM_B_0                   NA                 0     NA            NA                  CONFIG    NA
#L7   TMS_0                         NA                 0     NA            NA                  CONFIG    NA
#A13  IO_0_14                       NA                 14    NA            NA                  HR        NA
#C10  IO_L1P_T0_D00_MOSI_14         0                  14    NA            NA                  HR        NA
#C11  IO_L1N_T0_D01_DIN_14          0                  14    NA            NA                  HR        NA
#B11  IO_L2P_T0_D02_14              0                  14    NA            NA                  HR        NA
#A12  IO_L2N_T0_D03_14              0                  14    NA            NA                  HR        NA
#B10  IO_L3P_T0_DQS_PUDC_B_14       0                  14    NA            NA                  HR        NA
#A10  IO_L3N_T0_DQS_EMCCLK_14       0                  14    NA            NA                  HR        NA
#B9   IO_L4P_T0_D04_14              0                  14    NA            NA                  HR        NA
#A9   IO_L4N_T0_D05_14              0                  14    NA            NA                  HR        NA
#C12  IO_L5P_T0_D06_14              0                  14    NA            NA                  HR        NA
#B12  IO_L5N_T0_D07_14              0                  14    NA            NA                  HR        NA
#D13  IO_L6P_T0_FCS_B_14            0                  14    NA            NA                  HR        NA
#C13  IO_L6N_T0_D08_VREF_14         0                  14    NA            NA                  HR        NA
#C14  IO_L7P_T1_D09_14              1                  14    NA            NA                  HR        NA
#B14  IO_L7N_T1_D10_14              1                  14    NA            NA                  HR        NA
#E13  IO_L8P_T1_D11_14              1                  14    NA            NA                  HR        NA
#D14  IO_L8N_T1_D12_14              1                  14    NA            NA                  HR        NA
#E11  IO_L9P_T1_DQS_14              1                  14    NA            NA                  HR        NA
#D11  IO_L9N_T1_DQS_D13_14          1                  14    NA            NA                  HR        NA
#F12  IO_L10P_T1_D14_14             1                  14    NA            NA                  HR        NA
#E12  IO_L10N_T1_D15_14             1                  14    NA            NA                  HR        NA
#G12  IO_L11P_T1_SRCC_14            1                  14    NA            NA                  HR        NA
#F13  IO_L11N_T1_SRCC_14            1                  14    NA            NA                  HR        NA
#G14  IO_L12P_T1_MRCC_14            1                  14    NA            NA                  HR        NA
#F14  IO_L12N_T1_MRCC_14            1                  14    NA            NA                  HR        NA
#H11  IO_L13P_T2_MRCC_14            2                  14    NA            NA                  HR        NA
#H12  IO_L13N_T2_MRCC_14            2                  14    NA            NA                  HR        NA
#J13  IO_L14P_T2_SRCC_14            2                  14    NA            NA                  HR        NA
#H13  IO_L14N_T2_SRCC_14            2                  14    NA            NA                  HR        NA
#J14  IO_L15P_T2_DQS_RDWR_B_14      2                  14    NA            NA                  HR        NA
#H14  IO_L15N_T2_DQS_DOUT_CSO_B_14  2                  14    NA            NA                  HR        NA
#K11  IO_L16P_T2_CSI_B_14           2                  14    NA            NA                  HR        NA
#J11  IO_L16N_T2_D31_14             2                  14    NA            NA                  HR        NA
#M14  IO_L17P_T2_D30_14             2                  14    NA            NA                  HR        NA
#L14  IO_L17N_T2_D29_14             2                  14    NA            NA                  HR        NA
#L12  IO_L18P_T2_D28_14             2                  14    NA            NA                  HR        NA
#L13  IO_L18N_T2_D27_14             2                  14    NA            NA                  HR        NA
#K12  IO_L19P_T3_D26_14             3                  14    NA            NA                  HR        NA
#K13  IO_L19N_T3_D25_VREF_14        3                  14    NA            NA                  HR        NA
#N13  IO_L20P_T3_D24_14             3                  14    NA            NA                  HR        NA
#N14  IO_L20N_T3_D23_14             3                  14    NA            NA                  HR        NA
#P12  IO_L21P_T3_DQS_14             3                  14    NA            NA                  HR        NA
#P13  IO_L21N_T3_DQS_D22_14         3                  14    NA            NA                  HR        NA
#P10  IO_L22P_T3_D21_14             3                  14    NA            NA                  HR        NA
#P11  IO_L22N_T3_D20_14             3                  14    NA            NA                  HR        NA
#N11  IO_L23P_T3_D19_14             3                  14    NA            NA                  HR        NA
#N12  IO_L23N_T3_D18_14             3                  14    NA            NA                  HR        NA
#M10  IO_L24P_T3_D17_14             3                  14    NA            NA                  HR        NA
#M11  IO_L24N_T3_D16_14             3                  14    NA            NA                  HR        NA
#M12  IO_25_14                      NA                 14    NA            NA                  HR        NA
#J8   DXP_0                         NA                 0     NA            NA                  CONFIG    NA
#J7   DXN_0                         NA                 0     NA            NA                  CONFIG    NA
#C3   IO_0_34                       NA                 34    NA            NA                  HR        NA
#A3   IO_L1P_T0_34                  0                  34    NA            NA                  HR        NA
#A2   IO_L1N_T0_34                  0                  34    NA            NA                  HR        NA
#B4   IO_L2P_T0_34                  0                  34    NA            NA                  HR        NA
#A4   IO_L2N_T0_34                  0                  34    NA            NA                  HR        NA
#C5   IO_L3P_T0_DQS_34              0                  34    NA            NA                  HR        NA
#B5   IO_L3N_T0_DQS_34              0                  34    NA            NA                  HR        NA
#B6   IO_L4P_T0_34                  0                  34    NA            NA                  HR        NA
#A5   IO_L4N_T0_34                  0                  34    NA            NA                  HR        NA
#B2   IO_L5P_T0_34                  0                  34    NA            NA                  HR        NA
#B1   IO_L5N_T0_34                  0                  34    NA            NA                  HR        NA
#D4   IO_L6P_T0_34                  0                  34    NA            NA                  HR        NA
#C4   IO_L6N_T0_VREF_34             0                  34    NA            NA                  HR        NA
#C2   IO_L7P_T1_34                  1                  34    NA            NA                  HR        NA
#C1   IO_L7N_T1_34                  1                  34    NA            NA                  HR        NA
#E3   IO_L8P_T1_34                  1                  34    NA            NA                  HR        NA
#D3   IO_L8N_T1_34                  1                  34    NA            NA                  HR        NA
#E1   IO_L9P_T1_DQS_34              1                  34    NA            NA                  HR        NA
#D1   IO_L9N_T1_DQS_34              1                  34    NA            NA                  HR        NA
#F2   IO_L10P_T1_34                 1                  34    NA            NA                  HR        NA
#E2   IO_L10N_T1_34                 1                  34    NA            NA                  HR        NA
#F4   IO_L11P_T1_SRCC_34            1                  34    NA            NA                  HR        NA
#F3   IO_L11N_T1_SRCC_34            1                  34    NA            NA                  HR        NA
#G2   IO_L12P_T1_MRCC_34            1                  34    NA            NA                  HR        NA
#G1   IO_L12N_T1_MRCC_34            1                  34    NA            NA                  HR        NA
#H4   IO_L13P_T2_MRCC_34            2                  34    NA            NA                  HR        NA
#G4   IO_L13N_T2_MRCC_34            2                  34    NA            NA                  HR        NA
#H3   IO_L14P_T2_SRCC_34            2                  34    NA            NA                  HR        NA
#H2   IO_L14N_T2_SRCC_34            2                  34    NA            NA                  HR        NA
#J1   IO_L15P_T2_DQS_34             2                  34    NA            NA                  HR        NA
#H1   IO_L15N_T2_DQS_34             2                  34    NA            NA                  HR        NA
#J4   IO_L16P_T2_34                 2                  34    NA            NA                  HR        NA
#J3   IO_L16N_T2_34                 2                  34    NA            NA                  HR        NA
#L2   IO_L17P_T2_34                 2                  34    NA            NA                  HR        NA
#K1   IO_L17N_T2_34                 2                  34    NA            NA                  HR        NA
#K3   IO_L18P_T2_34                 2                  34    NA            NA                  HR        NA
#K2   IO_L18N_T2_34                 2                  34    NA            NA                  HR        NA
#L4   IO_L19P_T3_34                 3                  34    NA            NA                  HR        NA
#L3   IO_L19N_T3_VREF_34            3                  34    NA            NA                  HR        NA
#M2   IO_L20P_T3_34                 3                  34    NA            NA                  HR        NA
#M1   IO_L20N_T3_34                 3                  34    NA            NA                  HR        NA
#N2   IO_L21P_T3_DQS_34             3                  34    NA            NA                  HR        NA
#N1   IO_L21N_T3_DQS_34             3                  34    NA            NA                  HR        NA
#P4   IO_L22P_T3_34                 3                  34    NA            NA                  HR        NA
#N3   IO_L22N_T3_34                 3                  34    NA            NA                  HR        NA
#P3   IO_L23P_T3_34                 3                  34    NA            NA                  HR        NA
#P2   IO_L23N_T3_34                 3                  34    NA            NA                  HR        NA
#N4   IO_L24P_T3_34                 3                  34    NA            NA                  HR        NA
#M4   IO_L24N_T3_34                 3                  34    NA            NA                  HR        NA
#M5   IO_25_34                      NA                 34    NA            NA                  HR        NA
#F7   NC                            NA                 NA    NA            NA                  NA        NA
#D6   VCCAUX                        NA                 NA    NA            NA                  NA        NA
#D8   VCCAUX                        NA                 NA    NA            NA                  NA        NA
#D10  VCCAUX                        NA                 NA    NA            NA                  NA        NA
#E7   VCCINT                        NA                 NA    NA            NA                  NA        NA
#E9   VCCINT                        NA                 NA    NA            NA                  NA        NA
#F6   VCCINT                        NA                 NA    NA            NA                  NA        NA
#G9   VCCINT                        NA                 NA    NA            NA                  NA        NA
#H6   VCCINT                        NA                 NA    NA            NA                  NA        NA
#J9   VCCINT                        NA                 NA    NA            NA                  NA        NA
#K6   VCCINT                        NA                 NA    NA            NA                  NA        NA
#K8   VCCINT                        NA                 NA    NA            NA                  NA        NA
#A1   GND                           NA                 NA    NA            NA                  NA        NA
#A6   GND                           NA                 NA    NA            NA                  NA        NA
#A11  GND                           NA                 NA    NA            NA                  NA        NA
#A14  GND                           NA                 NA    NA            NA                  NA        NA
#B3   GND                           NA                 NA    NA            NA                  NA        NA
#B8   GND                           NA                 NA    NA            NA                  NA        NA
#B13  GND                           NA                 NA    NA            NA                  NA        NA
#C6   GND                           NA                 NA    NA            NA                  NA        NA
#C8   GND                           NA                 NA    NA            NA                  NA        NA
#D2   GND                           NA                 NA    NA            NA                  NA        NA
#D5   GND                           NA                 NA    NA            NA                  NA        NA
#D7   GND                           NA                 NA    NA            NA                  NA        NA
#D9   GND                           NA                 NA    NA            NA                  NA        NA
#D12  GND                           NA                 NA    NA            NA                  NA        NA
#E4   GND                           NA                 NA    NA            NA                  NA        NA
#E6   GND                           NA                 NA    NA            NA                  NA        NA
#E8   GND                           NA                 NA    NA            NA                  NA        NA
#E10  GND                           NA                 NA    NA            NA                  NA        NA
#E14  GND                           NA                 NA    NA            NA                  NA        NA
#F1   GND                           NA                 NA    NA            NA                  NA        NA
#F5   GND                           NA                 NA    NA            NA                  NA        NA
#F9   GND                           NA                 NA    NA            NA                  NA        NA
#F11  GND                           NA                 NA    NA            NA                  NA        NA
#G3   GND                           NA                 NA    NA            NA                  NA        NA
#G6   GND                           NA                 NA    NA            NA                  NA        NA
#G10  GND                           NA                 NA    NA            NA                  NA        NA
#G11  GND                           NA                 NA    NA            NA                  NA        NA
#G13  GND                           NA                 NA    NA            NA                  NA        NA
#H5   GND                           NA                 NA    NA            NA                  NA        NA
#H9   GND                           NA                 NA    NA            NA                  NA        NA
#J2   GND                           NA                 NA    NA            NA                  NA        NA
#J6   GND                           NA                 NA    NA            NA                  NA        NA
#J10  GND                           NA                 NA    NA            NA                  NA        NA
#J12  GND                           NA                 NA    NA            NA                  NA        NA
#K4   GND                           NA                 NA    NA            NA                  NA        NA
#K5   GND                           NA                 NA    NA            NA                  NA        NA
#K7   GND                           NA                 NA    NA            NA                  NA        NA
#K9   GND                           NA                 NA    NA            NA                  NA        NA
#K14  GND                           NA                 NA    NA            NA                  NA        NA
#L1   GND                           NA                 NA    NA            NA                  NA        NA
#L5   GND                           NA                 NA    NA            NA                  NA        NA
#L6   GND                           NA                 NA    NA            NA                  NA        NA
#L11  GND                           NA                 NA    NA            NA                  NA        NA
#M3   GND                           NA                 NA    NA            NA                  NA        NA
#M8   GND                           NA                 NA    NA            NA                  NA        NA
#M13  GND                           NA                 NA    NA            NA                  NA        NA
#N5   GND                           NA                 NA    NA            NA                  NA        NA
#N10  GND                           NA                 NA    NA            NA                  NA        NA
#P1   GND                           NA                 NA    NA            NA                  NA        NA
#P5   GND                           NA                 NA    NA            NA                  NA        NA
#P6   GND                           NA                 NA    NA            NA                  NA        NA
#P7   GND                           NA                 NA    NA            NA                  NA        NA
#P9   GND                           NA                 NA    NA            NA                  NA        NA
#P14  GND                           NA                 NA    NA            NA                  NA        NA
#N6   VCCO_0                        NA                 0     NA            NA                  NA        NA
#P8   VCCO_0                        NA                 0     NA            NA                  NA        NA
#F10  VCCO_14                       NA                 14    NA            NA                  NA        NA
#H10  VCCO_14                       NA                 14    NA            NA                  NA        NA
#K10  VCCO_14                       NA                 14    NA            NA                  NA        NA
#E5   VCCO_34                       NA                 34    NA            NA                  NA        NA
#G5   VCCO_34                       NA                 34    NA            NA                  NA        NA
#J5   VCCO_34                       NA                 34    NA            NA                  NA        NA
#F8   NC                            NA                 NA    NA            NA                  NA        NA
#B7   NC                            NA                 NA    NA            NA                  NA        NA
#C7   VCCBRAM                       NA                 NA    NA            NA                  NA        NA
#C9   VCCBRAM                       NA                 NA    NA            NA                  NA        NA
#G7   NC                            NA                 NA    NA            NA                  NA        NA
#G8   NC                            NA                 NA    NA            NA                  NA        NA
#H7   NC                            NA                 NA    NA            NA                  NA        NA
#H8   NC                            NA                 NA    NA            NA                  NA        NA




create_clock -period 1000.000 -name clk -waveform {0.000 500.000} [get_ports clk]
set_input_delay -clock [get_clocks clk] -min -add_delay 0.000 [get_ports {x_in[*]}]
set_input_delay -clock [get_clocks clk] -max -add_delay 100.000 [get_ports {x_in[*]}]
set_input_delay -clock [get_clocks clk] -min -add_delay 0.000 [get_ports enable]
set_input_delay -clock [get_clocks clk] -max -add_delay 100.000 [get_ports enable]
set_input_delay -clock [get_clocks clk] -min -add_delay 0.000 [get_ports rst]
set_input_delay -clock [get_clocks clk] -max -add_delay 100.000 [get_ports rst]
set_input_delay -clock [get_clocks clk] -min -add_delay 0.000 [get_ports x_ready]
set_input_delay -clock [get_clocks clk] -max -add_delay 100.000 [get_ports x_ready]
set_output_delay -clock [get_clocks clk] -min -add_delay 0.000 [get_ports {y_out[*]}]
set_output_delay -clock [get_clocks clk] -max -add_delay 50.000 [get_ports {y_out[*]}]
set_output_delay -clock [get_clocks clk] -min -add_delay 0.000 [get_ports out_ready]
set_output_delay -clock [get_clocks clk] -max -add_delay 50.000 [get_ports out_ready]
