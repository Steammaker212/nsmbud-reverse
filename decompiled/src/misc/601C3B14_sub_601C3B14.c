/* sub_601C3B14
 * address: 0x601C3B14   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C3B14(int a1)
{
  int v2; // r0
  float v3; // r1
  float v4; // s0
  float *v5; // r2
  float v6; // s2
  int v7; // r0
  int v8; // r2
  int result; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  float v13; // s0
  float v14; // s0
  signed int v15; // [sp+4h] [bp-1Ch] BYREF
  signed int v16; // [sp+8h] [bp-18h] BYREF
  float v17[2]; // [sp+Ch] [bp-14h] BYREF
  float v18; // [sp+14h] [bp-Ch] BYREF

  v2 = sub_601DFFE4(a1 + 1084);
  v3 = FIELD_F32(v2, 72);
  v4 = -80.0;
  v17[0] = v3;
  v17[1] = FIELD_F32(v2, 76);
  v5 = &v18;
  v18 = FIELD_F32(v2, 80);
  v6 = v18;
  v7 = FIELD_U32(a1, 1084);
  if ( (unsigned int)(v7 - 2) >= 2 && v7 != 5 )
  {
    if ( v7 )
      goto LABEL_7;
    v4 = 120.0;
    v6 = v3;
    v5 = v17;
  }
  *v5 = v6 + v4;
  if ( !v7 )
    v17[0] = v17[0] + -15.0;
LABEL_7:
  v8 = FIELD_U32(a1, 1048);
  result = 23860929;
  if ( v8 <= 1 )
  {
    if ( v8 )
    {
      if ( v8 != 1 )
        return result;
      v15 = 23860929;
      v16 = 178956970;
      sub_608322C0((int *)(a1 + 180), (int *)(a1 + 1024), &v16, &v15);
      result = FIELD_U32(a1, 180);
      if ( result != FIELD_U32(a1, 1024) )
        return result;
      FIELD_U32(a1, 200) = 1077936128;
      FIELD_U32(a1, 192) = result;
      result = 2;
LABEL_32:
      FIELD_U32(a1, 1048) = result;
      return result;
    }
    if ( sqrtf(
           (float)((float)(v18 - FIELD_F32(a1, 88)) * (float)(v18 - FIELD_F32(a1, 88)))
         + (float)((float)(v17[0] - FIELD_F32(a1, 80)) * (float)(v17[0] - FIELD_F32(a1, 80)))) >= 10.0 )
    {
      FIELD_U32(a1, 972) = FIELD_U32(a1, 80);
      FIELD_U32(a1, 976) = FIELD_U32(a1, 84);
      FIELD_U32(a1, 980) = FIELD_U32(a1, 88);
      FIELD_U32(a1, 1024) = sub_608332B0(a1 + 80, v17);
      v12 = FIELD_U32(a1, 944);
      if ( FIELD_U32(a1, 1064) == 25 )
      {
        sub_605EAFD8(**(_DWORD **)(FIELD_U32(v12, 12) + 12), 1.5);
      }
      else
      {
        v14 = *(float *)&dword_60CB1604;
        FIELD_U32(a1, 1060) = 2;
        FIELD_U32(a1, 1064) = 25;
        ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(v12, 25, v14, 1.5, 0.0);
      }
      result = 1;
      goto LABEL_32;
    }
    FIELD_U32(a1, 1024) = sub_601691C0(a1);
    v11 = FIELD_U32(a1, 944);
    if ( FIELD_U32(a1, 1064) == 25 )
    {
      sub_605EAFD8(**(_DWORD **)(FIELD_U32(v11, 12) + 12), 1.5);
    }
    else
    {
      v13 = *(float *)&dword_60CB1604;
      FIELD_U32(a1, 1060) = 2;
      FIELD_U32(a1, 1064) = 25;
      ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(v11, 25, v13, 1.5, 0.0);
    }
LABEL_29:
    result = 50;
    goto LABEL_32;
  }
  switch ( v8 )
  {
    case 2:
      ((void (__fastcall *)(int, int))loc_60168DF8)(a1, 178956970);
      result = sub_60168910((float *)a1, (float *)(a1 + 972), v17);
      if ( result != 1 )
        return result;
      FIELD_U32(a1, 200) = 0;
      FIELD_U32(a1, 1024) = sub_601691C0(a1);
      goto LABEL_29;
    case 50:
      v15 = 23860929;
      v16 = 178956970;
      sub_608322C0((int *)(a1 + 180), (int *)(a1 + 1024), &v16, &v15);
      result = FIELD_U32(a1, 1024);
      if ( FIELD_U32(a1, 180) == result )
      {
        sub_601B69E0(a1);
        FIELD_U32(a1, 1044) = 30;
        FIELD_U32(a1, 1048) = 60;
        return 30;
      }
      break;
    case 60:
      v10 = FIELD_U32(a1, 1044);
      if ( v10 < 1 )
      {
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      }
      else
      {
        result = v10 - 1;
        FIELD_U32(a1, 1044) = result;
      }
      break;
  }
  return result;
}
