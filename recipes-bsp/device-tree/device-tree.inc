REPO ??= "git://github.com/Xilinx/device-tree-xlnx.git;protocol=https"
BRANCHARG = "${@['nobranch=1', 'branch=${BRANCH}'][d.getVar('BRANCH') != '']}"
SRC_URI:append = " ${REPO};${BRANCHARG}"

BRANCH[2022.1] = "xlnx_rel_v2022.1"
SRCREV[2022.1] = "1b364a44fae80fed4ea2863accc71f380b46c038"

BRANCH[2022.2] = "xlnx_rel_v2022.2"
SRCREV[2022.2] = "24d29888d0048f26e4f3d6e0b7cd655aede94f31"

BRANCH = "${@d.getVarFlag('BRANCH', d.getVar('XILINX_XSCT_VERSION'))}"
SRCREV = "${@d.getVarFlag('SRCREV', d.getVar('XILINX_XSCT_VERSION'))}"
