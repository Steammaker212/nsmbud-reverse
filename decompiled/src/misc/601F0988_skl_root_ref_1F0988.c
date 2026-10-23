/* skl_root_ref_1F0988
 * address: 0x601F0988   size: 1900   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall skl_root_ref_1F0988(Actor *a1)
{
  int v2; // r5
  int result; // r0
  _DWORD *v4; // r5
  int ProfileId; // r0
  int v6; // r1
  float v7; // s0
  int v8; // r1
  float v9; // s0
  float v10; // s4
  StateBase *v11; // r1
  StateMgr *v12; // r5
  StateMgr *v13; // r0
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float v17; // s6
  int v18; // r1
  float v19; // s0
  float v20; // s4
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float v24; // s6
  int v25; // r0
  int (__fastcall *v26)(int, int *); // r2
  int v27; // r0
  EffectData *p_parent; // r0
  Vec3 v29; // [sp+8h] [bp-50h] BYREF
  int v30; // [sp+18h] [bp-40h] BYREF
  int v31; // [sp+1Ch] [bp-3Ch]
  int v32; // [sp+20h] [bp-38h]
  float v33; // [sp+24h] [bp-34h]
  float v34; // [sp+34h] [bp-24h]
  float v35; // [sp+44h] [bp-14h]

  if ( !sub_60190968(dword_60C8996C) )
    return (int)StateMgr__changeState((StateMgr *)&a1[3].field_30, (StateBase *)&dword_60C8B630);
  v2 = dword_60C8996C;
  result = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    switch ( result )
    {
      case 13:
        if ( sub_601916EC(v2) == 14 || sub_601916EC(v2) == 15 )
          (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 380))(a1);
        return (*(int (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 72))(a1);
      case 14:
      case 15:
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
      case 22:
      case 23:
      case 24:
      case 25:
      case 26:
      case 27:
      case 28:
      case 29:
      case 30:
      case 31:
      case 32:
      case 33:
      case 34:
      case 37:
      case 38:
      case 39:
      case 40:
      case 41:
      case 42:
      case 43:
      case 44:
      case 45:
      case 46:
      case 47:
      case 48:
      case 49:
      case 50:
      case 51:
      case 52:
      case 53:
      case 54:
      case 55:
      case 56:
      case 57:
      case 58:
      case 59:
      case 60:
      case 61:
      case 62:
      case 63:
      case 64:
      case 65:
      case 66:
      case 67:
      case 68:
      case 69:
      case 70:
      case 71:
      case 72:
      case 73:
      case 74:
      case 75:
      case 76:
      case 77:
      case 78:
      case 79:
      case 80:
      case 81:
      case 82:
      case 83:
      case 84:
      case 85:
      case 86:
      case 87:
      case 88:
      case 89:
      case 90:
      case 93:
      case 96:
      case 97:
      case 98:
      case 100:
      case 101:
        return result;
      case 35:
        result = sub_601916F4(v2);
        if ( result == 2 )
        {
          result = 120;
          a1[8].field_48 = 120;
        }
        return result;
      case 36:
        if ( (sub_601916F4(v2) == 9 || sub_601916F4(v2) == 10) && sub_601919B0((_DWORD *)dword_60C8996C, (int)a1) == 1 )
        {
          v12 = (StateMgr *)&a1[3].field_30;
          (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 72))(a1);
          v11 = (StateBase *)&dword_60C8B630;
LABEL_46:
          v13 = v12;
          return (int)StateMgr__changeState(v13, v11);
        }
        result = sub_601916F4(v2);
        if ( result != 8 )
          return result;
        if ( sub_601916EC(v2) != 14 )
        {
          result = sub_601916EC(v2);
          if ( result != 15 )
            return result;
        }
        (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 72))(a1);
        v18 = (int)&a1[8].field_20.FIELD_U32(previous, 0x0) + 1;
        a1[8].field_20.previous = (sead_ListNode *)v18;
        v19 = *(float *)&a1[8].field_10;
        v20 = *(float *)&a1[8].movementId;
        if ( (v18 & 8) != 0 )
        {
          if ( (v18 & 4) == 0 )
          {
LABEL_66:
            v21 = v19 - v20;
            *(float *)&a1[8].field_10 = v21;
            v22 = v20 + *(float *)&a1[8].settings1;
            *(float *)&a1[8].settings1 = v22;
            v23 = *(float *)&a1[8].settigns2 - v20;
            goto LABEL_67;
          }
        }
        else if ( (v18 & 4) != 0 )
        {
          goto LABEL_66;
        }
        v21 = v20 + v19;
        *(float *)&a1[8].field_10 = v21;
        v22 = *(float *)&a1[8].settings1 - v20;
        *(float *)&a1[8].settings1 = v22;
        v23 = v20 + *(float *)&a1[8].settigns2;
LABEL_67:
        *(float *)&a1[8].settigns2 = v23;
        v24 = *(float *)&a1[7].field_4C;
        a1[8].field_44 = 20;
        *(float *)&a1[1].field_30 = v21 * v24;
        *(float *)&a1[1].field_34 = v22 * v24;
        *(float *)&a1[1].parent = v23 * v24;
        v29.z = 0.0;
        v29.y = 0.0;
        v29.x = 0.0;
        v25 = *(_DWORD *)a1[3].field_40;
        v26 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v25 + 84);
        v30 = (int)&sead__SafeStringBase__vtable;
        v31 = (int)"skl_root";
        v27 = v26(v25, &v30);
        (*(void (__fastcall **)(_DWORD, int, int *))(**(_DWORD **)a1[3].field_40 + 108))(
          *(_DWORD *)a1[3].field_40,
          v27,
          &v30);
        v29.x = v33;
        v29.y = v34;
        v29.z = v35;
        if ( BYTE2(a1[9].id) )
          p_parent = (EffectData *)&a1[3].field_48;
        else
          p_parent = (EffectData *)&a1[4].parent;
        return sub_602375C4(p_parent, 896, &v29, 0, (Vec3 *)&a1[6].field_40);
      case 91:
        v11 = (StateBase *)&unk_60C8B678;
        goto LABEL_51;
      case 92:
        v12 = (StateMgr *)&a1[3].field_30;
        (*(void (__fastcall **)(Actor *, int))(FIELD_U32(a1, 0x0) + 320))(a1, 1);
        v11 = (StateBase *)&unk_60C8B69C;
        goto LABEL_46;
      case 94:
        v11 = (StateBase *)&unk_60C8B6C0;
        goto LABEL_51;
      case 95:
        v11 = (StateBase *)&unk_60C8B6E4;
        goto LABEL_51;
      case 99:
        v11 = (StateBase *)&unk_60C8B72C;
        goto LABEL_51;
      case 102:
        v11 = (StateBase *)&unk_60C8B798;
        goto LABEL_51;
      default:
        if ( result != 208 )
          return result;
        (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 352))(a1);
        (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 348))(a1);
        (*(void (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 72))(a1);
        result = sub_601919B0((_DWORD *)dword_60C8996C, (int)a1);
        if ( result != 1 )
          return result;
        v11 = (StateBase *)&dword_60C8B630;
LABEL_51:
        v13 = (StateMgr *)&a1[3].field_30;
        return (int)StateMgr__changeState(v13, v11);
    }
  }
  switch ( result )
  {
    case '[':
LABEL_31:
      v8 = (int)&a1[8].field_20.FIELD_U32(previous, 0x0) + 1;
      a1[8].field_20.previous = (sead_ListNode *)v8;
      v9 = *(float *)&a1[8].field_10;
      v10 = *(float *)&a1[8].movementId;
      if ( (v8 & 8) != 0 )
      {
        if ( (v8 & 4) == 0 )
        {
LABEL_55:
          v14 = v9 - v10;
          *(float *)&a1[8].field_10 = v14;
          v15 = v10 + *(float *)&a1[8].settings1;
          *(float *)&a1[8].settings1 = v15;
          v16 = *(float *)&a1[8].settigns2 - v10;
          goto LABEL_56;
        }
      }
      else if ( (v8 & 4) != 0 )
      {
        goto LABEL_55;
      }
      v14 = v10 + v9;
      *(float *)&a1[8].field_10 = v14;
      v15 = *(float *)&a1[8].settings1 - v10;
      *(float *)&a1[8].settings1 = v15;
      v16 = v10 + *(float *)&a1[8].settigns2;
LABEL_56:
      *(float *)&a1[8].settigns2 = v16;
      v17 = *(float *)&a1[7].field_4C;
      *(float *)&a1[1].field_30 = v14 * v17;
      *(float *)&a1[1].field_34 = v15 * v17;
      *(float *)&a1[1].parent = v16 * v17;
      return skl_root_ref_1F115C(a1);
    case '$':
      result = sub_601916F4(v2);
      if ( result != 8 )
        return result;
      if ( sub_601916EC(v2) != 14 )
      {
        result = sub_601916EC(v2);
        if ( result != 15 )
          return result;
      }
      result = a1[8].field_44;
      a1[8].field_44 = result - 1;
      if ( result == 1 )
        return result;
      if ( result <= 8 )
      {
        v30 = 1065353216;
        v31 = 1065353216;
        v32 = 1065353216;
        sub_608332CC(&a1[8].field_10, &v30, 0.5, 0.06, 0.04);
        v7 = *(float *)&a1[7].field_4C;
        *(float *)&a1[1].field_30 = *(float *)&a1[8].field_10 * v7;
        *(float *)&a1[1].field_34 = v7 * *(float *)&a1[8].settings1;
        *(float *)&a1[1].parent = v7 * *(float *)&a1[8].settigns2;
        return (*(int (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 380))(a1);
      }
      goto LABEL_31;
    case '#':
      result = sub_601916F4(v2);
      if ( result == 2 )
      {
        result = a1[8].field_48;
        if ( result )
        {
          a1[8].field_48 = result - 1;
          if ( result == 1 )
          {
            return (*(int (__fastcall **)(Actor *))(FIELD_U32(a1, 0x0) + 72))(a1);
          }
          else if ( result == 31 )
          {
            v4 = (_DWORD *)dword_60C8B13C;
            ProfileId = Actor__getProfileId(a1);
            v6 = 73;
            if ( ProfileId != 871 )
            {
              v6 = 74;
              if ( ProfileId != 872 )
              {
                v6 = 75;
                if ( ProfileId != 873 )
                {
                  v6 = 77;
                  if ( ProfileId != 874 )
                  {
                    v6 = 76;
                    if ( ProfileId != 875 )
                    {
                      v6 = 78;
                      if ( ProfileId != 876 )
                      {
                        v6 = 73;
                        if ( ProfileId == 877 )
                          v6 = 79;
                      }
                    }
                  }
                }
              }
            }
            return sub_601E4C88(v4, v6, &a1[1].vtable);
          }
        }
      }
      break;
  }
  return result;
}
