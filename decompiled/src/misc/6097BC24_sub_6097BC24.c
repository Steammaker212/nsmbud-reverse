/* sub_6097BC24
 * address: 0x6097BC24   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097BC24(_DWORD *a1)
{
  int v2; // r5
  int v3; // r8
  int v4; // r7
  unsigned int v5; // r6
  int v6; // r1
  int v7; // r0
  int v8; // r2

  v2 = 0;
  if ( sub_6092715C((int)a1) != 1 )
    return v2;
  v3 = a1[5];
  if ( v3 )
  {
    v4 = 0;
    v5 = 0;
    v2 = 1;
    do
    {
      v6 = a1[404];
      if ( a1[403] > v5 )
        v6 += v4;
      FIELD_U8(v6, 196) = 1;
      v7 = sub_60923F24((int)a1, v5);
      v8 = a1[404];
      if ( a1[403] > v5++ )
        v8 += v4;
      v4 += 216;
      FIELD_U8(v8, 212) = v7 != *(__int16 *)dword_60CD09C8;
    }
    while ( v3 != v5 );
    return v2;
  }
  return 1;
}
