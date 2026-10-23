/* sub_60465CD4
 * address: 0x60465CD4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60465CD4(int a1)
{
  _DWORD *result; // r0
  _DWORD *v3; // r0

  result = (_DWORD *)dword_60C9D3E4;
  if ( !dword_60C9D3E4 )
  {
    v3 = (_DWORD *)operator_new_8DE2C8(0x10u, a1, 4);
    result = sead__IDisposer__ctor(v3, a1, 3u);
    *result = off_60BFB884;
    dword_60C9D3E0 = (int)result;
    dword_60C9D3E4 = (int)result;
  }
  return result;
}
