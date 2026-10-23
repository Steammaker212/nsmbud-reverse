/* sub_608873A4
 * address: 0x608873A4   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608873A4(int a1, _DWORD *a2)
{
  int v4; // r1
  int v5; // r0
  int result; // r0

  sub_6089DCA0(a2, FIELD_U32(a1, 8));
  a2[10] = -1;
  a2[15] = -1;
  a2[13] = -1;
  a2[11] = -1;
  a2[14] = -1;
  a2[12] = -1;
  sub_60887620(a1, a2 + 10, *(_DWORD *)(a2[3] + 2544), *(_DWORD *)(a2[3] + 2548));
  sub_60887620(a1, a2 + 12, *(_DWORD *)(a2[3] + 2576), *(_DWORD *)(a2[3] + 2580));
  sub_60887620(a1, a2 + 14, *(_DWORD *)(a2[3] + 2608), *(_DWORD *)(a2[3] + 2612));
  v4 = a2[3];
  v5 = 0;
  if ( (FIELD_U32(v4, 2168) & FIELD_U32(v4, 2172)) != -1 )
  {
    v5 = sub_60887EA4(a1);
    v4 = a2[3];
  }
  a2[20] = v5;
  if ( FIELD_U8(v4, 2217) && FIELD_U64(v4, 2256) != -1 )
    a2[19] = sub_60887EA4(a1);
  sub_6089DCBC(a2, a1 + 128);
  ((void (__fastcall *)(_DWORD *, int))loc_6089E410)(a2, a1);
  result = FIELD_U8(a1, 4);
  if ( !FIELD_U8(a1, 4) )
    return ShaderBinary_Bind_Error_ref(a2, a1);
  return result;
}
