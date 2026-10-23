/* sub_6042839C
 * address: 0x6042839C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042839C(int a1, _DWORD *a2)
{
  int result; // r0

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  FIELD_U32(a1, 8) = a2[1];
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  result = sub_6090FEB4(a2[1]);
  FIELD_U32(a1, 4) = result;
  return result;
}
