/* sub_602FE35C
 * address: 0x602FE35C   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602FE35C(int a1)
{
  int result; // r0

  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    if ( Actor__getProfileId((Actor *)a1) == 493 )
      FIELD_U32(a1, 8512) = 1;
    if ( Actor__getProfileId((Actor *)a1) == 494 )
    {
      FIELD_U32(a1, 500) = 1111490560;
      FIELD_U32(a1, 504) = 1117782016;
      FIELD_U32(a1, 508) = 1107296256;
      FIELD_U32(a1, 512) = 1117782016;
    }
  }
  result = (FIELD_U32(a1, 20) >> 28) & 1;
  FIELD_U32(a1, 13988) = result;
  if ( result )
  {
    FIELD_U32(a1, 8484) = 0;
    FIELD_U32(a1, 164) = 0;
    FIELD_U32(a1, 100) = -1103101952;
    FIELD_U32(a1, 132) = 0;
    FIELD_U32(a1, 128) = 0;
    FIELD_U32(a1, 124) = 0;
    FIELD_U32(a1, 120) = 0;
    FIELD_U32(a1, 136) = -1065353216;
    FIELD_U32(a1, 140) = 0;
    return -1065353216;
  }
  return result;
}
