/* SE_PLY_SLIDE_ref
 * address: 0x607C0A7C   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_PLY_SLIDE_ref(int *a1)
{
  int v2; // r0
  const char *v3; // r1
  int result; // r0
  int v5; // r1
  int v6; // r2

  sub_60774040((int)a1, a1[20]);
  v2 = a1[3206];
  if ( !v2 )
  {
    nullsub_5471(a1);
    v2 = a1[3206];
  }
  if ( (v2 | 2) == 2 )
    v3 = "SE_PLY_SLIDE_ROPE";
  else
    v3 = "SE_PLY_SLIDE_KUSARI";
  sub_60773558((int)a1, (int)v3, 0);
  a1[3207] = -1073741824;
  if ( a1[3215] == 2 || sub_60786738((int)(a1 + 172)) != 1 )
  {
    if ( sub_60786750((int)(a1 + 172)) || sub_6078675C((int)(a1 + 172)) || (result = sub_60786744((int)(a1 + 172))) == 0 )
    {
      a1[2485] = 1;
      a1[3207] = 0;
      v5 = a1[3211];
      a1[3213] = v5;
      v6 = a1[1688];
      a1[3211] = v6;
      a1[3214] = a1[3212];
      a1[3212] = v5 - v6;
      a1[3209] = 0;
      sub_607C0FB4(a1);
      a1[3213] = a1[3211];
      result = a1[3212];
      a1[3214] = result;
    }
  }
  else
  {
    a1[2485] = 2;
    return PlayerBase_dispatchVirtual3((int)(a1 + 2839), 47, 0.0);
  }
  return result;
}
