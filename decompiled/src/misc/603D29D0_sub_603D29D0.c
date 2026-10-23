/* sub_603D29D0
 * address: 0x603D29D0   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_603D29D0(int a1)
{
  int v2; // r6
  float *v3; // r5
  float v4; // s18
  char U32; // r0
  float v6; // s20
  float v7; // s2
  float v8; // s18
  int v9; // r0
  int v10; // r1
  float v11; // s16
  int ProfileId; // r0
  int *v13; // r2
  _DWORD v15[21]; // [sp+4h] [bp-54h] BYREF

  v2 = 0;
  v3 = (float *)dword_60CC6484;
  v4 = FIELD_F32(dword_60CC6484, 116);
  if ( (float)(v4 + (float)((float)(FIELD_F32(dword_60CC6484, 56) + FIELD_F32(dword_60CC6484, 64)) * -0.5)) <= 1.0 )
  {
    U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
    v4 = v3[29];
    v2 = U32 & 1;
  }
  v6 = v3[33] + -16.0;
  v7 = FIELD_F32(EnemyCounterMaybe_instance, 16);
  v8 = v4 + (float)((float)((float)(v3[26] * 0.5) * 0.5) * (float)byte_60B011DC[v2]);
  if ( v7 == -8000.0 || v8 < (float)(v7 + -128.0) )
  {
    v11 = sub_60007178(dword_60C7B3F8);
  }
  else
  {
    v9 = FIELD_U32(a1, 668);
    v10 = v9 + 1;
    if ( v9 > 6 )
      v10 = 0;
    FIELD_U32(a1, 668) = v10;
    v11 = (float)((float)v9 * -16.0) + 5000.0;
  }
  memset(&v15[1], 0, 40);
  v15[0] = (v2 << 28) ^ 0x10000000;
  ProfileId = Actor__getProfileId((Actor *)a1);
  v13 = &dword_60AF3598;
  if ( ProfileId == 546 )
    v13 = &dword_60AF359C;
  v15[3] = Profile__get(*v13);
  *(float *)&v15[4] = v8;
  *(float *)&v15[5] = v6;
  *(float *)&v15[6] = v11;
  return sub_600080BC((_DWORD *)ActorMgr__instance, v15);
}
