/* sub_601E0A30
 * address: 0x601E0A30   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E0A30(_DWORD *a1)
{
  int v2; // r6
  int v3; // r5
  unsigned int v4; // r6

  v2 = 0;
  *a1 = 7;
  a1[1] = 0;
  v3 = sub_601A443C(dword_60C89E18, 7, 0);
  if ( FIELD_S32(v3, 32) >= 1 )
  {
    v4 = 0;
    while ( !sub_60183054(v3, v4, 0x80000000) )
    {
      if ( (signed int)++v4 >= FIELD_U32(v3, 32) )
        return 0;
    }
    a1[2] = v4;
    return 1;
  }
  return v2;
}
