/* sub_60972444
 * address: 0x60972444   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60972444(unsigned __int16 *a1)
{
  int result; // r0
  _DWORD v3[36]; // [sp+0h] [bp-90h] BYREF

  dword_60CC72BC(FIELD_U32(dword_60CCFC8C, 28), 57, v3);
  *((_DWORD *)a1 + 7) = (v3[0] + *((unsigned __int8 *)a1 + 27) * *a1 - 1) & -v3[0];
  sub_60972534(a1, v3);
  a1[12] = dword_60CC74E0(v3);
  *((_DWORD *)a1 + 4) = dword_60CC74C4(v3);
  *((_DWORD *)a1 + 3) = dword_60CC74C8(v3);
  result = FIELD_U8(dword_60CCFC8C, 824);
  if ( (result & 1) != 0 )
    return dword_60CC74E4(v3);
  return result;
}
