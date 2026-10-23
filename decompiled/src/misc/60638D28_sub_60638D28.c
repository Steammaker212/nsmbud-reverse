/* sub_60638D28
 * address: 0x60638D28   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60638D28(int result, int a2)
{
  int v2; // r7
  int v3; // r5
  int v5; // r8
  bool v6; // zf
  int v7; // r6
  int v8; // r10
  int v9; // r4
  int v10; // r0

  v3 = result;
  v5 = FIELD_U8(result, 945);
  v6 = v5 == 0;
  if ( FIELD_U8(result, 945) )
  {
    v2 = FIELD_U8(result, 944);
    v6 = v2 == 0;
  }
  if ( !v6 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = 0;
      do
      {
        v10 = v7 + v9;
        if ( (unsigned int)(v7 + v9) >= 0x36 )
          v10 = 0;
        result = sub_60639064(v3 + 16 * v10 + 80, a2);
        ++v9;
      }
      while ( v2 != v9 );
      ++v8;
      v7 += v2;
    }
    while ( v8 != v5 );
  }
  return result;
}
