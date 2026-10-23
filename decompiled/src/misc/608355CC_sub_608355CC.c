/* sub_608355CC
 * address: 0x608355CC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608355CC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r6
  int v9; // r0

  v6 = FIELD_U32(a1, 184);
  v9 = sub_6083AB50(a2);
  return dword_60CC787C(v6, v9, a4, a3, a6, a5);
}
