/* sub_608E3820
 * address: 0x608E3820   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608E3820(int a1, int a2)
{
  _DWORD *result; // r0
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "save";
  result = (_DWORD *)sub_608E2668(a1, v3, a2);
  *result = off_60C5C014;
  return result;
}
