/* sub_60871534
 * address: 0x60871534   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60871534(int a1)
{
  int v2; // r6
  int v3; // r7
  int v4; // r8
  __int16 v5; // r0
  int v6; // r9
  int FirstBlock; // r0

  v2 = FIELD_U16(a1, 216);
  if ( FIELD_U16(a1, 216) )
  {
    v3 = 0;
    do
    {
      v4 = FIELD_U32(a1, 120) + v3;
      v5 = FIELD_U16(v4, 44);
      if ( (v5 & 2) != 0 )
      {
        v6 = FIELD_U32(v4, 24);
        if ( (v5 & 4) != 0 )
        {
          sub_6083BD18(*(_DWORD *)(*(_DWORD *)(v6 + dword_60BF9D80[0]) + 104));
          v5 = FIELD_U16(v4, 44);
        }
        if ( (v5 & 0x10) != 0 )
        {
          sub_6083BD18(*(_DWORD *)(*(_DWORD *)(v6 + dword_60BF9D84) + 104));
          v5 = FIELD_U16(v4, 44);
        }
        if ( (v5 & 8) != 0 )
          sub_6083BD18(*(_DWORD *)(*(_DWORD *)(v6 + dword_60BF9D88) + 104));
      }
      v3 += 56;
      --v2;
      FIELD_U16(v4, 44) = 0;
    }
    while ( v2 );
  }
  FirstBlock = nn__util__BinaryFileHeader__GetFirstBlock(*(nn__util__BinaryFileHeader **)(a1 + 152));
  sub_6083B278(FirstBlock);
  FIELD_U32(a1, 160) = 0;
  return 0;
}
