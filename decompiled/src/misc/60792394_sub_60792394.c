/* sub_60792394
 * address: 0x60792394   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60792394(_BYTE *a1, int a2, float a3)
{
  float v3; // s16
  int v6; // r5
  float v7; // s1
  float v8; // s18
  float v9; // s0
  unsigned int v10; // r0
  int v11; // r1

  v3 = a3;
  v6 = sub_607931A8(a3);
  v7 = 0.0;
  v8 = 1.0;
  if ( (a1[208] & 0x10) != 0 )
    v6 = 2;
  if ( v6 == 2 )
  {
    if ( !a2 )
    {
      v9 = (*(float (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 120))(a1);
      goto LABEL_11;
    }
  }
  else
  {
    if ( v6 != 1 )
    {
      if ( v6 )
      {
        v3 = 0.0;
        goto LABEL_13;
      }
      if ( (dword_60CBFBC4[13 * *((_DWORD *)a1 + 7) + 12] & 2) != 0 )
        return (*(int (__fastcall **)(_BYTE *, float, float))(*(_DWORD *)a1 + 92))(a1, 3.0, 0.0);
    }
    v8 = 1.2;
    if ( (a1[197] & 0xC0) != 0 )
    {
      v9 = sub_60793184(a1);
LABEL_11:
      v7 = v9;
    }
  }
LABEL_13:
  v10 = *((_DWORD *)a1 + 49);
  if ( (v10 & 0xC000) != 0 )
    v11 = dword_60B0C258[2 * v6 + ((v10 >> 14) & 1)];
  else
    v11 = dword_60B0C270[v6];
  return (*(int (__fastcall **)(_BYTE *, int, float, float, float))(*(_DWORD *)a1 + 88))(a1, v11, v8, v7, v3);
}
