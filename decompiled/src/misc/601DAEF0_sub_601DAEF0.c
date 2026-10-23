/* sub_601DAEF0
 * address: 0x601DAEF0   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DAEF0(int *a1)
{
  int v2; // r5
  int result; // r0
  unsigned int v4; // r6

  v2 = sub_601A443C(dword_60C89E18, *a1, a1[1]);
  result = FIELD_U32(v2, 32);
  if ( result >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      result = sub_60183070(v2, v4, 2);
      if ( result )
        break;
      result = FIELD_U32(v2, 32);
      if ( (int)++v4 >= result )
        return result;
    }
    a1[2] = v4;
  }
  return result;
}
