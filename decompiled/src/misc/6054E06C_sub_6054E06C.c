/* sub_6054E06C
 * address: 0x6054E06C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6054E06C(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(a1 + 40);
  if ( (*(_BYTE *)(sub_6047482C(a1 + 40, 2u) + 51) & 1) != 0 )
    sub_60473DE4(v2, 2u, &dword_60CACBE4, 1);
  if ( dword_60CC6484 )
    FIELD_F32(a1, 3788) = FIELD_F32(dword_60CC6484, 124) + 320.0;
  return sub_6054F09C(a1);
}
