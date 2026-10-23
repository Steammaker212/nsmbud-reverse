/* sub_6018E528
 * address: 0x6018E528   size: 1072   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6018E528(int a1, int a2)
{
  int v3; // r5
  float v4; // s16
  int v5; // r6
  int v6; // r0
  int v7; // r9
  int v8; // r5
  int result; // r0
  int (__fastcall *v10)(int, int *); // r2
  int v11; // r1
  int *v12; // r2
  int v13; // r7
  int v14; // r6
  int (__fastcall *v15)(int, int *); // r2
  int v16; // r0
  int (__fastcall *v17)(int, int *); // r2
  int (__fastcall *v18)(int, int *); // r2
  int (__fastcall *v19)(int, _DWORD *); // r2
  char v20; // r12
  int (__fastcall *v21)(int, int *); // r2
  int v22; // [sp+54h] [bp-44h] BYREF
  const char *v23; // [sp+58h] [bp-40h]
  int v24; // [sp+5Ch] [bp-3Ch]
  _DWORD v25[14]; // [sp+60h] [bp-38h] BYREF

  FIELD_U32(a1, 300) = 0;
  if ( FIELD_S32(a1, 320) < 1 )
    goto LABEL_35;
  v3 = FIELD_U32(a1, 316);
  if ( v3 )
  {
    v4 = FIELD_F32(a1, 388);
    v5 = a1 + 312;
    do
    {
      v6 = FIELD_U32(v3, 8);
      if ( v6 )
        (*(void (__fastcall **)(int, float))(*(_DWORD *)v6 + 24))(v6, v4);
      v3 = FIELD_U32(v3, 4);
      if ( v3 == v5 )
        v3 = 0;
    }
    while ( v3 );
    if ( FIELD_S32(a1, 320) < 1 )
      goto LABEL_35;
  }
  v7 = FIELD_U32(a1, 316);
  if ( !v7 )
  {
LABEL_35:
    if ( !FIELD_U8(a1, 350) )
      sub_601E4C88(dword_60C8B13C, 31, a1 + 392, 1);
    result = sub_6040E33C(FIELD_U8(dword_60CC6D78, 440), a2);
    if ( result == 1 )
    {
      FIELD_U8(a1, 350) = 1;
      return 1;
    }
    return result;
  }
  v8 = 0;
  result = (int)&dword_60C8B13C;
  do
  {
    v13 = FIELD_U32(v7, 8);
    v14 = v8;
    if ( !v13 )
    {
LABEL_30:
      v8 = v14;
      goto LABEL_31;
    }
    v15 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 52);
    v16 = FIELD_U32(v7, 8);
    v22 = (int)&sead__SafeStringBase__vtable;
    v23 = "RW4S0Fst0b";
    if ( v15(v16, &v22) == 1 )
    {
      result = 120;
      FIELD_U32(a1, 300) = 120;
      goto LABEL_31;
    }
    v17 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 52);
    v22 = (int)&sead__SafeStringBase__vtable;
    v23 = "RFl05W5S0b";
    if ( v17(v13, &v22) == 1 )
    {
      v12 = (int *)(a1 + 392);
      v8 = 1;
      v11 = 67;
LABEL_19:
      result = sub_601E4C88(dword_60C8B13C, v11, v12, 1);
      goto LABEL_31;
    }
    v18 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 52);
    v22 = (int)&sead__SafeStringBase__vtable;
    v23 = "RW6J3W6M0a";
    result = v18(v13, &v22);
    if ( result == 1 )
    {
      v8 = 1;
      goto LABEL_31;
    }
    v19 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v13 + 52);
    v25[0] = &sead__SafeStringBase__vtable;
    v25[1] = "RW6M0W601a";
    result = v19(v13, v25);
    v8 = 1;
    if ( !result )
    {
      if ( ((unsigned int)&dword_60C89674 & ~(1612245052 << v20) & 1) == 0 && _cxa_guard_acquire(&dword_60C89674) )
      {
        dword_60C89670 = (int)&off_60BD5504;
        _cxa_guard_release(&dword_60C89674);
      }
      result = (**(int (__fastcall ***)(int, int *))v13)(v13, &dword_60C89670);
      if ( result != 1 )
        goto LABEL_30;
      if ( FIELD_U8(a1, 351)
        || (v21 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 52),
            v22 = (int)&sead__SafeStringBase__vtable,
            v23 = "RW3G0F003",
            v21(v13, &v22) != 1) )
      {
        v10 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v13 + 52);
        v22 = (int)&sead__SafeStringBase__vtable;
        v23 = "RW3G0W3S0";
        result = v10(v13, &v22);
        v8 = v14;
        if ( result != 1 )
          goto LABEL_31;
        v8 = 1;
        v11 = 85;
        v12 = &v22;
        v22 = -991559680;
        v23 = (const char *)1134886912;
        v24 = 1158905856;
        goto LABEL_19;
      }
      v8 = 1;
      result = sub_601E4C88(dword_60C8B13C, 84, a1 + 392, 1);
      FIELD_U8(a1, 351) = 1;
    }
LABEL_31:
    v7 = FIELD_U32(v7, 4);
    if ( v7 == a1 + 312 )
      v7 = 0;
  }
  while ( v7 );
  if ( (v8 & 1) == 0 )
    goto LABEL_35;
  return result;
}
