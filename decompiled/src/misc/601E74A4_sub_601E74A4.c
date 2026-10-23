/* sub_601E74A4
 * address: 0x601E74A4   size: 2604   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E74A4(int a1)
{
  int v2; // r6
  int v3; // r9
  int v4; // r0
  int v5; // r4
  int v6; // r5
  _DWORD *v7; // r0
  int v8; // r0
  int v9; // r2
  int v10; // r1
  unsigned int v11; // r1
  int v12; // r2
  bool v13; // zf
  int v14; // r0
  bool v15; // zf
  bool v16; // zf
  _DWORD *v17; // r0
  int v18; // r1
  int v19; // r3
  unsigned int v20; // r1
  unsigned int v21; // r1
  unsigned int v22; // r1
  unsigned int v23; // r1
  unsigned int v24; // r0
  int v25; // r0
  int v26; // r1
  bool v27; // zf
  int i; // r9
  int v29; // r4
  int result; // r0
  bool v31; // zf
  int v32; // r6
  unsigned int v33; // r1
  int v34; // r0
  bool v35; // zf
  int v36; // r0
  bool v37; // zf
  int v38; // [sp+4h] [bp-BCh]
  int v39; // [sp+8h] [bp-B8h]
  int v40; // [sp+Ch] [bp-B4h]
  int v41; // [sp+10h] [bp-B0h]
  int v42; // [sp+14h] [bp-ACh]
  ActorBuildInfo v43; // [sp+18h] [bp-A8h] BYREF
  int v44; // [sp+48h] [bp-78h] BYREF
  int v45; // [sp+4Ch] [bp-74h]
  _DWORD v46[18]; // [sp+50h] [bp-70h] BYREF

  v2 = dword_60CC6D78;
  v40 = FIELD_U32(dword_60CC6D78, 412);
  v41 = FIELD_U32(dword_60CC6D78, 416);
  v42 = FIELD_U32(dword_60CC6D78, 420);
  v3 = FIELD_U32(dword_60CC6D78, 424);
  v39 = FIELD_U32(dword_60CC6D78, 32);
  v4 = sub_601CF9C0(dword_60C8AEF0);
  v5 = dword_60CC6D78;
  v6 = v4;
  if ( (FIELD_U8(dword_60CC6D78, 44) & 8) != 0 )
  {
    v44 = 0;
    memset(v46, 0, sizeof(v46));
    sub_601905DC(&v44);
    v44 = 92;
    v45 = sub_601916C8(dword_60C8996C, 92);
    goto LABEL_8;
  }
  v38 = v2;
  if ( FIELD_U8(dword_60CC6D78, 109055) )
  {
    FIELD_U8(dword_60CC6D78, 109055) = 0;
    if ( FIELD_U8(v5, 109056) )
    {
      v44 = 0;
      memset(v46, 0, sizeof(v46));
      sub_601905DC(&v44);
      v44 = 117;
      v45 = sub_601916C8(dword_60C8996C, 117);
      sub_60191160((_DWORD *)dword_60C8996C, &v44);
      FIELD_U8(v5, 109056) = 0;
    }
  }
  if ( FIELD_U8(v5, 509) )
    sub_601D0A0C(v6);
  else
    sub_601D0B54(v6);
  if ( sub_6040E460((unsigned __int8)v3) == 1 )
  {
    v8 = FIELD_U32(v5, 36);
    v44 = 0;
    if ( v39 == 3 || (v8 & 0xFFFFFFFE) != 2 )
      v9 = 32;
    else
      v9 = 31;
    v44 = v9;
    if ( v40 == 6 )
    {
      if ( v44 == 32 )
      {
        v12 = 88;
LABEL_56:
        v44 = v12;
      }
    }
    else if ( v40 == 4 )
    {
      if ( v44 == 31 )
        v12 = 47;
      else
        v12 = 46;
      goto LABEL_56;
    }
    sub_601E81AC();
    goto LABEL_58;
  }
  if ( sub_6040E2A4((unsigned __int8)v3)
    || sub_6040E2CC((unsigned __int8)v3)
    || sub_6040E300((unsigned __int8)v3)
    || sub_6040E328((unsigned __int8)v3)
    || sub_6040E33C((unsigned __int8)v3, v10)
    || (v36 = sub_6040E350((unsigned __int8)v3), (unsigned int)(v3 - 35) < 2)
    || v36 == 1 )
  {
    if ( v39 == 3 )
    {
      if ( (FIELD_U8(v5, 44) & 2) != 0 )
        goto LABEL_58;
      v13 = v3 == 36;
      if ( v3 == 36 )
        v13 = v40 == 4;
      if ( !v13 || sub_6019B268(4u) || sub_6019B268(6u) )
      {
        v14 = v40;
        v15 = v3 == 36;
        if ( v3 == 36 )
          v15 = v40 == 6;
        if ( v15 )
        {
          if ( !sub_6019B268(6u) )
          {
            sub_601E9604();
            goto LABEL_58;
          }
          v14 = v40;
        }
        if ( v14 == 4 )
        {
          v16 = v41 == 1;
          if ( v41 == 1 )
            v16 = v42 == 16;
          if ( v16 )
            goto LABEL_54;
        }
        v37 = v3 == 19;
        if ( v3 == 19 )
          v37 = v14 == 2;
        if ( v37 || (unsigned int)(v3 - 19) > 0x17 || ((1 << (v3 - 19)) & 0xC0001F) == 0 )
LABEL_54:
          sub_601E8A94();
      }
      else
      {
        sub_601E94F0();
      }
    }
    else if ( v39 == 2 && v3 != 42 )
    {
      if ( v3 == 41 )
      {
        if ( FIELD_U32(v5, 448) == 2 )
          sub_601E858C();
        v11 = FIELD_U32(dword_60CC6D78, 452);
        if ( v11 <= 5 && ((1 << v11) & 0x2C) != 0 && (FIELD_U8(dword_60CC6D78, 521) & 1) == 0 )
        {
LABEL_142:
          v44 = 0;
          memset(v46, 0, sizeof(v46));
          sub_601905DC(&v44);
          v44 = 4;
          v45 = sub_601916C8(dword_60C8996C, 4);
          sub_60191160((_DWORD *)dword_60C8996C, &v44);
        }
      }
      else
      {
        v31 = v3 == 36;
        v32 = FIELD_U32(v5, 448) | 1;
        if ( v3 == 36 )
          v31 = v32 == 3;
        if ( !v31 || v40 == 4 && sub_6019B268(6u) == 1 )
        {
          sub_601E8A94();
          if ( v3 == 36 )
          {
            v33 = FIELD_U32(dword_60CC6D78, 452);
            if ( v33 <= 5 && ((1 << v33) & 0x2C) != 0 && (FIELD_U8(dword_60CC6D78, 521) & 1) == 0 )
            {
              v44 = 0;
              memset(v46, 0, sizeof(v46));
              sub_601905DC(&v44);
              v44 = 4;
              v45 = sub_601916C8(dword_60C8996C, 4);
              sub_60191160((_DWORD *)dword_60C8996C, &v44);
            }
          }
        }
        if ( FIELD_U8(a1, 64) && !sub_601D08B0() )
          sub_601E8D78();
        if ( (FIELD_U8(v5, 521) & 1) == 0 )
        {
          v34 = sub_6040E2CC((unsigned __int8)v3);
          v35 = v32 == 3;
          if ( v32 == 3 )
            v35 = v34 == 1;
          if ( v35 && (FIELD_U8(dword_60CC6D78, 521) & 1) == 0 )
            goto LABEL_142;
        }
      }
    }
  }
LABEL_58:
  v17 = (_DWORD *)dword_60C99DEC;
  if ( FIELD_U32(dword_60C99DEC, 40) )
  {
    v19 = FIELD_U32(dword_60C99DEC, 112);
    v18 = v19 == 0;
    if ( v19 )
    {
      v18 = v19 == 0 || FIELD_U32(dword_60C99DEC, 184) == 0;
      if ( FIELD_U32(dword_60C99DEC, 184) )
        v18 |= FIELD_U32(dword_60C99DEC, 256) == 0;
    }
  }
  else
  {
    v18 = 1;
  }
  if ( v18 == 1 )
  {
    v44 = 0;
    memset(v46, 0, sizeof(v46));
    sub_601905DC(&v44);
    v44 = 49;
    v45 = sub_601916C8(dword_60C8996C, 49);
    sub_60191160((_DWORD *)dword_60C8996C, &v44);
    v17 = (_DWORD *)dword_60C99DEC;
  }
  v20 = v17[121];
  if ( v20 > 0xF
    || ((1 << v20) & 0x9010) == 0
    || (v21 = v17[122], v21 > 0xF)
    || ((1 << v21) & 0x9010) == 0
    || (v22 = v17[123], v22 > 0xF)
    || ((1 << v22) & 0x9010) == 0
    || (v23 = v17[124], v23 > 0xF)
    || ((1 << v23) & 0x9010) == 0
    || (v24 = v17[125] - 4, v24 > 0xB)
    || ((0x6FEu >> v24) & 1) != 0 )
  {
    v44 = 0;
    memset(v46, 0, sizeof(v46));
    sub_601905DC(&v44);
    v44 = 39;
    v45 = sub_601916C8(dword_60C8996C, 39);
    sub_60191160((_DWORD *)dword_60C8996C, &v44);
  }
  if ( FIELD_U8(v5, 28) )
    sub_601E9718();
  if ( v39 == 2 )
  {
    v44 = FIELD_U32(a1, 68);
    if ( v44 )
      sub_601E9B18();
    else
      FIELD_U32(dword_60C88BC8, 524) = FIELD_U32(dword_60C88BC8, 520);
  }
  v25 = sub_6019B268(6u);
  v26 = FIELD_U32(v5, 448);
  if ( v25 )
  {
    if ( v3 != 36 )
      goto LABEL_94;
  }
  else
  {
    if ( v3 != 36 )
      goto LABEL_94;
    v27 = v26 == 2;
    if ( v26 == 2 )
      v27 = v40 == 4;
    if ( v27 )
    {
      sub_601E9FA0(a1);
      v26 = FIELD_U32(v5, 448);
    }
  }
  if ( v26 == 2 && v40 == 6 )
    sub_601EA17C(a1);
LABEL_94:
  for ( i = 0; i != 5; ++i )
  {
    if ( (FIELD_U8(v5, 2092) & (unsigned __int8)(1 << i)) != 0
      && (FIELD_U8(v5, 2093) & (unsigned __int8)(1 << i)) == 0 )
    {
      v44 = 0;
      switch ( i )
      {
        case 0:
          v44 = 100;
          break;
        case 1:
          v44 = 101;
          break;
        case 2:
          v44 = 102;
          break;
        case 3:
          v44 = 103;
          break;
        case 4:
          v44 = 104;
          break;
        default:
          break;
      }
      if ( v44 != 103 )
        sub_601EA3C4();
    }
  }
  if ( FIELD_U8(a1, 58) || FIELD_U8(a1, 59) )
    sub_601EA530();
  if ( FIELD_U8(a1, 63) && !sub_601D08B0() )
    sub_601EA910();
  v29 = dword_60CC6D78;
  if ( sub_608FBB8C(FIELD_U8(dword_60CC6D78, 109035)) == 6
    && sub_608FBB8C(FIELD_U8(v29, 109034)) == 7 )
  {
    v44 = 0;
    memset(v46, 0, sizeof(v46));
    sub_601905DC(&v44);
    v44 = 110;
    v45 = sub_601916C8(dword_60C8996C, 110);
    sub_60191160((_DWORD *)dword_60C8996C, &v44);
  }
  result = FIELD_U8(v38, 109032);
  if ( FIELD_U8(v38, 109032) )
  {
    result = v39;
    if ( v39 == 1 )
    {
      if ( FIELD_U8(a1, 65) )
      {
        v44 = 0;
        memset(v46, 0, sizeof(v46));
        sub_601905DC(&v44);
        v44 = 113;
        v45 = sub_601916C8(dword_60C8996C, 113);
        memset(&v43, 0, sizeof(v43));
        v43.linkId = 2;
        memset(&v43.position, 0, sizeof(v43.position));
        v43.profile = Profile__get(0x388u);
        v46[2] = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v43, 0) + 2);
        v7 = (_DWORD *)dword_60C8996C;
        return sub_60191160(v7, &v44);
      }
      v44 = 0;
      memset(v46, 0, sizeof(v46));
      sub_601905DC(&v44);
      v44 = 114;
      v45 = sub_601916C8(dword_60C8996C, 114);
      v46[2] = *(_DWORD *)(*(_DWORD *)sub_601693A0(901) + 8);
LABEL_8:
      v7 = (_DWORD *)dword_60C8996C;
      return sub_60191160(v7, &v44);
    }
  }
  return result;
}
