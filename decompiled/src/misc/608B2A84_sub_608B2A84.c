/* sub_608B2A84
 * address: 0x608B2A84   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B2A84(int a1, unsigned int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r6
  unsigned int *v7; // r0
  int v9; // r0
  int v10; // r1

  if ( HIBYTE(a2) == 3 )
  {
    v9 = sub_608B17A0(FIELD_U32(a1, 60), a2);
    v10 = FIELD_U32(v9, 8);
  }
  else
  {
    if ( HIBYTE(a2) == 2 )
    {
      v7 = (unsigned int *)sub_608B181C(FIELD_U32(a1, 60), a2);
    }
    else
    {
      v4 = 0;
      if ( HIBYTE(a2) != 1 )
        return v4;
      v5 = sub_608B175C(FIELD_U32(a1, 60), a2);
      if ( sub_608B1A60(v5) != 3 || !*(_DWORD *)sub_608B1854(FIELD_U32(a1, 60)) )
        return v4;
      v6 = 0;
      while ( 1 )
      {
        v7 = (unsigned int *)sub_608B181C(FIELD_U32(a1, 60), v6 | 0x2000000);
        if ( *v7 <= a2 && v7[1] >= a2 )
          break;
        if ( (unsigned int)++v6 >= *(_DWORD *)sub_608B1854(FIELD_U32(a1, 60)) )
          return 0;
      }
    }
    v9 = (int)v7 + v7[5];
    v10 = FIELD_U32(v9, 4);
  }
  return v9 + v10;
}
