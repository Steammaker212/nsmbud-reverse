/* sub_6020CF60
 * address: 0x6020CF60   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6020CF60(int result)
{
  int v1; // lr
  int v2; // r2
  int v3; // r12
  unsigned int v4; // r3
  _DWORD *v5; // r2

  FIELD_U32(result, 200) = 1092616192;
  if ( !FIELD_U8(result, 454) )
  {
    v1 = dword_60C8A8C0;
    v2 = FIELD_U32(dword_60C8A8C0, 176);
    if ( v2 >= 0 )
    {
      v3 = v2 + 1;
      v4 = 0;
      do
      {
        v5 = 0;
        if ( FIELD_U32(v1, 36) > v4 )
          v5 = *(_DWORD **)(FIELD_U32(v1, 44) + 4 * v4);
        if ( v5[24] == FIELD_U32(result, 248) )
        {
          FIELD_U32(result, 444) = v4;
          FIELD_U32(result, 392) = v5[18];
          FIELD_U32(result, 396) = v5[19];
          FIELD_U32(result, 400) = v5[20];
        }
        ++v4;
      }
      while ( v3 != v4 );
    }
  }
  FIELD_U32(result, 204) = -1088841318;
  return result;
}
