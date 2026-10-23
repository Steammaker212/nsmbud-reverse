/* sub_608C5C60
 * address: 0x608C5C60   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C5C60(int *a1, int a2, int a3)
{
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r5
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r0
  int *v12; // r4
  int v13; // t1

  if ( *a1 )
  {
    sub_608C5D2C(a1);
    sub_608CF21C(*a1, 3);
    sub_608CF15C(*a1);
    *a1 = 0;
  }
  v6 = a2 + 3;
  v7 = a2 + a3;
  v8 = 0;
  v9 = v6 & 0xFFFFFFFC;
  if ( v9 <= v7 )
  {
    v8 = 0;
    v10 = sub_608CF0DC(v9, v7 - v9, 0);
    *a1 = v10;
    if ( v10 )
    {
      v11 = sub_608CF170(v10, 20, 4);
      if ( v11 )
      {
        v8 = 1;
        FIELD_U8(v11, 18) = 0;
        FIELD_U8(v11, 17) = 0;
        FIELD_U8(v11, 19) = 0;
        *(_DWORD *)v11 = v11;
        FIELD_U32(v11, 4) = v11;
        FIELD_U32(v11, 8) = v11 + 8;
        FIELD_U32(v11, 12) = v11 + 8;
        FIELD_U8(v11, 16) = 1;
        v13 = a1[1];
        v12 = a1 + 1;
        *(_DWORD *)v11 = v13;
        FIELD_U32(v11, 4) = v12;
        *(_DWORD *)(*v12 + 4) = v11;
        *v12 = v11;
      }
    }
  }
  return v8;
}
