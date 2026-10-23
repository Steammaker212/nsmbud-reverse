/* sub_6047F01C
 * address: 0x6047F01C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047F01C(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r2
  int v5; // r1
  int v6; // r5
  int v7; // r0

  result = a1[4];
  if ( (_DWORD *)result != a1 + 3 )
  {
    v4 = a1[6];
    v5 = a2 + 1;
    v6 = result - v4;
    while ( --v5 >= 1 )
    {
      result = FIELD_U32(result, 4);
      v6 = result - v4;
      if ( (_DWORD *)(result - v4) == (_DWORD *)((char *)a1 - v4 + 12) )
        return result;
    }
    if ( v6 )
    {
      if ( FIELD_U32(v6, 164) == 4 )
      {
        a1[2] = 0;
        v7 = a1[7];
        if ( v7 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
        FIELD_U8(v6, 168) = 0;
        a1[7] = 0;
        a1[8] = 0;
      }
      return sub_60478440((_DWORD *)v6);
    }
  }
  return result;
}
