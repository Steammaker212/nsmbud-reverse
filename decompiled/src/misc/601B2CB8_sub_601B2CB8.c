/* sub_601B2CB8
 * address: 0x601B2CB8   size: 380   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B2CB8(int a1)
{
  _DWORD *v2; // r5
  float *v3; // r0
  float v4; // r1
  float v5; // r2
  float v6; // r0
  float v7; // s0
  float v8; // s2
  float v9; // s4
  int v10; // r2
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r0
  int result; // r0

  v2 = (_DWORD *)(a1 + 1032);
  if ( FIELD_U8(dword_60CC6D78, 28) )
  {
    sub_601E0644(v2);
    v3 = (float *)sub_601E0040(v2);
    v4 = *v3;
    FIELD_F32(a1, 980) = *v3;
    v5 = v3[1];
    FIELD_F32(a1, 984) = v5;
    v6 = v3[2];
    FIELD_F32(a1, 988) = v6;
    v7 = v4 + *(float *)&dword_60C8AB58;
    v8 = v5 + *(float *)&dword_60C8AB5C;
    v9 = v6 + *(float *)&dword_60C8AB60;
    FIELD_F32(a1, 80) = v4 + *(float *)&dword_60C8AB58;
    FIELD_F32(a1, 84) = v8;
    FIELD_F32(a1, 88) = v9;
    FIELD_F32(a1, 968) = v7;
    FIELD_F32(a1, 972) = v8;
    FIELD_F32(a1, 976) = v9;
    FIELD_U32(a1, 180) = 0x40000000;
    FIELD_U32(a1, 1000) = 0x40000000;
    FIELD_U32(a1, 1092) = 5;
    sub_6019EC34((_DWORD *)(dword_60CC6D78 + 480), v2);
  }
  else
  {
    v10 = FIELD_U32(dword_60CC6D78, 416);
    v11 = FIELD_U32(dword_60CC6D78, 420);
    FIELD_U32(a1, 1032) = FIELD_U32(dword_60CC6D78, 412);
    FIELD_U32(a1, 1036) = v10;
    FIELD_U32(a1, 1040) = v11;
    v12 = (_DWORD *)sub_601E0040(v2);
    FIELD_U32(a1, 80) = *v12;
    FIELD_U32(a1, 84) = v12[1];
    FIELD_U32(a1, 88) = v12[2];
    if ( sub_601DA074(v2) || sub_601D9E28(v2) == 1 )
    {
      FIELD_F32(a1, 84) = FIELD_F32(a1, 84) + 60.0;
    }
    else if ( sub_601DA5F0(v2) )
    {
      FIELD_U32(a1, 1004) = 1094713344;
    }
    v13 = sub_601E1308(2);
    FIELD_U32(a1, 180) = v13;
    FIELD_U32(a1, 1000) = v13;
  }
  sub_6019EC34((_DWORD *)(a1 + 1068), v2);
  result = FIELD_U32(a1, 84);
  FIELD_U32(a1, 1152) = result;
  return result;
}
