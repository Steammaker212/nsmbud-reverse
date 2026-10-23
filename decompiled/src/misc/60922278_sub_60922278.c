/* sub_60922278
 * address: 0x60922278   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60922278(int a1, int a2)
{
  int v3; // r8
  int result; // r0
  int v5; // r11
  int v6; // r7
  int v7; // r5
  int v8; // r4
  __int64 v9; // r0

  v3 = FIELD_U32(a2, 192);
  dword_60CC7810(v3, 16, a1 + 144);
  result = dword_60CC7814(v3, 16, a1 + 208);
  v5 = FIELD_U32(a1, 132);
  if ( v5 )
  {
    v6 = FIELD_U32(a1, 136);
    v7 = 0;
    result = 0x349D5Cu;
    do
    {
      v8 = *(_DWORD *)(v6 + 4 * v7);
      if ( v8 )
      {
        v9 = dword_60CC746C(v8 + 8);
        result = dword_60CC781C(v3, v7, v9, HIDWORD(v9), FIELD_U32(v8, 268));
      }
      ++v7;
    }
    while ( v5 != v7 );
  }
  return result;
}
