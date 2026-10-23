/* sub_603FD69C
 * address: 0x603FD69C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FD69C(int result)
{
  int v1; // r3
  _DWORD *v2; // r1

  v1 = 0;
  do
  {
    v2 = (_DWORD *)(result + v1);
    v1 += 32;
    v2[4] = 0;
    v2[5] = -65536;
    v2[6] = 0;
    v2[7] = -65536;
    v2[8] = 0;
    v2[9] = -65536;
    v2[10] = 0;
    v2[11] = -65536;
  }
  while ( v1 != 2048 );
  return result;
}
