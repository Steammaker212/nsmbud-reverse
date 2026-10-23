/* sub_607AA954
 * address: 0x607AA954   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607AA954(int a1)
{
  int v2; // r1
  int result; // r0
  int v4; // r1
  unsigned int v5; // r1
  int v6; // r2
  unsigned int v7; // r1
  int v8; // r2

  v2 = sub_60786670(a1 + 688);
  result = 0;
  if ( v2 == 1 )
  {
    v4 = FIELD_U32(a1, 1320);
    if ( (unsigned int)(v4 - 5) >= 2 )
    {
      if ( v4 == 2 )
      {
        v7 = FIELD_U8(a1, 84);
        v8 = 0;
        result = 0;
        if ( v7 < 4 )
          v8 = (char)v7;
        if ( *(int *)(EnemyCounterMaybe_instance + 8 * v8 + 104) < 2 )
          return 1;
      }
    }
    else
    {
      v5 = FIELD_U8(a1, 84);
      v6 = 0;
      result = 0;
      if ( v5 < 4 )
        v6 = (char)v5;
      if ( *(int *)(EnemyCounterMaybe_instance + 8 * v6 + 136) <= 1 )
        return 1;
    }
  }
  return result;
}
