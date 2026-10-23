/* sub_6040F588
 * address: 0x6040F588   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040F588(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r4

  *(_DWORD *)a1 = off_60BF9C04;
  v2 = (_DWORD *)(a1 + 1764);
  v3 = 4;
  do
  {
    *(_DWORD *)(a1 + v3) = 0;
    v4 = (_DWORD *)(a1 + v3);
    v3 += 32;
    v4[1] = -1;
    v4[2] = 0;
    v4[3] = -1;
    v4[4] = 0;
    v4[5] = -1;
    v4[6] = 0;
    v4[7] = -1;
  }
  while ( v4 + 8 != v2 );
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 1764));
  return a1;
}
