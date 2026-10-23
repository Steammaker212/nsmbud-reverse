/* Actor_ShortPlay_result_Demo_Tag_build_helper
 * address: 0x603E9E40   size: 212   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ShortPlay_result_Demo_Tag_build_helper(int a1, int a2)
{
  sub_603E4258((sead_IDisposer *)a1);
  *(_DWORD *)a1 = &off_60BF905C;
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = a2;
  FIELD_U32(a1, 36) = -1;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 60) = 0;
  FIELD_U32(a1, 80) = 0;
  FIELD_U8(a1, 84) = 0;
  FIELD_U32(a1, 88) = &off_60BF90B0;
  FIELD_U32(a1, 92) = &off_60BF90C0;
  FIELD_U32(a1, 96) = &off_60BF90E4;
  FIELD_U32(a1, 100) = a1;
  FIELD_U32(a1, 104) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 108), (StateExecuter *)(a1 + 92), (StateBase *)&dword_60C998A0);
  FIELD_U32(a1, 88) = &off_60BF90A0;
  FIELD_U32(a1, 56) = -1;
  FIELD_U32(a1, 52) = -1;
  FIELD_U32(a1, 48) = -1;
  FIELD_U32(a1, 44) = -1;
  FIELD_U32(a1, 76) = -1;
  FIELD_U32(a1, 72) = -1;
  FIELD_U32(a1, 68) = -1;
  FIELD_U32(a1, 64) = -1;
  return a1;
}
