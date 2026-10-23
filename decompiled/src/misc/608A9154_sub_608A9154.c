/* sub_608A9154
 * address: 0x608A9154   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9154(int a1, int a2, int a3, int a4, int a5)
{
  bool v6; // zf
  int v7; // r2

  v6 = FIELD_U8(a3, 49) == 0;
  v7 = FIELD_U32(a3, 32) & 0x1F;
  if ( !v6 )
    v7 |= 0x20u;
  return (*(int (__fastcall **)(int, int, int, int, int, int))(*(_DWORD *)a1 + 16))(a1, a5, a2, a3, a4, v7);
}
