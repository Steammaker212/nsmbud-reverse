/* sub_602D0DDC
 * address: 0x602D0DDC   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602D0DDC(int a1)
{
  int v2; // r2
  int v3; // r3
  int v4; // r0
  int v5; // r0
  int v6; // r0

  sub_602CF048(a1, 1, 1, 4.0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v2 = FIELD_S8(a1, 6124);
  if ( v2 >= 0 )
  {
    v3 = FIELD_S8(a1, 6132);
    if ( (unsigned __int8)v3 > 3u )
    {
      if ( (unsigned __int8)v3 == 4 )
        sub_600229B0(0.0, 24.0, dword_60C7F52C, a1, v2);
    }
    else
    {
      sub_60022760(0.0, 24.0, dword_60C7F52C, a1, v2, v3);
    }
  }
  FIELD_U16(a1, 6554) = 0;
  FIELD_U16(a1, 6556) = 0;
  FIELD_U32(a1, 6332) = 1167867904;
  v4 = FIELD_U32(a1, 6436);
  FIELD_U32(v4, 16) = 1167867904;
  v5 = FIELD_U32(v4, 120);
  FIELD_U32(v5, 16) = 1167867904;
  v6 = FIELD_U32(v5, 120);
  FIELD_U32(v6, 16) = 1167867904;
  *(_DWORD *)(FIELD_U32(v6, 120) + 16) = 1167867904;
  FIELD_U32(a1, 6560) = 0;
  return 6560;
}
