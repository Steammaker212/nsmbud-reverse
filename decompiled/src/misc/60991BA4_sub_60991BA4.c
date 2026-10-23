/* sub_60991BA4
 * address: 0x60991BA4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60991BA4(int result)
{
  int v1; // r12
  int v2; // r2
  int v3; // r1
  int v4; // r1
  int v5; // r12
  int v6; // r2

  if ( (FIELD_U16(result, 30) & 0x14) == 0x14 )
  {
    v1 = FIELD_U32(result, 36);
    v2 = 0;
    while ( v2 < v1 )
    {
      v3 = *(unsigned __int8 *)(result + 32 + v2++);
      if ( v3 == 2 )
        goto LABEL_8;
    }
    if ( v1 > 3 )
      goto LABEL_9;
    *(_BYTE *)(result + v1 + 32) = 2;
    v2 = FIELD_U32(result, 36) + 1;
LABEL_8:
    FIELD_U32(result, 36) = v2;
LABEL_9:
    v4 = result + 20;
    if ( FIELD_U32(result, 24) == result + 20 )
    {
      v5 = FIELD_U32(result, 20);
      v6 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(result, 16) + 72) + 28);
      FIELD_U32(result, 20) = v6 + 12;
      FIELD_U32(v5, 4) = FIELD_U32(v6, 16);
      result = FIELD_U32(v6, 16);
      *(_DWORD *)result = v5;
      FIELD_U32(v6, 16) = v4;
    }
  }
  return result;
}
