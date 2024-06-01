// ======================================================================
// EGasPedal.v generated from TopDesign.cysch
// 06/01/2024 at 21:19
// This file is auto generated. ANY EDITS YOU MAKE MAY BE LOST WHEN THIS FILE IS REGENERATED!!!
// ======================================================================

/* -- WARNING: The following section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_DIE_LEOPARD 1
`define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3
`define CYDEV_CHIP_REV_LEOPARD_ES3 3
`define CYDEV_CHIP_REV_LEOPARD_ES2 1
`define CYDEV_CHIP_REV_LEOPARD_ES1 0
`define CYDEV_CHIP_DIE_PSOC5LP 2
`define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0
`define CYDEV_CHIP_REV_PSOC5LP_ES0 0
`define CYDEV_CHIP_DIE_PSOC5TM 3
`define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1
`define CYDEV_CHIP_REV_PSOC5TM_ES1 1
`define CYDEV_CHIP_REV_PSOC5TM_ES0 0
`define CYDEV_CHIP_DIE_TMA4 4
`define CYDEV_CHIP_REV_TMA4_PRODUCTION 17
`define CYDEV_CHIP_REV_TMA4_ES 17
`define CYDEV_CHIP_REV_TMA4_ES2 33
`define CYDEV_CHIP_DIE_PSOC4A 5
`define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17
`define CYDEV_CHIP_REV_PSOC4A_ES0 17
`define CYDEV_CHIP_DIE_PSOC6ABLE2 6
`define CYDEV_CHIP_REV_PSOC6ABLE2_ES 17
`define CYDEV_CHIP_REV_PSOC6ABLE2_PRODUCTION 33
`define CYDEV_CHIP_REV_PSOC6ABLE2_NO_UDB 33
`define CYDEV_CHIP_DIE_VOLANS 7
`define CYDEV_CHIP_REV_VOLANS_PRODUCTION 0
`define CYDEV_CHIP_DIE_BERRYPECKER 8
`define CYDEV_CHIP_REV_BERRYPECKER_PRODUCTION 0
`define CYDEV_CHIP_DIE_CRANE 9
`define CYDEV_CHIP_REV_CRANE_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM3 10
`define CYDEV_CHIP_REV_FM3_PRODUCTION 0
`define CYDEV_CHIP_DIE_FM4 11
`define CYDEV_CHIP_REV_FM4_PRODUCTION 0
`define CYDEV_CHIP_DIE_EXPECT 2
`define CYDEV_CHIP_REV_EXPECT 0
`define CYDEV_CHIP_DIE_ACTUAL 2
/* -- WARNING: The previous section of defines are deprecated and will be removed in a future release -- */
`define CYDEV_CHIP_FAMILY_PSOC3 1
`define CYDEV_CHIP_FAMILY_PSOC4 2
`define CYDEV_CHIP_FAMILY_PSOC5 3
`define CYDEV_CHIP_FAMILY_PSOC6 4
`define CYDEV_CHIP_FAMILY_FM0P 5
`define CYDEV_CHIP_FAMILY_FM3 6
`define CYDEV_CHIP_FAMILY_FM4 7
`define CYDEV_CHIP_FAMILY_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_UNKNOWN 0
`define CYDEV_CHIP_MEMBER_3A 1
`define CYDEV_CHIP_REVISION_3A_PRODUCTION 3
`define CYDEV_CHIP_REVISION_3A_ES3 3
`define CYDEV_CHIP_REVISION_3A_ES2 1
`define CYDEV_CHIP_REVISION_3A_ES1 0
`define CYDEV_CHIP_MEMBER_5B 2
`define CYDEV_CHIP_REVISION_5B_PRODUCTION 0
`define CYDEV_CHIP_REVISION_5B_ES0 0
`define CYDEV_CHIP_MEMBER_5A 3
`define CYDEV_CHIP_REVISION_5A_PRODUCTION 1
`define CYDEV_CHIP_REVISION_5A_ES1 1
`define CYDEV_CHIP_REVISION_5A_ES0 0
`define CYDEV_CHIP_MEMBER_4G 4
`define CYDEV_CHIP_REVISION_4G_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4G_ES 17
`define CYDEV_CHIP_REVISION_4G_ES2 33
`define CYDEV_CHIP_MEMBER_4U 5
`define CYDEV_CHIP_REVISION_4U_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4E 6
`define CYDEV_CHIP_REVISION_4E_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0
`define CYDEV_CHIP_MEMBER_4X 7
`define CYDEV_CHIP_REVISION_4X_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4O 8
`define CYDEV_CHIP_REVISION_4O_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4R 9
`define CYDEV_CHIP_REVISION_4R_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4T 10
`define CYDEV_CHIP_REVISION_4T_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4N 11
`define CYDEV_CHIP_REVISION_4N_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4S 12
`define CYDEV_CHIP_REVISION_4S_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4W 13
`define CYDEV_CHIP_REVISION_4W_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AC 14
`define CYDEV_CHIP_REVISION_4AC_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AD 15
`define CYDEV_CHIP_REVISION_4AD_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AE 16
`define CYDEV_CHIP_REVISION_4AE_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Q 17
`define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Y 18
`define CYDEV_CHIP_REVISION_4Y_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4Z 19
`define CYDEV_CHIP_REVISION_4Z_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4D 20
`define CYDEV_CHIP_REVISION_4D_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4J 21
`define CYDEV_CHIP_REVISION_4J_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4K 22
`define CYDEV_CHIP_REVISION_4K_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4V 23
`define CYDEV_CHIP_REVISION_4V_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4H 24
`define CYDEV_CHIP_REVISION_4H_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AA 25
`define CYDEV_CHIP_REVISION_4AA_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4A 26
`define CYDEV_CHIP_REVISION_4A_PRODUCTION 17
`define CYDEV_CHIP_REVISION_4A_ES0 17
`define CYDEV_CHIP_MEMBER_4F 27
`define CYDEV_CHIP_REVISION_4F_PRODUCTION 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0
`define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0
`define CYDEV_CHIP_MEMBER_4P 28
`define CYDEV_CHIP_REVISION_4P_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4M 29
`define CYDEV_CHIP_REVISION_4M_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4AB 30
`define CYDEV_CHIP_REVISION_4AB_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4L 31
`define CYDEV_CHIP_REVISION_4L_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_4I 32
`define CYDEV_CHIP_REVISION_4I_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_6A 33
`define CYDEV_CHIP_REVISION_6A_ES 17
`define CYDEV_CHIP_REVISION_6A_PRODUCTION 33
`define CYDEV_CHIP_REVISION_6A_NO_UDB 33
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 34
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 35
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 36
`define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM3 37
`define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0
`define CYDEV_CHIP_MEMBER_FM4 38
`define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0
`define CYDEV_CHIP_FAMILY_USED 3
`define CYDEV_CHIP_MEMBER_USED 2
`define CYDEV_CHIP_REVISION_USED 0
// Component: ADC_AMUX_v2_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\ADC_AMUX_v2_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\ADC_AMUX_v2_0\ADC_AMUX_v2_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\ADC_AMUX_v2_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\ADC_AMUX_v2_0\ADC_AMUX_v2_0.v"
`endif

// Component: cy_analog_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_analog_virtualmux_v1_0\cy_analog_virtualmux_v1_0.v"
`endif

// Component: ZeroTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\ZeroTerminal\ZeroTerminal.v"
`endif

