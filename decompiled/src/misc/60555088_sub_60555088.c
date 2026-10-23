/* sub_60555088
 * address: 0x60555088   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60555088(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r6
  int v5; // r1
  int v6; // r0
  float *v7; // r7
  int v8; // r5
  float v9; // s18
  float v10; // s2
  float i; // s0

  result = FIELD_U8(a1, 4736);
  if ( result )
  {
    v3 = FIELD_U32(a1, 3676);
    v4 = 0;
    v5 = FIELD_U32(v3, 12);
    if ( v5 )
      FIELD_U8(v3, 65) = FIELD_U8(v5, 66);
    sub_60473B58((_DWORD *)a1, 0xEu, 0);
    do
    {
      v6 = a1 + 88 * v4;
      v7 = (float *)(v6 + 3748);
      v8 = v6 + 3732;
      v9 = FIELD_F32(v6, 3748);
      v10 = (float)(unsigned int)sub_608502E4(v6 + 3732);
      for ( i = v9 + 1.0; i > v10; i = i - v10 )
        ;
      *v7 = i;
      result = sub_60850FA0(v8);
      ++v4;
    }
    while ( v4 != 12 );
  }
  return result;
}
