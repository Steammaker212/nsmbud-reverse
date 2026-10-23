/* sub_6064BC80
 * address: 0x6064BC80   size: 720   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6064BC80(int a1, int a2)
{
  float v4; // s0
  float v5; // s2
  float v6; // s20
  float v7; // s18
  int v8; // r0
  float v9; // s0
  float *v10; // r6
  float v11; // s0
  int v12; // r7
  float v13; // s0
  float v14; // s2
  int v15; // r0
  float v16; // s0

  v4 = FIELD_F32(a1, 112);
  v5 = FIELD_F32(dword_60CC6484, 124);
  if ( v5 < (float)(v4 + -18.0) || (float)(v5 - FIELD_F32(dword_60CC6484, 108)) > (float)(v4 + 18.0) )
  {
    if ( Actor__getProfileId((Actor *)a1) != 361 )
    {
      v6 = FIELD_F32(dword_60CC6484, 124);
      v7 = FIELD_F32(dword_60CC6484, 108);
      if ( v6 < (float)(FIELD_F32(a1, 112) + -18.0) )
      {
        FIELD_F32(a1, 112) = v6 + 18.0;
        FIELD_U32(a1, 584) = FIELD_U32(a1, 108);
        FIELD_F32(a1, 588) = v6 + 18.0;
        FIELD_U32(a1, 592) = FIELD_U32(a1, 116);
        sub_60160948((_DWORD *)(a1 + 6104));
      }
      v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7316));
      if ( v8 )
      {
        if ( (float)(v6 - v7) > (float)(FIELD_F32(a1, 112) + 18.0) )
        {
          v9 = (float)(v6 - v7) + -18.0;
          if ( v9 < (float)(FIELD_F32(v8, 112) + -64.0) )
          {
            FIELD_F32(a1, 112) = v9;
            FIELD_U32(a1, 584) = FIELD_U32(a1, 108);
            FIELD_F32(a1, 588) = v9;
            FIELD_U32(a1, 592) = FIELD_U32(a1, 116);
            sub_60160948((_DWORD *)(a1 + 6104));
          }
        }
      }
      if ( a2 == 1 )
        FIELD_U32(a1, 7400) = 1;
    }
    return;
  }
  if ( a2 == 1 && !FIELD_U32(a1, 7400) && fabsf(sub_6064BA14() - FIELD_F32(a1, 112)) < 32.0 )
    return;
  v10 = (float *)(a1 + 7384);
  v11 = sub_6064BA14();
  FIELD_F32(a1, 7384) = v11;
  if ( v11 == 0.0 )
    return;
  v12 = 0;
  v13 = v11 + 16.0;
  *v10 = v13;
  if ( (unsigned int)FIELD_U8(a1, 7259) - 1 < 2 )
  {
    v14 = FIELD_F32(a1, 7324);
    if ( v13 <= v14 )
      goto LABEL_22;
LABEL_21:
    v12 = 1;
    *v10 = v14;
    goto LABEL_22;
  }
  if ( !FIELD_U8(a1, 7259) )
  {
    v14 = FIELD_F32(a1, 7324);
    if ( v13 < v14 )
      goto LABEL_21;
  }
LABEL_22:
  v15 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 7316));
  if ( v15 )
  {
    v16 = FIELD_F32(v15, 112) + -64.0;
    if ( *v10 >= v16 )
      *v10 = v16;
    FIELD_U32(a1, 7400) = 0;
    if ( a2 != 1 || !v12 || !FIELD_U8(dword_60CC6D8C, 17) || Actor__getProfileId((Actor *)a1) != 361 )
      FIELD_U8(a1, 7258) = 2;
  }
}
