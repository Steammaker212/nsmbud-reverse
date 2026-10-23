/* sub_6053038C
 * address: 0x6053038C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6053038C(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CAAAC0;
  if ( !dword_60CAAAC0 )
  {
    v2 = operator_new_8DE2C8(0x2C4u, a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C00270;
    dword_60CAAABC = (int)v3;
    sub_60530420(v2);
    dword_60CAAAC0 = v2;
  }
  return v2;
}
