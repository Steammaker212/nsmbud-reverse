/* SE_OBJ_PNGN_ICE_BREAK_ref_61E968
 * address: 0x6061E968   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall SE_OBJ_PNGN_ICE_BREAK_ref_61E968(int a1)
{
  float v2; // r1
  int v3; // r5
  float v4; // s2
  float v5; // s0
  unsigned int U32; // r0
  Vec3 position; // [sp+4h] [bp-24h] BYREF
  Vec2 out; // [sp+10h] [bp-18h] BYREF

  if ( FIELD_U32(a1, 1312) )
    sub_6061EA58(a1);
  v2 = FIELD_F32(a1, 112);
  v3 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v2;
  mapPositionToScreen(&out, &position);
  BasicSoundActor2_play(v3, "SE_OBJ_PNGN_ICE_BREAK", &out.x, 0);
  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(a1, 1320);
  position.x = FIELD_F32(a1, 108);
  position.y = v4 + (float)(v5 * 0.5);
  position.z = 400.0;
  U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
  IceFragmentHeap_ref_3EE1B0((sead_ListNode *)dword_60C99CDC, (int)&position, (U32 >> 31) | 0x20, (int)&dword_60B3B98C);
  return StageActor__delete((StateActor *)a1, 1);
}
