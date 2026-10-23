/* torpedobase_rtrn_ref
 * address: 0x603C08E0   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall torpedobase_rtrn_ref(int a1)
{
  int v2; // r0
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v2 = FIELD_U32(a1, 6304);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "torpedobase_rtrn";
  sub_6040F4B8(v2, v4, 0);
  FIELD_U32(a1, 6336) = 100;
  return 6336;
}
