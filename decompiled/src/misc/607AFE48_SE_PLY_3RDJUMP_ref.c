/* SE_PLY_3RDJUMP_ref
 * address: 0x607AFE48   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_3RDJUMP_ref(_DWORD *a1)
{
  int *v2; // r5
  int v3; // r0
  unsigned int *v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r3

  sub_60770018(a1);
  v2 = a1 + 3018;
  if ( a1[3018] == 2 )
    sub_607736A8();
  a1[3024] = 0;
  a1[3019] = 8;
  v3 = a1[305];
  if ( (v3 & 0x80) != 0 )
  {
    v4 = a1 + 307;
    v5 = a1[307];
  }
  else
  {
    a1[305] = v3 | 0x80;
    v4 = a1 + 307;
    v5 = a1[307];
    if ( (v5 & 0x40000) == 0 )
    {
      v6 = *v2 + 1;
      if ( *v2 > 1 )
        v6 = 0;
      *v2 = v6;
    }
  }
  v7 = a1[301];
  a1[304] &= ~0x10000u;
  v8 = a1[306];
  *v4 = v5 & 0xFFFFBDFF;
  a1[306] = v8 & 0xFEFFB82B;
  a1[301] = v7 & 0xF7FFEFFF;
  a1[3765] = 0;
  return 15060;
}
