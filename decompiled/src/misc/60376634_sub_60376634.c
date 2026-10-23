/* sub_60376634
 * address: 0x60376634   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60376634(int *a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int result; // r0

  *(_DWORD *)(**(_DWORD **)(a1[1575] + 12) + 24) = 0;
  a1[36] = 1065353216;
  a1[37] = 1065353216;
  a1[38] = 1065353216;
  v2 = a1[40];
  if ( v2 < 0 && v2 != 0x80000000 )
    v2 = -v2;
  v3 = sub_603737E4((int)a1, a1[20]);
  v4 = a1[20];
  if ( v2 != v3 )
  {
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( a1[40] < 1 )
        {
          v4 = 1;
          goto LABEL_13;
        }
        v4 = 0;
        goto LABEL_11;
      }
    }
    else
    {
      v4 = 0;
      if ( a1[40] < 0 )
      {
        v4 = 1;
LABEL_11:
        a1[20] = v4;
      }
    }
  }
LABEL_13:
  result = sub_603737E4((int)a1, v4);
  a1[40] = result;
  return result;
}
