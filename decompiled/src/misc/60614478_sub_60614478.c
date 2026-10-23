/* sub_60614478
 * address: 0x60614478   size: 1412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60614478(int result)
{
  char v1; // r12
  int *v2; // r9
  unsigned int v3; // r5
  int v4; // r8
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  float v8; // s2
  bool v9; // zf
  float *v10; // r0
  float v11; // s4
  float v12; // s6
  unsigned int v13; // r2
  int v14; // r1
  int v15; // r1
  int v16; // r1
  _BYTE *v17; // [sp+50h] [bp-68h]
  int v18; // [sp+58h] [bp-60h]
  int v19; // [sp+6Ch] [bp-4Ch]
  int v20; // [sp+74h] [bp-44h]
  float v21; // [sp+88h] [bp-30h] BYREF
  float v22; // [sp+8Ch] [bp-2Ch]
  float v23; // [sp+90h] [bp-28h]

  v2 = *(int **)(ActorMgr__instance + 27172);
  if ( v2 != *(int **)(ActorMgr__instance + 27180) )
  {
    v3 = 0;
    v17 = (_BYTE *)(result + 7608);
    v20 = 4;
    v18 = 0;
    v19 = 0;
    while ( 1 )
    {
      v4 = *v2;
      if ( !*v2 || FIELD_U8(v4, 19) )
        goto LABEL_48;
      if ( ((unsigned int)&dword_60C7B364 & ~(1616987736 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      v5 = (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI);
      v6 = v5 == 1;
      if ( v5 == 1 )
        v6 = (FIELD_U8(v4, 76) & 4) == 0;
      if ( !v6 )
        goto LABEL_48;
      v7 = FIELD_U32(v4, 568);
      if ( (v7 & 0x30) == 0 )
        goto LABEL_48;
      v8 = (float)(FIELD_F32(v4, 108) + FIELD_F32(v4, 572)) - FIELD_F32(dword_60CC6484, 112);
      if ( v8 >= 0.0 && v8 <= FIELD_F32(dword_60CC6484, 104) && !FIELD_U8(v4, 536) )
        break;
LABEL_47:
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 104))(v4);
      FIELD_U8(v4, 19) = 1;
LABEL_48:
      ++v2;
      result = FIELD_U32(ActorMgr__instance, 27180);
      if ( v2 == (int *)result )
        return result;
    }
    v21 = FIELD_F32(v4, 108) + FIELD_F32(v4, 572);
    v22 = FIELD_F32(v4, 112) + FIELD_F32(v4, 576);
    v23 = FIELD_F32(v4, 116) + FIELD_F32(v4, 580);
    v9 = FIELD_U8(dword_60CC6D8C, 17) == 0;
    if ( FIELD_U8(dword_60CC6D8C, 17) )
      v9 = (v7 & 0x4000) == 0;
    if ( !v9 )
    {
      if ( ((unsigned int)&dword_60C7B418 & ~(1616987964 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B418) )
      {
        dword_60C7B414 = (int)&off_60BC00C8;
        _cxa_guard_release(&dword_60C7B418);
      }
      v10 = (float *)(**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B414);
      if ( v10 )
        v10 = (float *)v4;
      v11 = v10[1704];
      v12 = v10[1703];
      v21 = v10[1702] + v21;
      v22 = v12 + v22;
      v23 = v11 + v23;
      v7 = FIELD_U32(v4, 568);
    }
    if ( (v7 & 0x20) != 0 )
    {
LABEL_45:
      if ( FIELD_U8(v4, 537) )
        SE_EMY_DOWN_SYNC_ref(v3++, &v21);
      goto LABEL_47;
    }
    if ( sub_6078A030(PlayerMgr_instance) == 1 )
    {
      if ( !v20 )
      {
        if ( v19 )
          sub_6040B2F8((unsigned __int8 *)dword_60C9A1F0);
        sub_60407E74(dword_60C9A1E8, (int)&v21, 0x19u, -1, 0, 0);
        SE_SYS_THREE_UP_ref(dword_60C7F52C, 0, 1, 1);
        *v17 = 1;
        goto LABEL_38;
      }
      sub_60407E74(dword_60C9A1E8, (int)&v21, dword_60B0654C[v20], -1, 0, 0);
      v13 = 0;
      v14 = dword_60B06560[v20];
    }
    else
    {
      if ( !v20 )
      {
        if ( v19 )
          sub_6040B2F8((unsigned __int8 *)dword_60C9A1F0);
        *v17 = 1;
        sub_60407E74(dword_60C9A1E8, (int)&v21, 0x19u, -1, 0, 0);
        sub_60021C70(dword_60C7F52C, 1);
        goto LABEL_38;
      }
      sub_60407E74(dword_60C9A1E8, (int)&v21, dword_60B0654C[v20], -1, 0, 0);
      v13 = -1;
      v14 = dword_60B06560[v20];
    }
    sub_603FBA2C(dword_60C99DD4, v14, v13);
LABEL_38:
    if ( FIELD_U8(dword_60C9A1F0, 6559) == 1 )
    {
      v15 = v19;
      if ( v18 > 2 )
        v15 = v19 + 1;
      ++v18;
      v19 = v15;
    }
    v16 = v20 - 1;
    if ( v20 - 1 <= 0 )
      v16 = 0;
    v20 = v16;
    goto LABEL_45;
  }
  return result;
}
