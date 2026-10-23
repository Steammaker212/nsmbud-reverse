/* sub_60766AA0
 * address: 0x60766AA0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60766AA0(int a1)
{
  int v2; // r0
  bool v3; // zf

  v2 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 640))(a1, 1);
  v3 = v2 == 0;
  if ( !v2 )
    v3 = (FIELD_U32(a1, 1204) & 0x24000) == 0;
  return v3
      && (FIELD_U8(a1, 1219) & 8) == 0
      && (FIELD_U32(a1, 1232) & 0x1000200) == 0
      && (FIELD_U8(a1, 1223) & 0x10) == 0;
}
