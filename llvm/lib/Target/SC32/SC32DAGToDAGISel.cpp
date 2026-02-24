#include "SC32DAGToDAGISel.h"
#include "MCTargetDesc/SC32MCTargetDesc.h"
#include "SC32SelectionDAGInfo.h"

using namespace llvm;

#define GET_DAGISEL_BODY SC32DAGToDAGISel
#include "SC32GenDAGISel.inc"

void SC32DAGToDAGISel::Select(SDNode *N) { SelectCode(N); }
