/* KoopaTroopa_onDelete_helper
 * address: 0x604093B8   size: 256   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_onDelete_helper(int result)
{
  _BYTE *v1; // r1
  int v2; // r2
  unsigned int v3; // r2
  _DWORD *v4; // r3
  char v5; // lr

  v1 = (_BYTE *)(result + 6559);
  if ( FIELD_U8(result, 6559) == 1 )
  {
    v2 = FIELD_U8(result, 6476);
    if ( v2 == 3 )
    {
      if ( FIELD_U8(result, 6479) != 3 )
        return result;
      v3 = FIELD_U8(result, 6481);
      FIELD_U32(result, 6504) = v3;
      v4 = *(_DWORD **)(result + 6472);
      if ( v4 )
      {
        v5 = 2;
        if ( v4[23] <= v3 )
        {
LABEL_15:
          *v1 = 2;
          FIELD_U8(result, 6560) = v5;
          return result;
        }
        goto LABEL_11;
      }
LABEL_13:
      result = 3;
      *v1 = 3;
      return result;
    }
    if ( v2 == 1 && FIELD_U8(result, 6478) == 4 )
    {
      v3 = FIELD_U32(dword_60C99DD4, 724);
      FIELD_U32(result, 6504) = v3;
      v4 = *(_DWORD **)(result + 6472);
      if ( v4 )
      {
        v5 = 2;
        if ( v4[23] <= v3 )
          goto LABEL_15;
LABEL_11:
        v5 = 1;
        if ( v4[22] <= v3 )
          goto LABEL_15;
        v5 = 0;
        if ( v4[21] <= v3 )
          goto LABEL_15;
        goto LABEL_13;
      }
      goto LABEL_13;
    }
  }
  return result;
}
