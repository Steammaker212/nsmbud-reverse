/* sub_60416E4C
 * address: 0x60416E4C   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60416E4C(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)dword_60C9BAA4;
  if ( !dword_60C9BAA4 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0xFD8u, a1, 8);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BF9D00;
    dword_60C9BAA0 = (int)v2;
    sub_609318FC(v2 + 4);
    sub_6091ABEC(v2 + 840);
    agl_TextureSampler_ref(v2 + 926);
    v2[1012] = 0;
    v2[1013] = 0;
    dword_60C9BAA4 = (int)v2;
  }
  return v2;
}
