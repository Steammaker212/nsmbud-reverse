/* sub_608C5FA0
 * address: 0x608C5FA0   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C5FA0(_DWORD *a1)
{
  int v2; // r1
  int v3; // r0
  _DWORD *v4; // r2
  _DWORD *i; // r6
  int v6; // r5
  int v7; // r0
  _DWORD *v8; // r0

  v2 = 0;
  v3 = *a1;
  v4 = (_DWORD *)a1[2];
  for ( i = a1 + 1; v4 != i; ++v2 )
    v4 = (_DWORD *)v4[1];
  v6 = -1;
  if ( sub_608CF2A8(v3, v2) != 1 )
    return v6;
  v7 = sub_608CF170(*a1, 20, 4);
  if ( v7 )
  {
    FIELD_U8(v7, 18) = 0;
    FIELD_U8(v7, 17) = 0;
    FIELD_U8(v7, 19) = 0;
    *(_DWORD *)v7 = v7;
    FIELD_U32(v7, 4) = v7;
    FIELD_U32(v7, 8) = v7 + 8;
    FIELD_U32(v7, 12) = v7 + 8;
    FIELD_U8(v7, 16) = 1;
    *(_DWORD *)v7 = a1[1];
    FIELD_U32(v7, 4) = i;
    *(_DWORD *)(a1[1] + 4) = v7;
    a1[1] = v7;
    v8 = (_DWORD *)a1[2];
    if ( v8 != i )
    {
      v6 = -1;
      do
      {
        v8 = (_DWORD *)v8[1];
        ++v6;
      }
      while ( v8 != i );
    }
    return v6;
  }
  sub_608CF338(*a1, 0);
  return -1;
}
