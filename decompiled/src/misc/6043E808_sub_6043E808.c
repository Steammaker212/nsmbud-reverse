/* sub_6043E808
 * address: 0x6043E808   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6043E808(int a1, size_t a2)
{
  int result; // r0
  size_t v3; // r4
  bool v4; // zf
  bool v5; // zf
  size_t v6; // r5
  const void **v7; // r7
  int v8; // r6

  result = FIELD_U32(a1, 4);
  v3 = a2;
  v4 = result == 0;
  if ( result )
  {
    a2 = FIELD_S8(result, 223);
    v4 = a2 == -1;
  }
  if ( !v4 )
  {
    result = FIELD_U32(result, 72) + 32 * a2;
    v5 = result == 0;
    if ( result )
    {
      a2 = FIELD_U32(v3, 56);
      v5 = a2 == 0;
    }
    if ( !v5 )
    {
      v6 = FIELD_U16(result, 26);
      if ( a2 < v6 )
        v6 = a2;
      if ( FIELD_U8(v3, 6) )
      {
        v7 = (const void **)(result + 16);
        v8 = 0;
        do
        {
          qmemcpy((void *)sub_60918770(v3, v8), *v7, v6);
          sub_60918798(v3, v8);
          result = FIELD_U8(v3, 6);
          ++v8;
        }
        while ( v8 < result );
      }
    }
  }
  return result;
}
