/* sub_60951188
 * address: 0x60951188   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60951188(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60CD0A1C;
  if ( !dword_60CD0A1C )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x3A0u, (int)a1, 8);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60C5E92C;
    dword_60CD0A18 = (int)v3;
    *v2 = off_60C5E93C;
    sub_60922344((int)(v2 + 6));
    sub_60922344((int)(v2 + 74));
    sub_60922344((int)(v2 + 142));
    sub_60913BB4((int)(v2 + 210));
    v2[210] = off_60C5E94C;
    sub_60913BB4((int)(v2 + 217));
    v2[217] = off_60C5E94C;
    sub_60913BB4((int)(v2 + 224));
    v2[224] = off_60C5E94C;
    dword_60CD0A1C = (int)v2;
  }
  return v2;
}
