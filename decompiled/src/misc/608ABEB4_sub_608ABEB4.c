/* sub_608ABEB4
 * address: 0x608ABEB4   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608ABEB4(int a1)
{
  void *v2; // r5
  int v3; // r0
  int v4; // r0

  v2 = sub_608C3B10();
  v3 = sub_608C2698(v2, 20, 1);
  FIELD_U32(v3, 4) = 68;
  FIELD_U32(v3, 16) = a1;
  sub_608C2C1C(v2);
  v4 = sub_608C2C40(v2, 1);
  sub_608C2B80(v2, v4);
  FIELD_U32(a1, 536) = 0;
  FIELD_U32(a1, 540) = 0;
  return 0;
}
