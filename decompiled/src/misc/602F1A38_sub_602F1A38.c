/* sub_602F1A38
 * address: 0x602F1A38   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F1A38(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0

  sub_60264900((int)a1, "throw", 0);
  v2 = (_DWORD *)a1[1575];
  v3 = v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += 4 * v5;
  *(_DWORD *)(*(_DWORD *)v3 + 24) = 1065353216;
  a1[30] = 0;
  a1[31] = 1084227584;
  a1[32] = 0;
  a1[1689] = 1;
  return 6756;
}
