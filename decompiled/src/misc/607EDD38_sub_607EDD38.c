/* sub_607EDD38
 * address: 0x607EDD38   size: 976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607EDD38(int a1)
{
  int v1; // r5
  __int64 v2; // r2
  __int64 v3; // r6
  __int64 v4; // r2
  __int64 v5; // r6
  _DWORD *v6; // r5
  int v7; // r6
  int v8; // r7
  _DWORD *v9; // r4
  _DWORD *v10; // r4
  int (**v13)(); // [sp+14h] [bp-2Ch] BYREF
  const char *v14; // [sp+18h] [bp-28h]

  sub_60023F4C();
  v1 = dword_60CC6E04;
  if ( dword_60CC6E04 && dword_60CC6D78 && !FIELD_U8(dword_60CC6D78, 109057) )
  {
    if ( FIELD_U32(dword_60CC6E04, 24) == 2 )
    {
      v2 = qword_60CCFB50 % 100;
      v3 = qword_60CCFB50 / 100;
      do
        sub_609085CC(v3, HIDWORD(v3), v2, HIDWORD(v2));
      while ( FIELD_U32(v1, 24) == 2 );
    }
    sub_6082A20C(v1);
    if ( FIELD_U32(v1, 24) == 2 )
    {
      v4 = qword_60CCFB50 % 100;
      v5 = qword_60CCFB50 / 100;
      do
        sub_609085CC(v5, HIDWORD(v5), v4, HIDWORD(v4));
      while ( FIELD_U32(v1, 24) == 2 );
    }
  }
  FIELD_U8(dword_60CC6D78, 109057) = 0;
  system_ref_426530(dword_60C9BBD4);
  FIELD_U8(dword_60C99DEC, 522) = 0;
  v6 = (_DWORD *)operator_new(0x390u);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "3D";
  sub_60443FE0((int)v6, (int)&v13);
  sub_60444108(v6, 1, 128, 5, 26, 0);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "3D";
  v7 = dword_60CD0B40;
  v8 = operator_new_8DE25C(0x1FCu, 0, 4);
  sub_6044364C();
  sub_60958220(v7, v8, 6, &v13, 0, 0);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "BackLayout";
  v9 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v9, 0, 420);
  sub_60441A3C();
  *v9 = off_60BF9FE4;
  v9[4] = &off_60BFA03C;
  sub_60958220(v7, v9, 5, &v13, 0, 0);
  v13 = &sead__SafeStringBase__vtable;
  v14 = "FrontLayout";
  v10 = (_DWORD *)operator_new_8DE25C(0x1A4u, 0, 4);
  memset(v10, 0, 420);
  sub_60441A3C();
  *v10 = off_60BF9FE4;
  v10[4] = &off_60BFA03C;
  sub_60958220(v7, v10, 8, &v13, 0, 0);
  sub_60443628(v8, (int)v6);
  FIELD_U8(dword_60CC6D78, 20) = 1;
  sub_603F7FF8(0);
  sub_60401BB8(0);
  sub_60532E74(0);
  sub_60539550(0);
  sub_604A7E50(0);
  sub_603FEEB4(0);
  sub_603FE46C(0);
  sub_60536A80(dword_60CAADA8);
  sub_6053D028(dword_60CAB438);
  sub_6055B9EC(a1 + 1060);
  sub_60515864(a1 + 14376);
  sub_604AB584((_DWORD *)dword_60CA146C);
  sub_603FEF70(dword_60C99E24);
  sub_603FE52C(dword_60C99E1C);
  sub_60556C3C((_DWORD *)(a1 + 44352));
  SelectBG_bflyt_ref(a1 + 63184);
  sub_603F807C(dword_60C99DD0);
  sub_60401ED4(dword_60C99E68);
  sub_608EF6A8(a1);
  if ( !FIELD_U8(dword_60CC6D8C, 16) )
  {
    FIELD_U8(dword_60CC6D8C, 17) = 0;
    if ( *(unsigned __int8 *)(FIELD_U32(dword_60CC6E04, 40) + 7) >= 3u )
      sub_60826C38(dword_60CC6E04, 0);
  }
  sub_600240A4();
  FIELD_U8(a1, 66762) = 0;
  return 66762;
}
