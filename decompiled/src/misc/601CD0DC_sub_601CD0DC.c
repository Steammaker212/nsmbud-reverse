/* sub_601CD0DC
 * address: 0x601CD0DC   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601CD0DC(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r6
  _DWORD *v5; // r0
  float *v6; // r0
  unsigned int v7; // r0
  _DWORD v9[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = FIELD_U32(a1, 1120);
  FIELD_U32(a1, 1120) = v2 & 0xFFFFDFFF;
  if ( (v2 & 2) != 0 || sub_601916F4(dword_60C8996C) == 1 )
  {
    v3 = a1 + 1032;
    v4 = FIELD_U32(dword_60CC6D78, 496);
  }
  else
  {
    v3 = a1 + 1032;
    v4 = sub_601CE978(dword_60CC6D78, a1 + 1032, FIELD_U32(dword_60CC6D78, 496));
  }
  v5 = (_DWORD *)sub_601E039C(v3, v4);
  v9[0] = v5[21];
  v9[1] = v5[22];
  v9[2] = v5[24];
  FIELD_U32(a1, 1144) = sub_601E1370(v4);
  v6 = (float *)sub_601E0040(v9);
  v7 = sub_6000F7B8(*v6 - FIELD_F32(a1, 80), v6[2] - FIELD_F32(a1, 88));
  FIELD_U32(a1, 192) = v7;
  FIELD_U32(a1, 180) = v7;
  FIELD_U32(a1, 1000) = v7;
  FIELD_U32(a1, 92) = FIELD_U32(a1, 80);
  FIELD_U32(a1, 96) = FIELD_U32(a1, 84);
  FIELD_U32(a1, 100) = FIELD_U32(a1, 88);
  FIELD_U32(a1, 1120) = FIELD_U32(a1, 1120) & 0xFFFFFFF9 | 4;
  return sub_601B1FA4(a1, &stru_60C8A908);
}
