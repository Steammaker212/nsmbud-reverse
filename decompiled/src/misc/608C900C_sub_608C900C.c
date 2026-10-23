/* sub_608C900C
 * address: 0x608C900C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C900C(_DWORD *a1)
{
  int result; // r0
  int v3; // r2

  result = 0;
  v3 = a1[2];
  if ( v3 < a1[4] )
  {
    a1[2] = v3 + 1;
    result = *(_DWORD *)(a1[1] + 4 * v3);
    *(_DWORD *)(a1[3] + 4 * ((unsigned int)(result - *a1) >> 8)) = v3;
    FIELD_U8(result, 36) = 1;
    FIELD_U32(result, 160) = 0;
    FIELD_U32(result, 200) = 0;
    FIELD_U32(result, 168) = 32000;
    FIELD_U32(result, 172) = 1;
    FIELD_U32(result, 176) = 0;
    FIELD_U32(result, 180) = 0;
  }
  return result;
}
