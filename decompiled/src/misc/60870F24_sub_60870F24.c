/* sub_60870F24
 * address: 0x60870F24   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60870F24(int a1, _DWORD *a2)
{
  int v3; // r6
  int v4; // r2
  __int16 v5; // r0
  int v6; // r7

  v3 = 0;
  v4 = *(_DWORD *)(FIELD_U32(a1, 24) + dword_60BF9D80[0]);
  if ( v4 && !sub_6083B4F8(FIELD_U32(v4, 104), a2, v4) )
  {
    v3 = 1;
    FIELD_U16(a1, 44) |= 6u;
  }
  v5 = FIELD_U16(a1, 44);
  if ( (v5 & 2) != 0 )
  {
    v6 = FIELD_U32(a1, 24);
    if ( (v5 & 4) != 0 )
    {
      sub_6083BD18(*(_DWORD *)(*(_DWORD *)(v6 + dword_60BF9D80[0]) + 104));
      v5 = FIELD_U16(a1, 44);
    }
    if ( (v5 & 0x10) != 0 )
    {
      sub_6083BD18(*(_DWORD *)(*(_DWORD *)(v6 + dword_60BF9D84) + 104));
      v5 = FIELD_U16(a1, 44);
    }
    if ( (v5 & 8) != 0 )
      sub_6083BD18(*(_DWORD *)(*(_DWORD *)(v6 + dword_60BF9D88) + 104));
  }
  FIELD_U16(a1, 44) = 0;
  return v3;
}
