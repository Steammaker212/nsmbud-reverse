/* sub_600BB404
 * address: 0x600BB404   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600BB404(int a1)
{
  float v2; // s0
  float v3; // s0
  StateMethodExecuter *result; // r0
  int v5; // r1
  int a5; // [sp+0h] [bp-18h] BYREF
  int target[5]; // [sp+4h] [bp-14h] BYREF

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6188));
  target[0] = 0x80000000;
  a5 = FIELD_U32(a1, 6164);
  moveValueTo((int *)(a1 + 160), target, &a5);
  target[0] = 0;
  a5 = FIELD_U32(a1, 6168);
  moveValueTo((int *)(a1 + 164), target, &a5);
  v2 = FIELD_F32(a1, 6152) + FIELD_F32(a1, 120);
  FIELD_F32(a1, 120) = v2;
  FIELD_F32(a1, 108) = v2 + FIELD_F32(a1, 108);
  v3 = FIELD_F32(a1, 6156) + FIELD_F32(a1, 124);
  FIELD_F32(a1, 124) = v3;
  FIELD_F32(a1, 112) = v3 + FIELD_F32(a1, 112);
  target[0] = 0;
  a5 = FIELD_U32(a1, 6160);
  moveValueTo((int *)(a1 + 6196), target, &a5);
  FIELD_F32(a1, 116) = FIELD_F32(a1, 6208)
                       - (float)(FIELD_F32(a1, 6120)
                               * (float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 6196) >> 20) & 0xFF0))
                                       + (float)((float)((float)(FIELD_U32(a1, 6196) & 0xFFFFFF)
                                                       * *(float *)((char *)&sinLutTable[1]
                                                                  + ((FIELD_U32(a1, 6196) >> 20) & 0xFF0)))
                                               * 0.000000059605)));
  result = (StateMethodExecuter *)(a1 + 6192);
  v5 = FIELD_U32(a1, 6192);
  if ( !v5 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C836FC);
  FIELD_U32(result, 0x0) = (void *)(v5 - 1);
  return result;
}
