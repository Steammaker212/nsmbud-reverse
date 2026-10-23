/* sub_6058E864
 * address: 0x6058E864   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6058E864(int a1)
{
  float v2; // s2
  int v3; // r1
  int v4; // r0
  _BYTE v6[4]; // [sp+4h] [bp-1Ch] BYREF
  _DWORD v7[3]; // [sp+8h] [bp-18h] BYREF
  float v8; // [sp+14h] [bp-Ch] BYREF

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v8 = 0.0;
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v7[0] = FIELD_U32(a1, 108);
  *(float *)&v7[1] = v2 + -32.0;
  v7[2] = v3;
  ((void (__fastcall *)(_BYTE *, float *, _DWORD *, _DWORD))checkLiquidCollisions)(
    v6,
    &v8,
    v7,
    FIELD_U8(a1, 86));
  sub_606DF4A4(a1 + 7484, FIELD_U32(EnemyCounterMaybe_instance, 28), v8);
  v4 = FIELD_U32(a1, 7504);
  FIELD_U32(a1, 164) = v4;
  FIELD_U32(a1, 112) = FIELD_U32(a1, 7520);
  FIELD_U32(a1, 6364) = v4;
  ShapedCollider_execute((ColliderBase *)(a1 + 6120));
  sub_605B2D70(a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
