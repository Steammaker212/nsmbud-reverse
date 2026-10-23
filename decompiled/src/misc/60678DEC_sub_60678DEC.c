/* sub_60678DEC
 * address: 0x60678DEC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60678DEC(int a1, int a2)
{
  char v2; // r2
  int v3; // r1

  v2 = FIELD_U8(a2, 1217);
  v3 = 0;
  if ( (v2 & 0x20) == 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 416))(a1);
    return 1;
  }
  return v3;
}
