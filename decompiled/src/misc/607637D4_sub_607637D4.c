/* sub_607637D4
 * address: 0x607637D4   size: 728   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607637D4(int a1)
{
  int v2; // r5
  float v3; // s18
  _BOOL4 v4; // r8
  float v5; // s20
  int v6; // r0
  int v7; // r5
  int *v8; // r4
  int *v9; // r7
  float v10; // s16
  float v11; // s24
  int v12; // r0
  int v13; // r1
  int result; // r0
  int v15; // r1

  v2 = dword_60CC6484;
  v3 = (float)(FIELD_F32(a1, 112) + FIELD_F32(a1, 496)) + FIELD_F32(a1, 504);
  v4 = 0;
  if ( !sub_607FCA74(dword_60CC6484) && FIELD_F32(v2, 316) == 0.0 )
    v4 = sub_608FBB8C(FIELD_U16(PlayerMgr_instance, 66)) > 1
      || sub_607FCAA8(v2) == 2
      || sub_607FCAA8(v2) == 3;
  v5 = FIELD_F32(v2, 132) + -24.0;
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 236))(a1);
  if ( v3 < (float)(v5 + 48.0) && v6 == 1 )
  {
    v7 = ActorMgr__instance;
    v8 = *(int **)(ActorMgr__instance + 27180);
    v9 = (int *)sub_60008598(ActorMgr__instance, 748, FIELD_U32(ActorMgr__instance, 27172));
    if ( v9 == v8 )
    {
LABEL_15:
      if ( v4 )
      {
        if ( (float)(v3 - 48.0) < FIELD_F32(AreaTask_intance, 1816) )
        {
          v13 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
          result = 0;
          if ( v3 >= v5 || v13 == 1 )
            return result;
          goto LABEL_26;
        }
      }
      else if ( (FIELD_U8(a1, 1236) & 0x10) == 0 )
      {
        v15 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
        result = 0;
        if ( v3 >= v5 || v15 == 1 )
          return result;
        goto LABEL_28;
      }
    }
    else
    {
      v10 = FIELD_F32(a1, 108);
      v11 = FIELD_F32(a1, 112) + 24.0;
      while ( 1 )
      {
        v12 = *v9;
        if ( *v9 )
        {
          if ( (float)((float)(FIELD_F32(v12, 6136) + FIELD_F32(v12, 6144)) * 0.5) <= v11
            && ((int (__fastcall *)(int, float))loc_6015AB38)(v12 + 6132, v10) )
          {
            break;
          }
        }
        v9 = (int *)sub_60008598(v7, 748, (int)(v9 + 1));
        if ( v9 == v8 )
          goto LABEL_15;
      }
    }
  }
  result = 0;
  if ( v3 >= v5 )
    return result;
  if ( !v4 )
  {
LABEL_28:
    result = 0;
    if ( (FIELD_U8(a1, 1236) & 0x10) != 0 )
      return result;
    goto LABEL_29;
  }
LABEL_26:
  result = 0;
  if ( v3 >= FIELD_F32(AreaTask_intance, 1816) )
    return result;
LABEL_29:
  if ( FIELD_U32(PlayerMgr_instance, 160) )
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 252))(a1);
  else
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
  return 1;
}
