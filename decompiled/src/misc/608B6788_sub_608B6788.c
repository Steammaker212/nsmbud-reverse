/* sub_608B6788
 * address: 0x608B6788   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B6788(int a1)
{
  int result; // r0
  char *v3; // r0
  int i; // r7
  char *v5; // r0

  result = FIELD_U8(a1, 1400);
  if ( result )
  {
    v3 = (char *)sub_608065A0();
    nn__os__LockMutex(v3 + 1240);
    for ( i = FIELD_U32(a1, 1236); i != a1 + 1232; i = FIELD_U32(i, 4) )
      sub_608D0E10(i - 36);
    v5 = (char *)sub_608065A0();
    nn__os__UnlockMutex(v5 + 1240);
    return sub_608D0E10(a1 + 740);
  }
  return result;
}
