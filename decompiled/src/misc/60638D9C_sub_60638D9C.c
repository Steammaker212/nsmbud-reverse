/* sub_60638D9C
 * address: 0x60638D9C   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60638D9C(int result)
{
  int v1; // r6
  int v2; // r4
  int v3; // r8
  bool v4; // zf
  int v5; // r5
  int v6; // r9
  int v7; // r7
  int v8; // r0

  v2 = result;
  v3 = FIELD_U8(result, 945);
  v4 = v3 == 0;
  if ( FIELD_U8(result, 945) )
  {
    v1 = FIELD_U8(result, 944);
    v4 = v1 == 0;
  }
  if ( !v4 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      v7 = 0;
      do
      {
        v8 = v5 + v7;
        if ( (unsigned int)(v5 + v7) >= 0x36 )
          v8 = 0;
        result = sub_60639154(v2 + 16 * v8 + 80);
        ++v7;
      }
      while ( v1 != v7 );
      ++v6;
      v5 += v1;
    }
    while ( v6 != v3 );
  }
  return result;
}
