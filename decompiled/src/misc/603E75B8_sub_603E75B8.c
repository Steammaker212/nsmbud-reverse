/* sub_603E75B8
 * address: 0x603E75B8   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E75B8(int a1)
{
  sub_603E4258((sead_IDisposer *)a1);
  *(_DWORD *)a1 = &off_60BF8F5C;
  FIELD_U32(a1, 24) = -1;
  FIELD_U32(a1, 148) = 0;
  FIELD_U8(a1, 128) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 116) = 0;
  FIELD_U32(a1, 112) = 0;
  FIELD_U32(a1, 152) = &off_60BF8FB0;
  FIELD_U32(a1, 156) = &off_60BF8FC0;
  FIELD_U32(a1, 160) = &off_60BF8FE4;
  FIELD_U32(a1, 164) = a1;
  FIELD_U32(a1, 168) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 172), (StateExecuter *)(a1 + 156), (StateBase *)&dword_60C996F4);
  FIELD_U32(a1, 152) = &off_60BF8FA0;
  FIELD_U32(a1, 136) = 0;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 144) = 0;
  FIELD_U32(a1, 132) = 0;
  return a1;
}
