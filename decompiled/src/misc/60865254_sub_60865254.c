/* sub_60865254
 * address: 0x60865254   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_60865254(_QWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v7; // r0

  v7 = sub_60867E38(a2, a1);
  FIELD_U32(v7, 528) = *a4;
  FIELD_U32(v7, 532) = a4[1];
  FIELD_U32(v7, 536) = *a3;
  FIELD_U32(v7, 540) = a3[1];
  return sub_608540DC(a1, (_QWORD *)(v7 + 64));
}
