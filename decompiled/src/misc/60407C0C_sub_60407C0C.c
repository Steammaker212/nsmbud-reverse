/* sub_60407C0C
 * address: 0x60407C0C   size: 268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60407C0C(int a1)
{
  _DWORD *v2; // r4
  int v3; // r7

  v2 = (_DWORD *)dword_60C9A1E8;
  if ( !dword_60C9A1E8 )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x38808u, a1, 4);
    sead__IDisposer__ctor(v2, a1, 3u);
    v3 = 0;
    *v2 = off_60BF9AC8;
    dword_60C9A1E4 = (int)v2;
    do
    {
      sub_6054E158(&v2[v3 + 4]);
      v3 += 964;
    }
    while ( v3 != 57840 );
    v2[57844] = 0;
    v2[57845] = 0;
    v2[57847] = 28;
    v2[57848] = 80;
    v2[57849] = 1058642330;
    v2[57850] = 1060320051;
    v2[57851] = 18;
    v2[57852] = 20;
    v2[57853] = 13;
    v2[57854] = 40;
    v2[57855] = 45;
    v2[57856] = 50;
    v2[57846] = 0;
    v2[57857] = 24;
    dword_60C9A1E8 = (int)v2;
  }
  return v2;
}
