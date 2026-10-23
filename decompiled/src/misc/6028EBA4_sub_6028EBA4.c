/* sub_6028EBA4
 * address: 0x6028EBA4   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6028EBA4(int a1)
{
  int v2; // r0
  float v3; // s0
  float v4; // s2
  float v5; // s4
  StateMethodExecuter *result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 40));
  v2 = FIELD_U32(a1, 108);
  v3 = FIELD_F32(v2, 1729200)
     + (float)((float)((float)(FIELD_F32(v2, 1729192) * -12.5) - (float)(FIELD_F32(v2, 1729188) * 67.5))
             + (float)(FIELD_F32(v2, 1729196) * 0.0));
  v4 = FIELD_F32(v2, 1729216)
     + (float)((float)((float)(FIELD_F32(v2, 1729208) * -12.5) - (float)(FIELD_F32(v2, 1729204) * 67.5))
             + (float)(FIELD_F32(v2, 1729212) * 0.0));
  v5 = FIELD_F32(v2, 1729232)
     + (float)((float)((float)(FIELD_F32(v2, 1729224) * -12.5) - (float)(FIELD_F32(v2, 1729220) * 67.5))
             + (float)(FIELD_F32(v2, 1729228) * 0.0));
  FIELD_F32(a1, 112) = v3;
  FIELD_F32(a1, 116) = v4;
  FIELD_F32(a1, 120) = v5;
  FIELD_F32(a1, 56) = v4;
  FIELD_F32(a1, 60) = v5;
  FIELD_F32(a1, 52) = v3 + FIELD_F32(a1, 124);
  result = *(StateMethodExecuter **)(v2 + 1724984);
  if ( (int)result >= 3353 )
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&unk_60C8F774);
  return result;
}
