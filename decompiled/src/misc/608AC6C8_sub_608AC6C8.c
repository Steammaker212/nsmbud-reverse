/* sub_608AC6C8
 * address: 0x608AC6C8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC6C8(_DWORD *a1)
{
  int *v2; // r2
  int *v3; // r0
  int *v4; // r1
  int *v5; // r3
  int v6; // r4
  _DWORD *v7; // r0
  _DWORD *v8; // r4

  v2 = (int *)a1[7];
  v3 = a1 + 6;
  if ( v2 != v3 )
  {
    v4 = a1 + 4;
    do
    {
      v5 = (int *)v2[1];
      if ( *((_BYTE *)v2 - 4) == 2 )
      {
        if ( v2 == v3 )
        {
          v6 = *v3;
        }
        else
        {
          v6 = *v5;
          *(_DWORD *)(*v2 + 4) = v5;
          *v5 = *v2;
          FIELD_U32(v6, 4) = v2;
          *v2 = v6;
        }
        *v2 = *v4;
        FIELD_U32(v6, 4) = v4;
        *(_DWORD *)(*v4 + 4) = v2;
        *v4 = v6;
      }
      v2 = v5;
    }
    while ( v5 != v3 );
  }
  v7 = (_DWORD *)a1[1];
  if ( v7 != a1 )
  {
    do
    {
      v8 = (_DWORD *)v7[1];
      sub_608AF484(v7 - 101);
      v7 = v8;
    }
    while ( v8 != a1 );
  }
  return sub_608AC778(a1, 0);
}
