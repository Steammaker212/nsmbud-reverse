/* sub_60911E4C
 * address: 0x60911E4C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60911E4C(int a1)
{
  _DWORD *result; // r0
  _DWORD v2[2]; // [sp+0h] [bp-18h] BYREF
  _DWORD v3[4]; // [sp+8h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "content";
  v2[0] = &sead__SafeStringBase__vtable;
  v2[1] = "content";
  result = (_DWORD *)sub_608E2668(a1, v3, (int)v2);
  *result = &off_60C5D354;
  return result;
}
