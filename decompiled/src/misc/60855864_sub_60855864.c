/* sub_60855864
 * address: 0x60855864   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60855864(int a1, int a2, int a3)
{
  int v6; // r6
  int v7; // r10
  int v8; // r7
  int v9; // r5
  _DWORD *v10; // r0

  v6 = 0;
  v7 = a1 + 12;
  *(_DWORD *)a1 = &off_60C5A1F0;
  FIELD_U32(a1, 4) = a1 + 4;
  FIELD_U32(a1, 8) = a1 + 4;
  FIELD_U32(a1, 12) = a1 + 12;
  FIELD_U32(a1, 16) = a1 + 12;
  FIELD_U32(a1, 20) = a2 + 8;
  FIELD_U8(a1, 24) = 0;
  if ( FIELD_U16(a2, 42) )
  {
    v8 = a2 + 44;
    do
    {
      v9 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a3 + 48))(a3, v8, 1);
      if ( v9 )
      {
        v10 = (_DWORD *)sub_60855BC8(12);
        if ( v10 )
        {
          *v10 = v10;
          v10[1] = v10;
          v10[2] = v9;
          *v10 = *(_DWORD *)v7;
          v10[1] = v7;
          *(_DWORD *)(*(_DWORD *)v7 + 4) = v10;
          *(_DWORD *)v7 = v10;
        }
      }
      ++v6;
      v8 += 24;
    }
    while ( v6 < FIELD_U16(a2, 42) );
  }
  return a1;
}
