/* sub_6074F9F4
 * address: 0x6074F9F4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6074F9F4(int a1)
{
  int v1; // r0
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U32(a1, 700) = 2;
  v1 = FIELD_U32(a1, 648);
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "close";
  return sub_6040F4B8(v1, (int)v3, 0, 1.0, 0.0);
}
