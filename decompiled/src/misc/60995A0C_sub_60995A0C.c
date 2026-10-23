/* sub_60995A0C
 * address: 0x60995A0C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60995A0C(int a1)
{
  int v2; // r0

  FIELD_U32(a1, 44) = FIELD_U32(a1, 68);
  FIELD_U8(a1, 76) = 0;
  v2 = sub_60991414(a1, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 104))(v2);
  return (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 116))(a1, 0);
}
