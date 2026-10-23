/* sub_601E5468
 * address: 0x601E5468   size: 1568   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E5468(int a1)
{
  int v2; // r6
  int v3; // r9
  int v4; // r5
  int v5; // r7
  int v6; // r11
  _BYTE *v7; // r8
  int v8; // r0
  int result; // r0
  bool v10; // zf
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int *v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r4
  int v19; // r0
  unsigned __int8 v20; // r5
  unsigned __int8 v21; // r0
  bool v22; // zf
  int v23; // r2
  int v24; // r4
  int v25; // r5
  bool v26; // r9
  bool v27; // r4
  bool v28; // r11
  bool v29; // r5
  bool v30; // r1
  int v31; // r0
  bool v32; // zf
  int v33; // r0
  bool v34; // [sp+4h] [bp-4Ch]
  bool v35; // [sp+8h] [bp-48h]
  bool v36; // [sp+Ch] [bp-44h]
  int v37; // [sp+10h] [bp-40h]
  _DWORD v38[2]; // [sp+14h] [bp-3Ch] BYREF
  int v39; // [sp+1Ch] [bp-34h] BYREF
  int v40; // [sp+20h] [bp-30h]
  int v41; // [sp+24h] [bp-2Ch]
  unsigned int v42; // [sp+28h] [bp-28h]

  v2 = dword_60CC6D78;
  v3 = FIELD_U32(dword_60CC6D78, 428);
  v4 = FIELD_U32(dword_60CC6D78, 432);
  v5 = FIELD_U32(dword_60CC6D78, 436);
  v6 = FIELD_U32(dword_60CC6D78, 440);
  if ( FIELD_U8(dword_60CC6D78, 507) )
  {
    v7 = (_BYTE *)(dword_60CC6D78 + 44);
    FIELD_U8(dword_60CC6D78, 507) = 0;
    v8 = 2;
    FIELD_U32(v2, 32) = 2;
  }
  else
  {
    v7 = (_BYTE *)(dword_60CC6D78 + 44);
    v8 = FIELD_U32(dword_60CC6D78, 32);
    if ( (FIELD_U32(dword_60CC6D78, 44) & 2) != 0 && v8 == 3 )
    {
      v8 = 1;
      FIELD_U32(dword_60CC6D78, 32) = 1;
    }
  }
  v42 = v8;
  FIELD_U16(a1, 56) = 0;
  sub_601E5AB0(a1);
  sub_601E5C14(a1);
  result = (unsigned __int8)*v7;
  if ( (result & 8) == 0 )
  {
    v10 = v3 == 5;
    FIELD_U32(v2, 500) = 0;
    if ( v3 == 5 )
      v10 = v6 == 22;
    if ( v10 )
    {
      v39 = 5;
      v40 = v4;
      v41 = v5;
      if ( sub_601E1398((int)&v39) == 1 )
      {
        if ( v42 == 1 )
        {
          v11 = FIELD_U32(v2, 468);
          FIELD_U32(v2, 428) = v11;
          v12 = FIELD_U32(v2, 472);
          FIELD_U32(v2, 432) = v12;
          v13 = FIELD_U32(v2, 476);
          FIELD_U32(v2, 436) = v13;
          FIELD_U32(v2, 412) = v11;
          FIELD_U32(v2, 416) = v12;
          FIELD_U32(v2, 420) = v13;
          FIELD_U32(v2, 424) = -1;
        }
        else if ( v42 != 3 )
        {
          v38[0] = &sead__SafeStringBase__vtable;
          v38[1] = "W6C0";
          v14 = sub_601E03D4(5, 0, v38);
          FIELD_U32(v2, 500) = 2;
          v15 = v14[21];
          v39 = v15;
          v40 = v14[22];
          v16 = v40;
          v17 = v14[24];
          v41 = v17;
          FIELD_U32(v2, 428) = v15;
          FIELD_U32(v2, 432) = v16;
          FIELD_U32(v2, 436) = v17;
          FIELD_U32(v2, 412) = v15;
          FIELD_U32(v2, 416) = v16;
          FIELD_U32(v2, 420) = v17;
        }
      }
    }
    FIELD_U8(a1, 60) = 1;
    if ( (unsigned __int8)sub_60408230(v2 + 52, 8, 0) != 7 )
      FIELD_U8(a1, 60) = 0;
    if ( (unsigned __int8)sub_60408230(v2 + 52, 8, 1) != 7 )
      FIELD_U8(a1, 60) = 0;
    if ( (unsigned __int8)sub_60408230(v2 + 52, 8, 2) != 7 )
      FIELD_U8(a1, 60) = 0;
    if ( (unsigned __int8)sub_60408230(v2 + 52, 8, 3) != 7 )
      FIELD_U8(a1, 60) = 0;
    if ( (unsigned __int8)sub_60408230(v2 + 52, 8, 4) != 7 )
      FIELD_U8(a1, 60) = 0;
    if ( (unsigned __int8)sub_60408230(v2 + 52, 8, 5) != 7 )
      FIELD_U8(a1, 60) = 0;
    if ( (unsigned __int8)sub_60408230(v2 + 52, 8, 6) != 7 )
      FIELD_U8(a1, 60) = 0;
    if ( (unsigned __int8)sub_60408230(v2 + 52, 8, 7) != 7 )
      FIELD_U8(a1, 60) = 0;
    v18 = dword_60C8C188;
    FIELD_U8(v18, 3231) = sub_6019AF00(FIELD_U32(v2, 412), FIELD_U32(v2, 424));
    sub_6019B348(v3, v6);
    v19 = sub_6040D864(&dword_60C8B1AC);
    v20 = v19;
    if ( v19 != -1 )
    {
      v21 = sub_6040D4F0(&dword_60C8B1AC);
      sub_603F727C(dword_60CC6D78 + 796, v21, v20);
    }
    if ( v6 == -1 )
      goto LABEL_66;
    sub_601E6414(a1);
    if ( v42 <= 3 )
      sub_603F72B8(v2 + 796, (unsigned __int8)v3, (unsigned __int8)v6);
    if ( (*v7 & 2) == 0 && !FIELD_U8(v2, 109032) )
    {
      if ( v42 == 2 )
      {
        sub_603F76F4(v2 + 796, (unsigned __int8)v3, (unsigned __int8)v6, 0);
      }
      else
      {
        if ( v42 != 3 )
        {
LABEL_41:
          v37 = (unsigned __int8)v6;
          if ( sub_6040E244() == 1 )
          {
            v22 = v42 == 2;
            if ( v42 == 2 )
              v22 = (*v7 & 2) == 0;
            if ( v22 )
            {
              v23 = (FIELD_U8(dword_60C99DEC, 477) >> 7) ^ 1;
              if ( FIELD_S8(dword_60C99DEC, 478) >= 0 )
                LOBYTE(v23) = !(FIELD_U8(dword_60C99DEC, 477) >> 7) | 2;
              if ( FIELD_S8(dword_60C99DEC, 479) >= 0 )
                LOBYTE(v23) = v23 | 4;
              v24 = (unsigned __int8)v23;
              v25 = sub_60408350(v2 + 52, v3);
              sub_60408284(v2 + 52, v3, v6, v24);
              if ( !v25 )
              {
                if ( sub_60408350(v2 + 52, v3) == 1 )
                {
                  FIELD_U8(a1, 58) = 1;
                  FIELD_U16(a1, 56) |= 1 << v3;
                }
                else if ( v3 == 8 )
                {
                  v36 = (unsigned __int8)sub_60408230(v2 + 52, 8, 0) != 7;
                  v35 = (unsigned __int8)sub_60408230(v2 + 52, 8, 1) != 7;
                  v34 = (unsigned __int8)sub_60408230(v2 + 52, 8, 2) != 7;
                  v26 = (unsigned __int8)sub_60408230(v2 + 52, 8, 3) != 7;
                  v27 = (unsigned __int8)sub_60408230(v2 + 52, 8, 4) != 7;
                  v28 = (unsigned __int8)sub_60408230(v2 + 52, 8, 5) != 7;
                  v29 = (unsigned __int8)sub_60408230(v2 + 52, 8, 6) != 7;
                  v30 = (unsigned __int8)sub_60408230(v2 + 52, 8, 7) != 7;
                  if ( !FIELD_U8(a1, 60) && !v36 && !v35 && !v34 && !v26 && !v27 && !v28 && !v29 && !v30 )
                    FIELD_U8(a1, 59) = 1;
                }
              }
            }
          }
          sub_601E6C04(a1);
          sub_601E6EA8(a1);
          if ( v42 == 2 && !sub_6040E368(v37) )
          {
            v31 = sub_6040E404(v37);
            v32 = v31 == 0;
            if ( !v31 )
              v32 = (*v7 & 2) == 0;
            if ( v32 && FIELD_U32(v2, 36) <= 1u )
              sub_603FFCC8(dword_60C99DEC + 596);
          }
LABEL_66:
          v33 = sub_601E700C(a1);
          return sub_601E7124(v33);
        }
        if ( sub_603FD0B4(dword_60C99DEC + 16) == 1 )
          sub_603F774C(v2 + 796, (unsigned __int8)v3, (unsigned __int8)v6);
      }
    }
    if ( v42 == 2 )
      sub_601E65D8();
    goto LABEL_41;
  }
  return result;
}
