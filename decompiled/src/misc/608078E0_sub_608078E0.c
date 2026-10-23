/* sub_608078E0
 * address: 0x608078E0   size: 688   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608078E0(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  __int64 v7; // r0
  __int64 v8; // r0
  int v9; // r2
  _DWORD *v10; // r5
  _QWORD v12[3]; // [sp+0h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 120) && byte_60CC6AFD == 1 )
  {
    v2 = FIELD_U32(a1, 64);
    if ( v2 )
    {
      sub_608AF208(v2, 5);
      FIELD_U8(a1, 44) = 0;
      SE_DUMMY_ref(dword_60CC6B0C);
    }
    FIELD_U32(a1, 148) = 0;
    FIELD_U32(a1, 152) = 0;
    SE_DUMMY_ref(dword_60CC6B0C);
    FIELD_U8(a1, 146) = 0;
    v3 = FIELD_U32(a1, 72);
    if ( v3 )
    {
      sub_608AF208(v3, 0);
      FIELD_U8(a1, 144) = 0;
    }
    FIELD_U8(a1, 146) = 0;
    FIELD_U8(a1, 47) = 0;
    v4 = FIELD_U32(a1, 76);
    if ( v4 )
    {
      sub_608AF208(v4, 5);
      FIELD_U8(a1, 45) = 0;
    }
    v5 = FIELD_U32(a1, 68);
    if ( v5 )
      sub_608B032C(v5, 5, 0.0);
    byte_60CC6AFD = 0;
  }
  v6 = FIELD_U32(a1, 100);
  if ( !v6 )
  {
    LODWORD(v8) = FIELD_U32(a1, 60);
    if ( (_DWORD)v8 )
      return v8;
LABEL_22:
    FIELD_U32(a1, 100) = -1;
    goto LABEL_23;
  }
  if ( v6 < 1 )
    goto LABEL_23;
  nn__os__GetSystemTick((nn__os *)v12);
  v7 = v12[0] - FIELD_U64(a1, 104);
  if ( (unsigned __int64)(v7 + 0x20C49BA5E353F7LL) > 0x4189374BC6A7EDLL )
    HIDWORD(v8) = (unsigned __int64)(1000 * (v7 / qword_60CCFB50)) >> 32;
  else
    v8 = 1000 * v7 / qword_60CCFB50;
  v9 = FIELD_U32(a1, 100);
  LODWORD(v8) = HIDWORD(v8) - ((v9 >> 31) + !__CFSHR__(v9, 31));
  if ( __SPAIR64__(HIDWORD(v8), v9 & 0x40000000) >= __SPAIR64__(v9 >> 31, 1) )
    goto LABEL_22;
  if ( v9 < 0 )
  {
LABEL_23:
    if ( FIELD_U8(a1, 120) )
    {
      if ( FIELD_U32(dword_60CC6B68, 20) == 17 )
      {
        STRM_BGM_ref_3((_DWORD *)dword_60CC6B0C, FIELD_U8(dword_60CC6D8C, 17) != 0);
        sub_6080C38C(dword_60CC6B0C, 0, FIELD_F32(a1, 112));
        v10 = (_DWORD *)(a1 + 112);
        if ( FIELD_U32(dword_60CC6B68, 48) == 1 )
        {
          sub_6080C38C(dword_60CC6B0C, 0, 0.3);
          SE_SYS_HURRY_UP_ref_8164F8(dword_60CC6B68, 9);
        }
        goto LABEL_29;
      }
    }
    else
    {
      sub_6080C38C(dword_60CC6B0C, FIELD_U32(a1, 116), FIELD_F32(a1, 112));
    }
    v10 = (_DWORD *)(a1 + 112);
LABEL_29:
    FIELD_U32(a1, 100) = -1;
    nn__os__GetSystemTick((nn__os *)v12);
    FIELD_U64(a1, 104) = v12[0];
    *v10 = 1065353216;
    FIELD_U32(a1, 116) = 0;
    FIELD_U8(a1, 120) = 0;
    LODWORD(v8) = 0;
  }
  return v8;
}
