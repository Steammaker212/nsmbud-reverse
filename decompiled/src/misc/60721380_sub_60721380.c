/* sub_60721380
 * address: 0x60721380   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60721380(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60CBD85C;
  if ( !dword_60CBD85C )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x1740u, a1, 8);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60C21D74;
    dword_60CBD858 = (int)v4;
    result = sub_607214B0();
    dword_60CBD85C = result;
  }
  return result;
}
