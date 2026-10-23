/* sub_605BB7F0
 * address: 0x605BB7F0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605BB7F0(int a1)
{
  int result; // r0
  unsigned int v3; // r5
  unsigned int v4; // r8
  unsigned int v5; // r9
  unsigned int v6; // r6
  unsigned int v7; // r7
  unsigned int v8; // r0

  result = FIELD_U32(a1, 320);
  if ( result )
  {
    v3 = FIELD_U8(a1, 1348);
    v4 = FIELD_U8(a1, 1349);
    v5 = 0;
    do
    {
      v6 = 0;
      v7 = 0;
      if ( v5 < 0x10 )
        v6 = v5;
      do
      {
        v8 = 0;
        if ( v7 < 0x10 )
          v8 = v7;
        result = sub_605BB9EC(a1 + (v6 << 6) + 4 * v8 + 324);
        ++v7;
      }
      while ( v7 < v3 );
      ++v5;
    }
    while ( v5 < v4 );
  }
  return result;
}
