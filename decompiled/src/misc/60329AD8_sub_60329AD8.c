/* sub_60329AD8
 * address: 0x60329AD8   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60329AD8(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(result, 80);
  if ( v1 <= 3 )
    return ((int (*)(void))((char *)dword_60329AF4 + dword_60329AF4[v1]))();
  return result;
}
