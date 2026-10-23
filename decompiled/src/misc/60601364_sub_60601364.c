/* sub_60601364
 * address: 0x60601364   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60601364(int a1)
{
  int result; // r0
  unsigned __int8 *v3; // r10
  int v4; // r11
  int v5; // r1
  int v6; // r6
  unsigned int v7; // r8
  unsigned int v8; // r0

  v3 = (unsigned __int8 *)(a1 + 6101);
  result = FIELD_U8(a1, 6101);
  if ( result )
  {
    v4 = 0;
    do
    {
      v5 = 0;
      if ( (unsigned int)v4 < 4 )
        v5 = v4;
      v6 = *(_DWORD *)(a1 + 220 * v5 + 6868);
      if ( v6 >= 1 )
      {
        v7 = v6 * v4;
        do
        {
          v8 = 0;
          if ( v7 < 0x20 )
            v8 = v7;
          sub_60603554(a1 + 104 * v8 + 27344);
          --v6;
          ++v7;
        }
        while ( v6 );
        result = *v3;
      }
      ++v4;
    }
    while ( v4 < (unsigned __int8)result );
  }
  return result;
}
