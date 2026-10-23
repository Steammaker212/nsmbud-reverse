/* sub_608D2AA4
 * address: 0x608D2AA4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D2AA4(int a1, int a2, unsigned int a3)
{
  int result; // r0

  result = FIELD_U32(a1, 4);
  if ( result )
  {
    result = FIELD_U32(a1, 4);
    if ( result == 2 )
    {
      sub_608D297C((_DWORD *)(a1 + 436), a2, a3);
      result = FIELD_U32(a1, 4);
      if ( result )
        return nn__os__TrySendMessageQueue(a1 + 324, 1);
    }
  }
  return result;
}
