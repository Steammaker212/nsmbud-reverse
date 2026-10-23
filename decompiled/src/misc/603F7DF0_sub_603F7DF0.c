/* sub_603F7DF0
 * address: 0x603F7DF0   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F7DF0(int a1)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)dword_60C99DC8;
  if ( !dword_60C99DC8 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x5F38u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    *v2 = off_60BF9570;
    dword_60C99DC4 = (int)v2;
    sub_603F7B7C(v2 + 4);
    sub_603F7B7C(v2 + 613);
    sub_603F7B7C(v2 + 1222);
    sub_603F7B7C(v2 + 1831);
    sub_603F7B7C(v2 + 2440);
    sub_603F7B7C(v2 + 3049);
    sub_603F7B7C(v2 + 3658);
    sub_603F7B7C(v2 + 4267);
    sub_603F7B7C(v2 + 4876);
    sub_603F7B7C(v2 + 5485);
    dword_60C99DC8 = (int)v2;
  }
  return v2;
}
