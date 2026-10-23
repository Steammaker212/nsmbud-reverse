/* sub_607089F0
 * address: 0x607089F0   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607089F0(_DWORD *a1)
{
  _DWORD *v2; // r4

  if ( (a1[1751] | 2) == 2 )
  {
    SE_OBJ_WOOD_BOX_BREAK_ref_2(a1, 0);
  }
  else
  {
    a1[1777] = 1074580685;
    v2 = a1 + 1777;
    a1[1778] = 1084647014;
    a1[1779] = 1066192077;
    a1[1780] = 1053609165;
    a1[1781] = 1028443341;
    a1[1782] = 1050253722;
    sub_608337AC(a1 + 1777, 2.0);
    v2[6] = (20 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32;
  }
  return 1;
}
