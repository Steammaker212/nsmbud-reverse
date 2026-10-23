/* sub_603F66AC
 * address: 0x603F66AC   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603F66AC(int a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0

  v2 = (_DWORD *)dword_60C99DB8;
  if ( !dword_60C99DB8 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x95F00u, a1, 8);
    v3 = sead__IDisposer__ctor(v2 + 1, a1, 3u);
    v2[1] = off_60BF9540;
    dword_60C99DB4 = (int)v3;
    *v2 = off_60BF9550;
    sub_60489270(v2 + 6);
    v2[153534] = 128;
    dword_60C99DB8 = (int)v2;
  }
  return v2;
}
