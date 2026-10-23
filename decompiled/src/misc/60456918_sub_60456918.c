/* sub_60456918
 * address: 0x60456918   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60456918(int a1)
{
  unsigned __int16 v2; // r1
  int v3; // r0
  unsigned __int16 v4; // r5
  int result; // r0

  v2 = FIELD_U16(a1, 220);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = FIELD_U32(a1, 12);
      if ( (unsigned int)(FIELD_U32(v3, 28) + 2) >= 0xD2F82 )
        break;
      if ( v2 >= 0x7FFFu )
        v2 = 0x7FFF;
      v4 = v2;
      sub_60905584(v3, v2 | 0x8000);
      v2 = FIELD_U16(a1, 220) - v4;
      FIELD_U16(a1, 220) = v2;
      if ( !v2 )
        goto LABEL_8;
    }
    FIELD_U16(a1, 220) = 0;
  }
LABEL_8:
  sub_60905584(FIELD_U32(a1, 12), 16);
  sub_609056F0(FIELD_U32(a1, 12));
  sub_60833664(FIELD_U32(a1, 8), *(_DWORD *)(FIELD_U32(a1, 12) + 28) + 4);
  sub_609052FC(FIELD_U32(a1, 12), 4);
  result = *(_DWORD *)(FIELD_U32(a1, 12) + 28);
  FIELD_U32(dword_60CC6D78, 132) = result;
  return result;
}
