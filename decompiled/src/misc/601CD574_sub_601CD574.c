/* sub_601CD574
 * address: 0x601CD574   size: 848   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601CD574(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  _DWORD *v5; // r0
  float *v6; // r4
  float *v7; // r0
  char v8; // r12
  float v9; // r1
  float v10; // r2
  float v11; // s18
  float v12; // s20
  float v13; // s16
  float v14; // s2
  int v15; // r4
  float v16; // s16
  float v17; // s18
  float v18; // s20
  float v20; // [sp+8h] [bp-58h] BYREF
  float v21; // [sp+Ch] [bp-54h]
  float v22; // [sp+10h] [bp-50h]
  _DWORD v23[19]; // [sp+14h] [bp-4Ch] BYREF

  sub_6021B54C(dword_60C8D408);
  sub_6021B528(dword_60C8D408);
  sub_60169018((_DWORD *)a1);
  memset(v23, 255, 12);
  sub_601E0E04(a1 + 1032, v23);
  sub_6019EC34((_DWORD *)(a1 + 1032), v23);
  FIELD_U32(a1, 1048) = -1;
  FIELD_U32(a1, 1052) = -1;
  FIELD_U32(a1, 1056) = -1;
  FIELD_U32(a1, 1060) = -1;
  FIELD_U32(a1, 1064) = -1;
  FIELD_U32(a1, 1044) = -1;
  v2 = FIELD_U32(a1, 84);
  v3 = FIELD_U32(a1, 88);
  v4 = dword_60C89E18;
  FIELD_U32(dword_60C89E18, 299196) = FIELD_U32(a1, 80);
  FIELD_U32(v4, 299200) = v2;
  FIELD_U32(v4, 299204) = v3;
  v5 = (_DWORD *)sub_601DFFE4(a1 + 1032);
  FIELD_U32(a1, 80) = v5[18];
  FIELD_U32(a1, 84) = v5[19];
  FIELD_U32(a1, 88) = v5[20];
  sub_601B2EF0(a1, a1 + 1032);
  sub_6019EC34((_DWORD *)(a1 + 1068), (_DWORD *)(a1 + 1032));
  sub_60173634((__n64 *)dword_60C88BC8, (unsigned int *)(a1 + 1032));
  sub_601FEE28(dword_60C8C188);
  sub_601E04F4(a1 + 1032, a1 + 1044);
  sub_601721FC(dword_60C88BC8);
  FIELD_U32(a1, 1092) = sub_601E0070(a1 + 1032, a1 + 1044);
  v6 = (float *)sub_601E0040(a1 + 1032);
  v7 = (float *)sub_601E0040(a1 + 1044);
  v9 = FIELD_F32(a1, 84);
  v10 = FIELD_F32(a1, 88);
  v11 = v6[1] - v7[1];
  v12 = *v6 - *v7;
  v13 = v6[2] - v7[2];
  v20 = FIELD_F32(a1, 80);
  v21 = v9;
  v22 = v10;
  v14 = sqrtf((float)((float)(v11 * v11) + (float)(v12 * v12)) + (float)(v13 * v13));
  if ( v14 > 0.0 )
  {
    v13 = v13 * (float)(1.0 / v14);
    v11 = v11 * (float)(1.0 / v14);
    v12 = v12 * (float)(1.0 / v14);
  }
  v15 = a1;
  v16 = v13 * 50.0;
  v17 = v11 * 50.0;
  v18 = v12 * 50.0;
  while ( 1 )
  {
    v15 = FIELD_U32(v15, 272);
    if ( ((unsigned int)&dword_60C8AB28 & ~(1612503004 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C8AB28) )
    {
      dword_60C8AB24 = (int)&off_60BD4BBC;
      _cxa_guard_release(&dword_60C8AB28);
    }
    if ( !v15 || (**(int (__fastcall ***)(int, int *))v15)(v15, &dword_60C8AB24) != 1 )
      break;
    v20 = v18 + v20;
    v21 = v17 + v21;
    v22 = v16 + v22;
    sub_601BCEF4(v15, (_DWORD *)(a1 + 1032), (int *)&v20);
  }
  sub_6019EC34((_DWORD *)(dword_60CC6D78 + 480), (_DWORD *)(a1 + 1032));
  FIELD_U32(dword_60CC6D78, 492) = FIELD_U32(a1, 1092);
  FIELD_F32(a1, 1132) = sub_601D89B8(a1);
  sub_6019EC34((_DWORD *)(a1 + 1080), (_DWORD *)(a1 + 1032));
  FIELD_U32(a1, 1108) = FIELD_U32(a1, 1092);
  FIELD_U32(a1, 1120) &= 0xFFFFFFE7;
  ((void (__fastcall *)(int, int))loc_6021BF88)(dword_60C8D408, a1 + 1032);
  sub_601D55A4(a1, 0, -1, 0);
  return sub_601D5BDC(a1);
}
