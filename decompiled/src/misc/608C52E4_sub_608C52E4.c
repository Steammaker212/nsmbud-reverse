/* sub_608C52E4
 * address: 0x608C52E4   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C52E4(int a1)
{
  int *v2; // r0
  int v3; // r5

  *(_DWORD *)a1 = off_60C5B300;
  if ( FIELD_U8(a1, 317) )
  {
    FIELD_U8(a1, 316) = 1;
    v2 = sub_608C4DF4();
    sub_608C52D0((int)v2);
    v3 = a1 + 8;
    sub_608D0864(a1 + 8);
    sub_608D0868(a1 + 8);
    FIELD_U8(a1, 317) = 0;
  }
  else
  {
    v3 = a1 + 8;
  }
  nn__os__FinalizeMutex(a1 + 296);
  nullsub_278(v3);
  return a1;
}
