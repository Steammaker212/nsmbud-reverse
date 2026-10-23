/* sub_60442E20
 * address: 0x60442E20   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60442E20(int a1)
{
  _DWORD *v2; // r4

  v2 = DrawMgr_instance;
  if ( !DrawMgr_instance )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x238u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BFAD8C;
    dword_60C9CD18 = (int)v2;
    v2[4] = 2139095039;
    v2[5] = 2139095039;
    v2[6] = -8388609;
    v2[7] = -8388609;
    sub_6090C6DC((int)(v2 + 8));
    sub_6090A654(v2 + 51);
    v2[73] = 0;
    v2[74] = 3;
    v2[75] = 6;
    sub_6090C6DC((int)(v2 + 76));
    sub_6090A654(v2 + 119);
    v2[141] = 0;
    DrawMgr_instance = v2;
  }
  return v2;
}
