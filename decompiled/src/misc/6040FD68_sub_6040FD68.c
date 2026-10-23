/* sub_6040FD68
 * address: 0x6040FD68   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6040FD68(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r6

  *a1 = off_60BF9C3C;
  if ( (_DWORD *)dword_60C9A688 == a1 )
  {
    dword_60C9A688 = 0;
    v2 = (_DWORD *)dword_60C9A68C;
    v3 = dword_60C9A68C + 12744;
    sub_60955490(**(_DWORD **)(dword_60CD0B40 + 36), 0, dword_60C9A68C + 12744);
    sead__CriticalSection__dtor(v2 + 3325);
    v2[3203] = off_60BF9C4C;
    v2 += 3203;
    v2[4] = &off_60BF9C5C;
    nullsub_124(v2);
    sead__IDisposer__dtor(v2);
    sub_60954610(v3);
    *(v2 - 3134) = off_60BF9C04;
    sead__CriticalSection__dtor(v2 - 2693);
    nullsub_113(v2 - 3177);
    nullsub_111(v2 - 3199);
    dword_60C9A68C = 0;
  }
  return sead__IDisposer__dtor(a1);
}
