/* Actor_CourseSelect_W7_Item_build
 * address: 0x60213628   size: 92   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_CourseSelect_W7_Item_build(unsigned __int8 *a1)
{
  int v2; // r5

  v2 = operator_new(0x1E0u);
  sub_6018668C(v2, a1);
  *(_DWORD *)v2 = off_60BD8F78;
  memset((void *)(v2 + 372), 0, 54);
  memset((void *)(v2 + 428), 0, 50);
  FIELD_U8(v2, 478) = 1;
  FIELD_U8(v2, 479) = 0;
  return v2;
}
