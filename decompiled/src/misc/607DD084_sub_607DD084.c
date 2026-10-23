/* sub_607DD084
 * address: 0x607DD084   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607DD084(int a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  _DWORD v8[8]; // [sp+0h] [bp-20h] BYREF

  v2 = 6;
  FIELD_U32(a1, 60) = 0;
  result = FIELD_U32(a1, 24);
  if ( result )
  {
    if ( result != 1 )
      goto LABEL_11;
    v4 = FIELD_U32(a1, 468);
    v5 = FIELD_U32(a1, 40);
    v6 = FIELD_U32(a1, 44);
    v7 = FIELD_U32(a1, 48);
    v8[0] = FIELD_U32(a1, 36);
    v8[1] = v5;
    v8[2] = v6;
    v8[3] = v7;
    nn__hid__VibrationWriter__Write(v4, v8);
    goto LABEL_7;
  }
  if ( !nn__hid__VibrationPlayer__Load(
          *(nn__hid__VibrationPlayer **)(a1 + 464),
          *(const void **)(a1 + 28),
          FIELD_U32(a1, 32)) )
  {
LABEL_7:
    result = FIELD_U32(a1, 24);
    if ( !result )
    {
      nn__hid__VibrationPlayer__SetCurrentPosition(*(nn__hid__VibrationPlayer **)(a1 + 464), 0);
      result = nn__hid__VibrationPlayer__Play(*(nn__hid__VibrationPlayer **)(a1 + 464));
    }
    v2 = 3;
    if ( FIELD_F32(a1, 68) > 0.0 )
    {
      sub_607DABF0(FIELD_U32(a1, 72), 0.0);
      result = sub_607DAC90(FIELD_U32(a1, 72), 1.0, FIELD_F32(a1, 68));
    }
    goto LABEL_11;
  }
  result = FIELD_U32(a1, 24);
  if ( !result )
    result = nn__hid__VibrationPlayer__Stop(*(nn__hid__VibrationPlayer **)(a1 + 464));
LABEL_11:
  FIELD_U32(a1, 16) = v2;
  return result;
}
