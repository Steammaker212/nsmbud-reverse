/* BobOmb_vf114
 * address: 0x60260C50   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall BobOmb_vf114(Enemy *a1)
{
  _DWORD *v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r1

  v1 = (_DWORD *)a1[1]._._._._.field_34;
  v2 = v1[3];
  v3 = v1[2];
  v4 = v1[17];
  if ( v3 > v4 )
    v2 += 4 * v4;
  *(_DWORD *)(*(_DWORD *)v2 + 24) = 0;
  return Enemy__beginState_DieFall(a1);
}