// Component: cy_virtualmux_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_virtualmux_v1_0\cy_virtualmux_v1_0.v"
`endif

// Component: cy_vref_v1_70
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70\cy_vref_v1_70.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_vref_v1_70\cy_vref_v1_70.v"
`endif

// Component: or_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\or_v1_0\or_v1_0.v"
`endif

// Component: cy_constant_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_constant_v1_0\cy_constant_v1_0.v"
`endif

// ADC_SAR_v3_10(ADC_Clock=0, ADC_Clock_Frequency=10105264, ADC_Input_Range=1, ADC_Power=0, ADC_Reference=0, ADC_Resolution=12, ADC_SampleMode=0, Enable_next_out=true, Ref_Voltage=2.5, Ref_Voltage_mV=2500, rm_int=true, Sample_Precharge=4, Sample_Rate=0, Sample_Rate_def=631579, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=ADC_SAR_v3_10, CY_CONFIG_TITLE=SAR, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Joystick_ADC:SAR, CY_INSTANCE_SHORT_NAME=SAR, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=Joystick_ADC_SAR, )
module ADC_SAR_v3_10_0 (
    aclk,
    eoc,
    eos,
    soc,
    vdac_ref,
    vminus,
    vplus);
    input       aclk;
    output      eoc;
    output      eos;
    input       soc;
    inout       vdac_ref;
    electrical  vdac_ref;
    inout       vminus;
    electrical  vminus;
    inout       vplus;
    electrical  vplus;


          wire [3:0] vp_ctl;
          wire [3:0] vn_ctl;
    electrical  Net_255;
    electrical  Net_267;
    electrical  Net_210;
    electrical  Net_209;
          wire  Net_252;
          wire [11:0] Net_207;
          wire  Net_205;
          wire  Net_381;
    electrical  Net_368;
    electrical  Net_235;
    electrical  Net_216;
    electrical  Net_233;
          wire  Net_385;
          wire  Net_383;
          wire  Net_221;
    electrical  Net_248;
    electrical  Net_257;
    electrical  Net_149;
    electrical  Net_126;
    electrical  Net_215;
          wire  Net_188;

	// cy_analog_virtualmux_3 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_3_connect(Net_248, Net_235);
	defparam cy_analog_virtualmux_3_connect.sig_width = 1;

    ZeroTerminal ZeroTerminal_1 (
        .z(vp_ctl[0]));

    ZeroTerminal ZeroTerminal_2 (
        .z(vp_ctl[2]));

    ZeroTerminal ZeroTerminal_3 (
        .z(vn_ctl[1]));

    ZeroTerminal ZeroTerminal_4 (
        .z(vn_ctl[3]));

    ZeroTerminal ZeroTerminal_5 (
        .z(vp_ctl[1]));

    ZeroTerminal ZeroTerminal_6 (
        .z(vp_ctl[3]));

    ZeroTerminal ZeroTerminal_7 (
        .z(vn_ctl[0]));

    ZeroTerminal ZeroTerminal_8 (
        .z(vn_ctl[2]));

	// Clock_VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_188 = aclk;

    cy_psoc5_sar_v2_0 ADC_SAR (
        .clk_udb(),
        .clock(Net_188),
        .data_out(Net_207[11:0]),
        .eof_udb(eoc),
        .ext_pin(Net_215),
        .irq(Net_252),
        .next_out(eos),
        .pump_clock(Net_188),
        .sof_udb(soc),
        .vminus(Net_126),
        .vn_ctl_udb(vn_ctl[3:0]),
        .vp_ctl_udb(vp_ctl[3:0]),
        .vplus(vplus),
        .vref(Net_248),
        .vrefhi_out(Net_257));

	// cy_analog_virtualmux_2 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_2_connect(Net_215, Net_209);
	defparam cy_analog_virtualmux_2_connect.sig_width = 1;

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_126, Net_149);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 noconnect (
        .noconnect(Net_209));

	// cy_analog_virtualmux_4 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_4_connect(Net_257, Net_149);
	defparam cy_analog_virtualmux_4_connect.sig_width = 1;

    cy_analog_noconnect_v1_0 cy_analog_noconnect_1 (
        .noconnect(Net_255));


	cy_vref_v1_0
		#(.guid("4720866E-BC14-478d-B8A0-3E44F38CADAC"),
		  .name("Vdda/2"),
		  .autoenable(1))
		vRef_Vdda_1
		 (.vout(Net_235));


    cy_analog_noconnect_v1_0 noconnect_1 (
        .noconnect(Net_368));


    assign Net_221 = Net_383 | Net_385;

    assign Net_383 = 1'h0;



endmodule

// Component: bADC_SAR_SEQ_v2_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\bADC_SAR_SEQ_v2_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\bADC_SAR_SEQ_v2_0\bADC_SAR_SEQ_v2_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\bADC_SAR_SEQ_v2_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\bADC_SAR_SEQ_v2_0\bADC_SAR_SEQ_v2_0.v"
`endif

// Component: cy_sync_v1_0
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0\cy_sync_v1_0.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\cy_sync_v1_0\cy_sync_v1_0.v"
`endif

