/* sub_6020ABE8
 * address: 0x6020ABE8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020ABE8(float *a1)
{
  int result; // r0
  float *v3; // r0
  float v4; // s10
  float v5; // s4
  float v6; // s2
  int v7; // r0
  float v8[5]; // [sp+Ch] [bp-14h] BYREF

  sub_601CF9C0(dword_60C8AEF0);
  result = *((_DWORD *)a1 + 100);
  switch ( result )
  {
    case 0:
      result = 1;
      goto LABEL_6;
    case 1:
      if ( *((int *)a1 + 91) < 0 )
      {
        (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 144))(a1);
        a1[91] = 0.0;
      }
      ((void (__fastcall *)(float *, float *, _DWORD, _DWORD, float, float, float, _DWORD, int *))loc_60185F9C)(
        a1,
        a1 + 20,
        0,
        *((__int16 *)a1 + 194),
        a1[96],
        a1[98] * a1[32],
        a1[32] * a1[99],
        *((__int16 *)a1 + 195),
        &dword_60B3B974);
      v3 = (float *)sub_601CF9C0(dword_60C8AEF0);
      v4 = v3[22];
      v5 = a1[22];
      v6 = v3[21] - a1[21];
      v8[0] = v3[20] - a1[20];
      v8[1] = v6;
      v8[2] = v4 - v5;
      sub_601862E0((int)a1, v8);
      result = 2;
      goto LABEL_6;
    case 2:
      result = sub_601860F8((int)a1);
      if ( result != 1 )
        return result;
      v7 = *((_DWORD *)a1 + 101);
      if ( v7 < 1 )
      {
        sub_60169018(a1);
        result = 3;
LABEL_6:
        *((_DWORD *)a1 + 100) = result;
      }
      else
      {
        result = v7 - 1;
        *((_DWORD *)a1 + 100) = 1;
        *((_DWORD *)a1 + 101) = result;
      }
      return result;
    case 3:
      (*(void (__fastcall **)(float *))(*(_DWORD *)a1 + 72))(a1);
      *((_DWORD *)a1 + 100) = 1;
      *((_DWORD *)a1 + 101) = 10;
      return sub_60186FC0(dword_60CC6D78 + 984, *((_DWORD *)a1 + 60), *((_DWORD *)a1 + 88), (int)(a1 + 75));
    case 4:
      return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 72))(a1);
    default:
      return result;
  }
}
