/* sub_608C54D4
 * address: 0x608C54D4   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C54D4(int a1)
{
  int *v2; // r0
  int *v3; // r0
  void *v4; // r0

  while ( !FIELD_U8(a1, 316) )
  {
    v2 = sub_608C4DF4();
    sub_608C527C((int)v2);
    if ( FIELD_U8(a1, 316) )
      break;
    nn__os__LockMutex(a1 + 296);
    v3 = sub_608C4DF4();
    sub_608C50D0(v3);
    nn__os__UnlockMutex(a1 + 296);
    v4 = sub_608C3B98();
    sub_608C2A1C((int)v4);
  }
  return 0;
}
