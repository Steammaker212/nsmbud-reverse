/* sub_60418974
 * address: 0x60418974   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60418974(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60C9BAF4;
  if ( !dword_60C9BAF4 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0xC28u, a1, 8);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60BF9D38;
    dword_60C9BAF0 = (int)v4;
    result = sub_604189EC();
    dword_60C9BAF4 = result;
  }
  return result;
}
