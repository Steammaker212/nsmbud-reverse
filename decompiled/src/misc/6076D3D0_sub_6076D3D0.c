/* sub_6076D3D0
 * address: 0x6076D3D0   size: 1028   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6076D3D0(int a1)
{
  int result; // r0
  int v3; // r1
  _DWORD *v4; // r6
  int v5; // r0
  void (__fastcall *v6)(int, float); // r1
  float v7; // s0
  int v8; // r1
  int ActorSlotChecked; // r0
  int v10; // r5
  float v11; // s16
  _BOOL4 v12; // r0
  bool v13; // zf
  float v14; // s2
  float v15; // s0
  int v16; // r5
  int v17; // [sp+4h] [bp-1Ch] BYREF

  result = 9708;
  v4 = (_DWORD *)(a1 + 9708);
  v3 = FIELD_U32(a1, 9708);
  switch ( v3 )
  {
    case 0:
      v6 = *(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 1088);
      if ( FIELD_U32(a1, 1320) == 3 )
      {
        v6(a1, 2905.0);
        v7 = FIELD_F32(dword_60CBFA90, 240)
           + (float)((float)(*(float *)((char *)sinLutTable + ((FIELD_U32(a1, 160) >> 20) & 0xFF0))
                           + (float)((float)((float)(FIELD_U32(a1, 160) & 0xFFFFFF)
                                           * *(float *)((char *)&sinLutTable[1] + ((FIELD_U32(a1, 160) >> 20) & 0xFF0)))
                                   * 0.000000059605))
                   * -3.0);
      }
      else
      {
        v6(a1, 2900.0);
        v7 = FIELD_F32(dword_60CBFA90, 240);
      }
      FIELD_F32(a1, 108) = v7;
      v17 = -1073741824;
      result = sub_60773F88(a1, &v17, 0.1);
      if ( !result )
      {
        result = sub_60793CA8(*(_DWORD *)(FIELD_U32(a1, 648) + 4));
        if ( result == 1 )
        {
          *v4 = 1;
          PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 87);
          result = FIELD_U32(a1, 1228) | 0x8000000;
          FIELD_U32(a1, 1228) = result;
        }
      }
      return result;
    case 1:
      result = FIELD_U8(a1, 1231);
      if ( (result & 0x10) != 0 )
      {
        v8 = sub_60778734(dword_60CBFA90, FIELD_S8(a1, 84));
        if ( v8 == -1 )
          goto LABEL_18;
        ActorSlotChecked = Player_getActorSlotChecked(PlayerMgr_instance, v8);
        v10 = ActorSlotChecked;
        if ( !ActorSlotChecked )
          goto LABEL_18;
        v11 = FIELD_F32(ActorSlotChecked, 112) + (float)(FIELD_F32(ActorSlotChecked, 1244) * 0.7);
        v12 = sub_6075EE0C(ActorSlotChecked);
        v13 = v12;
        if ( v12 )
          v13 = FIELD_U32(v10, 1320) == 9;
        if ( v13 )
          v11 = v11 + 10.0;
        if ( FIELD_F32(a1, 112) > v11 || (result = FIELD_U8(v10, 1231), (result & 0x20) != 0) )
        {
LABEL_18:
          *v4 = 2;
          FIELD_U32(a1, 1228) &= ~0x8000000u;
          FIELD_U32(dword_60CBFA90, 60) |= 1u;
          FIELD_U32(a1, 124) = -1074580685;
          return -1074580685;
        }
      }
      return result;
    case 2:
      result = a1 + 9784;
      v14 = FIELD_F32(a1, 124) + FIELD_F32(a1, 112);
      FIELD_F32(a1, 112) = v14;
      v15 = FIELD_F32(a1, 9784);
      if ( v14 < v15 )
      {
        FIELD_F32(a1, 112) = v15;
        FIELD_U32(a1, 1228) |= 0x20000000u;
        FIELD_U32(a1, 124) = 0;
        *v4 = 3;
        return PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 88);
      }
      return result;
    case 3:
    case 4:
      v5 = FIELD_U32(a1, 1228);
      if ( (v5 & 0x40000000) == 0 )
        goto LABEL_31;
      if ( v3 == 3 )
      {
        *v4 = 5;
        PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 100);
        v5 = FIELD_U32(a1, 1228);
        if ( v5 >= 0 )
          goto LABEL_33;
        goto LABEL_32;
      }
      *v4 = 6;
LABEL_31:
      if ( v5 < 0 )
      {
LABEL_32:
        FIELD_U32(a1, 1228) = v5 & 0x7FFFFFFF;
        (*(void (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(FIELD_U32(a1, 648) + 4) + 84))(
          *(_DWORD *)(FIELD_U32(a1, 648) + 4),
          88,
          1.0,
          5.0,
          0.0);
      }
LABEL_33:
      result = FIELD_U8(a1, 1232);
      if ( (result & 1) != 0 )
      {
        FIELD_U32(a1, 9704) = 1;
        *v4 = 0;
        return 0;
      }
      return result;
    case 5:
      result = sub_60793CA8(*(_DWORD *)(FIELD_U32(a1, 648) + 4));
      if ( result == 1 )
      {
        result = 6;
        *v4 = 6;
      }
      return result;
    case 6:
      *v4 = 7;
      v16 = a1 + 648;
      sub_60794368(*(_DWORD *)(FIELD_U32(a1, 648) + 4));
      PlayerBase_dispatchVirtual3(FIELD_U32(a1, 648), 101);
      FIELD_U32(dword_60CBFA90, 60) |= 0x10u;
      goto LABEL_26;
    case 7:
      v16 = a1 + 648;
LABEL_26:
      if ( sub_60793DA0(*(_DWORD *)(*(_DWORD *)v16 + 4)) == 1 )
        FIELD_U32(dword_60CBFA90, 60) &= ~0x10u;
      result = sub_60793CA8(*(_DWORD *)(*(_DWORD *)v16 + 4));
      if ( result == 1 )
      {
        FIELD_U32(dword_60CBFA90, 60) &= ~8u;
        FIELD_U32(a1, 1228) &= ~0x40000000u;
        *v4 = 4;
        return 4;
      }
      return result;
    default:
      return result;
  }
}
