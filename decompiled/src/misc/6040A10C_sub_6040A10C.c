/* sub_6040A10C
 * address: 0x6040A10C   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6040A10C(signed int result)
{
  _BYTE *v1; // r1
  int v2; // r2
  bool v3; // zf
  unsigned int v4; // r2
  _DWORD *v5; // r3
  char v6; // lr

  v1 = (_BYTE *)(result + 6559);
  if ( FIELD_U8(result, 6559) == 1 && FIELD_U8(result, 6476) == 3 )
  {
    v2 = FIELD_S8(result, 6479);
    v3 = v2 == 3;
    if ( v2 != 3 )
      v3 = v2 == -1;
    if ( v3 && FIELD_U8(result, 6480) && (v2 < 0 || v2 == 3) )
    {
      v4 = FIELD_U8(result, 6481);
      FIELD_U32(result, 6504) = v4;
      v5 = *(_DWORD **)(result + 6472);
      if ( v5 && ((v6 = 2, v5[23] <= v4) || (v6 = 1, v5[22] <= v4) || (v6 = 0, v5[21] <= v4)) )
      {
        *v1 = 2;
        FIELD_U8(result, 6560) = v6;
      }
      else
      {
        result = 3;
        *v1 = 3;
      }
    }
  }
  return result;
}
