/* sub_609154D0
 * address: 0x609154D0   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609154D0(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CCFC84;
  if ( !dword_60CCFC84 )
  {
    v2 = operator_new_8DE2C8(0x4Cu, (int)a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C5D518;
    dword_60CCFC80 = (int)v3;
    *(_DWORD *)v2 = off_60C5D528;
    sead__CriticalSection__ctor((sead_IDisposer *)(v2 + 20));
    FIELD_U32(v2, 56) = 0;
    FIELD_U32(v2, 60) = 0;
    FIELD_U32(v2, 64) = 0;
    FIELD_U32(v2, 68) = 4096;
    FIELD_U8(v2, 72) = 2;
    dword_60CCFC84 = v2;
  }
  return v2;
}
