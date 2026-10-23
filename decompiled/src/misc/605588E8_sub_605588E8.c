/* sub_605588E8
 * address: 0x605588E8   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605588E8(int a1, int a2)
{
  int v2; // lr
  int v3; // r4
  int v4; // r12
  _DWORD *v5; // r12
  int v6; // t1
  int v7; // r3
  int v8; // r12
  int v9; // t1
  int v10; // r2
  int v11; // r1

  v2 = FIELD_U32(a1, 3676);
  v3 = 0;
  if ( (unsigned int)v2 < 8 )
    v3 = FIELD_U32(a1, 3676);
  v4 = a1 + 4 * v3;
  v6 = FIELD_U32(v4, 3640);
  v5 = (_DWORD *)(v4 + 3640);
  if ( v6 == -1 )
  {
    v7 = FIELD_U32(a1, 3676);
  }
  else
  {
    do
    {
      v7 = v2 + 1;
      v3 = 0;
      if ( v2 > 2 )
        v7 = 0;
      v2 = v7;
      if ( (unsigned int)v7 < 8 )
        v3 = v7;
      v8 = a1 + 4 * v3;
      v9 = FIELD_U32(v8, 3640);
      v5 = (_DWORD *)(v8 + 3640);
    }
    while ( v9 != -1 );
  }
  v10 = *(_DWORD *)(a1 + 4 * v3 + 3608);
  *v5 = a2;
  v11 = v7 + 1;
  if ( v7 > 2 )
    v11 = 0;
  FIELD_U32(a1, 3676) = v11;
  return v10;
}
