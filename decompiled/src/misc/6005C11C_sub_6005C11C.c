/* sub_6005C11C
 * address: 0x6005C11C   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6005C11C(int a1)
{
  float v2; // s0
  int v3; // r0
  float v4; // s0
  float v5; // s6
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float v9; // s2
  float result; // s0

  if ( !(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1) )
    (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1);
  sub_60421AD4(FIELD_U32(a1, 7204));
  sub_60421AD4(FIELD_U32(a1, 7836));
  v2 = FIELD_F32(a1, 7856) + 112.0;
  FIELD_F32(a1, 7892) = v2;
  v3 = FIELD_U32(a1, 116);
  FIELD_F32(a1, 7876) = FIELD_F32(a1, 108) + FIELD_F32(a1, 7888);
  FIELD_F32(a1, 7880) = v2;
  FIELD_U32(a1, 7884) = v3;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1)
    || (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) == 1 )
  {
    v4 = 46.0;
  }
  else
  {
    v4 = 38.0;
  }
  v5 = FIELD_F32(a1, 7888) / v4;
  FIELD_F32(a1, 120) = v5;
  v6 = FIELD_F32(dword_60CC6484, 116);
  v7 = FIELD_F32(a1, 7876) - v6;
  if ( v5 > 0.0 )
  {
    v8 = FIELD_F32(a1, 7220);
    if ( v7 <= v8 )
      goto LABEL_12;
    goto LABEL_11;
  }
  v8 = FIELD_F32(a1, 7216);
  if ( v7 < v8 )
LABEL_11:
    FIELD_F32(a1, 120) = (float)((float)(v6 + v8) - FIELD_F32(a1, 108)) / v4;
LABEL_12:
  v9 = (float)((float)(FIELD_F32(a1, 7892) - FIELD_F32(a1, 112))
             + (float)(FIELD_F32(a1, 7892) - FIELD_F32(a1, 112)))
     / (float)(v4 * v4);
  result = v4 * v9;
  FIELD_F32(a1, 100) = v9;
  FIELD_U32(a1, 124) = 0;
  FIELD_F32(a1, 136) = result;
  return result;
}
