/* sub_60968A94
 * address: 0x60968A94   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60968A94(_DWORD *a1)
{
  int v2; // r5

  *a1 = off_60C5EBD8;
  v2 = a1[17];
  if ( v2 )
  {
    sub_609175E4(v2 + 80);
    sub_60917AE4(v2);
  }
  if ( dword_60CD0B70 )
    sub_60973A54();
  a1[18] = off_60BF9C2C;
  sub_60913C18((int)(a1 + 18));
  return a1;
}
