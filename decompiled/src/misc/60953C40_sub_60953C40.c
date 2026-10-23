/* sub_60953C40
 * address: 0x60953C40   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60953C40(_DWORD *a1, char *a2)
{
  unsigned int v2; // r12
  unsigned int v3; // r3
  int v4; // r2
  int v5; // r0
  char *v6; // r0
  bool v7; // zf

  v2 = 0;
  v3 = 0;
  if ( (int)a1[14] >= 1 )
  {
    v4 = a1[12];
    v3 = 0;
    if ( v4 )
    {
      v5 = a1[15];
      v3 = 0;
      if ( v4 != v5 )
        v3 = *(_DWORD *)(v4 - v5 + 4);
    }
  }
  if ( *((int *)a2 + 14) >= 1 )
  {
    v6 = *((char **)a2 + 13);
    v7 = v6 == 0;
    if ( v6 )
    {
      a2 = *((char **)a2 + 15);
      v7 = v6 == a2;
    }
    if ( !v7 )
      v2 = *(_DWORD *)(v6 - a2 + 4) + *(_DWORD *)(v6 - a2 + 12);
  }
  return v2 < v3;
}
