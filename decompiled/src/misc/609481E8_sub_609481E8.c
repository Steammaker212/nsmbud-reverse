/* sub_609481E8
 * address: 0x609481E8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609481E8(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60CD0A0C;
  if ( !dword_60CD0A0C )
  {
    v2 = operator_new_8DE2C8(0x25F8u, (int)a1, 8);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C5E85C;
    dword_60CD0A08 = (int)v3;
    sub_60948270(v2);
    dword_60CD0A0C = v2;
  }
  return v2;
}
