/* sub_60576268
 * address: 0x60576268   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60576268(int a1)
{
  ColliderBase *v2; // r5
  float v3; // s2
  int v4; // r1
  int v5; // r0
  _BYTE v7[4]; // [sp+4h] [bp-24h] BYREF
  _DWORD v8[3]; // [sp+8h] [bp-20h] BYREF
  float v9; // [sp+14h] [bp-14h] BYREF

  if ( FIELD_U8(a1, 7312) )
  {
    v2 = (ColliderBase *)(a1 + 6120);
    if ( !sub_60003B88(a1, (_DWORD *)(a1 + 6120)) )
      ((void (__fastcall *)(int, int))loc_6069B070)(a1 + 7240, a1 + 108);
  }
  else
  {
    v2 = (ColliderBase *)(a1 + 6120);
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v9 = 0.0;
  v3 = FIELD_F32(a1, 112);
  v4 = FIELD_U32(a1, 116);
  v8[0] = FIELD_U32(a1, 108);
  *(float *)&v8[1] = v3 + -32.0;
  v8[2] = v4;
  ((void (__fastcall *)(_BYTE *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
    v7,
    &v9,
    v8,
    FIELD_U8(a1, 86));
  sub_606DF4A4(a1 + 7388, FIELD_U32(EnemyCounterMaybe_instance, 28), v9);
  v5 = FIELD_U32(a1, 7408);
  FIELD_U32(a1, 164) = v5;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 7424) + FIELD_F32(a1, 6796);
  FIELD_U32(a1, 6364) = v5;
  ShapedCollider_execute(v2);
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
