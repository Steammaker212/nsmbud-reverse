/* sub_601DA918
 * address: 0x601DA918   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DA918(_DWORD *a1)
{
  int v2; // r5
  int result; // r0
  unsigned int v4; // r6

  v2 = sub_601A443C(dword_60C89E18, 4, 1);
  result = FIELD_U32(v2, 32);
  if ( result >= 1 )
  {
    v4 = 0;
    while ( !sub_60183038(v2, v4, 0x10000000) )
    {
      result = FIELD_U32(v2, 32);
      if ( (int)++v4 >= result )
        return result;
    }
    *a1 = 4;
    a1[1] = 1;
    a1[2] = v4;
    return 4;
  }
  return result;
}
