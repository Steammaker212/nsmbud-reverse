/* sub_603FE46C
 * address: 0x603FE46C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603FE46C(int a1)
{
  _DWORD *v2; // r4
  int v3; // r7

  v2 = (_DWORD *)dword_60C99E1C;
  if ( !dword_60C99E1C )
  {
    v2 = (_DWORD *)operator_new_8DE2C8(0x3A620u, a1, 8);
    sead__IDisposer__ctor(v2, a1, 3u);
    v3 = 0;
    *v2 = off_60BF97B4;
    dword_60C99E18 = (int)v2;
    do
    {
      sub_603FE114((int)&v2[v3 + 58]);
      v3 += 1106;
    }
    while ( v3 != 59724 );
    v2[59782] = 0;
    memset(v2 + 4, 255, 0xD8u);
    dword_60C99E1C = (int)v2;
  }
  return v2;
}
