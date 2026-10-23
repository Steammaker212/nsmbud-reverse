/* sub_6083558C
 * address: 0x6083558C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083558C(int a1, int a2, int a3, int a4)
{
  int v4; // r6
  int v7; // r1

  v4 = FIELD_U32(a1, 184);
  v7 = sub_6083AB50(a2);
  return dword_60CC7870(v4, v7, a4, a3);
}
