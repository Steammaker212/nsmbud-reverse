/* sub_60971CC8
 * address: 0x60971CC8   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60971CC8(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60CD0B68;
  if ( !dword_60CD0B68 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x68u, (int)a1, 8);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60C5F2DC;
    dword_60CD0B64 = (int)v3;
    *v2 = off_60C5F2EC;
    *(_DWORD *)sub_60913BB4((int)(v2 + 5)) = off_60BF9C1C;
    dword_60CD0B68 = (int)v2;
  }
  return v2;
}
