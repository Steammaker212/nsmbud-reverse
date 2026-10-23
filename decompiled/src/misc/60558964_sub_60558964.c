/* sub_60558964
 * address: 0x60558964   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60558964(int a1, int a2)
{
  int v2; // r2
  int v3; // r4
  int v4; // lr
  int v5; // r12
  _DWORD *v6; // r12
  int v7; // t1
  int v8; // r3
  int v9; // r12
  int v10; // t1
  int v11; // r2
  int v12; // r1

  v2 = FIELD_U32(a1, 3680);
  v3 = 0;
  v4 = v2 + 4;
  if ( (unsigned int)(v2 + 4) < 8 )
    v3 = v2 + 4;
  v5 = a1 + 4 * v3;
  v7 = FIELD_U32(v5, 3640);
  v6 = (_DWORD *)(v5 + 3640);
  if ( v7 == -1 )
  {
    v8 = v2 + 4;
  }
  else
  {
    do
    {
      v8 = v4 + 1;
      v3 = 0;
      if ( v4 > 6 )
        v8 = 4;
      v4 = v8;
      if ( (unsigned int)v8 < 8 )
        v3 = v8;
      v9 = a1 + 4 * v3;
      v10 = FIELD_U32(v9, 3640);
      v6 = (_DWORD *)(v9 + 3640);
    }
    while ( v10 != -1 );
  }
  v11 = *(_DWORD *)(a1 + 4 * v3 + 3608);
  *v6 = a2;
  v12 = v8 - 3;
  if ( v8 > 6 )
    v12 = 0;
  FIELD_U32(a1, 3680) = v12;
  return v11;
}
