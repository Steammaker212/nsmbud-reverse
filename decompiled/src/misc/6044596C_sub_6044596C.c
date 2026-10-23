/* sub_6044596C
 * address: 0x6044596C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6044596C(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)dword_60C9CD58;
  if ( !dword_60C9CD58 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0xDCu, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BFAEF0;
    dword_60C9CD54 = (int)v2;
    v2[4] = 0;
    v2[5] = 0;
    v2[6] = 0;
    sub_608DEB0C(v2 + 4, 24, (int)(v2 + 7));
    Icon_LAYOUT_Security_agl_shader_ref(v2 + 31);
    dword_60C9CD58 = (int)v2;
  }
  return v2;
}
