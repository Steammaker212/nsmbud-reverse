/* SE_OBJ_BOUND_BLOCK_JUMP_ref_2
 * address: 0x6056D678   size: 868   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_BOUND_BLOCK_JUMP_ref_2(int a1)
{
  char v1; // r12
  int v2; // r5
  int v3; // r4
  int v4; // r8
  int v5; // r6
  int *v6; // r7
  int *v7; // r9
  int *v8; // r1
  int result; // r0
  char *v10; // r11
  int v11; // r10
  char *v12; // r2
  int v13; // r0
  int v14; // r0
  unsigned int v15; // r0
  float v16; // r1
  int v17; // r6
  float v18; // r1
  int v19; // r6
  _DWORD *v20; // [sp+4h] [bp-8Ch]
  _DWORD *v21; // [sp+18h] [bp-78h]
  _DWORD *v22; // [sp+20h] [bp-70h]
  int *v23; // [sp+24h] [bp-6Ch]
  int v24; // [sp+28h] [bp-68h]
  int v25; // [sp+48h] [bp-48h]
  int *a4; // [sp+4Ch] [bp-44h]
  _DWORD *v27; // [sp+50h] [bp-40h]
  int *v29; // [sp+58h] [bp-38h]
  Vec2 out; // [sp+5Ch] [bp-34h] BYREF
  Vec3 position; // [sp+64h] [bp-2Ch] BYREF

  v2 = 0;
  v3 = -16;
  v4 = 1;
  v5 = a1 + 7452;
  v24 = a1 + 7452;
  v20 = (_DWORD *)(a1 + 7404);
  v22 = (_DWORD *)(a1 + 7456);
  v21 = (_DWORD *)(a1 + 7500);
  v6 = (int *)(a1 + 7484);
  v23 = (int *)(a1 + 7484);
  v27 = (_DWORD *)(a1 + 7476);
  v7 = (int *)(a1 + 7492);
  v8 = (int *)(a1 + 7488);
  v29 = (int *)(a1 + 7488);
  do
  {
    result = *v7;
    if ( (*v7 & v4) != 0 )
    {
      result = *v8;
      if ( (*v8 & v4) == 0 )
      {
        result = *(_DWORD *)(v5 + v3);
        if ( !result )
        {
          if ( (*v27 & v4) != 0 )
          {
            v10 = *(char **)(PlayerMgr_instance + 4 * v2 + 48);
            if ( ((unsigned int)&dword_60C7B37C & ~(1616304076 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
            {
              dword_60C7B378 = (int)&off_60BC00BC;
              _cxa_guard_release(&dword_60C7B37C);
            }
            v11 = 1;
            v12 = 0;
            if ( v10 )
            {
              v13 = (**(int (__fastcall ***)(char *, int *))v10)(v10, &dword_60C7B378);
              v12 = 0;
              if ( v13 == 1 )
              {
                v14 = sub_6075F914(v10);
                v11 = 1;
                v12 = v10;
                if ( v14 )
                  v11 = 2;
              }
            }
          }
          else
          {
            v12 = 0;
            v11 = 0;
          }
          result = *v6;
          if ( (*v6 & v4) != 0 )
          {
            result = sub_607891A0(PlayerMgr_instance, v2);
            v12 = (char *)result;
            v11 = 3;
          }
          v8 = v29;
          if ( v12 )
          {
            v25 = (int)v12;
            v15 = v12[84];
            LODWORD(position.x) = 39;
            a4 = sub_60002B90(v15, unk_60C26410);
            v16 = FIELD_F32(a1, 112);
            v17 = Global_BasicSoundActor2;
            position.x = FIELD_F32(a1, 108);
            position.y = v16;
            mapPositionToScreen(&out, &position);
            BasicSoundActor2_play(v17, "SE_OBJ_BOUND_BLOCK_JUMP", &out.x, (int)a4);
            v18 = FIELD_F32(a1, 112);
            v19 = Global_BasicSoundActor2;
            position.x = FIELD_F32(a1, 108);
            position.y = v18;
            mapPositionToScreen(&out, &position);
            BasicSoundActor2_play(v19, "SE_OBJ_BOUND_BLOCK_BOUND", &out.x, 0);
            if ( v11 )
              LOBYTE(v11) = v11 - 1;
            if ( (unsigned __int8)v11 <= 1u && (*v21 & v4) != 0 )
            {
              ((void (__fastcall *)(int, int, _DWORD, int))loc_6056D330)(a1, v25, (unsigned __int8)v11, v2);
            }
            else
            {
              if ( (*v22 & v4) == 0 )
              {
                SE_OBJ_BOUND_BLOCK_JUMP_ref(a1, v25, (unsigned __int8)v11);
                v5 = v24;
                *(_DWORD *)(v24 + v3 - 16) = (unsigned __int8)v11 + 1;
                *(_DWORD *)(v24 + v3) = 1;
                *(_BYTE *)(v24 + v2) = 1;
                result = (int)v20;
                *v20 = 9;
                goto LABEL_27;
              }
              ((void (__fastcall *)(int, int, _DWORD, int))loc_6056D17C)(a1, v25, (unsigned __int8)v11, v2);
            }
            v5 = v24;
            result = 2;
            *(_DWORD *)(v24 + v3) = 2;
LABEL_27:
            v6 = v23;
            v8 = v29;
          }
        }
      }
    }
    v3 += 4;
    ++v2;
    v4 *= 2;
  }
  while ( v3 );
  return result;
}
