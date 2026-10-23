/* SE_SYS_COMPLETE_MESSAGE_ref
 * address: 0x604DFBB8   size: 844   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_COMPLETE_MESSAGE_ref(int a1)
{
  _DWORD *v2; // r5
  int **v3; // r1
  int v4; // r1
  void (*v5)(void); // r1
  int v6; // r0
  int v7; // r0
  char v8; // r1
  _DWORD *v9; // r5
  int v10; // r0
  int v11; // r3
  _DWORD *v12; // r5
  int v13; // r0
  int v14; // r3
  _DWORD *v15; // r5
  int v16; // r0
  int v17; // r3
  _DWORD *v18; // r5
  int v19; // r0
  int v20; // r3
  const char *v21; // r0
  _DWORD *v22; // r5
  int v23; // r0
  _DWORD *v24; // r5
  int v25; // r0
  int v26; // r0
  int v27; // r3
  _DWORD *v28; // r5
  int v29; // r0
  int v30; // r3
  _DWORD *v31; // r5
  int v32; // r0
  int v33; // r3
  _DWORD *v34; // r5
  int v35; // r0
  int v36; // r3
  int result; // r0
  int (**v38)(); // [sp+0h] [bp-18h] BYREF
  int v39; // [sp+4h] [bp-14h]

  v2 = (_DWORD *)(a1 + 40);
  sub_60473DE4((_DWORD *)(a1 + 40), 1u, &dword_60CA5288, 0);
  v3 = *(int ***)(a1 + 3552);
  if ( FIELD_U32(a1, 3548) > 1u )
    v3 += 5;
  v4 = **v3;
  if ( FIELD_U8(a1, 4076) )
    v5 = *(void (**)(void))(v4 + 108);
  else
    v5 = *(void (**)(void))(v4 + 104);
  v5();
  sub_60473DE4(v2, 0, &dword_60CA5270, 0);
  v6 = sub_60473B4C((int)v2);
  sub_6098F1D4(v6);
  sub_6050A660(*(_DWORD *)(a1 + 4 * FIELD_U8(a1, 4075) + 4060));
  v7 = FIELD_U32(a1, 4020);
  v8 = FIELD_U8(v7, 64);
  if ( FIELD_U8(a1, 4075) )
  {
    FIELD_U8(v7, 64) = v8 & 0xFE;
    *(_BYTE *)(FIELD_U32(a1, 4024) + 64) |= 1u;
    v9 = *(_DWORD **)(a1 + 4012);
    (*(void (__fastcall **)(_DWORD *))(*v9 + 12))(v9);
    v10 = v9[1];
    v38 = &sead__SafeStringBase__vtable;
    v39 = v10;
    sub_6047E0EC(&v38, FIELD_U32(a1, 4044), 0, v11);
    v12 = *(_DWORD **)(a1 + 4012);
    (*(void (__fastcall **)(_DWORD *))(*v12 + 12))(v12);
    v13 = v12[1];
    v38 = &sead__SafeStringBase__vtable;
    v39 = v13;
    sub_6047E0EC(&v38, FIELD_U32(a1, 4048), 0, v14);
    v15 = *(_DWORD **)(a1 + 4016);
    (*(void (__fastcall **)(_DWORD *))(*v15 + 12))(v15);
    v16 = v15[1];
    v38 = &sead__SafeStringBase__vtable;
    v39 = v16;
    sub_6047E0EC(&v38, FIELD_U32(a1, 4052), 0, v17);
    v18 = *(_DWORD **)(a1 + 4016);
    (*(void (__fastcall **)(_DWORD *))(*v18 + 12))(v18);
    v19 = v18[1];
    v38 = &sead__SafeStringBase__vtable;
    v39 = v19;
    sub_6047E0EC(&v38, FIELD_U32(a1, 4056), 0, v20);
    v21 = "SE_SYS_COMPLETE_MESSAGE_GREEN";
  }
  else
  {
    FIELD_U8(v7, 64) = v8 | 1;
    *(_BYTE *)(FIELD_U32(a1, 4024) + 64) &= ~1u;
    v22 = *(_DWORD **)(a1 + 4012);
    if ( FIELD_S32(a1, 4068) < 0 )
    {
      (*(void (__fastcall **)(_DWORD))(*v22 + 12))(FIELD_U32(a1, 4012));
      v26 = v22[1];
      v38 = &sead__SafeStringBase__vtable;
      v39 = v26;
      sub_6047E0EC(&v38, FIELD_U32(a1, 4028), 0, v27);
      v28 = *(_DWORD **)(a1 + 4012);
      (*(void (__fastcall **)(_DWORD *))(*v28 + 12))(v28);
      v29 = v28[1];
      v38 = &sead__SafeStringBase__vtable;
      v39 = v29;
      sub_6047E0EC(&v38, FIELD_U32(a1, 4032), 0, v30);
    }
    else
    {
      (*(void (__fastcall **)(_DWORD))(*v22 + 12))(FIELD_U32(a1, 4012));
      v23 = v22[1];
      v38 = &sead__SafeStringBase__vtable;
      v39 = v23;
      sub_6047E0EC(&v38, FIELD_U32(a1, 4028), 1, FIELD_U32(a1, 4068));
      v24 = *(_DWORD **)(a1 + 4012);
      (*(void (__fastcall **)(_DWORD *))(*v24 + 12))(v24);
      v25 = v24[1];
      v38 = &sead__SafeStringBase__vtable;
      v39 = v25;
      sub_6047E0EC(&v38, FIELD_U32(a1, 4032), 1, FIELD_U32(a1, 4068));
    }
    v31 = *(_DWORD **)(a1 + 4016);
    (*(void (__fastcall **)(_DWORD *))(*v31 + 12))(v31);
    v32 = v31[1];
    v38 = &sead__SafeStringBase__vtable;
    v39 = v32;
    sub_6047E0EC(&v38, FIELD_U32(a1, 4036), 0, v33);
    v34 = *(_DWORD **)(a1 + 4016);
    (*(void (__fastcall **)(_DWORD *))(*v34 + 12))(v34);
    v35 = v34[1];
    v38 = &sead__SafeStringBase__vtable;
    v39 = v35;
    sub_6047E0EC(&v38, FIELD_U32(a1, 4040), 0, v36);
    v21 = "SE_SYS_COMPLETE_MESSAGE_YELLOW";
  }
  sub_60478680((int)v21, 9);
  result = dword_60CC6D78;
  if ( !FIELD_U8(dword_60CC6D78, 20) )
    FIELD_U8(dword_60CC6D78, 20) = 1;
  FIELD_U8(result, 20) = 1;
  FIELD_U8(a1, 4074) = 1;
  FIELD_U8(a1, 4073) = 1;
  return result;
}
