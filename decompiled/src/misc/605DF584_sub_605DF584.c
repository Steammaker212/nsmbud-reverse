/* sub_605DF584
 * address: 0x605DF584   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DF584(float *a1)
{
  int v2; // r1
  unsigned int v3; // r0
  int v4; // r2
  float v5; // s2
  float v6; // s0
  int v7; // r0

  *((_DWORD *)a1 + 1566) |= 1u;
  *((_DWORD *)a1 + 1565) |= 0x10000000u;
  *((_DWORD *)a1 + 1567) |= 2u;
  v2 = 0;
  v3 = *((_DWORD *)a1 + 1689) - 3;
  if ( v3 <= 0x10 )
    v2 = dword_60B05A40[v3];
  *((_DWORD *)a1 + 1693) = v2;
  v4 = *((_DWORD *)a1 + 28);
  a1[1690] = a1[27];
  *((_DWORD *)a1 + 1691) = v4;
  a1[1692] = 0.0;
  v5 = 32.0;
  v6 = -24.0;
  switch ( v2 )
  {
    case 0:
      v6 = 24.0;
      goto LABEL_5;
    case 1:
LABEL_5:
      a1[1690] = v6 + a1[1690];
      *((_DWORD *)a1 + 20) = v2;
      goto LABEL_9;
    case 2:
      goto LABEL_7;
    case 3:
      v5 = -16.0;
LABEL_7:
      a1[1691] = v5 + a1[1691];
      break;
    default:
      break;
  }
  v2 = *((_DWORD *)a1 + 20);
LABEL_9:
  v7 = sub_605D792C((int)a1, v2);
  a1[39] = 0.0;
  *((_DWORD *)a1 + 40) = v7;
  a1[41] = 0.0;
  a1[2003] = 0.0;
  return 8012;
}
