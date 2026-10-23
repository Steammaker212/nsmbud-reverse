/* sub_601CF1C0
 * address: 0x601CF1C0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601CF1C0(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)dword_60C8AEF0;
  if ( !dword_60C8AEF0 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x34u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BD6B54;
    dword_60C8AEEC = (int)v2;
    nullsub_8();
    nullsub_9();
    v2[7] = 0;
    v2[8] = 0;
    v2[5] = 0;
    v2[6] = 0;
    sub_608DEB0C(v2 + 6, 4, (int)(v2 + 9));
    word_60C8AEE8 = 0;
    dword_60C8AEF0 = (int)v2;
  }
  return v2;
}
