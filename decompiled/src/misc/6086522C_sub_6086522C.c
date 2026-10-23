/* sub_6086522C
 * address: 0x6086522C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_QWORD *__fastcall sub_6086522C(_QWORD *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  FIELD_U32(a2, 528) = *a4;
  FIELD_U32(a2, 532) = a4[1];
  FIELD_U32(a2, 536) = *a3;
  FIELD_U32(a2, 540) = a3[1];
  return sub_608540DC(a1, (_QWORD *)(a2 + 64));
}
