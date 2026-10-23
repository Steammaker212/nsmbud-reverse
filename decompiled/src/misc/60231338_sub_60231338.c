/* sub_60231338
 * address: 0x60231338   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60231338(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60C8D904;
  if ( !dword_60C8D904 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x1280u, a1, 8);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60BD9494;
    dword_60C8D900 = (int)v4;
    result = sub_602313B0();
    dword_60C8D904 = result;
  }
  return result;
}
