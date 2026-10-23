/* sub_608CF094
 * address: 0x608CF094   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF094(int a1, char a2)
{
  int result; // r0
  char *v4; // r0
  char *v5; // r0

  FIELD_U8(a1, 84) = a2;
  result = FIELD_U8(a1, 12);
  if ( result )
  {
    v4 = (char *)sub_608065A0();
    nn__os__LockMutex(v4 + 1408);
    nn__audio__SetReverbEnabled(a1 + 96, FIELD_U8(a1, 84));
    v5 = (char *)sub_608065A0();
    return nn__os__UnlockMutex(v5 + 1408);
  }
  return result;
}
