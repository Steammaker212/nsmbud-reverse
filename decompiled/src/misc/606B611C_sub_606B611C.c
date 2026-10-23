/* sub_606B611C
 * address: 0x606B611C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606B611C(float *a1)
{
  float v2; // s4
  float v3; // s2
  float v4; // s0

  v2 = a1[25];
  v3 = a1[34];
  v4 = a1[31] + v2;
  if ( v2 >= 0.0 )
  {
    if ( v4 > v3 )
      v4 = a1[34];
  }
  else if ( v4 < v3 )
  {
    v4 = a1[34];
  }
  a1[31] = v4;
  a1[27] = a1[27] + a1[30];
  a1[28] = a1[28] + v4;
  a1[29] = a1[29] + a1[32];
  sub_606B72B4(a1);
  return (*(int (__fastcall **)(float *))(*(_DWORD *)a1 + 232))(a1);
}
