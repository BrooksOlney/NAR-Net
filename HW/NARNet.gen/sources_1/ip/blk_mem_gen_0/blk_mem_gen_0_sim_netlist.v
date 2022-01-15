// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
// Date        : Fri Jan 14 19:32:19 2022
// Host        : BrooksRig running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               f:/Research/NAR-Net/HW/NARNet.gen/sources_1/ip/blk_mem_gen_0/blk_mem_gen_0_sim_netlist.v
// Design      : blk_mem_gen_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7s50csga324-2
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "blk_mem_gen_0,blk_mem_gen_v8_4_4,{}" *) (* downgradeipidentifiedwarnings = "yes" *) (* x_core_info = "blk_mem_gen_v8_4_4,Vivado 2020.2" *) 
(* NotValidForBitStream *)
module blk_mem_gen_0
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
  blk_mem_gen_0_blk_mem_gen_v8_4_4 U0
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 20112)
`pragma protect data_block
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
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
