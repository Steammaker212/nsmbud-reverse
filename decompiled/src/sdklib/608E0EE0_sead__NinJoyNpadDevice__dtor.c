/* sead__NinJoyNpadDevice__dtor
 * address: 0x608E0EE0   size: 112   group: sdklib
 * sym: sead::NinJoyNpadDevice::~NinJoyNpadDevice() as D2
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sead__NinJoyNpadDevice__dtor(_DWORD *a1)
{
  _DWORD *v2; // r6
  _DWORD *v3; // r5

  *a1 =&sead__NinJoyNpadDevice__vtable;
  v2 = a1 + 8428;
  v3 = a1 + 8422;
  (*(void (__fastcall **)(_DWORD *, _DWORD))(a1[8422] + 40))(a1 + 8422, 0);
  *v3 = off_60C5BE14;
  *v2 = &off_60C5BE68;
  sead__CriticalSection__dtor(a1 + 8542);
  sub_609084A8(v3);
  return a1;
}
