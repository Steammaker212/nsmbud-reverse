/* sub_601873D0
 * address: 0x601873D0   size: 22464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601873D0(int a1)
{
  int v2; // r11
  float v3; // s0
  float v4; // s1
  signed int result; // r0
  int v6; // r1
  int v7; // r0
  bool v8; // cc
  char v9; // r1
  _BYTE *v10; // r0
  int v11; // r4
  int v12; // r4
  int v13; // r0
  int v14; // r0
  float v15; // s0
  float v16; // r1
  float v17; // r2
  float v18; // r3
  _DWORD v19[2]; // [sp+30h] [bp-70h] BYREF
  int v20; // [sp+5Ch] [bp-44h]

  v2 = dword_60C8996C;
  v20 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) && (unsigned int)(v20 - 7) >> 1 <= 0xA6 )
    __asm { ADD             PC, R0, R1 }
  result = v20 - 7;
  switch ( v20 )
  {
    case 7:
    case 208:
    case 209:
    case 210:
    case 212:
    case 217:
    case 245:
    case 261:
    case 274:
    case 289:
    case 290:
    case 295:
    case 297:
    case 309:
      goto LABEL_5;
    case 8:
    case 206:
      result = dword_60C89E18;
      if ( !FIELD_U8(dword_60C89E18, 64984) )
      {
        result = FIELD_U8(dword_60C89E18, 17049);
        if ( !FIELD_U8(dword_60C89E18, 17049) )
          goto LABEL_89;
      }
      return result;
    case 9:
      result = FIELD_U8(dword_60C89E18, 139472);
      if ( FIELD_U8(dword_60C89E18, 139472) )
        return result;
      word_60C8AEE8 = 0;
      FIELD_U8(a1, 521) = 0;
      goto LABEL_89;
    case 10:
      result = FIELD_U8(dword_60C89E18, 299212);
      if ( !FIELD_U8(dword_60C89E18, 299212) )
        goto LABEL_89;
      return result;
    case 12:
      v9 = 1;
      goto LABEL_32;
    case 13:
      v9 = 0;
LABEL_32:
      FIELD_U8(dword_60C88BC8, 601) = v9;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 19:
    case 105:
    case 148:
    case 175:
    case 176:
    case 177:
    case 183:
    case 211:
    case 215:
    case 216:
    case 287:
    case 294:
    case 296:
      goto LABEL_14;
    case 20:
    case 60:
    case 187:
    case 288:
      goto LABEL_16;
    case 54:
      result = FIELD_U32(a1, 304);
      switch ( result )
      {
        case 2:
          result = dword_60C89E18;
          if ( FIELD_U8(dword_60C89E18, 299215) )
            return result;
          goto LABEL_93;
        case 1:
          FIELD_U8(dword_60C89E18, 299215) = 1;
          FIELD_U32(a1, 304) = 2;
          return 2;
        case 0:
          result = dword_60C89E18;
          if ( !FIELD_U8(dword_60C89E18, 146616) )
          {
            if ( FIELD_U8(dword_60CC6D78, 98528) )
            {
LABEL_93:
              FIELD_U8(dword_60C8C188, 3226) = 1;
              FIELD_U8(result, 17043) = 0;
              result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
              FIELD_U32(a1, 304) = 0;
              return result;
            }
            FIELD_U32(a1, 304) = 1;
          }
          break;
      }
      return result;
    case 55:
    case 57:
      v6 = 156940;
      goto LABEL_24;
    case 58:
      if ( sub_601916F4(v2) == 1 )
      {
        v10 = (_BYTE *)sub_601CF9C0(dword_60C8AEF0);
        if ( !v10[280] )
          (*(void (__fastcall **)(_BYTE *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v10 + 96))(v10, 0, 0, 0);
      }
      result = sub_601CFA84(dword_60C8AEF0);
      if ( !result )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return result;
    case 61:
      if ( !FIELD_U8(a1, 520) )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
LABEL_16:
      result = *(_DWORD *)(sub_601FEE28(dword_60C8C188) + 768);
      if ( result )
        return result;
      FIELD_U8(a1, 520) = 0;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 64:
      result = sub_6021D520(dword_60C8D408);
      goto LABEL_71;
    case 69:
      result = sub_601E1B80((_DWORD *)a1);
      goto LABEL_71;
    case 71:
    case 76:
    case 78:
    case 80:
    case 136:
    case 141:
    case 303:
      result = FIELD_U8(a1, 308);
      if ( (result & 2) == 0 )
        return result;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 72:
    case 77:
    case 79:
    case 81:
    case 137:
    case 308:
      result = FIELD_U8(a1, 308);
      if ( (result & 1) == 0 )
        return result;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 74:
      FIELD_U8(dword_60C8D408, 1451) = 0;
      result = *(unsigned __int8 *)(sub_601CF9C0(dword_60C8AEF0) + 280);
      if ( !result )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return result;
    case 89:
      result = sub_607F6ABC(dword_60CC62E4);
      if ( !result )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return result;
    case 107:
      v11 = sub_601FEE28(dword_60C8C188);
      result = FIELD_U8(v11, 1371);
      if ( FIELD_U8(v11, 1371) )
        return result;
      FIELD_U8(a1, 520) = 0;
      sub_60172FB8(dword_60C88BC8);
      FIELD_U32(v11, 768) = 0;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 119:
      v19[0] = 2;
      v19[1] = DarkCloudDemoScene_create;
      result = SceneMgr_doSceneChange(dword_60CC62E4, dword_60C8C188, (int)v19, 0, 0);
      goto LABEL_71;
    case 123:
    case 131:
    case 132:
      v7 = FIELD_U32(a1, 300);
      v8 = v7 <= 1;
      result = v7 - 1;
      FIELD_U32(a1, 300) = result;
      if ( !v8 )
        return result;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 144:
      v12 = dword_60C8D408;
      v13 = sub_601916F4(v2);
      result = sub_6021D400(v12, v13);
      if ( result != 1 )
        return result;
      if ( sub_601916F4(v2) )
        sub_601FF5A8(dword_60C8C188, 1);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 146:
    case 228:
      result = sub_6021CEF4(dword_60C8D408);
      goto LABEL_71;
    case 147:
      return result;
    case 164:
      v14 = sub_601FEE28(dword_60C8C188);
      sub_6016F2A0(v14, 40);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 178:
      result = *(_DWORD *)(sub_601FEE28(dword_60C8C188) + 768);
      if ( !result )
      {
        FIELD_U8(a1, 520) = 0;
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
        result = dword_60CC6D78;
        FIELD_U32(dword_60CC6D78, 124) = 6;
      }
      return result;
    case 181:
      result = sub_601A172C(dword_60C89E00, 5);
      goto LABEL_71;
    case 205:
      if ( sub_605603C4(dword_60C89E18 + 240464) != 10 )
        goto LABEL_89;
      result = FIELD_U8(dword_60C89E18, 254212);
      if ( !FIELD_U8(dword_60C89E18, 254212) )
        goto LABEL_89;
      return result;
    case 213:
      goto LABEL_79;
    case 214:
      if ( FIELD_U32(dword_60CC6D78, 412) != 5 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
LABEL_5:
      result = FIELD_U32(a1, 300);
      if ( result >= 1 )
        FIELD_U32(a1, 300) = --result;
      if ( !result )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return result;
    case 218:
      result = sub_601FEE28(dword_60C8C188);
      if ( FIELD_U8(result, 1371) )
        return result;
      sub_6016EEE8(result, (_DWORD *)(a1 + 488), 0);
      FIELD_U8(a1, 520) = 0;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 220:
      result = sub_601E290C(a1);
LABEL_71:
      if ( result != 1 )
        return result;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 242:
      if ( FIELD_U32(a1, 456) <= FIELD_U32(a1, 460) )
      {
        sub_60833AF0(v3, v4);
        ++FIELD_U32(a1, 456);
      }
      v15 = sub_601729AC((float *)dword_60C88BC8, FIELD_F32(a1, 444), FIELD_F32(a1, 448), FIELD_F32(a1, 452));
      if ( FIELD_U32(a1, 456) >= FIELD_U32(a1, 460) )
        (*(void (__fastcall **)(int, float))(*(_DWORD *)a1 + 72))(a1, v15);
      goto LABEL_14;
    case 243:
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
LABEL_79:
      if ( FIELD_U32(dword_60CC6D78, 412) != 5 )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
LABEL_14:
      result = *(unsigned __int8 *)(sub_601FEE28(dword_60C8C188) + 1371);
      if ( !result )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return result;
    case 258:
    case 293:
      sub_60833AF0(v3, v4);
      ++FIELD_U32(a1, 456);
      sub_601729AC((float *)dword_60C88BC8, FIELD_F32(a1, 444), FIELD_F32(a1, 448), FIELD_F32(a1, 452));
      result = FIELD_U32(a1, 456);
      if ( result <= FIELD_U32(a1, 460) )
        return result;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 260:
      v16 = FIELD_F32(a1, 420);
      FIELD_F32(a1, 444) = v16;
      v17 = FIELD_F32(a1, 424);
      FIELD_F32(a1, 448) = v17;
      v18 = FIELD_F32(a1, 428);
      FIELD_F32(a1, 452) = v18;
      sub_601729AC((float *)dword_60C88BC8, v16, v17, v18);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 298:
      result = FIELD_U8(dword_60C89E18, 299214);
      if ( !FIELD_U8(dword_60C89E18, 299214) )
        goto LABEL_89;
      return result;
    case 299:
    case 300:
    case 301:
    case 302:
    case 304:
    case 305:
      v6 = 268972;
LABEL_24:
      result = *(unsigned __int8 *)(dword_60C89E18 + v6);
      if ( !*(_BYTE *)(dword_60C89E18 + v6) )
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
      return result;
    case 327:
      result = FIELD_U8(dword_60C89E18, 152815);
      if ( !FIELD_U8(dword_60C89E18, 152815) )
        return result;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    case 331:
      result = FIELD_U8(dword_60C89E18, 299217);
      if ( FIELD_U8(dword_60C89E18, 299217) )
        return result;
LABEL_89:
      FIELD_U8(dword_60C8C188, 3226) = 1;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    default:
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  }
}
