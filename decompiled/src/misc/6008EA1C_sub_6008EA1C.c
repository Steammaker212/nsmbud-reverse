/* sub_6008EA1C
 * address: 0x6008EA1C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008EA1C(int a1)
{
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82180);
  return result;
}
