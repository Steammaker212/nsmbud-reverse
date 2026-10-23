/* sub_600BE858
 * address: 0x600BE858   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600BE858(int a1, double a2, float a3, float a4, float32x2_t d2_0)
{
  int v6; // r0
  _DWORD *v7; // r6
  float v8; // s0
  _BOOL4 v9; // r5
  int v10; // r0
  int result; // r0
  bool v12; // zf
  int a5; // [sp+0h] [bp-20h] BYREF
  int target[7]; // [sp+4h] [bp-1Ch] BYREF

  d2_0.n64_u32[0] = 0;
  v7 = (_DWORD *)(a1 + 7416);
  v6 = FIELD_U32(a1, 7416);
  if ( v6 )
    *v7 = v6 - 1;
  *(float *)&a2 = FIELD_F32(a1, 100) + FIELD_F32(a1, 124);
  v8 = vmax_f32(*(float32x2_t *)&a2, d2_0).n64_f32[0];
  FIELD_F32(a1, 124) = v8;
  FIELD_F32(a1, 7436) = FIELD_F32(a1, 7436) + v8;
  a5 = dword_60C83940;
  target[0] = dword_60C83938;
  v9 = moveValueTo((int *)(a1 + 7432), target, &a5);
  v10 = FIELD_U32(a1, 7436);
  FIELD_U32(a1, 6276) = 0;
  FIELD_U32(a1, 6280) = v10;
  FIELD_U32(a1, 6932) = 0;
  FIELD_U32(a1, 6936) = v10;
  result = 1;
  if ( !*v7 )
  {
    a5 = dword_60C83944;
    target[0] = dword_60C8393C;
    result = !moveValueTo((int *)(a1 + 7428), target, &a5);
  }
  v12 = result == 0;
  if ( !result )
  {
    result = !v9;
    v12 = v9;
  }
  FIELD_U32(a1, 6348) = (int)(float)((float)FIELD_S32(a1, 7428) * 0.9);
  if ( v12 )
    return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60C838A4);
  return result;
}
