/* sub_6075F980
 * address: 0x6075F980   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075F980(int result)
{
  unsigned int v1; // r2

  if ( (FIELD_U8(result, 1231) & 1) != 0 )
  {
    v1 = FIELD_U32(result, 9820);
    if ( v1 <= 3 )
      return ((int (*)(void))((char *)dword_6075F9AC + dword_6075F9AC[v1]))();
  }
  return result;
}
