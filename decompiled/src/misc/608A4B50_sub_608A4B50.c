/* sub_608A4B50
 * address: 0x608A4B50   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A4B50(int *a1, int a2)
{
  *a1 = a2;
  a1[2] = sub_6083BDB8(a2, 5, 3, "sysEmitterDynamicUniformBlock");
  a1[3] = sub_6083BDB8(*a1, 5, 3, "sysEmitterStaticUniformBlock");
  a1[4] = sub_6083BDB8(*a1, 5, 3, "sysEmitterFieldUniformBlock");
  a1[5] = sub_6083BDB8(*a1, 5, 2, "sysCurlNoiseTextureArray");
  a1[6] = sub_6083BDB8(*a1, 5, 4, "sysPosBuff");
  a1[7] = sub_6083BDB8(*a1, 5, 4, "sysVecBuff");
  a1[8] = sub_6083BDB8(*a1, 5, 4, "sysPosDeltaBuff");
  a1[9] = sub_6083BDB8(*a1, 5, 4, "sysScaleBuff");
  a1[10] = sub_6083BDB8(*a1, 5, 4, "sysRandomBuff");
  a1[11] = sub_6083BDB8(*a1, 5, 4, "sysEmtMat0Buff");
  a1[12] = sub_6083BDB8(*a1, 5, 4, "sysEmtMat1Buff");
  a1[13] = sub_6083BDB8(*a1, 5, 4, "sysEmtMat2Buff");
  return 1;
}
