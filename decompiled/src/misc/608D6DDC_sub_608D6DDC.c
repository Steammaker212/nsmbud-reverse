/* sub_608D6DDC
 * address: 0x608D6DDC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608D6DDC(_DWORD *a1, int a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r0

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( *(_DWORD *)a2 == 1363497798
    && FIELD_U16(a2, 4) == 65279
    && (unsigned int)(FIELD_U32(a2, 8) - 0x10000) <= 0x10000 )
  {
    *a1 = a2;
    v3 = (_DWORD *)sub_608DA090(a2);
    if ( *v3 == 1096040772 )
    {
      v4 = (_DWORD *)sub_608DA0E0(*a1);
      if ( *v4 == 1279410508 )
      {
        a1[1] = v3 + 2;
        a1[2] = v4 + 2;
      }
    }
  }
  return a1;
}
