/* sub_6066A8D0
 * address: 0x6066A8D0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066A8D0(int a1)
{
  int v2; // r0
  float v3; // s0
  int result; // r0

  FIELD_U8(a1, 7200) = 0;
  if ( FIELD_U8(a1, 7201) )
  {
    v2 = FIELD_U32(dword_60C99DD4, 1052);
    FIELD_F32(a1, 7192) = (float)(*(float *)((char *)sinLutTable + ((v2 << 8) & 0xF00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 8) & 0xF00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    v3 = (float)(*(float *)((char *)sinLutTable + ((v2 << 9) & 0xE00))
               + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 9) & 0xE00)) * 0.0) * 0.000000059605))
       * 0.5;
  }
  else
  {
    v3 = 0.0;
    FIELD_U32(a1, 7192) = 0;
  }
  FIELD_F32(a1, 7196) = v3;
  sub_6066A9C4(a1);
  result = sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66));
  if ( !result )
    return sub_606D27A4(a1);
  return result;
}
