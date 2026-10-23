/* sub_609891D4
 * address: 0x609891D4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609891D4(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // r1
  __int16 v6; // r12
  int v7; // r3
  unsigned int v8; // r4
  unsigned __int8 *v9; // r3
  __int16 v10; // r1
  unsigned int v11; // lr
  _BYTE *v12; // r1
  __int16 v13; // r4
  __int16 v14; // r1
  int v15; // r12
  unsigned __int8 v16; // r6
  unsigned __int8 v17; // r7
  unsigned __int8 v18; // r3
  unsigned __int8 *v19; // r2
  unsigned __int8 v20; // r4
  unsigned __int8 v21; // r5
  unsigned __int8 v22; // r1

  FIELD_U32(a3, 4) = a5;
  if ( !a4 )
  {
    v5 = FIELD_U16(a2, 8);
    v6 = FIELD_U8(a1, 53);
    if ( v5 == 0xFFFF )
    {
      v9 = (unsigned __int8 *)(a1 + 4);
      v14 = FIELD_U8(a1, 4);
      FIELD_U8(a1, 54) = v14;
      v11 = v6 * v14;
      v12 = (_BYTE *)(a1 + 8);
      v13 = FIELD_U8(a1, 8);
    }
    else
    {
      v7 = FIELD_U32(a1, 44);
      v8 = FIELD_U32(v7, 36);
      v9 = *(unsigned __int8 **)(v7 + 40);
      if ( v8 > v5 )
        v9 += 8 * v5;
      v10 = *v9;
      FIELD_U8(a1, 54) = v10;
      v11 = v6 * v10;
      v12 = v9 + 4;
      v13 = *v9;
    }
    v15 = v6 * v13;
    FIELD_U8(a1, 55) = v13;
    v16 = v9[1];
    v17 = v9[2];
    v18 = v9[3];
    v19 = *(unsigned __int8 **)a3;
    v20 = v12[1];
    v21 = v12[2];
    v22 = v12[3];
    v19[3] = v11 / 0xFF;
    v19[2] = v16;
    v19[1] = v17;
    *v19 = v18;
    v19[4] = v22;
    v19 += 4;
    v19[3] = (unsigned int)((2155905153u * (unsigned __int64)(unsigned int)v15) >> 32 << 17) >> 24;
    v19[2] = v20;
    v19[1] = v21;
  }
  return 0;
}
