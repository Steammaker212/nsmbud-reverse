/* sub_608CDC98
 * address: 0x608CDC98   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CDC98(int a1, int a2)
{
  int result; // r0
  char *v5; // r0
  char *v6; // r0

  FIELD_U8(a1, 33) = a2;
  result = FIELD_U8(a1, 32);
  if ( result )
  {
    v5 = (char *)sub_608065A0();
    nn__os__LockMutex(v5 + 1408);
    nn__audio__SetAuxEnabled(a1 + 12, a2);
    v6 = (char *)sub_608065A0();
    return nn__os__UnlockMutex(v6 + 1408);
  }
  return result;
}
