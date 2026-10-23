/* sub_604F863C
 * address: 0x604F863C   size: 1200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_604F863C(int *a1, int a2)
{
  char v2; // r12
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int (__fastcall *v8)(int, int, int); // r6
  int v9; // r0
  int v10; // r0
  int (__fastcall *v11)(int, int, int); // r4
  int v12; // r0
  int v13; // r0
  int (__fastcall *v14)(int, int, int); // r4
  int v15; // r0
  int v16; // r0
  int (__fastcall *v17)(int, int, int); // r4
  int v18; // r0
  int v19; // r0
  int (__fastcall *v20)(int, int, int); // r4
  char v21; // r12
  int (__fastcall *v22)(int, int, int); // r4
  char v23; // r12
  int (__fastcall *v24)(int, int, int); // r4
  int (__fastcall *v25)(int, int, int); // r4
  int (__fastcall *v26)(int, int, int); // r4
  int (__fastcall *v27)(int, int, int); // r4
  int (__fastcall *v28)(int, int, int); // r4

  a1[5] = 0;
  a1[6] = 0;
  if ( ((unsigned int)&dword_60CA6C60[12] & ~(1615824492 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[12]) )
  {
    dword_60CA6D40 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D44 = (int)"Pa_NewItem_00";
    dword_60CA6D48 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D4C = (int)"Pa_NewItem_01";
    dword_60CA6D50 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D54 = (int)"Pa_NewItem_02";
    dword_60CA6D58 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D5C = (int)"Pa_NewItem_03";
    dword_60CA6D60 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D64 = (int)"Pa_NewItem_04";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6C60[12]);
  }
  v5 = sub_60473B4C(a2);
  v6 = operator_new(0xE10u);
  v7 = sub_604F7F5C(v6, a2, &dword_60CA6D40);
  *a1 = v7;
  FIELD_U32(v7, 3592) = 10;
  FIELD_U8(v7, 3580) = 0;
  v8 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D40 + 12))(&dword_60CA6D40);
  a1[8] = v8(v5, dword_60CA6D44, 1);
  v9 = operator_new(0xE10u);
  v10 = sub_604F7F5C(v9, a2, &dword_60CA6D48);
  a1[1] = v10;
  FIELD_U32(v10, 3592) = 10;
  FIELD_U8(v10, 3580) = 0;
  v11 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D48 + 12))(&dword_60CA6D48);
  a1[9] = v11(v5, dword_60CA6D4C, 1);
  v12 = operator_new(0xE10u);
  v13 = sub_604F7F5C(v12, a2, &dword_60CA6D50);
  a1[2] = v13;
  FIELD_U32(v13, 3592) = 10;
  FIELD_U8(v13, 3580) = 0;
  v14 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D50 + 12))(&dword_60CA6D50);
  a1[10] = v14(v5, dword_60CA6D54, 1);
  v15 = operator_new(0xE10u);
  v16 = sub_604F7F5C(v15, a2, &dword_60CA6D58);
  a1[3] = v16;
  FIELD_U32(v16, 3592) = 10;
  FIELD_U8(v16, 3580) = 0;
  v17 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D58 + 12))(&dword_60CA6D58);
  a1[11] = v17(v5, dword_60CA6D5C, 1);
  v18 = operator_new(0xE10u);
  v19 = sub_604F7F5C(v18, a2, &dword_60CA6D60);
  a1[4] = v19;
  FIELD_U32(v19, 3592) = 10;
  FIELD_U8(v19, 3580) = 0;
  v20 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D60 + 12))(&dword_60CA6D60);
  a1[12] = v20(v5, dword_60CA6D64, 1);
  if ( ((unsigned int)&dword_60CA6C60[13] & ~(1615825100 << v21) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[13]) )
  {
    dword_60CA6CCC = (int)&sead__SafeStringBase__vtable;
    dword_60CA6CD0 = (int)"N_NewItem_00";
    _cxa_guard_release(&dword_60CA6C60[13]);
  }
  v22 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6CCC + 12))(&dword_60CA6CCC);
  a1[7] = v22(v5, dword_60CA6CD0, 1);
  if ( ((unsigned int)&dword_60CA6C60[14] & ~(1615825236 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60CA6C60[14]) )
  {
    dword_60CA6D68 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D6C = (int)"N_NewItemPos1_00";
    dword_60CA6D70 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D74 = (int)"N_NewItemPos2_00";
    dword_60CA6D78 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D7C = (int)"N_NewItemPos3_00";
    dword_60CA6D80 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D84 = (int)"N_NewItemPos4_00";
    dword_60CA6D88 = (int)&sead__SafeStringBase__vtable;
    dword_60CA6D8C = (int)"N_NewItemPos5_00";
    sub_60000288();
    _cxa_guard_release(&dword_60CA6C60[14]);
  }
  v24 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D68 + 12))(&dword_60CA6D68);
  a1[13] = v24(v5, dword_60CA6D6C, 1);
  v25 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D70 + 12))(&dword_60CA6D70);
  a1[14] = v25(v5, dword_60CA6D74, 1);
  v26 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D78 + 12))(&dword_60CA6D78);
  a1[15] = v26(v5, dword_60CA6D7C, 1);
  v27 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D80 + 12))(&dword_60CA6D80);
  a1[16] = v27(v5, dword_60CA6D84, 1);
  v28 = *(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 48);
  (*(void (__fastcall **)(int *))(dword_60CA6D88 + 12))(&dword_60CA6D88);
  a1[17] = v28(v5, dword_60CA6D8C, 1);
  return a1;
}
