/* sub_60986C38
 * address: 0x60986C38   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60986C38(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CD0C2C;
  if ( !dword_60CD0C2C )
  {
    v2 = operator_new_8DE2C8(0x30u, (int)a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C5FDA4;
    dword_60CD0C28 = (int)v3;
    *(_DWORD *)v2 = off_60C5FDB4;
    FIELD_U32(v2, 28) = 0;
    FIELD_U32(v2, 24) = v2 + 20;
    FIELD_U32(v2, 20) = v2 + 20;
    FIELD_U32(v2, 36) = 0;
    FIELD_U32(v2, 40) = 0;
    FIELD_U8(v2, 44) = 1;
    FIELD_U32(v2, 32) = 16;
    dword_60CD0C2C = v2;
  }
  return v2;
}
