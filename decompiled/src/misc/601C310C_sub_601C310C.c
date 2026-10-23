/* sub_601C310C
 * address: 0x601C310C   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C310C(int *a1)
{
  int result; // r0
  int v3; // r5
  int v4; // r0
  float v5; // s1
  int v6; // r0
  float v7; // s0
  float v8; // s0
  signed int v9; // [sp+0h] [bp-18h] BYREF
  signed int v10; // [sp+4h] [bp-14h] BYREF

  if ( a1[69] )
    return (*(int (__fastcall **)(int *))(*a1 + 124))(a1);
  result = a1[262];
  switch ( result )
  {
    case 0:
      v3 = dword_60C8996C;
      result = sub_601916EC(dword_60C8996C);
      if ( result == 115 )
      {
        result = sub_6019112C(v3);
        if ( result == 325 )
        {
          result = 1;
          goto LABEL_16;
        }
      }
      break;
    case 1:
      v10 = 238609294;
      v9 = 23860929;
      sub_608322C0(a1 + 45, a1 + 256, &v10, &v9);
      result = a1[256];
      if ( a1[45] == result )
      {
        result = 2;
        goto LABEL_16;
      }
      break;
    case 2:
      a1[48] = a1[45];
      sub_601BC2F0((int)a1, 3);
      v4 = a1[236];
      v5 = *(float *)&dword_60CB1600;
      if ( a1[266] == 25 )
      {
        sub_605EAFD8(**(_DWORD **)(FIELD_U32(v4, 12) + 12), *(float *)&dword_60CB1600);
      }
      else
      {
        v7 = *(float *)&dword_60CB1604;
        a1[265] = 2;
        a1[266] = 25;
        ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(v4, 25, v7, v5, 0.0);
      }
      a1[50] = 1090519040;
      result = 3;
LABEL_16:
      a1[262] = result;
      break;
    case 3:
      ((void (__fastcall *)(int *))loc_60168DF8)(a1);
      result = sub_60168910((float *)a1, (float *)a1 + 243, (float *)a1 + 237);
      if ( result == 1 )
      {
        a1[50] = 0;
        sub_601BC2F0((int)a1, 0);
        v6 = a1[236];
        if ( a1[266] == 24 )
        {
          sub_605EAFD8(**(_DWORD **)(FIELD_U32(v6, 12) + 12), 1.0);
        }
        else
        {
          v8 = *(float *)&dword_60CB15EC;
          a1[265] = 0;
          a1[266] = 24;
          ((void (__fastcall *)(int, int, float, float, float))loc_605EA46C)(v6, 24, v8, 1.0, 0.0);
        }
        result = (int)sub_601B69F4((int)a1, &stru_60C8AE50);
      }
      break;
    default:
      return result;
  }
  return result;
}
