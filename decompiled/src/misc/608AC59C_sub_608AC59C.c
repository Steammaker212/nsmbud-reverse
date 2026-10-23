/* sub_608AC59C
 * address: 0x608AC59C   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC59C(int a1, int a2)
{
  int v4; // r4
  _BYTE *v5; // r5
  int v6; // r0

  v4 = a1 + 4;
  nn__os__LockMutex(a1 + 4);
  sub_608C61FC(a1 + 24, a2);
  v5 = sub_608C3B10();
  if ( *v5 )
  {
    v6 = sub_608C2C40(v5, 1);
    sub_608C2B80(v5, v6);
  }
  return nn__os__UnlockMutex(v4);
}
