// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
// Date        : Fri Jan 14 19:32:18 2022
// Host        : BrooksRig running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ blk_mem_gen_0_sim_netlist.v
// Design      : blk_mem_gen_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7s50csga324-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "blk_mem_gen_0,blk_mem_gen_v8_4_4,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_4,Vivado 2020.2" *) 
(* NotValidForBitStream *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix
   (clka,
    ena,
    addra,
    douta);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA EN" *) input ena;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [6:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [7:0]douta;

  wire [6:0]addra;
  wire clka;
  wire [7:0]douta;
  wire ena;
  wire NLW_U0_dbiterr_UNCONNECTED;
  wire NLW_U0_rsta_busy_UNCONNECTED;
  wire NLW_U0_rstb_busy_UNCONNECTED;
  wire NLW_U0_s_axi_arready_UNCONNECTED;
  wire NLW_U0_s_axi_awready_UNCONNECTED;
  wire NLW_U0_s_axi_bvalid_UNCONNECTED;
  wire NLW_U0_s_axi_dbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_rlast_UNCONNECTED;
  wire NLW_U0_s_axi_rvalid_UNCONNECTED;
  wire NLW_U0_s_axi_sbiterr_UNCONNECTED;
  wire NLW_U0_s_axi_wready_UNCONNECTED;
  wire NLW_U0_sbiterr_UNCONNECTED;
  wire [7:0]NLW_U0_doutb_UNCONNECTED;
  wire [6:0]NLW_U0_rdaddrecc_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_bid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_bresp_UNCONNECTED;
  wire [6:0]NLW_U0_s_axi_rdaddrecc_UNCONNECTED;
  wire [7:0]NLW_U0_s_axi_rdata_UNCONNECTED;
  wire [3:0]NLW_U0_s_axi_rid_UNCONNECTED;
  wire [1:0]NLW_U0_s_axi_rresp_UNCONNECTED;

  (* C_ADDRA_WIDTH = "7" *) 
  (* C_ADDRB_WIDTH = "7" *) 
  (* C_ALGORITHM = "1" *) 
  (* C_AXI_ID_WIDTH = "4" *) 
  (* C_AXI_SLAVE_TYPE = "0" *) 
  (* C_AXI_TYPE = "1" *) 
  (* C_BYTE_SIZE = "9" *) 
  (* C_COMMON_CLK = "0" *) 
  (* C_COUNT_18K_BRAM = "1" *) 
  (* C_COUNT_36K_BRAM = "0" *) 
  (* C_CTRL_ECC_ALGO = "NONE" *) 
  (* C_DEFAULT_DATA = "0" *) 
  (* C_DISABLE_WARN_BHV_COLL = "0" *) 
  (* C_DISABLE_WARN_BHV_RANGE = "0" *) 
  (* C_ELABORATION_DIR = "./" *) 
  (* C_ENABLE_32BIT_ADDRESS = "0" *) 
  (* C_EN_DEEPSLEEP_PIN = "0" *) 
  (* C_EN_ECC_PIPE = "0" *) 
  (* C_EN_RDADDRA_CHG = "0" *) 
  (* C_EN_RDADDRB_CHG = "0" *) 
  (* C_EN_SAFETY_CKT = "0" *) 
  (* C_EN_SHUTDOWN_PIN = "0" *) 
  (* C_EN_SLEEP_PIN = "0" *) 
  (* C_EST_POWER_SUMMARY = "Estimated Power for IP     :     2.3768 mW" *) 
  (* C_FAMILY = "spartan7" *) 
  (* C_HAS_AXI_ID = "0" *) 
  (* C_HAS_ENA = "1" *) 
  (* C_HAS_ENB = "0" *) 
  (* C_HAS_INJECTERR = "0" *) 
  (* C_HAS_MEM_OUTPUT_REGS_A = "1" *) 
  (* C_HAS_MEM_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_A = "0" *) 
  (* C_HAS_MUX_OUTPUT_REGS_B = "0" *) 
  (* C_HAS_REGCEA = "0" *) 
  (* C_HAS_REGCEB = "0" *) 
  (* C_HAS_RSTA = "0" *) 
  (* C_HAS_RSTB = "0" *) 
  (* C_HAS_SOFTECC_INPUT_REGS_A = "0" *) 
  (* C_HAS_SOFTECC_OUTPUT_REGS_B = "0" *) 
  (* C_INITA_VAL = "0" *) 
  (* C_INITB_VAL = "0" *) 
  (* C_INIT_FILE = "blk_mem_gen_0.mem" *) 
  (* C_INIT_FILE_NAME = "blk_mem_gen_0.mif" *) 
  (* C_INTERFACE_TYPE = "0" *) 
  (* C_LOAD_INIT_FILE = "1" *) 
  (* C_MEM_TYPE = "3" *) 
  (* C_MUX_PIPELINE_STAGES = "0" *) 
  (* C_PRIM_TYPE = "1" *) 
  (* C_READ_DEPTH_A = "128" *) 
  (* C_READ_DEPTH_B = "128" *) 
  (* C_READ_LATENCY_A = "1" *) 
  (* C_READ_LATENCY_B = "1" *) 
  (* C_READ_WIDTH_A = "8" *) 
  (* C_READ_WIDTH_B = "8" *) 
  (* C_RSTRAM_A = "0" *) 
  (* C_RSTRAM_B = "0" *) 
  (* C_RST_PRIORITY_A = "CE" *) 
  (* C_RST_PRIORITY_B = "CE" *) 
  (* C_SIM_COLLISION_CHECK = "ALL" *) 
  (* C_USE_BRAM_BLOCK = "0" *) 
  (* C_USE_BYTE_WEA = "0" *) 
  (* C_USE_BYTE_WEB = "0" *) 
  (* C_USE_DEFAULT_DATA = "0" *) 
  (* C_USE_ECC = "0" *) 
  (* C_USE_SOFTECC = "0" *) 
  (* C_USE_URAM = "0" *) 
  (* C_WEA_WIDTH = "1" *) 
  (* C_WEB_WIDTH = "1" *) 
  (* C_WRITE_DEPTH_A = "128" *) 
  (* C_WRITE_DEPTH_B = "128" *) 
  (* C_WRITE_MODE_A = "WRITE_FIRST" *) 
  (* C_WRITE_MODE_B = "WRITE_FIRST" *) 
  (* C_WRITE_WIDTH_A = "8" *) 
  (* C_WRITE_WIDTH_B = "8" *) 
  (* C_XDEVICEFAMILY = "spartan7" *) 
  (* downgradeipidentifiedwarnings = "yes" *) 
  (* is_du_within_envelope = "true" *) 
  decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_blk_mem_gen_v8_4_4 U0
       (.addra(addra),
        .addrb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .clka(clka),
        .clkb(1'b0),
        .dbiterr(NLW_U0_dbiterr_UNCONNECTED),
        .deepsleep(1'b0),
        .dina({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .dinb({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .douta(douta),
        .doutb(NLW_U0_doutb_UNCONNECTED[7:0]),
        .eccpipece(1'b0),
        .ena(ena),
        .enb(1'b0),
        .injectdbiterr(1'b0),
        .injectsbiterr(1'b0),
        .rdaddrecc(NLW_U0_rdaddrecc_UNCONNECTED[6:0]),
        .regcea(1'b0),
        .regceb(1'b0),
        .rsta(1'b0),
        .rsta_busy(NLW_U0_rsta_busy_UNCONNECTED),
        .rstb(1'b0),
        .rstb_busy(NLW_U0_rstb_busy_UNCONNECTED),
        .s_aclk(1'b0),
        .s_aresetn(1'b0),
        .s_axi_araddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arburst({1'b0,1'b0}),
        .s_axi_arid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_arready(NLW_U0_s_axi_arready_UNCONNECTED),
        .s_axi_arsize({1'b0,1'b0,1'b0}),
        .s_axi_arvalid(1'b0),
        .s_axi_awaddr({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awburst({1'b0,1'b0}),
        .s_axi_awid({1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awlen({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_awready(NLW_U0_s_axi_awready_UNCONNECTED),
        .s_axi_awsize({1'b0,1'b0,1'b0}),
        .s_axi_awvalid(1'b0),
        .s_axi_bid(NLW_U0_s_axi_bid_UNCONNECTED[3:0]),
        .s_axi_bready(1'b0),
        .s_axi_bresp(NLW_U0_s_axi_bresp_UNCONNECTED[1:0]),
        .s_axi_bvalid(NLW_U0_s_axi_bvalid_UNCONNECTED),
        .s_axi_dbiterr(NLW_U0_s_axi_dbiterr_UNCONNECTED),
        .s_axi_injectdbiterr(1'b0),
        .s_axi_injectsbiterr(1'b0),
        .s_axi_rdaddrecc(NLW_U0_s_axi_rdaddrecc_UNCONNECTED[6:0]),
        .s_axi_rdata(NLW_U0_s_axi_rdata_UNCONNECTED[7:0]),
        .s_axi_rid(NLW_U0_s_axi_rid_UNCONNECTED[3:0]),
        .s_axi_rlast(NLW_U0_s_axi_rlast_UNCONNECTED),
        .s_axi_rready(1'b0),
        .s_axi_rresp(NLW_U0_s_axi_rresp_UNCONNECTED[1:0]),
        .s_axi_rvalid(NLW_U0_s_axi_rvalid_UNCONNECTED),
        .s_axi_sbiterr(NLW_U0_s_axi_sbiterr_UNCONNECTED),
        .s_axi_wdata({1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0,1'b0}),
        .s_axi_wlast(1'b0),
        .s_axi_wready(NLW_U0_s_axi_wready_UNCONNECTED),
        .s_axi_wstrb(1'b0),
        .s_axi_wvalid(1'b0),
        .sbiterr(NLW_U0_sbiterr_UNCONNECTED),
        .shutdown(1'b0),
        .sleep(1'b0),
        .wea(1'b0),
        .web(1'b0));
endmodule
`pragma protect begin_protected
`pragma protect version = 1
`pragma protect encrypt_agent = "XILINX"
`pragma protect encrypt_agent_info = "Xilinx Encryption Tool 2020.2"
`pragma protect key_keyowner="Cadence Design Systems.", key_keyname="cds_rsa_key", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=64)
`pragma protect key_block
QGLtnqZzRetDH6gCWT4Js6wuLlZfrNx/VJp3sfR2NF+cxypO5AxN0oDKLJJtmdrtE/ueNDg+Qf7Z
TqBNRojORA==

`pragma protect key_keyowner="Synopsys", key_keyname="SNPS-VCS-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
B6Ger3hRvfjHkaJ+W8639Kl3TzC9TogLuklOXEiMNdc4Im+DjEUzxb3DKlzu0VW3zxZqjJ3+wsW/
LnRmPCESi5Y9eRJaLFXg79EMfoj4X+nTdHAP6yCfltBADKegZ12gpnB/8ey5yn2KA74LUtPC7jna
iyjqSfsWLGnz6UdXzwk=

`pragma protect key_keyowner="Aldec", key_keyname="ALDEC15_001", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
BX+DxgMPRyZbYojCUR9Sk8Lq+3ZigBz4yMFHQkmurfdfDzyTPJCE827eGiPyTenK1QPVhEtf9g06
0BFXq/0COPuU1BWJwdkz1c4dE6/exDwhvEh+hPx3vRY6z8fDEf6aGVIXrHDvrmddehe7yMSIpo+k
aXHR06EEdfHCFY4TggYwhcJVXjkE+ApsVuyfmEfPmYjo8hCWyQyBsUWIOY03q1+MvUjjsmTwgs9g
fh5MY9ToaLfoJxPKdCpsqrBX4LJ+VDGFlAqIcqHTE2jCmPiToZAFXB7fzf1wDjFCBlJyFVDBGi0i
m+CouLSb7X1mvVhdDZgNrZDJMV688Bu3o54vew==

`pragma protect key_keyowner="ATRENTA", key_keyname="ATR-SG-2015-RSA-3", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
DaIU/Ddc8USbZ2mURzujJDWDH1JbHl5tFVOOQ2aVaUPIA71yyE38OXVLEtF8rNmujYH30nEeQ+FV
LVJ16aaHw+iiuaqorTM3K5KLohVlN+WlcEtSXHuPNHjw8ddqtzpaX7pH1zqZH+YmfCL5oaNLqDH4
rkBnUl0/Gm/hzSwKjYhXGQFYQ+gGP99OjXakzrAqZzp/Iq4gt+Z5902/JV9thd/isHQImJ0QyK8M
EKM579iPAfXGes2mbiNYHcvDmSPYmW1zlhOE++N1EKeea7j/msnKeyhlC+hGE4Xfn4TVvqgQexCT
rp/wS/MosY6WH1aKFQlFH2hEppA7KXUaQlvG+w==

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VELOCE-RSA", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=128)
`pragma protect key_block
XmWoAt4X8hrCJ5yTyug4ajJW5UhfkLNibzjihWzZ4Cr9hQSvWZoTc8rjGsLPbz6Le+/9iI5KxecS
eR0wiAO+G2IkwhZgVBeZdKoFnlnTVAyLjk9wMAFXNyJZM6b1NDbfXlPcUsC6JePvPlwwdWknkSsC
r3KvgkWAS+O3xvRmaNw=

`pragma protect key_keyowner="Mentor Graphics Corporation", key_keyname="MGC-VERIF-SIM-RSA-2", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
Hw3Y+rShKrXiUViyNU1/O2qv6TgheLHBnFMj1i9MUGrHYqh9pLfLYUgWR7S2vj4jv4S+Ks0BpP4p
dKEqVAFmTCfQNEUHaVcFPkOHgig6L4mhLY6HUUKJoRgiQepgLi/W3V+ZZPQSQFkB3CU4MsJzhXvR
yLcpDriZy8cnAHD87Zi5DrNGBzj3kigJeM0du6lCQbxtF5aEdoaNP+YTnIFtcqYhoYnswQlYt0sV
HKgFA8VzqzL5WYnpH7+1IKmFkJBHkyqHCa9wPK0qCKnxkuDj70YzPVqQ+cocdKU+/gNdpCOdZlci
F2HTxrgfrXndJru3TiDqu4UavqAe0MNuFp3t0w==

`pragma protect key_keyowner="Real Intent", key_keyname="RI-RSA-KEY-1", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
XPVggoWL6aXz+MpODTOZhEUQDa0vfEnUDaYeEHXm2vGyqKJujN2c/FFAFBeBYdJATLsIsQ+BqoPc
pBbcFYXDBfOtFIW2dH6Y1OoD65KyJ/hAq8coa21kFgq4hFat5vzZ2iIfkCpTUr4vDZO7Xne8cZO9
WsHffoTCt5rS59wWm2b8I5R8Eh2TUbQg3RCyrcnD66cvcEnlXe1CNMQ4/loVJpA4IBinBf820Wjc
vw2fZbGI0jXC+ACSHOviH63Xwmn+aRV5Ppkup7IYoon/ieKapRQeASu3TTY37xSBXiInSdtMTzJ6
+4GfO4eSHVriCk/sWbuTBzfRzoSShrnHjzz5LA==

`pragma protect key_keyowner="Xilinx", key_keyname="xilinxt_2020_08", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
L78XuiswVcgO2gtebzL7SA9BC/jJGAM0v6S9pzmyqL+QYzRneiYeGyDmsW33jEVVSTuNjTXkBLY7
yTOKQruatwe4V0OLi6174saSAmPgerSV1GyLP7KhmusLV/N61avC9TPam+tekhKeE0tds4EnJ3et
4JdLh+SE4Z4pcuqCjB5MFneIYKKWDx7siU6oesAQtoSJOesfMchX63MhOjOHFP/ch+1gHv3T45hg
IGF7V7TrdREVE4f9631tlVJ1o2Dypsmo/76Itz5WCGlTMjAnWXN8IXxKN+PZ3dyt1wjrZm2P/td+
xiGszFnSLrRvw/HferwtSmRx8q0fiHZ88roGTw==

`pragma protect key_keyowner="Metrics Technologies Inc.", key_keyname="DSim", key_method="rsa"
`pragma protect encoding = (enctype="BASE64", line_length=76, bytes=256)
`pragma protect key_block
kDX5kq2QEe25429T6vQqBCFvV1McKTJRYfK99ymVNK2GGvGLXSzgwJHwB2fj9rM0wme3zYYY0vQR
x+9F4L7KLlOVY6qY3LB59uDzyXBI3mMZaS905HXHJkdZHWtQWpfHhl27LqL+8FSluaD6F+KFfYOV
CwIOVuCIp/XjxFXpNBik7YiPt4kHOlDA97IXNLnYUn/g1csGqeNWce4UTne50ggWvLYGbTFGmTjT
N67TpUiGRVRCSv8Tax72GWFIMFZk3Tlp68ZUSQEybZMWX1U9XdMdtxfvNGhf8mi5jQJ2SupSzKu4
T/+53IN9T8aLePAiGBKKG1ZBj4y1ZyYA7XYvjw==

`pragma protect data_method = "AES128-CBC"
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 20144)
`pragma protect data_block
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
QxuXKt+ifW+SYSkH5l1ZZBZEOOn6FPo=
`pragma protect end_protected
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
