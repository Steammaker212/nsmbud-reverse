/* sub_608D5F6C
 * address: 0x608D5F6C   size: 3416   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608D5F6C(int a1, int a2, unsigned int a3, int a4, int a5)
{
  int v5; // r9
  int v6; // r8
  char v7; // r4
  int v9; // r6
  __int16 *v10; // r7
  __int16 *v11; // r0
  float result; // s0
  int v13; // r0
  int v14; // r4
  bool v15; // zf
  unsigned int v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r1
  int v21; // r1
  int v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r0
  int v27; // r0
  int v28; // r1
  int v29; // r0
  unsigned int v30; // r0
  unsigned int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r0
  int v35; // r0
  int v36; // r1
  int v37; // r0
  __int16 v38; // r0
  int v39; // r0
  char v40; // r1
  int v41; // r0
  char v42; // r3
  unsigned __int8 v43; // r0
  int v44; // r1
  int v45; // r0
  int v46; // r5
  signed int v47; // r0
  int v48; // r1

  v5 = a2;
  v6 = a5;
  v7 = a3;
  v9 = FIELD_U32(a2, 376);
  if ( a3 > 0xFF )
  {
    v10 = 0;
    if ( HIWORD(a3) )
      return result;
    if ( (a3 & 0xE0 | 0x10) != 0x90 )
      goto LABEL_12;
    if ( a4 > 31 )
    {
      if ( a4 > 47 )
        return result;
      v11 = (__int16 *)sub_608BBB30(a2, a4 - 32);
    }
    else
    {
      v11 = sub_608B803C(FIELD_U32(a2, 376), a4);
    }
    v10 = v11;
    if ( v11 )
    {
LABEL_12:
      switch ( v7 )
      {
        case -128:
          *v10 = a5;
          break;
        case -127:
          *v10 += a5;
          break;
        case -126:
          *v10 -= a5;
          break;
        case -125:
          *v10 *= (_WORD)a5;
          break;
        case -124:
          if ( a5 )
            *v10 /= (__int16)a5;
          break;
        case -123:
          v45 = *v10;
          if ( a5 >= 0 )
            v45 <<= a5;
          else
            a2 = -a5;
          if ( a5 < 0 )
            v45 >>= a2;
          *v10 = v45;
          break;
        case -122:
          if ( a5 < 0 )
          {
            v46 = 1;
            v6 = (__int16)-(__int16)a5;
          }
          else
          {
            v46 = 0;
          }
          v47 = sub_608C6D14() * (v6 + 1);
          v48 = v47 >> 16;
          if ( v46 )
            v48 = -(v47 >> 16);
          *v10 = v48;
          break;
        case -121:
          *v10 &= a5;
          break;
        case -120:
          *v10 |= a5;
          break;
        case -119:
          *v10 ^= a5;
          break;
        case -118:
          *v10 = ~(_WORD)a5;
          break;
        case -117:
          if ( a5 )
            *v10 %= a5;
          break;
        case -112:
          FIELD_U8(v5, 108) = *v10 == a5;
          break;
        case -111:
          FIELD_U8(v5, 108) = *v10 >= a5;
          break;
        case -110:
          FIELD_U8(v5, 108) = *v10 > a5;
          break;
        case -109:
          FIELD_U8(v5, 108) = *v10 <= a5;
          break;
        case -108:
          FIELD_U8(v5, 108) = *v10 < a5;
          break;
        case -107:
          FIELD_U8(v5, 108) = *v10 != a5;
          break;
        case -96:
          FIELD_U8(v5, 273) = a4;
          break;
        case -95:
          FIELD_U8(v5, 274) = a4;
          break;
        case -94:
          result = (float)(unsigned __int8)a4 * 0.0078125;
          FIELD_F32(v5, 260) = result;
          break;
        case -93:
          result = (float)(unsigned __int8)a4 * 0.39062;
          FIELD_F32(v5, 264) = result;
          break;
        case -92:
          FIELD_U8(v5, 309) = a4;
          break;
        case -91:
          FIELD_U8(v5, 272) = a4;
          break;
        case -90:
          FIELD_U8(v5, 289) = a4;
          break;
        case -89:
          FIELD_U8(v5, 290) = a4;
          break;
        case -88:
          result = (float)(unsigned __int8)a4 * 0.0078125;
          FIELD_F32(v5, 276) = result;
          break;
        case -87:
          result = (float)(unsigned __int8)a4 * 0.39062;
          FIELD_F32(v5, 280) = result;
          break;
        case -86:
          FIELD_U8(v5, 310) = a4;
          break;
        case -85:
          FIELD_U8(v5, 288) = a4;
          break;
        case -84:
          FIELD_U8(v5, 305) = a4;
          break;
        case -83:
          FIELD_U8(v5, 306) = a4;
          break;
        case -82:
          result = (float)(unsigned __int8)a4 * 0.0078125;
          FIELD_F32(v5, 292) = result;
          break;
        case -81:
          result = (float)(unsigned __int8)a4 * 0.39062;
          FIELD_F32(v5, 296) = result;
          break;
        case -80:
          FIELD_U8(v5, 311) = a4;
          break;
        case -79:
          FIELD_U8(v5, 304) = a4;
          break;
        case -32:
          sub_608B7FC8(v9, (unsigned __int16)a4, v5);
          break;
        case -31:
          FIELD_U32(v5, 268) = 5 * a4;
          break;
        case -30:
          if ( (_WORD)a4 )
          {
            result = 100.0 / (float)(__int16)a4;
            FIELD_F32(v5, 264) = result;
          }
          else
          {
            FIELD_U32(v5, 264) = 0;
            result = 0.0;
          }
          break;
        case -29:
          FIELD_U32(v5, 284) = 5 * a4;
          break;
        case -28:
          if ( (_WORD)a4 )
          {
            result = 100.0 / (float)(__int16)a4;
            FIELD_F32(v5, 280) = result;
          }
          else
          {
            FIELD_U32(v5, 280) = 0;
            result = 0.0;
          }
          break;
        case -27:
          FIELD_U32(v5, 300) = 5 * a4;
          break;
        case -26:
          if ( (_WORD)a4 )
          {
            result = 100.0 / (float)(__int16)a4;
            FIELD_F32(v5, 296) = result;
          }
          else
          {
            FIELD_U32(v5, 296) = 0;
            result = 0.0;
          }
          break;
        default:
          return result;
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 0x81u:
        if ( a4 < 0x10000 )
          FIELD_U32(a2, 204) = (unsigned __int16)a4;
        return result;
      case 0x88u:
        v13 = sub_608B7D68(FIELD_U32(a2, 376), a4);
        v14 = v13;
        v15 = v13 == 0;
        if ( v13 )
          v15 = v13 == v5;
        if ( !v15 )
        {
          sub_608BB040(v13);
          sub_608BB124(v14, FIELD_U32(v5, 100), a5);
          sub_608BB134(v14);
        }
        return result;
      case 0x89u:
        goto LABEL_20;
      case 0x8Au:
        v16 = FIELD_U8(a2, 192);
        if ( v16 <= 9 )
        {
          v17 = a2 + 100 + 8 * v16;
          FIELD_U32(v17, 16) = FIELD_U32(a2, 104);
          FIELD_U8(v17, 12) = 0;
          ++FIELD_U8(a2, 192);
LABEL_20:
          FIELD_U32(a2, 104) = FIELD_U32(a2, 100) + a4;
        }
        return result;
      case 0xB0u:
        FIELD_U8(v9, 217) = a4;
        return result;
      case 0xB1u:
        FIELD_U16(a2, 324) = (unsigned __int8)a4;
        return result;
      case 0xB2u:
        FIELD_U8(a2, 111) = a4 != 0;
        if ( !a4 )
          return result;
        goto LABEL_47;
      case 0xB3u:
        FIELD_U8(a2, 312) = a4;
        return result;
      case 0xB4u:
        FIELD_U8(a2, 326) = a4;
        return result;
      case 0xB5u:
        result = (float)a4 / 127.0;
        FIELD_F32(a2, 336) = result;
        return result;
      case 0xB6u:
        FIELD_U8(a2, 203) = a4;
        return result;
      case 0xBDu:
        FIELD_U8(a2, 258) = a4;
        return result;
      case 0xBEu:
        FIELD_U8(a2, 257) = a4;
        return result;
      case 0xBFu:
        FIELD_U8(a2, 193) = a4 != 0;
        return result;
      case 0xC0u:
        v18 = FIELD_S16(a2, 226);
        v19 = FIELD_S16(v5, 228);
        if ( v19 >= v18 )
          LOBYTE(v20) = FIELD_U8(v5, 225);
        else
          v20 = (__int16)(FIELD_S8(v5, 225) - FIELD_S8(v5, 224)) * (__int16)v19 / v18 + FIELD_S8(v5, 224);
        FIELD_U8(v5, 224) = v20;
        FIELD_U8(v5, 225) = a4 - 64;
        FIELD_U32(v5, 226) = (unsigned __int16)a5;
        return result;
      case 0xC1u:
        v21 = FIELD_S16(a2, 214);
        v22 = FIELD_S16(v5, 216);
        LOWORD(v23) = FIELD_U8(v5, 213);
        if ( v22 < v21 )
          v23 = (__int16)(v23 - FIELD_U8(v5, 212)) * (__int16)v22 / v21 + FIELD_U8(v5, 212);
        FIELD_U8(v5, 212) = v23;
        FIELD_U8(v5, 213) = a4;
        FIELD_U32(v5, 214) = (unsigned __int16)a5;
        return result;
      case 0xC2u:
        v24 = FIELD_S16(v9, 222);
        v25 = FIELD_S16(v9, 224);
        LOWORD(v26) = FIELD_U8(v9, 221);
        if ( v25 < v24 )
          v26 = (__int16)(v26 - FIELD_U8(v9, 220)) * (__int16)v25 / v24 + FIELD_U8(v9, 220);
        FIELD_U8(v9, 220) = v26;
        FIELD_U8(v9, 221) = a4;
        FIELD_U32(v9, 222) = (unsigned __int16)a5;
        return result;
      case 0xC3u:
        FIELD_U8(a2, 316) = a4;
        return result;
      case 0xC4u:
        v27 = FIELD_S16(a2, 238);
        v28 = FIELD_S16(a2, 240);
        if ( v28 >= v27 )
          LOBYTE(v29) = FIELD_U8(v5, 237);
        else
          v29 = (__int16)(FIELD_S8(v5, 237) - FIELD_S8(v5, 236)) * (__int16)v28 / v27 + FIELD_S8(v5, 236);
        FIELD_U8(v5, 236) = v29;
        FIELD_U8(v5, 237) = a4;
        FIELD_U32(v5, 238) = (unsigned __int16)a5;
        return result;
      case 0xC5u:
        FIELD_U8(a2, 313) = a4;
        return result;
      case 0xC6u:
        FIELD_U8(a2, 317) = a4;
        return result;
      case 0xC7u:
        FIELD_U8(a2, 109) = a4 != 0;
        return result;
      case 0xC8u:
        FIELD_U8(a2, 110) = a4 != 0;
LABEL_47:
        sub_608BB150(a2, -1);
        sub_608BB1CC(v5);
        return result;
      case 0xC9u:
        FIELD_U8(a2, 318) = FIELD_U8(a2, 316) + a4;
        FIELD_U8(a2, 201) = 1;
        return result;
      case 0xCAu:
        result = (float)(unsigned __int8)a4 * 0.0078125;
        FIELD_F32(a2, 244) = result;
        return result;
      case 0xCBu:
        result = (float)(unsigned __int8)a4 * 0.39062;
        FIELD_F32(a2, 248) = result;
        return result;
      case 0xCCu:
        FIELD_U8(a2, 308) = a4;
        return result;
      case 0xCDu:
        FIELD_U8(a2, 256) = a4;
        return result;
      case 0xCEu:
        FIELD_U8(a2, 201) = a4 != 0;
        return result;
      case 0xCFu:
        FIELD_U8(a2, 319) = a4;
        return result;
      case 0xD0u:
        FIELD_U8(a2, 320) = a4;
        return result;
      case 0xD1u:
        FIELD_U8(a2, 321) = a4;
        return result;
      case 0xD2u:
        FIELD_U8(a2, 322) = a4;
        return result;
      case 0xD3u:
        FIELD_U8(a2, 323) = a4;
        return result;
      case 0xD4u:
        v30 = FIELD_U8(a2, 192);
        if ( v30 <= 9 )
        {
          v31 = a2 + 8 * v30;
          FIELD_U32(v31, 116) = FIELD_U32(a2, 104);
          FIELD_U8(v31, 113) = a4;
          FIELD_U8(v31, 112) = 1;
          ++FIELD_U8(a2, 192);
        }
        return result;
      case 0xD5u:
        v32 = FIELD_S16(a2, 220);
        v33 = FIELD_S16(v5, 222);
        LOWORD(v34) = FIELD_U8(v5, 219);
        if ( v33 < v32 )
          v34 = (__int16)(v34 - FIELD_U8(v5, 218)) * (__int16)v33 / v32 + FIELD_U8(v5, 218);
        FIELD_U8(v5, 218) = v34;
        FIELD_U8(v5, 219) = a4;
        FIELD_U32(v5, 220) = (unsigned __int16)a5;
        return result;
      case 0xD6u:
        if ( byte_60CC9864 )
        {
          if ( a4 > 31 )
          {
            if ( a4 <= 47 )
              sub_608BBB30(a2, a4 - 32);
          }
          else
          {
            sub_608B803C(FIELD_U32(a2, 376), a4);
          }
        }
        return result;
      case 0xD7u:
        v35 = FIELD_S16(a2, 232);
        v36 = FIELD_S16(a2, 234);
        if ( v36 >= v35 )
          LOBYTE(v37) = FIELD_U8(v5, 231);
        else
          v37 = (__int16)(FIELD_S8(v5, 231) - FIELD_S8(v5, 230)) * (__int16)v36 / v35 + FIELD_S8(v5, 230);
        FIELD_U8(v5, 230) = v37;
        FIELD_U8(v5, 231) = a4;
        FIELD_U32(v5, 232) = (unsigned __int16)a5;
        return result;
      case 0xD8u:
        result = (float)(a4 - 64) * 0.015625;
        FIELD_F32(a2, 332) = result;
        return result;
      case 0xD9u:
        FIELD_U8(a2, 328) = a4;
        return result;
      case 0xDAu:
        FIELD_U8(a2, 329) = a4;
        return result;
      case 0xDBu:
        FIELD_U8(a2, 327) = a4;
        return result;
      case 0xDCu:
        FIELD_U8(a2, 314) = a4 - 64;
        return result;
      case 0xDDu:
        sub_608BB970(a2, a4);
        return result;
      case 0xDEu:
        FIELD_U8(a2, 330) = a4;
        return result;
      case 0xDFu:
        FIELD_U8(a2, 202) = (a4 & 0xC0u) > 0x3F;
        return result;
      case 0xE0u:
        FIELD_U32(a2, 252) = 5 * a4;
        return result;
      case 0xE1u:
        v38 = a4;
        if ( a4 <= 0 )
          v38 = 0;
        if ( a4 >= 1024 )
          v38 = 1023;
        FIELD_U16(v9, 218) = v38;
        return result;
      case 0xE3u:
        result = (float)a4 * 0.015625;
        FIELD_F32(a2, 208) = result;
        return result;
      case 0xE4u:
        if ( (_WORD)a4 )
        {
          result = 100.0 / (float)(__int16)a4;
          FIELD_F32(a2, 248) = result;
        }
        else
        {
          FIELD_U32(a2, 248) = 0;
          return 0.0;
        }
        return result;
      case 0xFBu:
        FIELD_U32(a2, 320) = -1;
        FIELD_U16(a2, 324) = 255;
        return result;
      case 0xFCu:
        v39 = FIELD_U8(a2, 192);
        if ( !FIELD_U8(a2, 192) )
          return result;
        v40 = v39 - 1;
        v41 = v5 + 8 * (v39 - 1);
        if ( !FIELD_U8(v41, 112) )
          return result;
        if ( FIELD_U8(v41, 113) )
        {
          v42 = FIELD_U8(v41, 113) - 1;
          if ( FIELD_U8(v41, 113) == 1 )
          {
            FIELD_U8(v5, 192) = v40;
            return result;
          }
        }
        else
        {
          v42 = 0;
        }
        FIELD_U8(v41, 113) = v42;
        FIELD_U32(v5, 104) = FIELD_U32(v41, 116);
        return result;
      case 0xFDu:
        v43 = FIELD_U8(a2, 192);
        break;
      default:
        return result;
    }
    while ( v43 )
    {
      FIELD_U8(v5, 192) = --v43;
      v44 = v5 + 8 * v43;
      if ( !FIELD_U8(v44, 112) )
      {
        FIELD_U32(v5, 104) = FIELD_U32(v44, 116);
        return result;
      }
    }
  }
  return result;
}
