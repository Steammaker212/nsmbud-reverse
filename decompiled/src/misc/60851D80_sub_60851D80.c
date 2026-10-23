/* sub_60851D80
 * address: 0x60851D80   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60851D80(int a1, int a2)
{
  int v2; // r10
  int v4; // r0
  unsigned __int16 v5; // r9
  int v6; // r6
  unsigned __int16 v7; // r8
  __int16 v8; // r7
  int v9; // r4
  int v10; // r0
  bool v11; // zf
  int v13; // [sp+0h] [bp-28h]

  v2 = FIELD_U32(a2, 16);
  v13 = a2 + 12;
  if ( v2 != a2 + 12 )
  {
    v4 = FIELD_U32(a1, 4);
    v5 = 0;
    while ( 1 )
    {
      if ( v4 )
      {
        if ( FIELD_U16(v4, 14) )
        {
          v6 = FIELD_U32(v2, 8);
          v7 = 0;
          v8 = 0;
          v9 = v4 + FIELD_U32(v4, 16);
          do
          {
            if ( *(_BYTE *)(v4 + *(_DWORD *)(v9 + 4 * v7) + 29) )
              v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 56))(v6);
            else
              v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 48))(v6);
            ++v7;
            v11 = v10 != 0;
            v4 = FIELD_U32(a1, 4);
            if ( v11 )
              ++v8;
          }
          while ( v7 < (unsigned int)FIELD_U16(v4, 14) );
          goto LABEL_15;
        }
      }
      else
      {
        v4 = 0;
      }
      v8 = 0;
LABEL_15:
      v2 = FIELD_U32(v2, 4);
      v5 += v8;
      if ( v2 == v13 )
        return v5;
    }
  }
  return 0;
}
