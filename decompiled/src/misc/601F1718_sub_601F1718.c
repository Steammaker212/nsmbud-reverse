/* sub_601F1718
 * address: 0x601F1718   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601F1718(int a1)
{
  int result; // r0

  FIELD_F32(a1, 604) = FIELD_F32(a1, 568) + 1200.0;
  FIELD_F32(a1, 612) = FIELD_F32(a1, 576) + -1300.0;
  FIELD_F32(a1, 608) = FIELD_F32(a1, 572) + 1000.0;
  FIELD_U32(a1, 204) = 0;
  FIELD_U32(a1, 596) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 380))(a1);
  result = sub_601E4EA4(dword_60C8B13C, 82, 0, a1 + 80, 1);
  FIELD_U32(a1, 720) = result;
  return result;
}
