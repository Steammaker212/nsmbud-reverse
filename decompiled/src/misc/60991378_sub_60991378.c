/* sub_60991378
 * address: 0x60991378   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991378(int a1)
{
  int result; // r0

  FIELD_U16(a1, 30) &= ~0x1000u;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1);
  result = *(unsigned __int8 *)(*(_DWORD *)(FIELD_U32(a1, 16) + 72) + 127);
  if ( *(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 16) + 72) + 127) )
  {
    result = FIELD_U16(a1, 30) | 0x800;
    FIELD_U16(a1, 30) = result;
  }
  return result;
}
