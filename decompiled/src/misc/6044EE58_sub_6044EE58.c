/* sub_6044EE58
 * address: 0x6044EE58   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6044EE58(int a1)
{
  int result; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  result = dword_60C9CEF0;
  if ( !dword_60C9CEF0 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x44u, a1, 4);
    v4 = sead__IDisposer__ctor(v3, a1, 3u);
    *v4 = off_60BFB07C;
    dword_60C9CEEC = (int)v4;
    result = sub_60450674();
    dword_60C9CEF0 = result;
  }
  return result;
}
