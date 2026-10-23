/* sub_60675E24
 * address: 0x60675E24   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60675E24(int a1)
{
  int v1; // r1
  float v2; // s0

  if ( FIELD_U8(a1, 6914) )
  {
    v1 = FIELD_U32(dword_60C99DD4, 1052);
    FIELD_F32(a1, 6920) = (float)(*(float *)((char *)sinLutTable + ((v1 << 9) & 0xE00))
                                  + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v1 << 9) & 0xE00)) * 0.0)
                                          * 0.000000059605))
                          * 0.5;
    v2 = (float)(*(float *)((char *)sinLutTable + ((v1 << 10) & 0xC00))
               + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v1 << 10) & 0xC00)) * 0.0) * 0.000000059605))
       * 0.8;
  }
  else
  {
    v2 = 0.0;
    FIELD_U32(a1, 6920) = 0;
  }
  FIELD_F32(a1, 6924) = v2;
  return sub_60675C18(a1);
}
