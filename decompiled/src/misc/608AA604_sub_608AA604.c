/* sub_608AA604
 * address: 0x608AA604   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AA604(int a1, int *a2)
{
  int v4; // r5
  int v5; // r9
  int v6; // r8
  unsigned int v7; // r7
  int v8; // r2
  int v9; // r2
  char v11[8]; // [sp+14h] [bp-44h] BYREF
  int v12; // [sp+1Ch] [bp-3Ch]

  v4 = 0;
  if ( !FIELD_U8(a1, 405) && sub_608AE1DC() == 1 )
  {
    v5 = a2[2];
    v6 = a2[3];
    if ( *((_BYTE *)a2 + 32) )
    {
      if ( sub_608A9E10(*a2, (int)v11) && (v7 = (sub_608C148C(v12) + 4095) & 0xFFFFF000) != 0 )
      {
        sub_608AE1F0(a1 + 384, v5, v7);
        v6 -= v7;
        v8 = v5 + v7;
        FIELD_U8(a1, 388) = 1;
      }
      else
      {
        v7 = 0;
        v8 = v5;
      }
    }
    else
    {
      v7 = a2[10];
      v8 = a2[2];
      v5 = a2[9];
    }
    if ( sub_608AAA10(a1, *a2, v8, v6, a2[11], a2[12], v5, v7) == 1 && sub_608C1668(a1 + 264, *a2, a2[4], a2[5]) == 1 )
    {
      sub_608B4394(a1 + 4, *a2, a2[1]);
      v4 = 0;
      FIELD_U32(a1, 376) = 0;
      FIELD_U32(a1, 380) = 0;
      FIELD_U32(a1, 152) = a1 + 4;
      v9 = a2[6];
      if ( !v9 || sub_608C1740(a1 + 264, *a2, v9, a2[7]) == 1 )
      {
        v4 = 1;
        FIELD_U8(a1, 405) = 1;
      }
    }
  }
  return v4;
}
