/* sub_6046BD70
 * address: 0x6046BD70   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6046BD70(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U8(result, 23) & 0x1F;
  FIELD_U32(result, 6180) = v1;
  if ( v1 <= 0xD )
    return ((int (*)(void))((char *)dword_6046BD98 + dword_6046BD98[v1]))();
  return result;
}
