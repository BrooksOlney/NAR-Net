// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
// Date        : Sat Jan 15 19:44:23 2022
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
    addra,
    douta);
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA CLK" *) (* x_interface_parameter = "XIL_INTERFACENAME BRAM_PORTA, MEM_SIZE 8192, MEM_WIDTH 32, MEM_ECC NONE, MASTER_TYPE OTHER, READ_LATENCY 1" *) input clka;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA ADDR" *) input [6:0]addra;
  (* x_interface_info = "xilinx.com:interface:bram:1.0 BRAM_PORTA DOUT" *) output [7:0]douta;

  wire [6:0]addra;
  wire clka;
  wire [7:0]douta;
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
  (* C_HAS_ENA = "0" *) 
  (* C_HAS_ENB = "0" *) 
  (* C_HAS_INJECTERR = "0" *) 
  (* C_HAS_MEM_OUTPUT_REGS_A = "0" *) 
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
        .ena(1'b0),
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
`pragma protect encoding = (enctype = "BASE64", line_length = 76, bytes = 19872)
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
