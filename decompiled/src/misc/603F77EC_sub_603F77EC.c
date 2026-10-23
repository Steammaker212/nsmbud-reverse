/* sub_603F77EC
 * address: 0x603F77EC   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_603F77EC(int a1)
{
  int v2; // r0
  _BYTE *v3; // r1

  memset((void *)a1, 0, 0x7Bu);
  v2 = sub_6040E5B0(0, 0, 0);
  if ( v2 >= 0 )
  {
    v3 = (_BYTE *)a1;
    if ( (unsigned int)v2 < 0x7B )
      v3 = (_BYTE *)(a1 + v2);
    if ( v3 )
      *v3 |= 1u;
  }
  memset((void *)(a1 + 123), 0, 0x3Eu);
}
