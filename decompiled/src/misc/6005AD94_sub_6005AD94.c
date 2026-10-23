/* sub_6005AD94
 * address: 0x6005AD94   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6005AD94(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  unsigned int v4; // r2
  unsigned int v5; // r0
  int result; // r0

  sub_60056D34(a1);
  v2 = *(_DWORD **)(a1 + 7204);
  v3 = (_DWORD *)v2[3];
  v4 = v2[2];
  v5 = v2[17];
  if ( v4 > v5 )
    v3 += v5;
  result = sub_60418548(*v3 + 4);
  if ( result == 1 )
  {
    FIELD_U32(a1, 312) = 1104674816;
    return 1104674816;
  }
  return result;
}
