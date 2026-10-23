/* sub_606DA7B0
 * address: 0x606DA7B0   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DA7B0(int result)
{
  int v1; // r1
  float v2; // s2
  int v3; // r1

  v1 = FIELD_U32(result, 6504);
  if ( v1 <= 11 )
    FIELD_U8(result, 6553) = 1;
  FIELD_U32(result, 6436) = FIELD_U32(result, 108);
  v2 = FIELD_F32(result, 116) + 100.0;
  FIELD_F32(result, 6440) = FIELD_F32(result, 112) + 20.0;
  FIELD_F32(result, 6444) = v2;
  FIELD_U32(result, 6448) = 0;
  FIELD_U32(result, 6452) = 1082130432;
  FIELD_U32(result, 6456) = 0;
  if ( v1 != 10 )
  {
    result = dword_60B08FC4[v1];
    v3 = dword_60C99DD4;
    FIELD_U32(dword_60C99DD4, 740) = result;
    FIELD_U32(v3, 760) = 0;
  }
  return result;
}
