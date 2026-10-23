/* sub_6005D4A4
 * address: 0x6005D4A4   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005D4A4(int a1)
{
  float v2; // s0
  float v3; // s2
  float v4; // s8
  float v5; // s4
  int result; // r0
  float v7; // s6
  float v8; // s8

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
    (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  sub_60421AD4(FIELD_U32(a1, 7204));
  sub_60421AD4(FIELD_U32(a1, 7836));
  FIELD_F32(a1, 7892) = FIELD_F32(a1, 7856) + 112.0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1)
    || (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) == 1 )
  {
    v2 = 50.0;
  }
  else
  {
    v2 = 40.0;
  }
  v3 = (float)((float)(FIELD_F32(a1, 7892) - FIELD_F32(a1, 112)) * -2.0) / (float)(v2 * v2);
  FIELD_F32(a1, 100) = v3;
  FIELD_U32(a1, 124) = 0;
  FIELD_F32(a1, 136) = -(float)(v2 * v3);
  v4 = FIELD_F32(a1, 120);
  v5 = FIELD_F32(dword_60CC6484, 116);
  *(float *)&result = v4;
  v7 = (float)(FIELD_F32(a1, 108) + (float)(v2 * v4)) - v5;
  if ( v4 > 0.0 )
  {
    v8 = FIELD_F32(a1, 7220);
    if ( v7 <= v8 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v8 = FIELD_F32(a1, 7216);
  if ( v7 < v8 )
  {
LABEL_11:
    *(float *)&result = (float)((float)(v5 + v8) - FIELD_F32(a1, 108)) / v2;
    FIELD_F32(a1, 120) = *(float *)&result;
  }
LABEL_12:
  FIELD_F32(a1, 132) = *(float *)&result;
  return result;
}
