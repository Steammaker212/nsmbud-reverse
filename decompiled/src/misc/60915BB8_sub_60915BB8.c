/* sub_60915BB8
 * address: 0x60915BB8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60915BB8(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CCFC8C;
  if ( !dword_60CCFC8C )
  {
    v2 = operator_new_8DE2C8(0x3D0u, (int)a1, 8);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C5D548;
    dword_60CCFC88 = (int)v3;
    Default_ref(v2);
    dword_60CCFC8C = v2;
  }
  return v2;
}
