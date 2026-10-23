/* sub_603FE52C
 * address: 0x603FE52C   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603FE52C(int a1)
{
  int v2; // r5
  int v3; // r4
  unsigned int v4; // r6
  sead_IDisposer *v5; // r0
  unsigned int v6; // r7
  int v7; // r6
  int v8; // r9
  sead_IDisposer *v9; // r0
  unsigned int result; // r0
  int v11; // r9
  unsigned int v12; // r4
  int i; // r6
  int v14; // r1
  int v15; // r2
  bool v16; // cc
  unsigned int v17; // r0

  v2 = 0;
  v3 = 4648;
  do
  {
    v4 = sub_60834674(v2);
    v5 = 0;
    if ( HIBYTE(v4) != 6 )
    {
      v6 = HIBYTE(v4);
      v7 = v4 & 0xFFFFFF;
      v8 = sub_608346E0(v6, v7);
      v9 = (sead_IDisposer *)operator_new(0x2Cu);
      v5 = sub_6075B604(v9, v7 | (v6 << 24), v8);
    }
    ++v2;
    *(_DWORD *)(a1 + v3) = v5;
    v3 += 4424;
  }
  while ( v2 != 54 );
  CharacterSelectPosTmpHeap2_ref(a1);
  memset((void *)(a1 + 16), 255, 0xD8u);
  result = dword_60C9C0FC;
  v11 = FIELD_U32(dword_60C9C0FC, 724);
  if ( v11 )
  {
    v12 = 0;
    for ( i = 0; i != 54; ++i )
    {
      result = sub_6042EFA8(v11, i);
      if ( result >> 25 <= 2 )
      {
        v14 = 1;
        v15 = a1;
        while ( result != FIELD_U32(v15, 240) )
        {
          if ( result == FIELD_U32(v15, 4664) )
            goto LABEL_14;
          v15 += 8848;
          v16 = v14 + 1 < 54;
          v14 += 2;
          if ( !v16 )
            goto LABEL_17;
        }
        --v14;
LABEL_14:
        v17 = 0;
        if ( v12 < 0x36 )
          v17 = v12;
        ++v12;
        result = a1 + 4 * v17;
        FIELD_U32(result, 16) = v14;
      }
LABEL_17:
      ;
    }
  }
  return result;
}
