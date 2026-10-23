/* sub_601A8B4C
 * address: 0x601A8B4C   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A8B4C(int a1)
{
  int v2; // r0
  float v3; // s4
  float v4; // s16
  float v5; // s0
  StateMethodExecuter *result; // r0
  signed int v7; // [sp+4h] [bp-2Ch] BYREF
  int speed; // [sp+8h] [bp-28h] BYREF
  int target[9]; // [sp+Ch] [bp-24h] BYREF

  if ( FIELD_S32(a1, 500) < 0 )
    FIELD_U32(a1, 500) = sub_601E4EA4(dword_60C8B13C, 147, 0, a1 + 80, 1);
  v2 = FIELD_U32(a1, 180);
  if ( v2 != FIELD_U32(a1, 472) )
  {
    target[0] = FIELD_U32(a1, 472);
    speed = 0x2000000;
    v7 = 0x100000;
    sub_608322C0((int *)(a1 + 180), target, &speed, &v7);
    v2 = FIELD_U32(a1, 180);
  }
  FIELD_U32(a1, 192) = v2;
  ((void (__fastcall *)(int))loc_60168DF8)(a1);
  v3 = FIELD_F32(a1, 80) - FIELD_F32(a1, 440);
  v4 = sqrtf(
         (float)((float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 448))
               * (float)(FIELD_F32(a1, 88) - FIELD_F32(a1, 448)))
       + (float)(v3 * v3));
  v5 = (float)(FIELD_F32(a1, 84) - FIELD_F32(a1, 444)) / (float)(v4 / FIELD_F32(a1, 200));
  FIELD_F32(a1, 476) = v5;
  result = (StateMethodExecuter *)((int (__fastcall *)(int, float, float, float, float))loc_60832560)(
                                    a1 + 120,
                                    -v5,
                                    0.1,
                                    2.0,
                                    0.05);
  if ( v4 < 900.0 )
  {
    target[0] = 1550960320;
    speed = 0x400000;
    moveValueTo((int *)(a1 + 180), target, &speed);
    FIELD_U32(a1, 472) = FIELD_U32(a1, 180);
    ((void (__fastcall *)(int, float, float, float, float))loc_60832560)(
      a1 + 200,
      (float)((float)(FIELD_F32(a1, 492) + FIELD_F32(a1, 492)) * 3.1416) / 160.0,
      0.1,
      0.15,
      0.01);
    result = (StateMethodExecuter *)sub_601687F4((float *)a1, (float *)(a1 + 428), (float *)(a1 + 440));
    if ( result == (StateMethodExecuter *)1 )
      return StateMgr__changeState((StateMgr *)(a1 + 296), (StateBase *)&dword_60C8A300);
  }
  return result;
}
