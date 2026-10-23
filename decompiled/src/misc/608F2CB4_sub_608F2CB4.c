/* sub_608F2CB4
 * address: 0x608F2CB4   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F2CB4(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CCEC3C;
  if ( !dword_60CCEC3C )
  {
    v2 = operator_new_8DE2C8(0x7B8u, a1, 8);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C5C80C;
    dword_60CCEC38 = (int)v3;
    *(_DWORD *)v2 = off_60C5C81C;
    FIELD_U32(v2, 1952) = 0;
    FIELD_U32(v2, 1956) = 0;
    FIELD_U32(v2, 1960) = 0;
    FIELD_U32(v2, 1964) = 204800;
    FIELD_U8(v2, 1968) = 0;
    FIELD_U8(v2, 1969) = 0;
    dword_60CCEC3C = v2;
  }
  return v2;
}
