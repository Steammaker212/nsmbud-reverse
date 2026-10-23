/* sub_608C3F30
 * address: 0x608C3F30   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C3F30(int a1)
{
  int result; // r0
  void *v3; // r0

  result = FIELD_U8(a1, 560);
  if ( result )
  {
    nn__os__JamMessageQueue(a1 + 296, 0x20000000);
    if ( FIELD_U8(a1, 612) )
    {
      v3 = sub_608065A0();
      ((void (__fastcall *)(void *))loc_608B5A20)(v3);
    }
    sub_608D0864(a1 + 8);
    sub_608D0868(a1 + 8);
    FIELD_U32(a1, 556) = 0;
    FIELD_U8(a1, 560) = 0;
    return 0;
  }
  return result;
}
