/* sub_60474EBC
 * address: 0x60474EBC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60474EBC(int a1, _DWORD *a2)
{
  int v3; // r5

  v3 = *(_DWORD *)(FIELD_U32(a1, 16) + 16);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  return sub_60855AD8(v3, a2[1]);
}
