/* sub_609689A8
 * address: 0x609689A8   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_609689A8(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60CD0B50;
  if ( !dword_60CD0B50 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x80u, (int)a1, 4);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60C5EBC8;
    dword_60CD0B4C = (int)v3;
    *v2 = off_60C5EBD8;
    v2[5] = 0;
    v2[6] = 0;
    v2[11] = 0;
    v2[12] = 0;
    v2[13] = 0;
    v2[14] = 0;
    v2[15] = 0;
    v2[16] = 0;
    v2[17] = 0;
    sub_60913BB4((int)(v2 + 18));
    v2[18] = off_60BF9C1C;
    v2[25] = nullsub_7017;
    dword_60CD0B50 = (int)v2;
  }
  return v2;
}
