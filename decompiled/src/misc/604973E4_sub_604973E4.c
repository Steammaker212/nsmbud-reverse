/* sub_604973E4
 * address: 0x604973E4   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604973E4(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60CA059C;
  if ( !dword_60CA059C )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x245ACu, a1, 4);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60BFDBC0;
    dword_60CA0598 = (int)v4;
    result = sub_60498980();
    dword_60CA059C = result;
  }
  return result;
}
