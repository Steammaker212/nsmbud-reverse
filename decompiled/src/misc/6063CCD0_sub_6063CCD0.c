/* sub_6063CCD0
 * address: 0x6063CCD0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6063CCD0(_DWORD **a1)
{
  _DWORD **v1; // r4
  unsigned int v2; // r5
  _DWORD *v3; // t1
  int result; // r0

  v1 = a1;
  v2 = (unsigned int)(a1 + 10);
  do
  {
    v3 = *v1;
    v1 += 5;
    result = DrawMgr_drawModel2(DrawMgr_instance, v3);
  }
  while ( (unsigned int)v1 < v2 );
  return result;
}
