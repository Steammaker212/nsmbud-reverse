/* sub_601F6B6C
 * address: 0x601F6B6C   size: 2216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601F6B6C(int a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int *v8; // r1
  int v9; // r0
  int v10; // r0
  StateMgr *v11; // r0
  float v12; // s2
  float v13; // r0
  unsigned int v14; // r0
  float v15; // s10
  float *v16; // r1
  float v17; // s14
  float v18; // s6
  float v19[2]; // [sp+8h] [bp-20h] BYREF
  float v20; // [sp+10h] [bp-18h]
  StateMethodExecuter *v21; // [sp+14h] [bp-14h]

  if ( !sub_60190968(dword_60C8996C) )
    return StateMgr__changeState((StateMgr *)(a1 + 288), (StateBase *)&dword_60C8BA6C);
  v2 = dword_60C8996C;
  if ( FIELD_U8(dword_60C8996C, 1384) )
  {
    result = (StateMethodExecuter *)sub_6019112C(dword_60C8996C);
    v21 = result;
    switch ( (unsigned int)result )
    {
      case 7u:
      case 0x47u:
      case 0x7Bu:
      case 0x83u:
      case 0x84u:
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        v4 = FIELD_U32(a1, 592);
        v5 = sub_601916EC(dword_60C8996C);
        if ( !v4 )
        {
          if ( v5 == 52 || sub_601916EC(dword_60C8996C) == 53 )
            goto LABEL_28;
          goto LABEL_27;
        }
        if ( v5 == 52 )
          goto LABEL_38;
        if ( sub_601916EC(dword_60C8996C) == 53 )
          goto LABEL_38;
        result = (StateMethodExecuter *)sub_601916EC(dword_60C8996C);
        if ( result == (StateMethodExecuter *)54 )
          goto LABEL_38;
        return result;
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Eu:
      case 0x1Fu:
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x25u:
      case 0x26u:
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Eu:
      case 0x2Fu:
      case 0x30u:
      case 0x31u:
      case 0x32u:
      case 0x33u:
      case 0x34u:
      case 0x35u:
      case 0x36u:
      case 0x37u:
      case 0x38u:
      case 0x39u:
      case 0x3Au:
      case 0x3Bu:
      case 0x3Cu:
      case 0x3Du:
      case 0x3Eu:
      case 0x3Fu:
      case 0x40u:
      case 0x41u:
      case 0x42u:
      case 0x43u:
      case 0x44u:
      case 0x45u:
      case 0x46u:
      case 0x48u:
      case 0x49u:
      case 0x4Au:
      case 0x4Bu:
      case 0x4Cu:
      case 0x4Du:
      case 0x4Eu:
      case 0x4Fu:
      case 0x50u:
      case 0x51u:
      case 0x52u:
      case 0x53u:
      case 0x54u:
      case 0x55u:
      case 0x56u:
      case 0x57u:
      case 0x58u:
      case 0x59u:
      case 0x5Au:
      case 0x5Bu:
      case 0x5Cu:
      case 0x5Du:
      case 0x5Eu:
      case 0x5Fu:
      case 0x60u:
      case 0x61u:
      case 0x62u:
      case 0x64u:
      case 0x65u:
      case 0x68u:
      case 0x69u:
      case 0x6Au:
      case 0x6Bu:
      case 0x6Cu:
      case 0x6Du:
      case 0x6Eu:
      case 0x6Fu:
      case 0x70u:
      case 0x71u:
      case 0x72u:
      case 0x73u:
      case 0x74u:
      case 0x75u:
      case 0x76u:
      case 0x77u:
      case 0x78u:
      case 0x79u:
      case 0x7Au:
      case 0x7Cu:
      case 0x7Du:
      case 0x7Eu:
      case 0x7Fu:
      case 0x80u:
      case 0x81u:
      case 0x82u:
      case 0x85u:
      case 0x86u:
      case 0x87u:
      case 0x88u:
      case 0x89u:
      case 0x8Au:
      case 0x8Bu:
      case 0x8Cu:
      case 0x8Du:
      case 0x8Eu:
      case 0x8Fu:
      case 0x90u:
      case 0x91u:
      case 0x92u:
      case 0x93u:
      case 0x94u:
      case 0x95u:
      case 0x9Cu:
      case 0x9Du:
      case 0x9Eu:
      case 0x9Fu:
        return result;
      case 0xCu:
        if ( FIELD_U32(a1, 240) == 4 )
          goto LABEL_62;
        goto LABEL_63;
      case 0x23u:
        result = (StateMethodExecuter *)sub_601916F4(v2);
        if ( result == (StateMethodExecuter *)2 )
        {
          FIELD_U32(a1, 708) = 120;
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
          result = (StateMethodExecuter *)sub_601E4EA4(dword_60C8B13C, 46, 0, a1 + 80, 1);
          FIELD_U32(a1, 716) = result;
        }
        return result;
      case 0x24u:
        if ( sub_601916F4(v2) == 8 || sub_601916F4(v2) == 9 || sub_601916F4(v2) == 10 )
        {
          if ( sub_601919B0((_DWORD *)dword_60C8996C, a1) == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
          v8 = (int *)&unk_60C8BB80;
        }
        else
        {
          result = (StateMethodExecuter *)sub_601916F4(v2);
          if ( result != (StateMethodExecuter *)11 )
            return result;
          if ( FIELD_U32(a1, 240) == 4 )
            (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 320))(a1, 0);
          else
            sub_601F74B4(a1);
          v8 = (int *)&unk_60C8BBE8;
        }
LABEL_70:
        v11 = (StateMgr *)(a1 + 288);
LABEL_71:
        result = StateMgr__changeState(v11, (StateBase *)v8);
        break;
      case 0x63u:
        v8 = (int *)&unk_60C8B72C;
        goto LABEL_70;
      case 0x66u:
        v8 = (int *)&unk_60C8BB1C;
        goto LABEL_70;
      case 0x67u:
        v8 = &dword_60C8BA6C;
        goto LABEL_70;
      case 0x96u:
        v10 = sub_601FEE28(dword_60C8C188);
        sub_6016EE24(v10, 20, 4);
        v8 = (int *)&unk_60C8BB40;
        goto LABEL_70;
      case 0x97u:
        v9 = sub_601FEE28(dword_60C8C188);
        sub_6016EE24(v9, 100, 5);
        v8 = (int *)&unk_60C8BB60;
        goto LABEL_70;
      case 0x98u:
        v8 = (int *)&unk_60C8BBC4;
        goto LABEL_70;
      case 0x99u:
        (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 320))(a1, 0);
        v8 = (int *)&unk_60C8BC08;
        v11 = (StateMgr *)(a1 + 288);
        goto LABEL_71;
      case 0x9Au:
        v8 = (int *)&unk_60C8BC28;
        goto LABEL_70;
      case 0x9Bu:
        sub_601F74B4(a1);
        v8 = (int *)&unk_60C8BC4C;
        goto LABEL_70;
      case 0xA0u:
        if ( sub_601919B0((_DWORD *)dword_60C8996C, a1) == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        v8 = (int *)&unk_60C8BB80;
        goto LABEL_70;
      case 0xA1u:
        if ( FIELD_U32(a1, 240) == 4 )
        {
LABEL_62:
          (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 320))(a1, 0);
        }
        else
        {
LABEL_63:
          if ( sub_601916EC(dword_60C8996C) == 64 )
            sub_601F74B4(a1);
        }
        return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      default:
        if ( result != (StateMethodExecuter *)243 )
          return result;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        if ( FIELD_U32(a1, 592) )
        {
LABEL_38:
          sub_601919B0((_DWORD *)dword_60C8996C, a1);
          v8 = (int *)&unk_60C8BB80;
        }
        else
        {
          if ( sub_601916EC(dword_60C8996C) == 54 )
          {
            FIELD_U32(a1, 632) = 1147207680;
            v12 = FIELD_F32(a1, 576);
            v13 = FIELD_F32(a1, 572);
            v19[0] = FIELD_F32(a1, 568);
            v19[1] = v13;
            v20 = v12 + 350.0;
            v14 = sub_608332B0(v19, a1 + 80);
            v15 = FIELD_F32(a1, 632);
            v16 = (float *)((char *)sinLutTable + ((v14 >> 20) & 0xFF0));
            v17 = (float)(v14 & 0xFFFFFF);
            v18 = v16[2] + (float)((float)(v17 * 0.000000059605) * v16[3]);
            FIELD_F32(a1, 80) = v19[0]
                                + (float)((float)(*v16 + (float)(v16[1] * (float)(v17 * 0.000000059605))) * v15);
            FIELD_F32(a1, 88) = v20 + (float)(v15 * v18);
            FIELD_F32(a1, 200) = (*(float (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 332))(
                                     a1,
                                     FIELD_U32(a1, 624));
            FIELD_U32(a1, 588) = 0x100000000LL / FIELD_S32(a1, 624);
          }
          sub_601919B0((_DWORD *)dword_60C8996C, a1);
          v8 = &dword_60C8BCCC;
        }
        goto LABEL_70;
    }
    return result;
  }
  result = (StateMethodExecuter *)sub_6019112C(dword_60C8996C);
  LODWORD(v19[0]) = result;
  if ( (int)result > 70 )
  {
    if ( ((unsigned int)&result[-11].currentState + 1 > 9 || ((1 << ((_BYTE)result - 123)) & 0x301) == 0)
      && result != (StateMethodExecuter *)71 )
    {
      return result;
    }
    goto LABEL_21;
  }
  if ( result == (StateMethodExecuter *)7 )
  {
LABEL_21:
    result = *(StateMethodExecuter **)(a1 + 592);
    if ( result )
      return result;
    if ( sub_601916EC(dword_60C8996C) != 52 && sub_601916EC(dword_60C8996C) != 53 )
    {
LABEL_27:
      result = (StateMethodExecuter *)sub_601916EC(dword_60C8996C);
      if ( result != (StateMethodExecuter *)54 )
        return result;
    }
LABEL_28:
    v6 = *(_DWORD *)a1;
    v7 = 1;
    return (StateMethodExecuter *)(*(int (__fastcall **)(int, int))(v6 + 320))(a1, v7);
  }
  if ( result != (StateMethodExecuter *)35 )
  {
    if ( result != (StateMethodExecuter *)36 )
      return result;
    result = (StateMethodExecuter *)sub_601916F4(v2);
    if ( result != (StateMethodExecuter *)11 )
      return result;
    if ( FIELD_U32(a1, 240) != 4 )
      return (StateMethodExecuter *)sub_601F74B4(a1);
    v6 = *(_DWORD *)a1;
    v7 = 0;
    return (StateMethodExecuter *)(*(int (__fastcall **)(int, int))(v6 + 320))(a1, v7);
  }
  result = (StateMethodExecuter *)sub_601916F4(v2);
  if ( result == (StateMethodExecuter *)2 )
  {
    result = *(StateMethodExecuter **)(a1 + 708);
    if ( result )
    {
      FIELD_U32(a1, 708) = (char *)result - 1;
      if ( result == (StateMethodExecuter *)1 )
      {
        return (StateMethodExecuter *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      }
      else if ( result == (StateMethodExecuter *)61 )
      {
        return (StateMethodExecuter *)sub_601E4C88((_DWORD *)dword_60C8B13C, 167, (_DWORD *)(a1 + 80));
      }
    }
  }
  return result;
}
