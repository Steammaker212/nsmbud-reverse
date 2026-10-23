/* sub_605E7988
 * address: 0x605E7988   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E7988(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60CB1BE4;
  if ( !dword_60CB1BE4 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x15Cu, a1, 4);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60C0B620;
    dword_60CB1BE0 = (int)v4;
    result = sub_605E7D24();
    dword_60CB1BE4 = result;
  }
  return result;
}
