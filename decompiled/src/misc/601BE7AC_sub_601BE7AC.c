/* sub_601BE7AC
 * address: 0x601BE7AC   size: 7336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BE7AC(_DWORD *a1)
{
  int v2; // r6
  int v3; // r5
  int result; // r0
  int v5; // r1
  int v6; // r1
  int v7; // r0
  int v8; // r0
  float v9; // s2
  float v10; // s8
  float v11; // s4
  int v12; // r0
  int v13; // r0
  int v14; // r7
  int v15; // r6
  int v16; // r5
  bool v17; // zf
  int v18; // r5
  int v19; // r0
  int v20; // r5
  int v21; // r0
  int v22; // r0
  int v23; // r5
  float v24[3]; // [sp+14h] [bp-5Ch] BYREF
  int v25; // [sp+20h] [bp-50h]
  double v26; // [sp+24h] [bp-4Ch] BYREF
  float v27; // [sp+2Ch] [bp-44h]

  if ( !(*(int (__fastcall **)(_DWORD *))(*a1 + 92))(a1) )
    return (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
  v2 = dword_60C8996C;
  v3 = sub_601CF9C0(dword_60C8AEF0);
  v25 = sub_6019112C(v2);
  sub_601916EC(v2);
  if ( FIELD_U8(v2, 1384) && (unsigned int)(v25 - 5) >> 1 <= 0xA2 )
    __asm { ADD             PC, R0, R1 }
  v5 = v25 - 5;
  switch ( v25 )
  {
    case 5:
      if ( (a1[66] | 1) == 7 )
      {
        result = a1[256];
        if ( a1[45] == result )
          goto LABEL_18;
      }
      else
      {
        result = sub_60793CA8(*(_DWORD *)(a1[a1[368] + 230] + 4));
        if ( result == 1 )
          goto LABEL_18;
      }
      return result;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
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
    case 35:
    case 37:
    case 38:
    case 39:
    case 44:
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
    case 94:
    case 95:
    case 96:
    case 97:
    case 98:
    case 99:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 144:
    case 145:
    case 146:
    case 147:
    case 148:
    case 149:
    case 152:
    case 154:
    case 156:
    case 157:
    case 158:
    case 159:
    case 160:
    case 161:
    case 162:
    case 163:
    case 164:
    case 165:
    case 166:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
    case 185:
    case 186:
    case 187:
    case 188:
    case 189:
    case 190:
    case 191:
    case 192:
    case 193:
    case 194:
    case 195:
    case 196:
    case 197:
    case 198:
    case 199:
    case 200:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 209:
    case 210:
    case 211:
    case 212:
    case 213:
    case 214:
    case 215:
    case 216:
    case 217:
    case 218:
    case 219:
    case 220:
    case 221:
    case 222:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
    case 228:
    case 229:
      goto LABEL_18;
    case 17:
      return sub_601C19BC(a1, v5);
    case 18:
      v7 = a1[71];
      if ( v7 >= 2 )
        goto LABEL_27;
      if ( v7 == 1 )
      {
        sub_601C5B4C(a1, 1);
        sub_601BA0F8(a1, 13, 0.0, 0.0);
        v8 = FIELD_U32(v3, 180);
        a1[45] = v8;
        a1[256] = v8;
        v26 = sub_601BA56C(a1, v3 + 980, FIELD_U32(v3, 180));
        v27 = v9;
        v10 = FIELD_F32(v3, 88);
        v11 = FIELD_F32(v3, 84) - *((float *)&v26 + 1);
        v24[0] = FIELD_F32(v3, 80) - *(float *)&v26;
        v24[1] = v11;
        v24[2] = v10 - v9;
        sub_601BA0F8(a1, 7, 0.0, 0.0);
        v12 = sub_601C5EEC(a1);
        ((void (__fastcall *)(_DWORD *, double *, int, int, float, float, float, int, float *))loc_60185F9C)(
          a1,
          &v26,
          4 * v12,
          18,
          12.0,
          1.0 * 2.3,
          2.3 * 1.0,
          18,
          v24);
        sub_601B69F4(a1, &stru_60C8ADFC);
        v7 = a1[71];
        goto LABEL_27;
      }
      if ( sub_601860F8(a1) == 1 )
      {
        sub_601C6044(a1, a1 + 271);
        sub_60169018(a1);
        sub_601B69E0(a1);
        sub_601C503C(a1);
        (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
      }
      result = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
      if ( result == 1 )
        return sub_601BA0F8(a1, 18, 0.0, 0.0);
      return result;
    case 36:
      v13 = a1[277];
      if ( (v13 & 0x20) != 0 )
      {
        result = (*(int (__fastcall **)(_DWORD *))(*a1 + 120))(a1);
        if ( !result )
          return result;
        goto LABEL_113;
      }
      if ( (v13 & 0x10) != 0 )
      {
        result = sub_601C42A8(a1, v5);
        if ( !result )
          return result;
        goto LABEL_113;
      }
      v14 = a1[59];
      v15 = sub_601916F4(dword_60C8996C);
      result = a1[262];
      v16 = 0;
      if ( result == 1 )
      {
        result = a1[a1[368] + 230];
        if ( result )
        {
          result = sub_60793CA8(FIELD_U32(result, 4));
          if ( result == 1 )
          {
            result = (*(int (__fastcall **)(_DWORD *))(*a1 + 100))(a1);
            v16 = 1;
          }
        }
      }
      else if ( !result )
      {
        result = (*(int (__fastcall **)(_DWORD *))(*a1 + 120))(a1);
        v16 = result;
        v17 = v15 == 11;
        if ( v15 == 11 )
          v17 = result == 1;
        if ( v17 )
        {
          result = 1;
          v16 = 0;
          a1[262] = 1;
          if ( v14 < 1 )
            goto LABEL_112;
          goto LABEL_108;
        }
      }
      if ( v15 != 11 )
      {
        if ( v15 == 7 && v14 >= 1 )
        {
          result = a1[59];
          if ( !result )
          {
            result = sub_601C6184(a1, 6, 0.0);
            goto LABEL_110;
          }
        }
        goto LABEL_112;
      }
      if ( v14 < 1 )
        goto LABEL_112;
LABEL_108:
      result = a1[59];
      if ( !result )
      {
        result = sub_601C5B4C(a1, 17);
LABEL_110:
        if ( !v16 )
          return result;
        goto LABEL_113;
      }
LABEL_112:
      if ( v16 != 1 )
        return result;
LABEL_113:
      if ( (a1[66] | 1) == 7 && (a1[277] & 0x20) != 0 )
      {
        a1[285] = 0;
        a1[286] = 0;
      }
      goto LABEL_18;
    case 40:
      result = sub_60185F3C(a1);
      if ( result != 1 )
        return result;
      sub_6019EC34(a1 + 271, v3 + 1032);
      *((_BYTE *)a1 + 216) |= 2u;
      goto LABEL_18;
    case 41:
      if ( sub_601D9E28(a1 + 271) == 1 )
      {
        result = sub_60185F3C(a1);
        if ( result != 1 )
          return result;
      }
      else
      {
        result = sub_601860F8(a1);
        if ( result != 1 )
          return result;
      }
      sub_601B69E0(a1);
      sub_601C503C(a1);
      goto LABEL_18;
    case 42:
      return sub_601C1228(a1, v5);
    case 43:
      return sub_601C16F0(a1, v5);
    case 45:
      return sub_601C182C(a1, v5);
    case 91:
      return sub_601C1CE0(a1, v5);
    case 92:
      if ( (a1[66] | 1) == 7 )
        goto LABEL_18;
      result = FIELD_U8(v3, 1232);
      if ( (result & 1) != 0 )
      {
        result = sub_601C505C(a1, v5);
        switch ( a1[262] )
        {
          case 0:
            result = *((unsigned __int8 *)a1 + 1109);
            if ( (result & 0x20) != 0 )
            {
              sub_601BA0F8(a1, 42, 0.0, 0.0);
              a1[262] = 1;
              result = 1;
            }
            break;
          case 1:
            result = sub_60793CA8(*(_DWORD *)(a1[a1[368] + 230] + 4));
            if ( result == 1 )
            {
              a1[277] &= ~0x2000u;
              sub_601BA0F8(a1, 43, 0.0, 0.0);
              a1[262] = 2;
              result = 2;
            }
            break;
          case 2:
            if ( !result || (result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 68))(result), result == 1) )
            {
              a1[71] = 30;
              a1[262] = 3;
              result = 3;
            }
            break;
          case 3:
            v7 = a1[71];
            if ( v7 >= 1 )
              goto LABEL_27;
            (*(void (__fastcall **)(_DWORD *))(*a1 + 100))(a1);
            a1[262] = 4;
            result = 4;
            break;
          case 4:
            goto LABEL_18;
          default:
            return result;
        }
      }
      return result;
    case 111:
    case 113:
    case 115:
    case 117:
    case 118:
      if ( sub_601916F4(v2) )
        goto LABEL_18;
      if ( !a1[59] )
      {
        *((_BYTE *)a1 + 216) &= ~2u;
        *((_BYTE *)a1 + 553) = 0;
      }
      result = sub_601C1AAC(a1, v6);
      if ( result != 1 )
        return result;
      sub_601B69F4(a1, &stru_60C8ABD4);
      goto LABEL_18;
    case 112:
    case 114:
    case 116:
      if ( !a1[59] )
      {
        *((_BYTE *)a1 + 216) &= ~2u;
        *((_BYTE *)a1 + 553) = 0;
      }
      sub_601C1AAC(a1, v5);
      goto LABEL_18;
    case 150:
      return sub_601C1EB4(a1, v5);
    case 151:
      return sub_601C22D4(a1, v5);
    case 153:
      result = sub_601C505C(a1, v5);
      v18 = result;
      if ( !result )
        return result;
      sub_601C6268(a1, result);
      v19 = a1[277];
      if ( (v19 & 0x2000) != 0 )
      {
        a1[277] = v19 | 0x200;
        a1[256] = sub_608332B0(a1 + 20, v18 + 80);
      }
      goto LABEL_18;
    case 155:
      result = sub_601C505C(a1, v5);
      v20 = result;
      if ( !result )
        return result;
      sub_601C6268(a1, result);
      v21 = a1[277];
      if ( (v21 & 0x2000) != 0 )
      {
        a1[277] = v21 | 0x100;
        v22 = sub_608332B0(a1 + 20, v20 + 80);
        a1[255] = v22;
        a1[256] = v22;
      }
      goto LABEL_18;
    case 230:
      if ( (a1[66] | 1) == 7 )
        goto LABEL_18;
      result = sub_60793CA8(*(_DWORD *)(a1[a1[368] + 230] + 4));
      if ( result != 1 )
        return result;
      (*(void (__fastcall **)(_DWORD *))(*a1 + 100))(a1);
      goto LABEL_18;
    default:
      v5 = 311;
      switch ( v25 )
      {
        case 311:
          result = a1[256];
          if ( a1[45] != result )
            return result;
          sub_601BA0F8(a1, 18, 0.0, 0.0);
          goto LABEL_18;
        case 314:
          if ( (a1[66] | 1) == 7 )
            goto LABEL_18;
          v23 = FIELD_U32(dword_60CC6D78, 440);
          if ( !sub_6040E33C((unsigned __int8)v23, 311) && v23 != 36 )
            goto LABEL_18;
          result = a1[261];
          if ( result >= 2 )
          {
            if ( a1[45] != a1[256] )
              return result;
            goto LABEL_98;
          }
          if ( result == 1 )
          {
            sub_601BA0F8(a1, 40, 0.0, 0.0);
            a1[71] = -1;
            result = a1[261];
LABEL_98:
            a1[261] = --result;
            return result;
          }
          v7 = a1[71];
          if ( v7 < 0 )
          {
            result = sub_60793CA8(*(_DWORD *)(a1[a1[368] + 230] + 4));
            if ( result == 1 )
            {
              sub_601BA0F8(a1, 41, 0.0, 0.0);
              a1[71] = 60;
              result = 60;
            }
          }
          else if ( v7 )
          {
LABEL_27:
            result = v7 - 1;
            a1[71] = result;
          }
          else
          {
            (*(void (__fastcall **)(_DWORD *, float))(*a1 + 104))(a1, 0.0);
LABEL_18:
            result = (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
          }
          break;
        case 320:
          return sub_601C19BC(a1, v5);
        case 324:
          if ( (a1[66] | 1) != 7 )
            goto LABEL_18;
          return sub_601C3B14(a1, 311);
        case 326:
          if ( (a1[66] | 1) != 7 )
            goto LABEL_18;
          result = sub_605EB988(**(_DWORD **)(*(_DWORD *)(a1[236] + 12) + 12), 311);
          if ( result != 1 )
            return result;
          sub_601C3334(a1, 0, -1.0, 0.0, 1.0);
          goto LABEL_18;
        case 328:
          if ( (a1[66] | 1) != 7 || sub_601C4774(a1, 311) != 1 || sub_601C6678(a1) )
            goto LABEL_18;
          result = (*(int (__fastcall **)(_DWORD *))(*a1 + 120))(a1);
          if ( result != 1 )
            return result;
          *((_BYTE *)a1 + 328) = 1;
          goto LABEL_18;
        case 329:
          if ( (a1[66] | 1) != 7 )
            goto LABEL_18;
          return sub_601C2634(a1, 311);
        case 330:
          if ( (a1[66] | 1) != 7 )
            goto LABEL_18;
          result = a1[256];
          if ( a1[45] != result )
            return result;
          sub_601B69E0(a1);
          goto LABEL_18;
        default:
          goto LABEL_18;
      }
      break;
  }
  return result;
}
