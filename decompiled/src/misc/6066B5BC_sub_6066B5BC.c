/* sub_6066B5BC
 * address: 0x6066B5BC   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066B5BC(int a1)
{
  int v2; // r0
  float v3; // s0

  sub_6066B694();
  if ( FIELD_U8(a1, 6912) || FIELD_U8(a1, 6936) )
  {
    v2 = FIELD_U32(dword_60C99DD4, 1052);
    FIELD_F32(a1, 6924) = (float)(*(float *)((char *)sinLutTable + ((v2 << 9) & 0xE00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 9) & 0xE00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    v3 = (float)(*(float *)((char *)sinLutTable + ((v2 << 10) & 0xC00))
               + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v2 << 10) & 0xC00)) * 0.0) * 0.000000059605))
       * 0.5;
  }
  else
  {
    v3 = 0.0;
    FIELD_U32(a1, 6924) = 0;
  }
  FIELD_F32(a1, 6928) = v3;
  return sub_6066B39C(a1);
}
