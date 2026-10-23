/* sub_60409CC8
 * address: 0x60409CC8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60409CC8(int result)
{
  _BYTE *v1; // r1
  int v2; // r2
  int v3; // r2
  unsigned int v4; // r2
  _DWORD *v5; // r3
  char v6; // lr

  v1 = (_BYTE *)(result + 6559);
  if ( FIELD_U8(result, 6559) == 1 )
  {
    if ( FIELD_U8(result, 6537) )
    {
LABEL_3:
      result = 3;
      *v1 = 3;
      return result;
    }
    v2 = FIELD_U8(result, 6476);
    if ( v2 == 7 )
    {
      v4 = FIELD_U8(result, 6478);
      FIELD_U32(result, 6504) = v4;
      v5 = *(_DWORD **)(result + 6472);
      if ( !v5 )
        goto LABEL_3;
      v6 = 2;
      if ( v5[23] <= v4 )
        goto LABEL_16;
      goto LABEL_14;
    }
    if ( v2 == 3 )
    {
      v3 = FIELD_S8(result, 6479);
      if ( v3 < 0 || v3 == 5 )
      {
        v4 = FIELD_U8(result, 6481);
        FIELD_U32(result, 6504) = v4;
        v5 = *(_DWORD **)(result + 6472);
        if ( !v5 )
          goto LABEL_3;
        v6 = 2;
        if ( v5[23] <= v4 )
        {
LABEL_16:
          *v1 = 2;
          FIELD_U8(result, 6560) = v6;
          return result;
        }
LABEL_14:
        v6 = 1;
        if ( v5[22] > v4 )
        {
          v6 = 0;
          if ( v5[21] > v4 )
            goto LABEL_3;
        }
        goto LABEL_16;
      }
    }
  }
  return result;
}
