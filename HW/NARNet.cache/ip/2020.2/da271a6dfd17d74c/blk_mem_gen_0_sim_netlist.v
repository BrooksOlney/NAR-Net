// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
// Date        : Sat Jan 15 18:23:21 2022
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
glFWofvG3p8tDdld/Dullzyl3NsLeHY=
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
