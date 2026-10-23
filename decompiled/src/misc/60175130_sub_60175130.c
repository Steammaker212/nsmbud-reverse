/* sub_60175130
 * address: 0x60175130   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60175130(int a1)
{
  unsigned int v2; // r0
  float v3; // s0
  int v4; // r5

  ((void (*)(void))loc_60176120)();
  if ( !FIELD_U32(a1, 608) )
  {
    v2 = FIELD_U32(a1, 588) + 0x2000000;
    FIELD_U32(a1, 588) = v2;
    v3 = (float)(*(float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0))
               + (float)((float)((float)(v2 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v2 >> 20) & 0xFF0)))
                       * 0.000000059605))
       * 12.0;
    FIELD_F32(a1, 592) = v3;
    FIELD_F32(a1, 84) = FIELD_F32(a1, 508) + v3;
  }
  v4 = dword_60C8996C;
  if ( sub_60190968(dword_60C8996C) == 1 && FIELD_U8(v4, 1384) && sub_601916EC(v4) == 39 && sub_6019112C(v4) == 58 )
    StateMgr__changeState((StateMgr *)(a1 + 284), (StateBase *)&dword_60C88CD8);
  return sub_60177448(dword_60C88E60, a1 + 324);
}
