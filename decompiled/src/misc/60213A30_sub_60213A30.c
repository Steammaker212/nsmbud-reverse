/* sub_60213A30
 * address: 0x60213A30   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_60213A30(int a1)
{
  unsigned int v2; // r0
  float v3; // s0

  ((void (*)(void))loc_6021508C)();
  if ( !FIELD_U32(a1, 452) )
  {
    v2 = FIELD_U32(a1, 428) + 0x2000000;
    FIELD_U32(a1, 428) = v2;
    v3 = (float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
               + (float)((float)((float)(v2 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                       * 0.000000059605))
       * 12.0;
    FIELD_F32(a1, 432) = v3;
    FIELD_F32(a1, 84) = FIELD_F32(a1, 404) + v3;
  }
  return sub_60177448((_DWORD *)dword_60C88E60, a1 + 324);
}
