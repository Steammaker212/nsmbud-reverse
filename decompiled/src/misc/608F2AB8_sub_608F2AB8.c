/* sub_608F2AB8
 * address: 0x608F2AB8   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_608F2AB8(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0

  *a1 = off_60C5C76C;
  v2 = a1 + 59;
  sead__CriticalSection__dtor(a1 + 77);
  sead__CriticalSection__dtor(a1 + 68);
  sead__CriticalSection__dtor(v2);
  v3 = sead__IDisposer::~IDisposer(a1);
  operator_delete(v3);
}
