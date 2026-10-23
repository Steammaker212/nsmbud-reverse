/* sub_6088B42C
 * address: 0x6088B42C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6088B42C(int a1)
{
  *(_DWORD *)a1 = off_60C5AA84;
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 8) + 12))(FIELD_U32(a1, 8), FIELD_U32(a1, 32));
  FIELD_U32(a1, 32) = 0;
  return a1;
}
