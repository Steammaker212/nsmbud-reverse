/* sub_6061CB4C
 * address: 0x6061CB4C   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6061CB4C(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s16
  float v5; // s0
  int v6; // r0
  StateMethodExecuter *result; // r0
  int v8; // [sp+0h] [bp-18h] BYREF
  float v9; // [sp+4h] [bp-14h] BYREF

  FIELD_F32(a1, 108) = FIELD_F32(a1, 120) + FIELD_F32(a1, 108);
  v2 = 0.5;
  v3 = FIELD_F32(a1, 124) + 0.0125;
  if ( v3 <= 0.5 )
  {
    v2 = FIELD_F32(a1, 124) + 0.0125;
    if ( v3 < -0.5 )
      v2 = -0.5;
  }
  FIELD_F32(a1, 124) = v2;
  v4 = v2 + FIELD_F32(a1, 112);
  FIELD_F32(a1, 112) = v4;
  ((void (__fastcall *)(int *, float *, int, _DWORD))checkLiquidCollisions)(
    &v8,
    &v9,
    a1 + 108,
    FIELD_U8(a1, 86));
  v5 = v4 + FIELD_F32(a1, 6820);
  if ( v5 > v9 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB357C);
  CollisionMgr_process((_BYTE *)(a1 + 648), v5);
  v6 = FIELD_U32(a1, 2872);
  if ( (v6 & 0x440000) != 0 && (v6 & 0x10000000) == 0 || (v6 & 0x880000) != 0 && (v6 & 0x20000000) == 0 )
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
  result = (StateMethodExecuter *)(a1 + 6824);
  if ( FIELD_F32(a1, 108) <= FIELD_F32(a1, 6824) )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB35BC);
  return result;
}
