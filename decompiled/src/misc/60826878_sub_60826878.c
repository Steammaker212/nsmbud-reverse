/* sub_60826878
 * address: 0x60826878   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60826878(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CC6E04;
  if ( !dword_60CC6E04 )
  {
    v2 = operator_new_8DE2C8(0x50u, a1, 8);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C2A72C;
    dword_60CC6E00 = (int)v3;
    *(_DWORD *)v2 = &off_60C2A73C;
    FIELD_U32(v2, 24) = 0;
    FIELD_U8(v2, 48) = 0;
    FIELD_U32(v2, 44) = 0;
    FIELD_U32(v2, 40) = 0;
    FIELD_U32(v2, 52) = -1;
    FIELD_U8(v2, 56) = 0;
    FIELD_U32(v2, 64) = 0;
    FIELD_U32(v2, 68) = 0;
    FIELD_U32(v2, 72) = 0;
    FIELD_U32(v2, 76) = 0;
    dword_60CC6E04 = v2;
  }
  return v2;
}