// ADC_SAR_SEQ_v2_10(ADC_Clock_Frequency=1600000, Adjust=0, ClockSource=0, InputRange=1, NumChannels=2, Reference=0, Resolution=12, rm_int=false, SampleMode=0, SamplePrecharge=4, SampleRate=100000, SampleRate_def=631579, VrefValue=2.5, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=ADC_SAR_SEQ_v2_10, CY_CONFIG_TITLE=Joystick_ADC, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=Joystick_ADC, CY_INSTANCE_SHORT_NAME=Joystick_ADC, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=10, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=Joystick_ADC, )
module ADC_SAR_SEQ_v2_10_1 (
    aclk,
    AIN_10,
    AIN_100,
    AIN_101,
    AIN_110,
    AIN_111,
    AIN_120,
    AIN_121,
    AIN_130,
    AIN_131,
    AIN_140,
    AIN_141,
    AIN_150,
    AIN_151,
    AIN_160,
    AIN_161,
    AIN_170,
    AIN_171,
    AIN_180,
    AIN_181,
    AIN_190,
    AIN_191,
    AIN_20,
    AIN_200,
    AIN_201,
    AIN_21,
    AIN_210,
    AIN_211,
    AIN_220,
    AIN_221,
    AIN_230,
    AIN_231,
    AIN_240,
    AIN_241,
    AIN_250,
    AIN_251,
    AIN_260,
    AIN_261,
    AIN_270,
    AIN_271,
    AIN_280,
    AIN_281,
    AIN_290,
    AIN_291,
    AIN_30,
    AIN_300,
    AIN_301,
    AIN_31,
    AIN_310,
    AIN_311,
    AIN_320,
    AIN_321,
    AIN_40,
    AIN_41,
    AIN_50,
    AIN_51,
    AIN_60,
    AIN_61,
    AIN_70,
    AIN_71,
    AIN_80,
    AIN_81,
    AIN_90,
    AIN_91,
    AIN1,
    AIN11,
    AIN13,
    AIN15,
    AIN17,
    AIN19,
    AIN21,
    AIN23,
    AIN25,
    AIN27,
    AIN29,
    AIN3,
    AIN31,
    AIN49,
    AIN5,
    AIN50,
    AIN51,
    AIN52,
    AIN53,
    AIN54,
    AIN55,
    AIN56,
    AIN57,
    AIN58,
    AIN59,
    AIN60,
    AIN61,
    AIN62,
    AIN63,
    AIN64,
    AIN7,
    AIN9,
    eoc,
    sdone,
    soc,
    vdac_ref);
    input       aclk;
    inout       AIN_10;
    electrical  AIN_10;
    inout       AIN_100;
    electrical  AIN_100;
    inout       AIN_101;
    electrical  AIN_101;
    inout       AIN_110;
    electrical  AIN_110;
    inout       AIN_111;
    electrical  AIN_111;
    inout       AIN_120;
    electrical  AIN_120;
    inout       AIN_121;
    electrical  AIN_121;
    inout       AIN_130;
    electrical  AIN_130;
    inout       AIN_131;
    electrical  AIN_131;
    inout       AIN_140;
    electrical  AIN_140;
    inout       AIN_141;
    electrical  AIN_141;
    inout       AIN_150;
    electrical  AIN_150;
    inout       AIN_151;
    electrical  AIN_151;
    inout       AIN_160;
    electrical  AIN_160;
    inout       AIN_161;
    electrical  AIN_161;
    inout       AIN_170;
    electrical  AIN_170;
    inout       AIN_171;
    electrical  AIN_171;
    inout       AIN_180;
    electrical  AIN_180;
    inout       AIN_181;
    electrical  AIN_181;
    inout       AIN_190;
    electrical  AIN_190;
    inout       AIN_191;
    electrical  AIN_191;
    inout       AIN_20;
    electrical  AIN_20;
    inout       AIN_200;
    electrical  AIN_200;
    inout       AIN_201;
    electrical  AIN_201;
    inout       AIN_21;
    electrical  AIN_21;
    inout       AIN_210;
    electrical  AIN_210;
    inout       AIN_211;
    electrical  AIN_211;
    inout       AIN_220;
    electrical  AIN_220;
    inout       AIN_221;
    electrical  AIN_221;
    inout       AIN_230;
    electrical  AIN_230;
    inout       AIN_231;
    electrical  AIN_231;
    inout       AIN_240;
    electrical  AIN_240;
    inout       AIN_241;
    electrical  AIN_241;
    inout       AIN_250;
    electrical  AIN_250;
    inout       AIN_251;
    electrical  AIN_251;
    inout       AIN_260;
    electrical  AIN_260;
    inout       AIN_261;
    electrical  AIN_261;
    inout       AIN_270;
    electrical  AIN_270;
    inout       AIN_271;
    electrical  AIN_271;
    inout       AIN_280;
    electrical  AIN_280;
    inout       AIN_281;
    electrical  AIN_281;
    inout       AIN_290;
    electrical  AIN_290;
    inout       AIN_291;
    electrical  AIN_291;
    inout       AIN_30;
    electrical  AIN_30;
    inout       AIN_300;
    electrical  AIN_300;
    inout       AIN_301;
    electrical  AIN_301;
    inout       AIN_31;
    electrical  AIN_31;
    inout       AIN_310;
    electrical  AIN_310;
    inout       AIN_311;
    electrical  AIN_311;
    inout       AIN_320;
    electrical  AIN_320;
    inout       AIN_321;
    electrical  AIN_321;
    inout       AIN_40;
    electrical  AIN_40;
    inout       AIN_41;
    electrical  AIN_41;
    inout       AIN_50;
    electrical  AIN_50;
    inout       AIN_51;
    electrical  AIN_51;
    inout       AIN_60;
    electrical  AIN_60;
    inout       AIN_61;
    electrical  AIN_61;
    inout       AIN_70;
    electrical  AIN_70;
    inout       AIN_71;
    electrical  AIN_71;
    inout       AIN_80;
    electrical  AIN_80;
    inout       AIN_81;
    electrical  AIN_81;
    inout       AIN_90;
    electrical  AIN_90;
    inout       AIN_91;
    electrical  AIN_91;
    inout       AIN1;
    electrical  AIN1;
    inout       AIN11;
    electrical  AIN11;
    inout       AIN13;
    electrical  AIN13;
    inout       AIN15;
    electrical  AIN15;
    inout       AIN17;
    electrical  AIN17;
    inout       AIN19;
    electrical  AIN19;
    inout       AIN21;
    electrical  AIN21;
    inout       AIN23;
    electrical  AIN23;
    inout       AIN25;
    electrical  AIN25;
    inout       AIN27;
    electrical  AIN27;
    inout       AIN29;
    electrical  AIN29;
    inout       AIN3;
    electrical  AIN3;
    inout       AIN31;
    electrical  AIN31;
    inout       AIN49;
    electrical  AIN49;
    inout       AIN5;
    electrical  AIN5;
    inout       AIN50;
    electrical  AIN50;
    inout       AIN51;
    electrical  AIN51;
    inout       AIN52;
    electrical  AIN52;
    inout       AIN53;
    electrical  AIN53;
    inout       AIN54;
    electrical  AIN54;
    inout       AIN55;
    electrical  AIN55;
    inout       AIN56;
    electrical  AIN56;
    inout       AIN57;
    electrical  AIN57;
    inout       AIN58;
    electrical  AIN58;
    inout       AIN59;
    electrical  AIN59;
    inout       AIN60;
    electrical  AIN60;
    inout       AIN61;
    electrical  AIN61;
    inout       AIN62;
    electrical  AIN62;
    inout       AIN63;
    electrical  AIN63;
    inout       AIN64;
    electrical  AIN64;
    inout       AIN7;
    electrical  AIN7;
    inout       AIN9;
    electrical  AIN9;
    output      eoc;
    output      sdone;
    input       soc;
    inout       vdac_ref;
    electrical  vdac_ref;


    electrical  V_single;
    electrical  V_diff1;
          wire [5:0] ch_addr;
    electrical  V_diff0;
          wire  nrq;
          wire  clock;
          wire  soc_out;
          wire  Net_3905;
          wire  Net_3716;
          wire  Net_3823;
          wire  Net_3822;
          wire  Net_3821;
    electrical  Net_3939;
    electrical  Net_3934;
          wire  Net_3933;
          wire  Net_3710;
          wire  Net_3935;
          wire  Net_3830;
          wire  Net_3698;
          wire  Net_3874;
    electrical  Net_2803;
          wire  Net_3867;

    // -- AMuxHw AMuxHw_2 start -- ***
    
    // -- AMuxHw Decoder Start--
    
    reg [63:0] AMuxHw_2_Decoder_one_hot;
    reg [5:0] AMuxHw_2_Decoder_old_id;
    wire  AMuxHw_2_Decoder_is_active;
    wire  AMuxHw_2_Decoder_enable;
    
    assign AMuxHw_2_Decoder_enable = 1'b1;
    
    genvar AMuxHw_2_Decoder_i;
    
    assign AMuxHw_2_Decoder_is_active = (ch_addr[5:0] == AMuxHw_2_Decoder_old_id) && AMuxHw_2_Decoder_enable;
    
    always @(posedge clock)
    begin
        AMuxHw_2_Decoder_old_id = ch_addr[5:0];
    end
    
    generate
        for (AMuxHw_2_Decoder_i = 0; AMuxHw_2_Decoder_i < 64; AMuxHw_2_Decoder_i = AMuxHw_2_Decoder_i + 1 )
        begin : AMuxHw_2_OutBit
            always @(posedge clock)
            begin
                AMuxHw_2_Decoder_one_hot[AMuxHw_2_Decoder_i] <= (AMuxHw_2_Decoder_old_id == AMuxHw_2_Decoder_i) && AMuxHw_2_Decoder_is_active;
            end
        end
    endgenerate
    
    // -- AMuxHw Decoder End--
    
    // -- AMuxHw Primitive A --
    
    cy_psoc3_amux_v1_0 #(
        .muxin_width(64),
        .hw_control(1),
        .one_active(1),
        .init_mux_sel(64'h0),
        .api_type(2'b10))
        AMuxHw_2(
        .muxin({
            AIN64,
            AIN63,
            AIN62,
            AIN61,
            AIN60,
            AIN59,
            AIN58,
            AIN57,
            AIN56,
            AIN55,
            AIN54,
            AIN53,
            AIN52,
            AIN51,
            AIN50,
            AIN49,
            AIN_321,
            AIN31,
            AIN_310,
            AIN_301,
            AIN29,
            AIN_290,
            AIN_281,
            AIN27,
            AIN_270,
            AIN_261,
            AIN25,
            AIN_250,
            AIN_241,
            AIN23,
            AIN_230,
            AIN_221,
            AIN21,
            AIN_210,
            AIN_201,
            AIN19,
            AIN_190,
            AIN_181,
            AIN17,
            AIN_170,
            AIN_161,
            AIN15,
            AIN_150,
            AIN_141,
            AIN13,
            AIN_130,
            AIN_121,
            AIN11,
            AIN_110,
            AIN_101,
            AIN9,
            AIN_90,
            AIN_81,
            AIN7,
            AIN_70,
            AIN_61,
            AIN5,
            AIN_50,
            AIN_41,
            AIN3,
            AIN_30,
            AIN_21,
            AIN1,
            AIN_10
            }),
        .hw_ctrl_en(AMuxHw_2_Decoder_one_hot[63:0]),
        .vout(V_single)
        );
    
    // -- AMuxHw AMuxHw_2 end -- ***

    ADC_SAR_v3_10_0 SAR (
        .aclk(clock),
        .eoc(Net_3830),
        .eos(sdone),
        .soc(1'b0),
        .vdac_ref(Net_3934),
        .vminus(Net_3939),
        .vplus(Net_2803));

	// cy_analog_virtualmux_1 (cy_analog_virtualmux_v1_0)
	cy_connect_v1_0 cy_analog_virtualmux_1_connect(Net_2803, V_single);
	defparam cy_analog_virtualmux_1_connect.sig_width = 1;

    bADC_SAR_SEQ_v2_0 bSAR_SEQ (
        .bus_clock(Net_3710),
        .ch_addr(ch_addr[5:0]),
        .clock(clock),
        .eoc(eoc),
        .eos(sdone),
        .nrq(Net_3935),
        .sar_eoc(Net_3830),
        .soc(soc),
        .soc_out(soc_out));
    defparam bSAR_SEQ.NumChannels = 2;
    defparam bSAR_SEQ.SampleMode = 0;

	// VirtualMux_4 (cy_virtualmux_v1_0)
	assign clock = Net_3874;


	cy_clock_v1_0
		#(.id("712623f8-51ff-475c-8826-04d8512b2ba8/9725d809-97e7-404e-b621-dfdbe78d0ca9"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("625000000"),
		  .is_direct(0),
		  .is_digital(1))
		IntClock
		 (.clock_out(Net_3874));



	cy_dma_v1_0
		#(.drq_type(2'b00))
		TempBuf
		 (.drq(Net_3830),
		  .nrq(Net_3698),
		  .trq(1'b0));



	cy_dma_v1_0
		#(.drq_type(2'b00))
		FinalBuf
		 (.drq(Net_3698),
		  .nrq(nrq),
		  .trq(1'b0));



	cy_clock_v1_0
		#(.id("712623f8-51ff-475c-8826-04d8512b2ba8/3d23b625-9a71-4c05-baf4-2f904356009b"),
		  .source_clock_id("75C2148C-3656-4d8a-846D-0CAE99AB6FF7"),
		  .divisor(0),
		  .period("0"),
		  .is_direct(1),
		  .is_digital(1))
		BusClock
		 (.clock_out(Net_3710));



    assign Net_3905 = Net_3867 | Net_3874;

    ZeroTerminal ZeroTerminal_2 (
        .z(Net_3867));


	cy_isr_v1_0
		#(.int_type(2'b10))
		IRQ
		 (.int_signal(eoc));


    cy_sync_v1_0 Sync (
        .clock(Net_3710),
        .s_in(nrq),
        .s_out(Net_3935));
    defparam Sync.SignalWidth = 1;



endmodule

// Component: B_PWM_v3_30
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_PWM_v3_30\B_PWM_v3_30.v"
`endif

// Component: OneTerminal
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyPrimitives\cyprimitives.cylib\OneTerminal\OneTerminal.v"
`endif

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=true, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=1, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=127, CompareValue2=63, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=255, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, Resolution=8, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=true, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=RGB_PWM_green, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=RGB_PWM_green, CY_INSTANCE_SHORT_NAME=RGB_PWM_green, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=RGB_PWM_green, )
module PWM_v3_30_2 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 8;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 1;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 0;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 0;
    defparam PWMUDB.Resolution = 8;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=true, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=1, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=127, CompareValue2=63, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=255, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, Resolution=8, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=true, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=RGB_PWM_blue, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=RGB_PWM_blue, CY_INSTANCE_SHORT_NAME=RGB_PWM_blue, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=RGB_PWM_blue, )
module PWM_v3_30_3 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 8;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 1;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 0;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 0;
    defparam PWMUDB.Resolution = 8;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// PWM_v3_30(CaptureMode=0, Clock_CheckTolerance=true, Clock_desired_freq=12, Clock_desired_freq_unit=6, Clock_divisor=1, Clock_FractDividerDenominator=0, Clock_FractDividerNumerator=0, Clock_FractDividerUsed=false, Clock_is_direct=false, Clock_is_divider=false, Clock_is_freq=true, Clock_minus_tolerance=5, Clock_ph_align_clock_id=, Clock_ph_align_clock_name=, Clock_plus_tolerance=5, Clock_source_clock_id=, Clock_source_clock_name=, Compare1_16=false, Compare1_8=true, Compare2_16=false, Compare2_8=false, CompareStatusEdgeSense=true, CompareType1=1, CompareType1Software=0, CompareType2=1, CompareType2Software=0, CompareValue1=127, CompareValue2=63, CONTROL3=0, ControlReg=true, CtlModeReplacementString=SyncCtl, CyGetRegReplacementString=CY_GET_REG8, CySetRegReplacementString=CY_SET_REG8, DeadBand=0, DeadBand2_4=0, DeadBand256=0, DeadBandUsed=0, DeadTime=1, DitherOffset=0, EnableMode=0, FF16=false, FF8=false, FixedFunction=false, FixedFunctionUsed=0, InterruptOnCMP1=false, InterruptOnCMP2=false, InterruptOnKill=false, InterruptOnTC=false, IntOnCMP1=0, IntOnCMP2=0, IntOnKill=0, IntOnTC=0, KillMode=0, KillModeMinTime=0, MinimumKillTime=1, OneCompare=true, Period=255, PWMMode=0, PWMModeCenterAligned=0, RegDefReplacementString=reg8, RegSizeReplacementString=uint8, Resolution=8, RstStatusReplacementString=sSTSReg_rstSts, RunMode=0, Status=false, TermMode_capture=0, TermMode_clock=0, TermMode_cmp_sel=0, TermMode_enable=0, TermMode_interrupt=0, TermMode_kill=0, TermMode_ph1=0, TermMode_ph2=0, TermMode_pwm=0, TermMode_pwm1=0, TermMode_pwm2=0, TermMode_reset=0, TermMode_tc=0, TermMode_trigger=0, TermVisibility_capture=false, TermVisibility_clock=true, TermVisibility_cmp_sel=false, TermVisibility_enable=false, TermVisibility_interrupt=false, TermVisibility_kill=false, TermVisibility_ph1=false, TermVisibility_ph2=false, TermVisibility_pwm=true, TermVisibility_pwm1=false, TermVisibility_pwm2=false, TermVisibility_reset=true, TermVisibility_tc=true, TermVisibility_trigger=false, TriggerMode=0, UDB16=false, UDB8=true, UseControl=true, UseInterrupt=false, UseStatus=false, VerilogSectionReplacementString=sP8, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=PWM_v3_30, CY_CONFIG_TITLE=RGB_PWM_red, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=RGB_PWM_red, CY_INSTANCE_SHORT_NAME=RGB_PWM_red, CY_MAJOR_VERSION=3, CY_MINOR_VERSION=30, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=RGB_PWM_red, )
module PWM_v3_30_4 (
    capture,
    clock,
    cmp_sel,
    enable,
    interrupt,
    kill,
    ph1,
    ph2,
    pwm,
    pwm1,
    pwm2,
    reset,
    tc,
    trigger);
    input       capture;
    input       clock;
    input       cmp_sel;
    input       enable;
    output      interrupt;
    input       kill;
    output      ph1;
    output      ph2;
    output      pwm;
    output      pwm1;
    output      pwm2;
    input       reset;
    output      tc;
    input       trigger;

    parameter Resolution = 8;

          wire  Net_114;
          wire  Net_113;
          wire  Net_107;
          wire  Net_96;
          wire  Net_55;
          wire  Net_57;
          wire  Net_101;
          wire  Net_54;
          wire  Net_63;

    B_PWM_v3_30 PWMUDB (
        .capture(capture),
        .clock(clock),
        .cmp_sel(cmp_sel),
        .enable(enable),
        .interrupt(Net_55),
        .kill(kill),
        .ph1(ph1),
        .ph2(ph2),
        .pwm(Net_96),
        .pwm1(pwm1),
        .pwm2(pwm2),
        .reset(reset),
        .tc(Net_101),
        .trigger(trigger));
    defparam PWMUDB.CaptureMode = 0;
    defparam PWMUDB.CompareStatusEdgeSense = 1;
    defparam PWMUDB.CompareType1 = 1;
    defparam PWMUDB.CompareType2 = 1;
    defparam PWMUDB.DeadBand = 0;
    defparam PWMUDB.DitherOffset = 0;
    defparam PWMUDB.EnableMode = 0;
    defparam PWMUDB.KillMode = 0;
    defparam PWMUDB.PWMMode = 0;
    defparam PWMUDB.Resolution = 8;
    defparam PWMUDB.RunMode = 0;
    defparam PWMUDB.TriggerMode = 0;
    defparam PWMUDB.UseStatus = 0;

	// vmCompare (cy_virtualmux_v1_0)
	assign pwm = Net_96;

	// vmIRQ (cy_virtualmux_v1_0)
	assign interrupt = Net_55;

	// vmTC (cy_virtualmux_v1_0)
	assign tc = Net_101;

    OneTerminal OneTerminal_1 (
        .o(Net_113));

	// FFKillMux (cy_virtualmux_v1_0)
	assign Net_107 = Net_114;

    ZeroTerminal ZeroTerminal_1 (
        .z(Net_114));



endmodule

// Component: B_UART_v2_50
`ifdef CY_BLK_DIR
`undef CY_BLK_DIR
`endif

`ifdef WARP
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`else
`define CY_BLK_DIR "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50"
`include "C:\Program Files (x86)\Cypress\PSoC Creator\4.4\PSoC Creator\psoc\content\CyComponentLibrary\CyComponentLibrary.cylib\B_UART_v2_50\B_UART_v2_50.v"
`endif

// UART_v2_50(Address1=0, Address2=0, BaudRate=115200, BreakBitsRX=13, BreakBitsTX=13, BreakDetect=false, CRCoutputsEn=false, Enable_RX=1, Enable_RXIntInterrupt=0, Enable_TX=1, Enable_TXIntInterrupt=0, EnableHWAddress=0, EnIntRXInterrupt=false, EnIntTXInterrupt=false, FlowControl=0, HalfDuplexEn=false, HwTXEnSignal=true, InternalClock=true, InternalClockToleranceMinus=3.93736842105263, InternalClockTolerancePlus=3.93736842105263, InternalClockUsed=1, InterruptOnAddDetect=0, InterruptOnAddressMatch=0, InterruptOnBreak=0, InterruptOnByteRcvd=1, InterruptOnOverrunError=0, InterruptOnParityError=0, InterruptOnStopError=0, InterruptOnTXComplete=false, InterruptOnTXFifoEmpty=false, InterruptOnTXFifoFull=false, InterruptOnTXFifoNotFull=false, IntOnAddressDetect=false, IntOnAddressMatch=false, IntOnBreak=false, IntOnByteRcvd=true, IntOnOverrunError=false, IntOnParityError=false, IntOnStopError=false, NumDataBits=8, NumStopBits=1, OverSamplingRate=8, ParityType=0, ParityTypeSw=false, RequiredClock=921600, RXAddressMode=0, RXBufferSize=4, RxBuffRegSizeReplacementString=uint8, RXEnable=true, TXBitClkGenDP=true, TXBufferSize=4, TxBuffRegSizeReplacementString=uint8, TXEnable=true, Use23Polling=true, CY_API_CALLBACK_HEADER_INCLUDE=, CY_COMMENT=, CY_COMPONENT_NAME=UART_v2_50, CY_CONFIG_TITLE=UART_LOG, CY_CONST_CONFIG=true, CY_CONTROL_FILE=<:default:>, CY_DATASHEET_FILE=<:default:>, CY_FITTER_NAME=UART_LOG, CY_INSTANCE_SHORT_NAME=UART_LOG, CY_MAJOR_VERSION=2, CY_MINOR_VERSION=50, CY_PDL_DRIVER_NAME=, CY_PDL_DRIVER_REQ_VERSION=, CY_PDL_DRIVER_SUBGROUP=, CY_PDL_DRIVER_VARIANT=, CY_REMOVE=false, CY_SUPPRESS_API_GEN=false, CY_VERSION=PSoC Creator  4.4, INSTANCE_NAME=UART_LOG, )
module UART_v2_50_5 (
    clock,
    cts_n,
    reset,
    rts_n,
    rx,
    rx_clk,
    rx_data,
    rx_interrupt,
    tx,
    tx_clk,
    tx_data,
    tx_en,
    tx_interrupt);
    input       clock;
    input       cts_n;
    input       reset;
    output      rts_n;
    input       rx;
    output      rx_clk;
    output      rx_data;
    output      rx_interrupt;
    output      tx;
    output      tx_clk;
    output      tx_data;
    output      tx_en;
    output      tx_interrupt;

    parameter Address1 = 0;
    parameter Address2 = 0;
    parameter EnIntRXInterrupt = 0;
    parameter EnIntTXInterrupt = 0;
    parameter FlowControl = 0;
    parameter HalfDuplexEn = 0;
    parameter HwTXEnSignal = 1;
    parameter NumDataBits = 8;
    parameter NumStopBits = 1;
    parameter ParityType = 0;
    parameter RXEnable = 1;
    parameter TXEnable = 1;

          wire  Net_289;
          wire  Net_61;
          wire  Net_9;


	cy_clock_v1_0
		#(.id("b0162966-0060-4af5-82d1-fcb491ad7619/be0a0e37-ad17-42ca-b5a1-1a654d736358"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("1085069444.44444"),
		  .is_direct(0),
		  .is_digital(1))
		IntClock
		 (.clock_out(Net_9));


	// VirtualMux_1 (cy_virtualmux_v1_0)
	assign Net_61 = Net_9;

    B_UART_v2_50 BUART (
        .clock(Net_61),
        .cts_n(cts_n),
        .reset(reset),
        .rts_n(rts_n),
        .rx(rx),
        .rx_clk(rx_clk),
        .rx_data(rx_data),
        .rx_interrupt(rx_interrupt),
        .tx(tx),
        .tx_clk(tx_clk),
        .tx_data(tx_data),
        .tx_en(tx_en),
        .tx_interrupt(tx_interrupt));
    defparam BUART.Address1 = 0;
    defparam BUART.Address2 = 0;
    defparam BUART.BreakBitsRX = 13;
    defparam BUART.BreakBitsTX = 13;
    defparam BUART.BreakDetect = 0;
    defparam BUART.CRCoutputsEn = 0;
    defparam BUART.FlowControl = 0;
    defparam BUART.HalfDuplexEn = 0;
    defparam BUART.HwTXEnSignal = 1;
    defparam BUART.NumDataBits = 8;
    defparam BUART.NumStopBits = 1;
    defparam BUART.OverSampleCount = 8;
    defparam BUART.ParityType = 0;
    defparam BUART.ParityTypeSw = 0;
    defparam BUART.RXAddressMode = 0;
    defparam BUART.RXEnable = 1;
    defparam BUART.RXStatusIntEnable = 1;
    defparam BUART.TXBitClkGenDP = 1;
    defparam BUART.TXEnable = 1;
    defparam BUART.Use23Polling = 1;



endmodule

// top
module top ;

          wire  Net_2241;
          wire  Net_2240;
          wire  Net_2239;
          wire  Net_2238;
          wire  Net_2237;
          wire  Net_2236;
          wire  Net_2235;
          wire  Net_2234;
          wire  Net_2233;
          wire  Net_2232;
          wire  Net_2231;
          wire  Net_2230;
          wire  Net_2229;
          wire  Net_2215;
          wire  Net_2214;
          wire  Net_2213;
          wire  Net_2212;
          wire  Net_2211;
          wire  Net_2210;
          wire  Net_2209;
          wire  Net_2208;
          wire  Net_2207;
          wire  Net_2206;
          wire  Net_2205;
          wire  Net_2204;
          wire  Net_2203;
          wire  Net_2202;
          wire  Net_2201;
          wire  Net_2200;
          wire  Net_2199;
          wire  Net_2198;
          wire  Net_2197;
          wire  Net_2196;
          wire  Net_2195;
          wire  Net_2194;
          wire  Net_2193;
          wire  Net_2192;
          wire  Net_2191;
          wire  Net_2190;
          wire  Net_2189;
          wire  Net_2188;
          wire  Net_2187;
          wire  Net_2186;
          wire  Net_2185;
          wire  Net_2184;
          wire  Net_2183;
          wire  Net_2182;
          wire  Net_2181;
          wire  Net_2180;
          wire  Net_1819;
    electrical  Net_210;
          wire  Net_209;
          wire  Net_208;
          wire  Net_207;
    electrical  Net_206;
    electrical  Net_205;
    electrical  Net_204;
    electrical  Net_203;
    electrical  Net_202;
    electrical  Net_201;
    electrical  Net_200;
    electrical  Net_199;
    electrical  Net_198;
    electrical  Net_197;
    electrical  Net_196;
    electrical  Net_195;
    electrical  Net_194;
    electrical  Net_193;
    electrical  Net_192;
    electrical  Net_191;
    electrical  Net_190;
    electrical  Net_189;
    electrical  Net_188;
    electrical  Net_187;
    electrical  Net_186;
    electrical  Net_185;
    electrical  Net_184;
    electrical  Net_183;
    electrical  Net_182;
    electrical  Net_181;
    electrical  Net_180;
    electrical  Net_179;
    electrical  Net_178;
    electrical  Net_177;
    electrical  Net_176;
    electrical  Net_174;
    electrical  Net_173;
    electrical  Net_172;
    electrical  Net_171;
    electrical  Net_170;
    electrical  Net_169;
    electrical  Net_168;
    electrical  Net_167;
    electrical  Net_166;
    electrical  Net_165;
    electrical  Net_164;
    electrical  Net_163;
    electrical  Net_162;
    electrical  Net_161;
    electrical  Net_160;
    electrical  Net_159;
    electrical  Net_158;
    electrical  Net_157;
    electrical  Net_156;
    electrical  Net_155;
    electrical  Net_154;
    electrical  Net_153;
    electrical  Net_152;
    electrical  Net_151;
    electrical  Net_150;
    electrical  Net_149;
    electrical  Net_148;
    electrical  Net_147;
    electrical  Net_146;
    electrical  Net_145;
    electrical  Net_144;
    electrical  Net_143;
    electrical  Net_142;
    electrical  Net_141;
    electrical  Net_140;
    electrical  Net_139;
    electrical  Net_138;
    electrical  Net_137;
    electrical  Net_136;
    electrical  Net_135;
    electrical  Net_134;
    electrical  Net_133;
    electrical  Net_132;
    electrical  Net_131;
    electrical  Net_130;
    electrical  Net_129;
    electrical  Net_128;
    electrical  Net_127;
    electrical  Net_126;
    electrical  Net_125;
    electrical  Net_124;
    electrical  Net_123;
    electrical  Net_122;
    electrical  Net_121;
    electrical  Net_120;
    electrical  Net_119;
    electrical  Net_118;
    electrical  Net_117;
    electrical  Net_116;
    electrical  Net_115;
    electrical  Net_113;
    electrical  Net_112;
          wire  Net_111;
          wire  Net_2605;
          wire  Net_429;
          wire  Net_481;
          wire  Net_403;
    electrical  Net_212;
    electrical  Net_13;

	wire [0:0] tmpOE__Joystick_YPos_net;
	wire [0:0] tmpFB_0__Joystick_YPos_net;
	wire [0:0] tmpIO_0__Joystick_YPos_net;
	wire [0:0] tmpINTERRUPT_0__Joystick_YPos_net;
	electrical [0:0] tmpSIOVREF__Joystick_YPos_net;

	cy_psoc3_pins_v1_10
		#(.id("80df1435-62b8-4fbe-a343-17d0a3f20efb"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Joystick_YPos
		 (.oe(tmpOE__Joystick_YPos_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Joystick_YPos_net[0:0]}),
		  .analog({Net_212}),
		  .io({tmpIO_0__Joystick_YPos_net[0:0]}),
		  .siovref(tmpSIOVREF__Joystick_YPos_net),
		  .interrupt({tmpINTERRUPT_0__Joystick_YPos_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Joystick_YPos_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Joystick_XPos_net;
	wire [0:0] tmpFB_0__Joystick_XPos_net;
	wire [0:0] tmpIO_0__Joystick_XPos_net;
	wire [0:0] tmpINTERRUPT_0__Joystick_XPos_net;
	electrical [0:0] tmpSIOVREF__Joystick_XPos_net;

	cy_psoc3_pins_v1_10
		#(.id("8d318d8b-cf7b-4b6b-b02c-ab1c5c49d0ba"),
		  .drive_mode(3'b000),
		  .ibuf_enabled(1'b0),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("A"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Joystick_XPos
		 (.oe(tmpOE__Joystick_XPos_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__Joystick_XPos_net[0:0]}),
		  .analog({Net_13}),
		  .io({tmpIO_0__Joystick_XPos_net[0:0]}),
		  .siovref(tmpSIOVREF__Joystick_XPos_net),
		  .interrupt({tmpINTERRUPT_0__Joystick_XPos_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Joystick_XPos_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    ADC_SAR_SEQ_v2_10_1 Joystick_ADC (
        .aclk(1'b0),
        .AIN_10(Net_13),
        .AIN_100(Net_112),
        .AIN_101(Net_113),
        .AIN_110(Net_115),
        .AIN_111(Net_116),
        .AIN_120(Net_117),
        .AIN_121(Net_118),
        .AIN_130(Net_119),
        .AIN_131(Net_120),
        .AIN_140(Net_121),
        .AIN_141(Net_122),
        .AIN_150(Net_123),
        .AIN_151(Net_124),
        .AIN_160(Net_125),
        .AIN_161(Net_126),
        .AIN_170(Net_127),
        .AIN_171(Net_128),
        .AIN_180(Net_129),
        .AIN_181(Net_130),
        .AIN_190(Net_131),
        .AIN_191(Net_132),
        .AIN_20(Net_133),
        .AIN_200(Net_134),
        .AIN_201(Net_135),
        .AIN_21(Net_136),
        .AIN_210(Net_137),
        .AIN_211(Net_138),
        .AIN_220(Net_139),
        .AIN_221(Net_140),
        .AIN_230(Net_141),
        .AIN_231(Net_142),
        .AIN_240(Net_143),
        .AIN_241(Net_144),
        .AIN_250(Net_145),
        .AIN_251(Net_146),
        .AIN_260(Net_147),
        .AIN_261(Net_148),
        .AIN_270(Net_149),
        .AIN_271(Net_150),
        .AIN_280(Net_151),
        .AIN_281(Net_152),
        .AIN_290(Net_153),
        .AIN_291(Net_154),
        .AIN_30(Net_155),
        .AIN_300(Net_156),
        .AIN_301(Net_157),
        .AIN_31(Net_158),
        .AIN_310(Net_159),
        .AIN_311(Net_160),
        .AIN_320(Net_161),
        .AIN_321(Net_162),
        .AIN_40(Net_163),
        .AIN_41(Net_164),
        .AIN_50(Net_165),
        .AIN_51(Net_166),
        .AIN_60(Net_167),
        .AIN_61(Net_168),
        .AIN_70(Net_169),
        .AIN_71(Net_170),
        .AIN_80(Net_171),
        .AIN_81(Net_172),
        .AIN_90(Net_173),
        .AIN_91(Net_174),
        .AIN1(Net_212),
        .AIN11(Net_176),
        .AIN13(Net_177),
        .AIN15(Net_178),
        .AIN17(Net_179),
        .AIN19(Net_180),
        .AIN21(Net_181),
        .AIN23(Net_182),
        .AIN25(Net_183),
        .AIN27(Net_184),
        .AIN29(Net_185),
        .AIN3(Net_186),
        .AIN31(Net_187),
        .AIN49(Net_188),
        .AIN5(Net_189),
        .AIN50(Net_190),
        .AIN51(Net_191),
        .AIN52(Net_192),
        .AIN53(Net_193),
        .AIN54(Net_194),
        .AIN55(Net_195),
        .AIN56(Net_196),
        .AIN57(Net_197),
        .AIN58(Net_198),
        .AIN59(Net_199),
        .AIN60(Net_200),
        .AIN61(Net_201),
        .AIN62(Net_202),
        .AIN63(Net_203),
        .AIN64(Net_204),
        .AIN7(Net_205),
        .AIN9(Net_206),
        .eoc(Net_207),
        .sdone(Net_208),
        .soc(1'b0),
        .vdac_ref(Net_210));


	cy_clock_v1_0
		#(.id("457ffeec-36ba-469e-b0b8-aaab8821ec08"),
		  .source_clock_id(""),
		  .divisor(0),
		  .period("83333333.3333333"),
		  .is_direct(0),
		  .is_digital(1))
		PWM_Clock
		 (.clock_out(Net_2605));


    PWM_v3_30_2 RGB_PWM_green (
        .capture(1'b0),
        .clock(Net_2605),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_2183),
        .kill(1'b1),
        .ph1(Net_2185),
        .ph2(Net_2186),
        .pwm(Net_481),
        .pwm1(Net_2187),
        .pwm2(Net_2188),
        .reset(1'b0),
        .tc(Net_2190),
        .trigger(1'b0));
    defparam RGB_PWM_green.Resolution = 8;

    PWM_v3_30_3 RGB_PWM_blue (
        .capture(1'b0),
        .clock(Net_2605),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_2195),
        .kill(1'b1),
        .ph1(Net_2197),
        .ph2(Net_2198),
        .pwm(Net_429),
        .pwm1(Net_2199),
        .pwm2(Net_2200),
        .reset(1'b0),
        .tc(Net_2202),
        .trigger(1'b0));
    defparam RGB_PWM_blue.Resolution = 8;

	wire [0:0] tmpOE__RGB_R_net;
	wire [0:0] tmpFB_0__RGB_R_net;
	wire [0:0] tmpIO_0__RGB_R_net;
	wire [0:0] tmpINTERRUPT_0__RGB_R_net;
	electrical [0:0] tmpSIOVREF__RGB_R_net;

	cy_psoc3_pins_v1_10
		#(.id("ecfa82db-e1c2-4f07-bbfd-edac2dd29812"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		RGB_R
		 (.oe(tmpOE__RGB_R_net),
		  .y({Net_403}),
		  .fb({tmpFB_0__RGB_R_net[0:0]}),
		  .io({tmpIO_0__RGB_R_net[0:0]}),
		  .siovref(tmpSIOVREF__RGB_R_net),
		  .interrupt({tmpINTERRUPT_0__RGB_R_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__RGB_R_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__RGB_G_net;
	wire [0:0] tmpFB_0__RGB_G_net;
	wire [0:0] tmpIO_0__RGB_G_net;
	wire [0:0] tmpINTERRUPT_0__RGB_G_net;
	electrical [0:0] tmpSIOVREF__RGB_G_net;

	cy_psoc3_pins_v1_10
		#(.id("3708c246-47f0-47d9-9e0b-a5204757bb79"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		RGB_G
		 (.oe(tmpOE__RGB_G_net),
		  .y({Net_481}),
		  .fb({tmpFB_0__RGB_G_net[0:0]}),
		  .io({tmpIO_0__RGB_G_net[0:0]}),
		  .siovref(tmpSIOVREF__RGB_G_net),
		  .interrupt({tmpINTERRUPT_0__RGB_G_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__RGB_G_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__RGB_B_net;
	wire [0:0] tmpFB_0__RGB_B_net;
	wire [0:0] tmpIO_0__RGB_B_net;
	wire [0:0] tmpINTERRUPT_0__RGB_B_net;
	electrical [0:0] tmpSIOVREF__RGB_B_net;

	cy_psoc3_pins_v1_10
		#(.id("5371ed39-4382-4e32-a06a-f0fab4403dcf"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		RGB_B
		 (.oe(tmpOE__RGB_B_net),
		  .y({Net_429}),
		  .fb({tmpFB_0__RGB_B_net[0:0]}),
		  .io({tmpIO_0__RGB_B_net[0:0]}),
		  .siovref(tmpSIOVREF__RGB_B_net),
		  .interrupt({tmpINTERRUPT_0__RGB_B_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__RGB_B_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    PWM_v3_30_4 RGB_PWM_red (
        .capture(1'b0),
        .clock(Net_2605),
        .cmp_sel(1'b0),
        .enable(1'b1),
        .interrupt(Net_2207),
        .kill(1'b1),
        .ph1(Net_2209),
        .ph2(Net_2210),
        .pwm(Net_403),
        .pwm1(Net_2211),
        .pwm2(Net_2212),
        .reset(1'b0),
        .tc(Net_2214),
        .trigger(1'b0));
    defparam RGB_PWM_red.Resolution = 8;

	wire [0:0] tmpOE__LED_red_net;
	wire [0:0] tmpFB_0__LED_red_net;
	wire [0:0] tmpIO_0__LED_red_net;
	wire [0:0] tmpINTERRUPT_0__LED_red_net;
	electrical [0:0] tmpSIOVREF__LED_red_net;

	cy_psoc3_pins_v1_10
		#(.id("e851a3b9-efb8-48be-bbb8-b303b216c393"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		LED_red
		 (.oe(tmpOE__LED_red_net),
		  .y({1'b0}),
		  .fb({tmpFB_0__LED_red_net[0:0]}),
		  .io({tmpIO_0__LED_red_net[0:0]}),
		  .siovref(tmpSIOVREF__LED_red_net),
		  .interrupt({tmpINTERRUPT_0__LED_red_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__LED_red_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

    UART_v2_50_5 UART_LOG (
        .clock(1'b0),
        .cts_n(1'b0),
        .reset(1'b0),
        .rts_n(Net_2232),
        .rx(Net_2233),
        .rx_clk(Net_2234),
        .rx_data(Net_2235),
        .rx_interrupt(Net_2236),
        .tx(Net_2237),
        .tx_clk(Net_2238),
        .tx_data(Net_2239),
        .tx_en(Net_2240),
        .tx_interrupt(Net_2241));
    defparam UART_LOG.Address1 = 0;
    defparam UART_LOG.Address2 = 0;
    defparam UART_LOG.EnIntRXInterrupt = 0;
    defparam UART_LOG.EnIntTXInterrupt = 0;
    defparam UART_LOG.FlowControl = 0;
    defparam UART_LOG.HalfDuplexEn = 0;
    defparam UART_LOG.HwTXEnSignal = 1;
    defparam UART_LOG.NumDataBits = 8;
    defparam UART_LOG.NumStopBits = 1;
    defparam UART_LOG.ParityType = 0;
    defparam UART_LOG.RXEnable = 1;
    defparam UART_LOG.TXEnable = 1;

	wire [0:0] tmpOE__Rx_port_net;
	wire [0:0] tmpIO_0__Rx_port_net;
	wire [0:0] tmpINTERRUPT_0__Rx_port_net;
	electrical [0:0] tmpSIOVREF__Rx_port_net;

	cy_psoc3_pins_v1_10
		#(.id("1425177d-0d0e-4468-8bcc-e638e5509a9b"),
		  .drive_mode(3'b001),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b0),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b0),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("I"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b00),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Rx_port
		 (.oe(tmpOE__Rx_port_net),
		  .y({1'b0}),
		  .fb({Net_2233}),
		  .io({tmpIO_0__Rx_port_net[0:0]}),
		  .siovref(tmpSIOVREF__Rx_port_net),
		  .interrupt({tmpINTERRUPT_0__Rx_port_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Rx_port_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};

	wire [0:0] tmpOE__Tx_port_net;
	wire [0:0] tmpFB_0__Tx_port_net;
	wire [0:0] tmpIO_0__Tx_port_net;
	wire [0:0] tmpINTERRUPT_0__Tx_port_net;
	electrical [0:0] tmpSIOVREF__Tx_port_net;

	cy_psoc3_pins_v1_10
		#(.id("ed092b9b-d398-4703-be89-cebf998501f6"),
		  .drive_mode(3'b110),
		  .ibuf_enabled(1'b1),
		  .init_dr_st(1'b1),
		  .input_clk_en(0),
		  .input_sync(1'b1),
		  .input_sync_mode(1'b0),
		  .intr_mode(2'b00),
		  .invert_in_clock(0),
		  .invert_in_clock_en(0),
		  .invert_in_reset(0),
		  .invert_out_clock(0),
		  .invert_out_clock_en(0),
		  .invert_out_reset(0),
		  .io_voltage(""),
		  .layout_mode("CONTIGUOUS"),
		  .oe_conn(1'b0),
		  .oe_reset(0),
		  .oe_sync(1'b0),
		  .output_clk_en(0),
		  .output_clock_mode(1'b0),
		  .output_conn(1'b1),
		  .output_mode(1'b0),
		  .output_reset(0),
		  .output_sync(1'b0),
		  .pa_in_clock(-1),
		  .pa_in_clock_en(-1),
		  .pa_in_reset(-1),
		  .pa_out_clock(-1),
		  .pa_out_clock_en(-1),
		  .pa_out_reset(-1),
		  .pin_aliases(""),
		  .pin_mode("O"),
		  .por_state(4),
		  .sio_group_cnt(0),
		  .sio_hyst(1'b1),
		  .sio_ibuf(""),
		  .sio_info(2'b00),
		  .sio_obuf(""),
		  .sio_refsel(""),
		  .sio_vtrip(""),
		  .sio_hifreq(""),
		  .sio_vohsel(""),
		  .slew_rate(1'b0),
		  .spanning(0),
		  .use_annotation(1'b0),
		  .vtrip(2'b10),
		  .width(1),
		  .ovt_hyst_trim(1'b0),
		  .ovt_needed(1'b0),
		  .ovt_slew_control(2'b00),
		  .input_buffer_sel(2'b00))
		Tx_port
		 (.oe(tmpOE__Tx_port_net),
		  .y({Net_2237}),
		  .fb({tmpFB_0__Tx_port_net[0:0]}),
		  .io({tmpIO_0__Tx_port_net[0:0]}),
		  .siovref(tmpSIOVREF__Tx_port_net),
		  .interrupt({tmpINTERRUPT_0__Tx_port_net[0:0]}),
		  .in_clock({1'b0}),
		  .in_clock_en({1'b1}),
		  .in_reset({1'b0}),
		  .out_clock({1'b0}),
		  .out_clock_en({1'b1}),
		  .out_reset({1'b0}));

	assign tmpOE__Tx_port_net = (`CYDEV_CHIP_MEMBER_USED == `CYDEV_CHIP_MEMBER_3A && `CYDEV_CHIP_REVISION_USED < `CYDEV_CHIP_REVISION_3A_ES3) ? ~{1'b1} : {1'b1};



endmodule

