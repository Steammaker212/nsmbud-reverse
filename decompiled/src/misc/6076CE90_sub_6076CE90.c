/* sub_6076CE90
 * address: 0x6076CE90   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076CE90(int a1, float *a2, char a3, float a4)
{
  int result; // r0
  int v9; // r1
  float v10; // s0
  int v11; // r7
  int v12; // r0
  int v13; // r0
  _DWORD *v14; // r8
  int v15; // r1
  float v16; // s4
  float v17; // r0
  int v18; // r1
  TileCheck_Result v19; // [sp+0h] [bp-58h] BYREF
  float v20; // [sp+2Ch] [bp-2Ch] BYREF
  float v21; // [sp+30h] [bp-28h]
  int v22; // [sp+34h] [bp-24h]

  result = sub_60766958(a1);
  if ( !result )
  {
    result = FIELD_U8(dword_60CBFA90, 60);
    if ( (result & 0x40) == 0 )
    {
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 624))(a1, 5);
      v9 = dword_60CBFA90;
      FIELD_F32(dword_60CBFA90, 240) = *a2;
      FIELD_F32(v9, 244) = a2[1];
      FIELD_F32(v9, 264) = a4;
      FIELD_F32(a1, 108) = *a2;
      Player_changeState(a1, (StateBase *)&dword_60CBF7F8, 0);
      sub_60766314(a1, (StateBase *)&unk_60CBF3E8, 0);
      v10 = FIELD_F32(a1, 112) - a2[1];
      if ( v10 >= 0.0 )
      {
        if ( v10 > 136.0 )
          v10 = 136.0;
      }
      else
      {
        v10 = 0.0;
      }
      FIELD_F32(a1, 9768) = v10;
      v11 = dword_60C99DC0;
      v12 = sub_603F7B54(v10 / 136.0);
      sub_603F7B18(v11, v12, FIELD_S8(a1, 84));
      FIELD_F32(a1, 9772) = *a2 + 80.0;
      v13 = sub_607784B8(dword_60CBFA90, FIELD_S8(a1, 84));
      v14 = (_DWORD *)(a1 + 9776);
      FIELD_U32(a1, 9776) = v13;
      if ( !v13 )
      {
        ++FIELD_U32(dword_60C99DE4, 16);
        (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(dword_60C99DD4 + 196) + 24))(FIELD_U32(dword_60C99DD4, 196));
        sub_607780C4(dword_60CBFA90, 2);
        v15 = dword_60CBFA90;
        FIELD_U32(dword_60CBFA90, 440) = FIELD_S8(a1, 84);
        FIELD_U8(v15, 216) = a3;
        v16 = a2[1];
        v20 = a4 + -112.0;
        v21 = v16 + 122.0;
        v22 = 1166843904;
        v19.field_C = 0;
        v19.field_10 = 0;
        if ( sub_601559B8(a1 + 1328, &v20, &v19, 128.0) )
        {
          v17 = v19.field_8 + 112.0;
          v21 = v19.field_8 + 112.0;
        }
        else
        {
          v17 = v21;
        }
        v18 = dword_60CBFA90;
        FIELD_F32(dword_60CBFA90, 296) = v20;
        FIELD_F32(v18, 300) = v17;
        FIELD_U32(v18, 304) = v22;
      }
      result = sub_6078A030(PlayerMgr_instance);
      if ( result == *v14 + 1 )
      {
        if ( *v14 )
          SE_SYS_NICE_S_ref();
        return sub_607799F0(dword_60CBFA90);
      }
    }
  }
  return result;
}
