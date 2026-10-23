/* sub_6099C490
 * address: 0x6099C490   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6099C490(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = off_60C60C44;
  a1[6] = &off_60C60CB8;
  sub_608F9760((int)a1);
  v2 = sub_608F96EC(a1);
  operator_delete(v2);
}
