/* sub_60532E74
 * address: 0x60532E74   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60532E74(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60CAADA8;
  if ( !dword_60CAADA8 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x146B8u, a1, 4);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60C003FC;
    dword_60CAADA4 = (int)v4;
    result = sub_605366EC();
    dword_60CAADA8 = result;
  }
  return result;
}
