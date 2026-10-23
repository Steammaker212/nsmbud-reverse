/* sub_608C97A8
 * address: 0x608C97A8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C97A8(int a1)
{
  int result; // r0
  int v3; // r7
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r1
  _BYTE *v8; // r2
  _BYTE v9[36]; // [sp+4h] [bp-24h] BYREF

  result = FIELD_U32(a1, 400);
  if ( result >= 1 )
  {
    v3 = 0;
    v4 = a1;
    do
    {
      v5 = *((_DWORD *)sub_608065A0() + FIELD_U8(a1, 426) + 43);
      if ( v5 && FIELD_F32(a1, 448) > 0.0 )
      {
        (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)v5 + 8))(v5, v9);
        v6 = v4;
        v7 = 1;
        v8 = v9;
      }
      else
      {
        v6 = v4;
        v7 = 0;
        v8 = 0;
      }
      sub_608CB698(v6, v7, v8);
      result = FIELD_U32(a1, 400);
      ++v3;
      v4 += 200;
    }
    while ( v3 < result );
  }
  return result;
}
