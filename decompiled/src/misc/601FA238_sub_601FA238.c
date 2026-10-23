/* sub_601FA238
 * address: 0x601FA238   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FA238(int a1, int *a2, int a3, int a4)
{
  int v7; // r4
  int v8; // r7
  unsigned int v9; // r4

  v7 = 0;
  v8 = sub_601A443C(dword_60C89E18, a4, 0);
  if ( FIELD_S32(v8, 28) >= 1 )
  {
    v9 = 0;
    while ( !sub_60183054(v8, v9, a3) )
    {
      if ( (signed int)++v9 >= FIELD_U32(v8, 28) )
        return 0;
    }
    *a2 = a4;
    a2[1] = 0;
    a2[2] = v9;
    return 1;
  }
  return v7;
}
