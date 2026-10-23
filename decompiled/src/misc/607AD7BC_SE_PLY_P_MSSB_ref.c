/* SE_PLY_P_MSSB_ref
 * address: 0x607AD7BC   size: 572   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_PLY_P_MSSB_ref(int a1)
{
  int *v2; // r7
  int *v3; // r6
  _BOOL4 v4; // r0
  bool v5; // zf
  _BOOL4 v6; // r0
  bool v7; // zf
  unsigned int result; // r0
  int (**v9)(); // [sp+0h] [bp-50h] BYREF
  const char *v10; // [sp+4h] [bp-4Ch]
  __int64 v11[9]; // [sp+8h] [bp-48h] BYREF

  if ( sub_60235E50(a1 + 14024) )
  {
    v9 = &sead__SafeStringBase__vtable;
    v10 = "skl_root";
    v2 = (int *)(a1 + 11360);
    (*(void (__fastcall **)(_DWORD, __int64 *, int (***)()))(**(_DWORD **)(a1 + 11360) + 144))(
      FIELD_U32(a1, 11360),
      v11,
      &v9);
    sub_60237454(a1 + 14008, v11, 0);
    v3 = (int *)(a1 + 1208);
    FIELD_U32(a1, 1208) |= 0x80000000;
  }
  else
  {
    v3 = (int *)(a1 + 1208);
    v2 = (int *)(a1 + 11360);
  }
  if ( sub_60235E50(a1 + 14132) )
  {
    v4 = sub_6075EE0C(a1);
    v5 = v4;
    if ( v4 )
      v5 = FIELD_U32(a1, 1320) == 9;
    if ( v5 )
    {
      sub_60793EDC(*v2, (int)v11, 0);
    }
    else
    {
      v9 = &sead__SafeStringBase__vtable;
      v10 = "skl_root";
      (*(void (__fastcall **)(int, __int64 *, int (***)()))(*(_DWORD *)*v2 + 144))(*v2, v11, &v9);
    }
    sub_60237454(a1 + 14116, v11, 0);
    *v3 |= 0x80000000;
  }
  if ( sub_60235E50(a1 + 14236) )
  {
    v6 = sub_6075EE0C(a1);
    v7 = v6;
    if ( v6 )
      v7 = FIELD_U32(a1, 1320) == 9;
    if ( v7 )
    {
      sub_60793EDC(*v2, (int)v11, 0);
    }
    else
    {
      v9 = &sead__SafeStringBase__vtable;
      v10 = "skl_root";
      (*(void (__fastcall **)(int, __int64 *, int (***)()))(*(_DWORD *)*v2 + 144))(*v2, v11, &v9);
    }
    sub_60237454(a1 + 14220, v11, 0);
    *v3 |= 0x80000000;
  }
  sub_607ADA14(a1);
  sub_607ADB50(a1);
  if ( sub_607BB53C(a1) && FIELD_U32(a1, 1320) == 8 && *v3 < 0 )
    sub_60773558(a1, (int)"SE_PLY_P_MSSB", 0);
  sub_607ADCAC(a1);
  FIELD_U32(a1, 1208) &= ~0x80000000;
  result = FIELD_U32(a1, 1212) & 0xFFFFFFFE;
  FIELD_U32(a1, 1212) = result;
  return result;
}
