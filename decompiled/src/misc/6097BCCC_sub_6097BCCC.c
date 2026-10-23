/* sub_6097BCCC
 * address: 0x6097BCCC   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097BCCC(int a1)
{
  int v2; // r8
  int v3; // r6
  int v4; // r9
  int v5; // r5
  unsigned int v6; // r7
  int v7; // r1
  int v8; // r0
  int v9; // r2

  v2 = a1 - 32;
  v3 = 0;
  if ( sub_6092715C(a1 - 32) != 1 )
    return v3;
  v4 = *(_DWORD *)(a1 - 12);
  if ( v4 )
  {
    v5 = 0;
    v6 = 0;
    v3 = 1;
    do
    {
      v7 = FIELD_U32(a1, 1584);
      if ( FIELD_U32(a1, 1580) > v6 )
        v7 += v5;
      FIELD_U8(v7, 196) = 1;
      v8 = sub_60923F24(v2, v6);
      v9 = FIELD_U32(a1, 1584);
      if ( FIELD_U32(a1, 1580) > v6++ )
        v9 += v5;
      v5 += 216;
      FIELD_U8(v9, 212) = v8 != *(__int16 *)dword_60CD09C8;
    }
    while ( v4 != v6 );
    return v3;
  }
  return 1;
}
