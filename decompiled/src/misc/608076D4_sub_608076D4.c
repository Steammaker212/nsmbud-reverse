/* sub_608076D4
 * address: 0x608076D4   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608076D4(int a1)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r0
  bool v5; // zf
  unsigned __int8 v6; // r0
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v14; // r0
  bool v15; // zf

  sub_609105F4(dword_60CCFAF4);
  sub_6080A9F4(dword_60CC6B0C);
  if ( FIELD_S32(a1, 100) >= 0 )
    sub_608078E0(a1);
  v2 = FIELD_U32(a1, 76);
  v3 = v2 == 0;
  if ( v2 )
    v3 = FIELD_U8(a1, 45) == 0;
  if ( !v3 && sub_608AF468() != 1 )
    goto LABEL_12;
  v4 = FIELD_U32(a1, 72);
  v5 = v4 == 0;
  if ( v4 )
    v5 = FIELD_U8(a1, 45) == 0;
  if ( !v5 && sub_608AF468() != 1 || FIELD_U32(a1, 68) )
    goto LABEL_12;
  v14 = FIELD_U32(a1, 64);
  v15 = v14 == 0;
  if ( v14 )
    v15 = FIELD_U8(a1, 44) == 0;
  if ( v15 || sub_608AF468() )
    FIELD_U8(a1, 140) = 0;
  else
LABEL_12:
    STRM_BGM_ref_5(dword_60CC6B0C);
  if ( FIELD_U8(a1, 144) )
  {
    v6 = FIELD_U8(a1, 145) + 1;
    FIELD_U8(a1, 145) = v6;
    if ( v6 < 0xBu )
      goto LABEL_17;
    FIELD_U8(a1, 144) = 0;
  }
  FIELD_U8(a1, 145) = 0;
LABEL_17:
  v7 = FIELD_U8(a1, 47);
  v8 = v7 == 0;
  if ( FIELD_U8(a1, 47) )
  {
    v7 = FIELD_U32(a1, 76);
    v8 = v7 == 0;
  }
  if ( !v8 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) == 1 )
  {
    v9 = FIELD_U32(a1, 76);
    if ( v9 )
    {
      FIELD_U8(a1, 146) = 1;
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 20))(v9);
      if ( FIELD_U32(a1, 76) )
        sub_608AF1FC();
      FIELD_U8(a1, 45) = 1;
      FIELD_U32(a1, 136) = 0;
    }
    if ( FIELD_U32(a1, 72) )
    {
      sub_608AF1FC();
      FIELD_U8(a1, 144) = 1;
    }
    FIELD_U8(a1, 47) = 0;
    sub_60807574((_DWORD *)a1);
  }
  if ( FIELD_U8(a1, 146) )
    ++FIELD_U32(a1, 148);
  sub_60807C58(a1);
  v10 = FIELD_U32(a1, 164);
  if ( v10 >= 1 )
  {
    v11 = v10 - 1;
    FIELD_U32(a1, 164) = v11;
    if ( !v11 )
    {
      v12 = **(_DWORD **)(a1 + 180);
      if ( v12 )
        sub_608B032C(v12, 18, 1.0);
    }
  }
  sub_60807DF0(a1);
  sub_60813404(FIELD_U32(a1, 160));
  sub_60816378(dword_60CC6B68);
  return sub_60816CD0(dword_60CC6B68);
}
