/* sub_6040A1D8
 * address: 0x6040A1D8   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040A1D8(int result)
{
  _BYTE *v1; // r1
  int v2; // r2
  unsigned int v3; // r2
  _DWORD *v4; // r3
  char v5; // lr

  v1 = (_BYTE *)(result + 6559);
  if ( FIELD_U8(result, 6559) == 1 && FIELD_U8(result, 6476) == 3 )
  {
    if ( FIELD_U8(result, 6480) )
    {
      v2 = FIELD_S8(result, 6479);
      if ( v2 < 0 || v2 == 5 )
      {
        v3 = FIELD_U8(result, 6481);
        FIELD_U32(result, 6504) = v3;
        v4 = *(_DWORD **)(result + 6472);
        if ( v4 && ((v5 = 2, v4[23] <= v3) || (v5 = 1, v4[22] <= v3) || (v5 = 0, v4[21] <= v3)) )
        {
          *v1 = 2;
          FIELD_U8(result, 6560) = v5;
        }
        else
        {
          result = 3;
          *v1 = 3;
        }
      }
    }
  }
  return result;
}
