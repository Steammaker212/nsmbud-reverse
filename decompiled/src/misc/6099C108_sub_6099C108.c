/* sub_6099C108
 * address: 0x6099C108   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099C108(int a1)
{
  int result; // r0
  int v3; // r0

  result = FIELD_U8(a1, 785);
  if ( result == 1 )
  {
    nn__os__LockMutex(a1 + 1432);
    v3 = FIELD_U32(a1, 788);
    if ( v3 == 1 )
    {
      sub_608CF868(a1 + 720);
      v3 = FIELD_U32(a1, 788);
    }
    if ( v3 )
      FIELD_U32(a1, 788) = v3 - 1;
    return nn__os__UnlockMutex(a1 + 1432);
  }
  return result;
}
