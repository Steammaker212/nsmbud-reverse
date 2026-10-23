/* sub_605F6150
 * address: 0x605F6150   size: 696   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605F6150(int a1)
{
  float *v2; // r6
  StateMgr *v3; // r5
  StateBase *CurrentState; // r0
  int v5; // r5
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r1
  float v11; // r1
  float v12; // r2
  float v13; // r0
  float v14; // r1
  float v15; // r2
  float v17; // [sp+0h] [bp-38h] BYREF
  float v18; // [sp+4h] [bp-34h]
  float v19; // [sp+8h] [bp-30h]
  int v20; // [sp+Ch] [bp-2Ch] BYREF
  Vec3 v21[3]; // [sp+10h] [bp-28h] BYREF

  v2 = (float *)(a1 + 108);
  FIELD_U32(a1, 6436) = FIELD_U32(a1, 108);
  FIELD_U32(a1, 6440) = FIELD_U32(a1, 112);
  v3 = (StateMgr *)(a1 + 6084);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  CurrentState = StateMgr__getCurrentState(v3);
  v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v5 == (*(int (**)(void))(dword_60CB21E0 + 8))() )
  {
    v6 = FIELD_U32(a1, 6120);
    v7 = v6 == 0;
    if ( v6 )
      v7 = FIELD_U8(a1, 6444) == 0;
    if ( !v7 )
    {
      MovementHandler__execute((MovementHandler *)(a1 + 6188));
      if ( FIELD_U32(a1, 6236) == 1 && FIELD_U32(a1, 6256) != 1 )
      {
        FIELD_U32(a1, 108) = FIELD_U32(a1, 6188);
        FIELD_U32(a1, 112) = FIELD_U32(a1, 6192);
        if ( Actor__getProfileId((Actor *)a1) == 431 )
        {
          v8 = FIELD_U32(a1, 24);
          v9 = (v8 & 0x10000) != 0 ? 6316 : 6268;
          v10 = (_DWORD *)(a1 + v9);
        }
        else
        {
          v10 = (_DWORD *)(a1 + 6268);
          v8 = FIELD_U32(a1, 24);
        }
        FIELD_U32(a1, 164) = *v10;
        if ( (v8 & 0x100) != 0 && FIELD_U32(a1, 6120) == 3 && FIELD_U8(a1, 6325) && !FIELD_U8(a1, 6445) )
        {
          FIELD_U8(a1, 6445) = 1;
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB2240);
          FIELD_U32(a1, 120) = FIELD_U32(a1, 6328);
        }
      }
    }
  }
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
    {
      v11 = v2[1];
      v12 = v2[2];
      v21[0].x = *v2;
      v21[0].z = v12;
      v21[0].y = v11 + 16.0;
      ((void (__fastcall *)(int *, float *, Vec3 *, _DWORD))checkLiquidCollisions)(
        &v20,
        &v17,
        v21,
        FIELD_U8(a1, 86));
      if ( v20 )
      {
        if ( (unsigned int)(v20 - 3) <= 1 )
          FIELD_U8(a1, 19) = 1;
      }
    }
    if ( Actor__getProfileId((Actor *)a1) == 433
      && (FIELD_U32(a1, 2872) & 0x10401) == 0x401
      && FIELD_U16(a1, 5944) != 0x1F )
    {
      v13 = *v2;
      v21[0].y = v2[1];
      v21[0].x = v13;
      v14 = FIELD_F32(a1, 148);
      v15 = FIELD_F32(a1, 152);
      v17 = FIELD_F32(a1, 144);
      v18 = v14;
      v19 = v15;
      v21[0].z = 4500.0;
      v17 = v17 + v17;
      v18 = v18 + v18;
      v19 = v19 + v19;
      EffectData_create(1233, v21, 0, (int)&v17);
      FIELD_U8(a1, 19) = 1;
    }
  }
  StarCoinBase_updateModel((ModelWrapper **)a1);
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
