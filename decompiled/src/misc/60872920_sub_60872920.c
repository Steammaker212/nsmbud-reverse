/* sub_60872920
 * address: 0x60872920   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60872920(int a1)
{
  int result; // r0
  int v3; // r8
  int v4; // r6
  int v5; // r0
  int v6; // r7
  _DWORD *v7; // r5
  int v8; // r4
  int v9; // r0

  FIELD_U32(a1, 32) = 0;
  if ( FIELD_U16(a1, 88) )
    memset(*(void **)(a1 + 40), 255, 2 * FIELD_U16(a1, 88));
  result = FIELD_U32(a1, 72);
  if ( (result & 1) != 0 )
  {
    v3 = FIELD_U16(a1, 88);
    if ( FIELD_U16(a1, 88) )
    {
      v4 = 0;
      do
      {
        v5 = FIELD_U32(a1, 48) + 40 * v4;
        v6 = FIELD_U8(v5, 30);
        if ( FIELD_U8(v5, 30) )
        {
          v7 = (_DWORD *)(v5 + 8);
          v8 = 16;
          do
          {
            v9 = *v7 + v8 - 16;
            if ( (*(_WORD *)(*v7 + v8) & 0x40u) > 0x3F )
              ((void (__fastcall *)(int))loc_6086EC0C)(v9);
            else
              ((void (__fastcall *)(int))loc_6086EAA4)(v9);
            v8 += 48;
            --v6;
          }
          while ( v6 );
        }
        ++v4;
      }
      while ( v4 != v3 );
      result = FIELD_U32(a1, 72);
    }
    result ^= 1u;
    FIELD_U32(a1, 72) = result;
  }
  return result;
}
