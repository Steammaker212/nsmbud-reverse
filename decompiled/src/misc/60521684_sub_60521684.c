/* sub_60521684
 * address: 0x60521684   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60521684(int a1, _DWORD *a2, int a3, int a4)
{
  _BYTE *v8; // r6
  int v10; // [sp+0h] [bp-30h]
  int v11; // [sp+0h] [bp-30h]
  int v12; // [sp+4h] [bp-2Ch]
  int v13; // [sp+4h] [bp-2Ch]
  int (**v14)(); // [sp+8h] [bp-28h] BYREF
  const char *v15; // [sp+Ch] [bp-24h]

  v8 = (_BYTE *)(a1 + 4320);
  if ( FIELD_U8(a1, 4320) )
    sub_6047E0EC(
      &v14,
      FIELD_U32(a1, 3804),
      2,
      a3 / 100,
      a3 % 100,
      v12,
      &sead__SafeStringBase__vtable,
      "ResultChallenge_PlayScoreTime_00");
  else
    sub_6047E0EC(
      &v14,
      FIELD_U32(a1, 3796),
      1,
      a3,
      v10,
      v12,
      &sead__SafeStringBase__vtable,
      "ResultChallenge_Score_00");
  if ( a4 )
  {
    if ( *v8 )
      sub_6047E0EC(
        &v14,
        FIELD_U32(a1, 3812),
        2,
        *a2 / 100,
        *a2 % 100,
        v13,
        &sead__SafeStringBase__vtable,
        "ResultChallenge_BestScoreTime_00");
    else
      sub_6047E0EC(
        &v14,
        FIELD_U32(a1, 3808),
        1,
        *a2,
        v11,
        v13,
        &sead__SafeStringBase__vtable,
        "ResultChallenge_Score_00");
  }
  else
  {
    v14 = &sead__SafeStringBase__vtable;
    v15 = "ResultChallenge_NoBestScore_00";
    sub_6047E0EC(&v14, FIELD_U32(a1, 3808), 0);
    v14 = &sead__SafeStringBase__vtable;
    v15 = "ResultChallenge_NoBestScore_00";
    sub_6047E0EC(&v14, FIELD_U32(a1, 3812), 0);
    *a2 = FIELD_U32(dword_60C9A1F0, 6508);
    FIELD_U8(a1, 4313) = 1;
  }
  if ( *v8 )
  {
    sub_6047DEC8((_DWORD *)(a1 + 36), FIELD_U32(a1, 3832), 2, a3 / 100, a3 % 100);
    return sub_6047DEC8((_DWORD *)(a1 + 36), FIELD_U32(a1, 3836), 2, a3 / 100, a3 % 100);
  }
  else
  {
    sub_6047DEC8((_DWORD *)(a1 + 36), FIELD_U32(a1, 3824), 1, a3);
    return sub_6047DEC8((_DWORD *)(a1 + 36), FIELD_U32(a1, 3828), 1, a3, v11);
  }
}
