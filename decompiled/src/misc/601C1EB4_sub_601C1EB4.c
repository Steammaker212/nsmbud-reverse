/* sub_601C1EB4
 * address: 0x601C1EB4   size: 1044   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C1EB4(int a1, int a2)
{
  int v3; // r5
  int result; // r0
  int v5; // r0
  int v6; // r0
  float v7; // r0
  int v8; // r1
  int v9; // r2

  v3 = sub_601C505C(a1, a2);
  if ( v3 )
    sub_601C6268(a1, v3);
  result = FIELD_U32(a1, 1052);
  switch ( result )
  {
    case 0:
      v5 = FIELD_U32(a1, 1108);
      if ( (v5 & 0x4000) != 0 )
      {
        FIELD_U32(a1, 1108) = v5 & 0xFFFFFDFF;
        FIELD_U32(a1, 1052) = 1;
        result = 1;
      }
      else
      {
        FIELD_U32(a1, 1024) = sub_608332B0(a1 + 80, v3 + 80);
        result = FIELD_U32(a1, 1108) | 0x200;
        FIELD_U32(a1, 1108) = result;
      }
      break;
    case 1:
      result = FIELD_U32(a1, 1024);
      if ( FIELD_U32(a1, 180) == result )
      {
        FIELD_U32(a1, 1052) = 10;
        result = 10;
      }
      break;
    case 10:
      if ( (FIELD_U32(a1, 264) & 0xFFFFFFFE) == 6 )
      {
        FIELD_U32(a1, 1052) = 60;
        result = 60;
      }
      else
      {
        FIELD_U32(a1, 1052) = 11;
        result = sub_601BA0F8(a1, 18, 0.0, 0.0);
      }
      break;
    case 11:
    case 100:
      result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      break;
    case 60:
      result = *(unsigned __int8 *)(sub_601CF9C0(dword_60C8AEF0) + 216);
      if ( (result & 2) != 0 )
      {
        FIELD_U32(a1, 1024) = 0;
        FIELD_U32(a1, 1108) |= 0x100u;
        FIELD_U32(a1, 1052) = 61;
        result = 61;
      }
      break;
    case 61:
      result = FIELD_U32(a1, 1024);
      if ( FIELD_U32(a1, 180) == result )
      {
        FIELD_U32(a1, 1044) = 120;
        FIELD_U32(a1, 1052) = 62;
        result = 62;
      }
      break;
    case 62:
      v6 = FIELD_U32(a1, 1044);
      if ( v6 >= 1 )
        goto LABEL_21;
      sub_601C3334(a1, 2, -1.0, 0.0, 1.0);
      FIELD_U32(a1, 1024) = -1073741824;
      FIELD_U32(a1, 1108) |= 0x100u;
      FIELD_U32(a1, 1052) = 63;
      result = 63;
      break;
    case 63:
      result = FIELD_U32(a1, 1024);
      if ( FIELD_U32(a1, 180) == result )
      {
        FIELD_U32(a1, 1044) = 0;
        FIELD_U32(a1, 1052) = 65;
        result = 65;
      }
      break;
    case 65:
      v6 = FIELD_U32(a1, 1044);
      if ( v6 < 1 )
      {
        v7 = FIELD_F32(a1, 80);
        FIELD_F32(a1, 972) = v7;
        v8 = FIELD_U32(a1, 84);
        FIELD_U32(a1, 976) = v8;
        v9 = FIELD_U32(a1, 88);
        FIELD_U32(a1, 980) = v9;
        FIELD_U32(a1, 952) = v8;
        FIELD_U32(a1, 956) = v9;
        FIELD_F32(a1, 948) = v7 + -90.0;
        FIELD_U32(a1, 192) = FIELD_U32(a1, 180);
        sub_601C3334(a1, 2, -1.0, 0.0, 1.0);
        FIELD_U32(a1, 200) = 1065353216;
        FIELD_U32(a1, 1052) = 70;
        result = 70;
      }
      else
      {
LABEL_21:
        result = v6 - 1;
        FIELD_U32(a1, 1044) = result;
      }
      break;
    case 70:
      ((void (__fastcall *)(int))loc_60168DF8)(a1);
      result = sub_60168910((float *)a1, (float *)(a1 + 972), (float *)(a1 + 948));
      if ( result == 1 )
      {
        FIELD_U32(a1, 200) = 0;
        sub_601C3334(a1, 0, -1.0, 0.0, 1.0);
        result = 100;
        FIELD_U32(a1, 1052) = 100;
      }
      break;
    default:
      return result;
  }
  return result;
}
