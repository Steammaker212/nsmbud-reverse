/* sub_605093C8
 * address: 0x605093C8   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605093C8(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  int v4; // r0
  unsigned int v5; // r1
  int v6; // r3
  void (__fastcall *v7)(float); // r2
  float v8; // s0
  int v9; // r0

  v2 = (int)(a1 + 10);
  result = sub_6047467C(a1 + 10, 0, dword_60CA7C40, (int)dword_60CA7CB0, 1.0, 0);
  if ( result == 1 )
  {
    v4 = sub_6047482C(v2, 0);
    if ( !v4 )
    {
LABEL_11:
      *(_BYTE *)(a1[930] + 65) = 0;
      v9 = sub_60473B4C(v2);
      return sub_6098F1D4(v9);
    }
    v5 = a1[932];
    v6 = *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + v5 + 19712);
    if ( v6 == 1 )
    {
      v7 = *(void (__fastcall **)(float))(*(_DWORD *)v4 + 96);
    }
    else
    {
      v7 = *(void (__fastcall **)(float))(*(_DWORD *)v4 + 96);
      if ( v6 != 2 )
      {
        v8 = 8.0;
LABEL_10:
        v7(v8);
        goto LABEL_11;
      }
    }
    if ( v5 >= 8 )
      v5 = 0;
    v8 = flt_60B03730[v5];
    goto LABEL_10;
  }
  return result;
}
