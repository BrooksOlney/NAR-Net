// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
// Date        : Sat Jan 15 19:54:10 2022
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
  (* C_USE_DEFAULT_DATA = "1" *) 
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
