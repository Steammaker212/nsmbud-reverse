/* sub_607DE758
 * address: 0x607DE758   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_607DE758(int a1, const void *a2, _DWORD *a3)
{
  signed int result; // r0
  unsigned int *v5; // r9
  unsigned int v6; // r0
  int v7; // lr
  _DWORD *v8; // r12
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r7
  int v13; // r10
  size_t v14; // r2
  int v15; // r0
  int v16; // r1
  unsigned int v17; // r0

  result = FIELD_U8(a1, 2872);
  if ( result )
  {
    v5 = (unsigned int *)(a1 + 308);
    result = FIELD_U32(a1, 308);
    if ( result <= 3 )
    {
      v6 = FIELD_U32(a1, 300);
      v7 = 0;
      if ( v6 >= 4 )
        v6 = 0;
      v8 = (_DWORD *)(a1 + 24 * v6 + 204);
      v9 = a3[1];
      v10 = a3[2];
      v11 = a3[3];
      v12 = a3[4];
      v13 = a3[5];
      *v8 = *a3;
      v8[1] = v9;
      v8[2] = v10;
      v8[3] = v11;
      v8[4] = v12;
      v8[5] = v13;
      v14 = 4 * a3[4];
      if ( FIELD_U32(a1, 300) < 4u )
        v7 = FIELD_U32(a1, 300);
      qmemcpy(*(void **)(a1 + 4 * v7 + 188), a2, v14);
      v15 = FIELD_U32(a1, 300);
      v16 = v15 + 1;
      if ( v15 > 2 )
        v16 = 0;
      FIELD_U32(a1, 300) = v16;
      do
      {
        v17 = __ldrex(v5);
        result = v17 + 1;
      }
      while ( __strex(result, v5) );
    }
  }
  return result;
}
