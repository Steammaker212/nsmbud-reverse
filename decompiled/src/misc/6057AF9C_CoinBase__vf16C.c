/* CoinBase__vf16C
 * address: 0x6057AF9C   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall CoinBase__vf16C(int a1)
{
  CollisionMgr_Sensor v3; // [sp+0h] [bp-28h] BYREF

  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 1061997773;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 132) = 1082130432;
  FIELD_U32(a1, 136) = -1056964608;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 100) = -1110651699;
  if ( FIELD_U32(EnemyCounterMaybe_instance, 32) )
  {
    FIELD_U32(a1, 6048) = -1132462080;
    FIELD_U32(a1, 6040) = 1056964608;
    FIELD_U32(a1, 6044) = -1090519040;
    FIELD_U8(a1, 6056) = 1;
  }
  if ( FIELD_U8(a1, 7340) )
    MovementBlockCoinBase__vf150(a1);
  FIELD_U8(a1, 7402) = 1;
  sub_6057A4C4(a1);
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B047E8, 0);
  v3.b = 1.0;
  v3.a = -1.0;
  v3.c = -6.0;
  CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &v3, 1);
  FIELD_U32(a1, 3200) |= 0x800000u;
  FIELD_U32(a1, 80) = sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) >> 31;
  FIELD_U8(a1, 7464) = 0;
  FIELD_U32(a1, 7372) = 2;
  FIELD_U32(a1, 6004) = 1036831949;
  FIELD_U8(a1, 536) = 1;
  return 6004;
}
