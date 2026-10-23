/* sub_603FAE20
 * address: 0x603FAE20   size: 1084   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FAE20(int a1)
{
  int result; // r0
  _BOOL4 v3; // r6
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r5
  bool v8; // zf
  bool v9; // zf
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r0
  _DWORD v15[6]; // [sp+8h] [bp-18h] BYREF

  result = sub_608194EC((_BYTE *)dword_60CC6BE4, a1);
  if ( !result )
  {
    v3 = 0;
    if ( AreaTask_intance )
    {
      v4 = dword_60CC62E4;
      if ( !FIELD_U32(dword_60CC62E4, 92) )
      {
        v5 = dword_60CC6D78;
        v6 = FIELD_U32(dword_60CC6D78, 32);
        switch ( v6 )
        {
          case 0:
            sub_607E22E0(dword_60CC62E4, dword_60CC6D78, v6);
            v15[0] = 2;
            v4 = dword_60CC62E4;
            goto LABEL_7;
          case 1:
            goto LABEL_18;
          case 2:
            v7 = LevelInfo_instance;
            if ( !sub_6040E3D0(LevelInfo_instance) && !sub_6040E438(v7) )
              sub_603F692C(a1 + 272);
            if ( (FIELD_U8(dword_60CC6D78, 44) & 1) != 0 )
              sub_603F692C(dword_60C99DEC + 16);
            goto LABEL_13;
          case 3:
LABEL_13:
            sub_60788C30(PlayerMgr_instance, v5, v6);
            sub_605E8058(dword_60CB1BE4, a1 + 272);
            v8 = **(_BYTE **)(dword_60CC6D78 + 140) == 0;
            if ( !**(_BYTE **)(dword_60CC6D78 + 140) )
              v8 = (FIELD_U8(dword_60CC6D78, 44) & 1) == 0;
            if ( v8 )
              qmemcpy((void *)(dword_60C99DEC + 16), (const void *)(a1 + 272), 0x280u);
LABEL_18:
            sub_603FA57C(a1);
            break;
          case 4:
            FIELD_U8(a1, 193) = 1;
            FIELD_U32(v5, 44) |= 0x20u;
            v15[0] = 2;
LABEL_7:
            v15[1] = sub_600246FC;
            SceneMgr_doSceneChange(v4, a1, (int)v15, 0, 0);
            break;
          default:
            break;
        }
      }
      v9 = AreaTask_intance == 0;
      if ( AreaTask_intance )
        v9 = FIELD_U8(AreaTask_intance, 194) == 0;
      if ( !v9 )
        v3 = FIELD_U32(AreaTask_intance, 1832) != 1;
    }
    v10 = FIELD_U32(a1, 196);
    if ( v10 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
    if ( FIELD_U32(a1, 200) )
      sub_60550938();
    if ( dword_60C9EBB4 )
      sub_6047FDCC();
    sub_605425C8(dword_60CABDE4);
    if ( dword_60CAD908 )
      sub_60559CF0();
    if ( FIELD_U32(a1, 204) )
    {
      v11 = !v3;
      if ( v3 )
        sub_6055A5C4();
    }
    v12 = FIELD_U32(a1, 208);
    if ( v12 )
      sub_604BC4F8(v12, v11);
    if ( FIELD_U32(a1, 220) )
      sub_6054BD8C();
    if ( FIELD_U32(a1, 224) )
      sub_6054B6A4();
    if ( FIELD_U32(a1, 228) )
      sub_6054A104();
    if ( FIELD_U32(a1, 232) )
      sub_604FE74C();
    if ( FIELD_U32(a1, 212) )
      sub_60483024();
    if ( FIELD_U32(a1, 216) )
      sub_60485038();
    v13 = FIELD_U32(a1, 248);
    if ( v13 )
      sub_6048117C(v13);
    v14 = FIELD_U32(a1, 252);
    if ( v14 )
      sub_6048117C(v14);
    if ( FIELD_U32(a1, 236) )
      ((void (*)(void))loc_60548D68)();
    if ( FIELD_U32(a1, 240) )
      sub_6051FEE8();
    if ( FIELD_U32(a1, 244) )
      sub_604FFB50();
    if ( FIELD_U32(a1, 256) )
      sub_6052DBEC();
    if ( FIELD_U32(a1, 260) )
      sub_6055B43C();
    if ( FIELD_U32(a1, 264) )
      sub_6054D170();
    if ( !FIELD_U8(dword_60CC6D78, 109054) )
    {
      FIELD_U8(dword_60CC6D78, 109054) = 1;
      sub_607FCAE4(dword_60CC6484);
    }
    sub_603F8084(dword_60C99DD0);
    if ( !FIELD_U32(dword_60CC62E4, 92) )
      sub_60401F34(dword_60C99E68);
    if ( v3 )
    {
      sub_60407D4C(dword_60C9A1E8);
      sub_603EFBF4(dword_60C99D6C);
      if ( FIELD_U32(a1, 268) )
        sub_6055023C();
    }
    return sub_607312D4(dword_60CBDBF8);
  }
  return result;
}
