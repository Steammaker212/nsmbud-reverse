/* sub_60157050
 * address: 0x60157050   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60157050(int a1, int a2)
{
  int v3; // r4
  int v4; // r6

  v3 = FIELD_U32(a1, 4);
  if ( (*(_BYTE *)a2 & 1) == 0
    || sub_6014FD40(v3, FIELD_U32(a2, 32), 0) != 1
    || (v4 = 1, !sub_60151114(v3, *(_DWORD **)(a2 + 32), 0)) )
  {
    if ( (*(_BYTE *)a2 & 2) == 0
      || (v4 = 1, sub_6014FD40(v3, FIELD_U32(a2, 32), 1) != 1)
      || !sub_60151114(v3, *(_DWORD **)(a2 + 32), 1) )
    {
      if ( (*(_BYTE *)a2 & 4) == 0
        || sub_6014FD40(v3, FIELD_U32(a2, 32), 2) != 1
        || (v4 = 1, !sub_60151114(v3, *(_DWORD **)(a2 + 32), 2)) )
      {
        if ( (*(_BYTE *)a2 & 8) != 0 && sub_6014FD40(v3, FIELD_U32(a2, 32), 3) == 1 )
          return sub_60151114(v3, *(_DWORD **)(a2 + 32), 3);
        return 0;
      }
    }
  }
  return v4;
}
