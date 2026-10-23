/* sub_6087285C
 * address: 0x6087285C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6087285C(int a1)
{
  int v2; // r11
  int v3; // r0
  int v4; // r8
  int v5; // r6
  int v6; // r10
  int v7; // r0
  int v8; // r4
  _DWORD *v9; // r7
  int v10; // r5
  int v11; // r0
  __int16 v12; // r1

  v2 = 0;
  v3 = FIELD_U32(a1, 72);
  if ( (v3 & 1) != 0 )
  {
    v4 = FIELD_U16(a1, 88);
    v2 = 0;
    if ( FIELD_U16(a1, 88) )
    {
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = FIELD_U32(a1, 48) + 40 * v6;
        v8 = FIELD_U8(v7, 30);
        if ( FIELD_U8(v7, 30) )
        {
          v9 = (_DWORD *)(v7 + 8);
          v10 = 0;
          do
          {
            v11 = *v9 + v10;
            v12 = FIELD_U16(v11, 16);
            if ( (v12 & 0x70) == 0x20 && ((v5 ^ 1) & 1) != 0 )
            {
              v2 = FIELD_U32(v11, 8);
              v5 = 1;
            }
            if ( (v12 & 0x40u) > 0x3F )
              ((void (*)(void))loc_6086EC0C)();
            else
              ((void (*)(void))loc_6086EAA4)();
            v10 += 48;
            --v8;
          }
          while ( v8 );
        }
        ++v6;
      }
      while ( v6 != v4 );
      v3 = FIELD_U32(a1, 72);
    }
    FIELD_U32(a1, 72) = v3 ^ 1;
  }
  return v2;
}
