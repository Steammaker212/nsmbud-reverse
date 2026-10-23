/* sub_6040B3B0
 * address: 0x6040B3B0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040B3B0(_BYTE *a1, int a2)
{
  int result; // r0
  int v4; // t1
  bool v5; // zf

  v4 = (unsigned __int8)a1[6559];
  result = (int)(a1 + 6559);
  v5 = v4 == 1;
  if ( v4 == 1 )
    v5 = a2 == 1;
  if ( v5 )
  {
    if ( a1[6519] )
    {
      sub_6040ACD4((int)a1, FIELD_U32(dword_60C99DD4, 724));
      a1[6523] = 0;
      return 6523;
    }
    else
    {
      *(_BYTE *)result = 3;
    }
  }
  return result;
}
