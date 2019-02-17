function CodeDefine() { 
this.def = new Array();
this.def["conversionYUV_P"] = {file: "conversionYUV_c.html",line:16,type:"var"};this.def["conversionYUV"] = {file: "conversionYUV_c.html",line:9808,type:"fcn"};this.def["conversionYUV_initialize"] = {file: "conversionYUV_c.html",line:9919,type:"fcn"};this.def["B_conversionYUV_c_T"] = {file: "conversionYUV_h.html",line:25,type:"type"};this.def["MdlrefDW_conversionYUV_T"] = {file: "conversionYUV_h.html",line:66,type:"type"};this.def["P_conversionYUV_T"] = {file: "conversionYUV_types_h.html",line:27,type:"type"};this.def["RT_MODEL_conversionYUV_T"] = {file: "conversionYUV_types_h.html",line:30,type:"type"};this.def["long_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:22,type:"type"};this.def["int64m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:29,type:"type"};this.def["cint64m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:34,type:"type"};this.def["uint64m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:38,type:"type"};this.def["cuint64m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:43,type:"type"};this.def["int96m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:47,type:"type"};this.def["cint96m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:52,type:"type"};this.def["uint96m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:56,type:"type"};this.def["cuint96m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:61,type:"type"};this.def["int128m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:65,type:"type"};this.def["cint128m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:70,type:"type"};this.def["uint128m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:74,type:"type"};this.def["cuint128m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:79,type:"type"};this.def["int160m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:83,type:"type"};this.def["cint160m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:88,type:"type"};this.def["uint160m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:92,type:"type"};this.def["cuint160m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:97,type:"type"};this.def["int192m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:101,type:"type"};this.def["cint192m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:106,type:"type"};this.def["uint192m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:110,type:"type"};this.def["cuint192m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:115,type:"type"};this.def["int224m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:119,type:"type"};this.def["cint224m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:124,type:"type"};this.def["uint224m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:128,type:"type"};this.def["cuint224m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:133,type:"type"};this.def["int256m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:137,type:"type"};this.def["cint256m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:142,type:"type"};this.def["uint256m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:146,type:"type"};this.def["cuint256m_T"] = {file: "../../_sharedutils/html/multiword_types_h.html",line:151,type:"type"};this.def["pointer_T"] = {file: "../../_sharedutils/html/rtwtypes_h.html",line:22,type:"type"};}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["conversionYUV_c.html"] = "../conversionYUV.c";
	this.html2Root["conversionYUV_c.html"] = "conversionYUV_c.html";
	this.html2SrcPath["conversionYUV_h.html"] = "../conversionYUV.h";
	this.html2Root["conversionYUV_h.html"] = "conversionYUV_h.html";
	this.html2SrcPath["conversionYUV_private_h.html"] = "../conversionYUV_private.h";
	this.html2Root["conversionYUV_private_h.html"] = "conversionYUV_private_h.html";
	this.html2SrcPath["conversionYUV_types_h.html"] = "../conversionYUV_types.h";
	this.html2Root["conversionYUV_types_h.html"] = "conversionYUV_types_h.html";
	this.html2SrcPath["multiword_types_h.html"] = "../multiword_types.h";
	this.html2Root["multiword_types_h.html"] = "../../_sharedutils/html/multiword_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "../../_sharedutils/html/rtwtypes_h.html";
	this.html2SrcPath["MW_target_hardware_resources_h.html"] = "../MW_target_hardware_resources.h";
	this.html2Root["MW_target_hardware_resources_h.html"] = "MW_target_hardware_resources_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"conversionYUV_c.html","conversionYUV_h.html","conversionYUV_private_h.html","conversionYUV_types_h.html","multiword_types_h.html","rtwtypes_h.html","MW_target_hardware_resources_h.html"];
