/* sub_604A3568
 * address: 0x604A3568   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A3568(int a1)
{
  _DWORD v2[4]; // [sp+8h] [bp-10h] BYREF

  v2[0] = &sead__SafeStringBase__vtable;
  v2[1] = dword_60CA1304;
  return sub_6047467C((_DWORD *)(a1 + 48), 1u, v2, (int)&unk_60CA1338, 1.0, 0);
}
