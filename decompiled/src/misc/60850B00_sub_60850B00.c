/* sub_60850B00
 * address: 0x60850B00   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60850B00(int a1, int a2)
{
  int v4; // r6
  int result; // r0
  unsigned int v6; // r5
  int v7; // r10
  int v8; // r2
  int v9; // r1
  int v10; // r3

  v4 = FIELD_U32(a1, 12);
  result = FIELD_U16(v4, 14);
  if ( FIELD_U16(v4, 14) )
  {
    v6 = 0;
    v7 = v4 + FIELD_U32(v4, 16);
    do
    {
      v8 = v4 + *(_DWORD *)(v7 + 4 * v6);
      if ( FIELD_U8(v8, 29) == 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          v9 = FIELD_U32(a2, 28);
          if ( *(unsigned __int8 *)(v9 + v10) != *(unsigned __int8 *)(v8 + v10) )
            break;
          if ( *(_BYTE *)(v9 + v10) )
          {
            if ( ++v10 < 28 )
              continue;
          }
          result = sub_60850658(a1, a2, v8);
          if ( result != 1 )
            return result;
          result = FIELD_U16(v4, 14);
          break;
        }
      }
      ++v6;
    }
    while ( v6 < (unsigned __int16)result );
  }
  return result;
}
