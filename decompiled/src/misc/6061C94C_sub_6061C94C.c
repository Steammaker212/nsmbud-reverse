/* sub_6061C94C
 * address: 0x6061C94C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6061C94C(int a1, float a2)
{
  float v3; // s0
  float v4; // s2
  float v5; // s16
  StateMethodExecuter *result; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  float v8; // [sp+4h] [bp-14h] BYREF

  CollisionMgr_process((_BYTE *)(a1 + 648), a2);
  sub_6000346C(a1);
  v3 = 0.5;
  v4 = FIELD_F32(a1, 124) + 0.0125;
  if ( v4 <= 0.5 )
  {
    v3 = FIELD_F32(a1, 124) + 0.0125;
    if ( v4 < -0.5 )
      v3 = -0.5;
  }
  FIELD_F32(a1, 124) = v3;
  v5 = v3 + FIELD_F32(a1, 112);
  FIELD_F32(a1, 112) = v5;
  ((void (__fastcall *)(int *, float *, int, _DWORD))checkLiquidCollisions)(
    &v7,
    &v8,
    a1 + 108,
    FIELD_U8(a1, 86));
  result = (StateMethodExecuter *)(a1 + 6820);
  if ( (float)(v5 + FIELD_F32(a1, 6820)) > v8 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CB357C);
  return result;
}
