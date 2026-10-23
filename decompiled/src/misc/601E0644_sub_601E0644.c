/* sub_601E0644
 * address: 0x601E0644   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E0644(_DWORD *a1)
{
  unsigned int v2; // r5
  int v3; // r6
  int v4; // r0
  _DWORD *v6; // r5
  int v7; // r0
  int *v8; // r0

  v2 = 0;
  v3 = sub_601A443C(dword_60C89E18, 0, 0);
  while ( 1 )
  {
    v4 = sub_60182E38(v3, v2);
    if ( sub_6040D864(v4) == 37 )
      break;
    if ( (int)++v2 >= 256 )
      return 0;
  }
  v6 = (_DWORD *)sub_60182E38(v3, v2);
  v7 = sub_601A4454(dword_60C89E18, 0, 0);
  v8 = sub_601786A8(v7, v6);
  *a1 = v8[21];
  a1[1] = v8[22];
  a1[2] = v8[24];
  return 1;
}
