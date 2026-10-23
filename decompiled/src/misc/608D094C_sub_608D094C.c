/* sub_608D094C
 * address: 0x608D094C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D094C(int a1)
{
  FIELD_U8(a1, 284) = 0;
  sub_608D0890((_DWORD *)a1);
  (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 280) + 8))(FIELD_U32(a1, 280), FIELD_U32(a1, 276));
  sub_608D089C((_DWORD *)a1);
  FIELD_U8(a1, 284) = 1;
  return 1;
}
