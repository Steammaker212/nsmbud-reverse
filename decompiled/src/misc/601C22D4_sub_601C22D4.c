/* sub_601C22D4
 * address: 0x601C22D4   size: 856   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C22D4(int a1, int a2)
{
  int v3; // r5
  int result; // r0
  int v5; // r4
  __int16 v6; // t1
  int v7; // r0
  int v8; // r0
  int v9; // r1
  float v10; // r2
  int v11; // r0

  v3 = sub_601C505C(a1, a2);
  if ( v3 )
    sub_601C6268(a1, v3);
  result = FIELD_U32(a1, 1052);
  switch ( result )
  {
    case 0:
      result = FIELD_U32(a1, 1108);
      if ( (result & 0x4000) != 0 )
      {
        FIELD_U32(a1, 1108) = result & 0xFFFFFDFF;
        FIELD_U32(a1, 1052) = 1;
        result = 1;
      }
      break;
    case 1:
      result = FIELD_U32(a1, 1024);
      if ( FIELD_U32(a1, 180) == result )
      {
        v6 = FIELD_U16(a1, 440);
        v5 = a1 + 440;
        *(_WORD *)v5 = v6 | 1;
        FIELD_U32(v5, 612) = 2;
        result = 2;
      }
      break;
    case 2:
      v7 = FIELD_U32(a1, 1108);
      if ( (v7 & 0x8000) != 0 )
      {
        FIELD_U32(a1, 1108) = v7 & 0xFFFFFDFF;
        FIELD_U32(a1, 1052) = 3;
        result = 3;
      }
      else
      {
        FIELD_U32(a1, 1024) = sub_608332B0(a1 + 80, v3 + 80);
        result = FIELD_U32(a1, 1108) | 0x200;
        FIELD_U32(a1, 1108) = result;
      }
      break;
    case 3:
      result = FIELD_U32(a1, 1024);
      if ( FIELD_U32(a1, 180) == result )
      {
        FIELD_U32(a1, 1052) = 4;
        result = 4;
      }
      break;
    case 4:
      result = FIELD_U8(a1, 1109);
      if ( (result & 0x80) != 0 )
      {
        FIELD_U32(a1, 1052) = 10;
        result = 10;
      }
      break;
    case 10:
      if ( (FIELD_U32(a1, 264) & 0xFFFFFFFE) == 6 )
      {
        FIELD_U32(a1, 1044) = 90;
        FIELD_U32(a1, 1052) = 50;
        result = 50;
      }
      else
      {
        FIELD_U32(a1, 1052) = 11;
        result = sub_601BA0F8(a1, 18, 0.0, 0.0);
      }
      break;
    case 11:
    case 62:
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      break;
    case 50:
      v11 = FIELD_U32(a1, 1044);
      if ( v11 < 1 )
      {
        FIELD_U32(a1, 1024) = 0;
        FIELD_U32(a1, 1108) |= 0x200u;
        FIELD_U32(a1, 1052) = 51;
        result = 51;
      }
      else
      {
        result = v11 - 1;
        FIELD_U32(a1, 1044) = result;
      }
      break;
    case 51:
      result = FIELD_U32(a1, 1024);
      if ( FIELD_U32(a1, 180) == result )
      {
        FIELD_U32(a1, 1052) = 60;
        result = 60;
      }
      break;
    case 60:
      v8 = FIELD_U32(a1, 80);
      FIELD_U32(a1, 972) = v8;
      v9 = FIELD_U32(a1, 84);
      FIELD_U32(a1, 976) = v9;
      v10 = FIELD_F32(a1, 88);
      FIELD_F32(a1, 980) = v10;
      FIELD_U32(a1, 948) = v8;
      FIELD_U32(a1, 952) = v9;
      FIELD_F32(a1, 956) = v10 + 50.0;
      FIELD_U32(a1, 192) = FIELD_U32(a1, 180);
      sub_601C3334(a1, 2, -1.0, 0.0, 1.0);
      FIELD_U32(a1, 200) = 1065353216;
      FIELD_U32(a1, 1052) = 61;
      result = 61;
      break;
    case 61:
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      result = sub_60168910((float *)a1, (float *)(a1 + 972), (float *)(a1 + 948));
      if ( result == 1 )
      {
        FIELD_U32(a1, 200) = 0;
        sub_601C3334(a1, 0, -1.0, 0.0, 1.0);
        result = 62;
        FIELD_U32(a1, 1052) = 62;
      }
      break;
    default:
      return result;
  }
  return result;
}
