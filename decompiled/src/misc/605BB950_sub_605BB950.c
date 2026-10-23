/* sub_605BB950
 * address: 0x605BB950   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BB950(int result, int a2)
{
  int v2; // r10
  int v3; // r11
  unsigned int v4; // r7
  unsigned int v5; // r8
  unsigned int v6; // r9
  int *v7; // r6
  unsigned int v8; // r4
  unsigned int v9; // r5
  unsigned int v10; // r0

  v2 = result;
  v3 = FIELD_U32(result, 320);
  if ( v3 )
  {
    v4 = FIELD_U8(result, 1348);
    v5 = FIELD_U8(result, 1349);
    v6 = 0;
    v7 = &dword_60CB071C[2 * a2];
    do
    {
      v8 = 0;
      v9 = 0;
      if ( v6 < 0x10 )
        v8 = v6;
      do
      {
        v10 = 0;
        if ( v9 < 0x10 )
          v10 = v9;
        result = sub_605BBA08(v2 + (v8 << 6) + 4 * v10 + 324, v3, v7);
        ++v9;
      }
      while ( v9 < v4 );
      ++v6;
    }
    while ( v6 < v5 );
  }
  return result;
}
