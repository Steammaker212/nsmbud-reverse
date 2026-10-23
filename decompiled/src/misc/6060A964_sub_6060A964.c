/* sub_6060A964
 * address: 0x6060A964   size: 600   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6060A964(int a1)
{
  int v2; // r0
  float v3; // r3
  int v4; // r5
  float v5; // s10
  float v6; // s6
  unsigned int v7; // r3
  int v8; // r5
  int v9; // r3
  float v10; // s0
  int v11; // r0
  int result; // r0
  float v13; // [sp+8h] [bp-20h] BYREF
  float v14; // [sp+Ch] [bp-1Ch]
  int v15; // [sp+10h] [bp-18h]

  ((void (*)(void))loc_6060B6A8)();
  v2 = FIELD_S8(a1, 8492);
  if ( (unsigned __int8)v2 != 255 )
  {
    v3 = FIELD_F32(a1, 112);
    v4 = FIELD_U32(a1, 116);
    v13 = FIELD_F32(a1, 108);
    v14 = v3;
    v15 = v4;
    v5 = FIELD_F32(a1, 112);
    v6 = FIELD_F32(a1, 8516);
    v7 = FIELD_U32(a1, 164) + 0x40000000;
    v8 = (v7 >> 20) & 0xFF0;
    v9 = v7 & 0xFFFFFF;
    if ( (unsigned __int8)v2 >= 4u )
      v2 = 0;
    v10 = *(float *)((char *)sinLutTable + v8)
        + (float)((float)((float)(unsigned int)v9 * *(float *)((char *)&sinLutTable[1] + v8)) * 0.000000059605);
    v13 = FIELD_F32(a1, 108)
        + (float)(v6
                * (float)(*(float *)((char *)&sinLutTable[2] + v8)
                        + (float)((float)(*(float *)((char *)&sinLutTable[3] + v8) * (float)(unsigned int)v9)
                                * 0.000000059605)));
    v14 = (float)(v5 + -400.0) + (float)(v6 * v10);
    v11 = *(_DWORD *)(PlayerMgr_instance + 4 * v2 + 32);
    if ( v11 )
      sub_6076A68C(v11, a1 + 6504, &v13, FIELD_U8(a1, 8494), 0);
  }
  FIELD_U32(a1, 6348) = FIELD_U32(a1, 164) + 1055064064;
  CircularCollider_execute(a1 + 6104);
  FIELD_U32(a1, 6748) = FIELD_U32(a1, 164);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 6504) + 28))(a1 + 6504);
  FIELD_U32(a1, 7404) = FIELD_U32(a1, 164);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 7160) + 28))(a1 + 7160);
  FIELD_U32(a1, 8060) = FIELD_U32(a1, 164);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 7816) + 28))(a1 + 7816);
  result = FIELD_U32(a1, 8488);
  if ( result )
  {
    if ( FIELD_F32(a1, 8520) != 0.0 && FIELD_U32(PlayerMgr_instance, 32) )
      sub_60764338();
    if ( FIELD_F32(a1, 8524) != 0.0 && FIELD_U32(PlayerMgr_instance, 36) )
      sub_60764338();
    if ( FIELD_F32(a1, 8528) != 0.0 && FIELD_U32(PlayerMgr_instance, 40) )
      sub_60764338();
    result = a1 + 8532;
    if ( FIELD_F32(a1, 8532) != 0.0 )
    {
      result = FIELD_U32(PlayerMgr_instance, 44);
      if ( result )
        return sub_60764338();
    }
  }
  return result;
}
