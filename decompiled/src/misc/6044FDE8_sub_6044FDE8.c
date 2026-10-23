/* sub_6044FDE8
 * address: 0x6044FDE8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044FDE8(int a1, int a2, _DWORD *a3)
{
  int result; // r0
  int v6; // r6
  int i; // r7
  _BYTE v8[36]; // [sp+4h] [bp-24h] BYREF

  result = FIELD_U32(a1, 860);
  if ( result >= 1 )
  {
    sub_60913A6C(v8, a1 + 912, 136 * FIELD_U32(a1, 856) * FIELD_U32(a1, 876));
    sub_60922794(a1 + 64, v8, 544 * FIELD_U32(a1, 860));
    sub_60922730(a1 + 64, 0, FIELD_U32(a1, 332));
    if ( FIELD_U8(a1, 2312) )
    {
      result = FIELD_U32(a1, 860);
      if ( result >= 1 )
      {
        v6 = 0;
        for ( i = 0; i < result; ++i )
        {
          sub_604419EC((_DWORD *)(FIELD_U32(a1, 2316) + v6), (int)a3);
          result = FIELD_U32(a1, 860);
          v6 += 32;
        }
      }
    }
    else
    {
      return sub_60445504(a3, (_DWORD *)a1, FIELD_U32(a1, 36), FIELD_U32(a1, 40), (_DWORD *)(a1 + 48));
    }
  }
  return result;
}
