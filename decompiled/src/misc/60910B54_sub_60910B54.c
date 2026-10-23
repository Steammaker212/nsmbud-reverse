/* sub_60910B54
 * address: 0x60910B54   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60910B54(int a1)
{
  int v2; // r6
  bool v3; // zf
  int v4; // r5
  unsigned int v5; // r7
  int v6; // r0
  int v7; // r6
  int v8; // t1
  int v9; // r7
  _DWORD *v10; // r0

  *(_DWORD *)a1 = off_60C5D30C;
  v2 = FIELD_U32(a1, 16);
  if ( v2 )
  {
    v3 = FIELD_U8(a1, 24) == 0;
    if ( FIELD_U8(a1, 24) )
      v3 = FIELD_U32(a1, 20) == 0;
    if ( v3 )
      goto LABEL_8;
    v4 = 0;
    v5 = 0;
    do
    {
      sub_60913258(v2 + v4, 0);
      v2 = FIELD_U32(a1, 16);
      ++v5;
      v4 += 4;
    }
    while ( v5 < FIELD_U32(a1, 20) );
    if ( v2 )
    {
LABEL_8:
      v8 = *(_DWORD *)(v2 - 4);
      v7 = v2 - 4;
      v6 = v8;
      if ( v8 )
      {
        v9 = 4 * v6;
        do
        {
          sub_608AC1C0((int *)(v7 + v9));
          v9 -= 4;
        }
        while ( v9 );
      }
      operator_delete_8DE3FC((void *)(v7 - 4));
    }
    FIELD_U32(a1, 16) = 0;
  }
  v10 = sead__IDisposer__dtor((_DWORD *)a1);
  operator_delete(v10);
}
