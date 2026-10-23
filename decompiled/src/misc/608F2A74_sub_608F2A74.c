/* sub_608F2A74
 * address: 0x608F2A74   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608F2A74(_DWORD *a1)
{
  _DWORD *v2; // r5

  *a1 = off_60C5C76C;
  v2 = a1 + 59;
  sead__CriticalSection__dtor(a1 + 77);
  sead__CriticalSection__dtor(a1 + 68);
  sead__CriticalSection__dtor(v2);
  return sead__IDisposer::~IDisposer(a1);
}
