/* MovementBlockCoinBase__ctor
 * address: 0x605CFA04   size: 280   group: blocks
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MovementBlockCoinBase__ctor(int a1, ActorBuildInfo *a2)
{
  BlockCoinBase__ctor((_DWORD *)a1, a2);
  *(_DWORD *)a1 = &off_60C0ADD4;
  FIELD_U32(a1, 6980) = 0;
  FIELD_U32(a1, 6984) = 0;
  FIELD_U32(a1, 6988) = 0;
  MovementHandler__ctor((MovementHandler *)(a1 + 6992));
  FIELD_U8(a1, 7320) = 0;
  FIELD_U8(a1, 7292) = 0;
  FIELD_U32(a1, 7288) = 0;
  FIELD_U32(a1, 7284) = 0;
  FIELD_U32(a1, 7280) = 0;
  FIELD_U8(a1, 7312) = 0;
  FIELD_U32(a1, 7308) = 0;
  FIELD_U32(a1, 7304) = 0;
  FIELD_U32(a1, 7300) = 0;
  FIELD_U32(a1, 7296) = 0;
  FIELD_U8(a1, 7321) = 1;
  FIELD_U8(a1, 7340) = 0;
  FIELD_U32(a1, 7336) = 0;
  FIELD_U32(a1, 7332) = 0;
  FIELD_U32(a1, 7328) = 0;
  FIELD_U32(a1, 7324) = 0;
  FIELD_U32(a1, 7344) = off_60C0AF3C;
  FIELD_U32(a1, 7316) = 1;
  FIELD_U32(a1, 6968) = -1059061760;
  FIELD_U32(a1, 6972) = 1088421888;
  FIELD_U32(a1, 6976) = 0;
  return a1;
}
