/* sub_6042A29C
 * address: 0x6042A29C   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6042A29C(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60C9C0FC;
  if ( !dword_60C9C0FC )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x600u, a1, 8);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60BFA518;
    dword_60C9C0F8 = (int)v3;
    CentralMgrDelegateThread_ref(v2);
    dword_60C9C0FC = (int)v2;
  }
  return v2;
}
