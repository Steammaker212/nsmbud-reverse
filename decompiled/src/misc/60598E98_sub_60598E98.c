/* sub_60598E98
 * address: 0x60598E98   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60598E98(_BYTE *a1, int a2)
{
  int v4; // r4

  v4 = 0;
  if ( a1[13476] && (sub_605E3BBC(a1) || (a1[6263] & 2) != 0) && (FIELD_U8(a2, 1217) & 0x20) == 0 )
  {
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 416))(a1);
    return 1;
  }
  return v4;
}
