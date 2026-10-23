/* sub_604CD654
 * address: 0x604CD654   size: 1104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604CD654(int a1)
{
  int v2; // r5
  int v3; // r1
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  void (__fastcall *v12)(int, int (***)(), int *); // r3
  int v13; // r0
  void (__fastcall *v14)(int, int (***)(), int *); // r3
  int v15; // r0
  int v16; // r0
  float v17; // s0
  int v18; // r0
  int v20; // [sp+8h] [bp-50h] BYREF
  int v21; // [sp+Ch] [bp-4Ch] BYREF
  const char *v22; // [sp+10h] [bp-48h]
  int (**v23)(); // [sp+14h] [bp-44h] BYREF
  char *v24; // [sp+18h] [bp-40h]
  _DWORD v25[2]; // [sp+1Ch] [bp-3Ch] BYREF
  _DWORD v26[2]; // [sp+24h] [bp-34h] BYREF
  _DWORD v27[11]; // [sp+2Ch] [bp-2Ch] BYREF

  v2 = a1 + 12872;
  sub_6045BF58(a1 + 12872, 0);
  sub_609094C4(v2, 66032, 40, 5);
  v3 = 0;
  v4 = FIELD_U8(dword_60C99DEC, 531);
  if ( v4 == 5 )
    v3 = 2;
  if ( v4 == 4 )
    v3 = 1;
  FIELD_U32(a1, 13276) = v3;
  sub_604734E4((_DWORD *)(a1 + 44), 0);
  sub_60475C8C(a1 + 44);
  v23 = &sead__SafeStringBase__vtable;
  v24 = "CourseSelectVSRandom.bflyt";
  message_ref((_DWORD *)(a1 + 44), &v23, a1 + 3732, 0, 0);
  v23 = &sead__SafeStringBase__vtable;
  v21 = (int)&sead__SafeStringBase__vtable;
  v24 = "Pa_Return_00";
  v22 = "Pa_Icon_00";
  sub_6050A704(a1 + 13280, a1 + 44, &v23, &v21, 1, 0);
  FIELD_U32(a1, 13320) = 2;
  FIELD_U32(a1, 13316) |= 1u;
  v23 = &sead__SafeStringBase__vtable;
  v20 = 0;
  v24 = &byte_60B3BA34;
  v5 = N_Select_00_ref(0);
  v21 = (int)&sead__SafeStringBase__vtable;
  v22 = (const char *)v5;
  ((void (__fastcall *)(int (***)(), int *))v23[2])(&v23, &v21);
  v21 = 1;
  sub_6047518C(a1 + 44, a1 + 3652, &v23, &v21);
  sub_604D8E50(a1);
  sub_604D8F88(a1);
  sub_604D9358(a1);
  v23 = &sead__SafeStringBase__vtable;
  v24 = &byte_60B3BA34;
  v25[0] = &sead__SafeStringBase__vtable;
  v25[1] = &byte_60B3BA34;
  v26[0] = &sead__SafeStringBase__vtable;
  v26[1] = &byte_60B3BA34;
  v27[0] = &sead__SafeStringBase__vtable;
  v27[1] = &byte_60B3BA34;
  v6 = InOut_ScrollToR_ScrollToL_LoopArrow_ref(0);
  v21 = (int)&sead__SafeStringBase__vtable;
  v22 = (const char *)v6;
  sead__SafeStringBase__operator_assign((int)&v23, (int)&v21);
  v7 = InOut_ScrollToR_ScrollToL_LoopArrow_ref(1);
  v21 = (int)&sead__SafeStringBase__vtable;
  v22 = (const char *)v7;
  (*(void (__fastcall **)(_DWORD *, int *))(v25[0] + 8))(v25, &v21);
  v8 = InOut_ScrollToR_ScrollToL_LoopArrow_ref(2);
  v21 = (int)&sead__SafeStringBase__vtable;
  v22 = (const char *)v8;
  (*(void (__fastcall **)(_DWORD *, int *))(v26[0] + 8))(v26, &v21);
  v9 = InOut_ScrollToR_ScrollToL_LoopArrow_ref(3);
  v21 = (int)&sead__SafeStringBase__vtable;
  v22 = (const char *)v9;
  (*(void (__fastcall **)(_DWORD *, int *))(v27[0] + 8))(v27, &v21);
  v21 = 4;
  sub_60476030(a1 + 44, &v23, &v21);
  v23 = &sead__SafeStringBase__vtable;
  v24 = &byte_60B3BA34;
  v20 = 0;
  v10 = sub_604DC7E0(0);
  v21 = (int)&sead__SafeStringBase__vtable;
  v22 = (const char *)v10;
  ((void (__fastcall *)(int (***)(), int *))v23[2])(&v23, &v21);
  sub_604734E4((_DWORD *)(a1 + 5792), 0);
  v11 = Pa_ArrowL_00_Pa_ArrowR_00_ref(0);
  v21 = (int)&sead__SafeStringBase__vtable;
  v22 = (const char *)v11;
  sub_60476388((_DWORD *)(a1 + 5792), a1 + 44, &v21);
  v12 = *(void (__fastcall **)(int, int (***)(), int *))(FIELD_U32(a1, 5792) + 8);
  v20 = 1;
  v12(a1 + 5792, &v23, &v20);
  sub_604734E4((_DWORD *)(a1 + 9332), 0);
  v13 = Pa_ArrowL_00_Pa_ArrowR_00_ref(1);
  v21 = (int)&sead__SafeStringBase__vtable;
  v22 = (const char *)v13;
  sub_60476388((_DWORD *)(a1 + 9332), a1 + 44, &v21);
  v14 = *(void (__fastcall **)(int, int (***)(), int *))(FIELD_U32(a1, 9332) + 8);
  v20 = 1;
  v14(a1 + 9332, &v23, &v20);
  (*(void (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3564) + 12))(
    FIELD_U32(a1, 3564),
    sub_609909D8,
    0);
  v15 = FIELD_U32(a1, 13276);
  if ( v15 == 2 )
  {
    v16 = InOut_ScrollToR_ScrollToL_LoopArrow_ref(1);
    goto LABEL_9;
  }
  if ( !v15 )
  {
    v16 = InOut_ScrollToR_ScrollToL_LoopArrow_ref(2);
LABEL_9:
    v23 = &sead__SafeStringBase__vtable;
    v24 = (char *)v16;
    sub_60473DE4((_DWORD *)(a1 + 44), 1u, &v23, 0);
    v17 = sub_604745C0(a1 + 44, 1u);
    sub_6047455C(a1 + 44, 1u, v17);
  }
  v18 = InOut_ScrollToR_ScrollToL_LoopArrow_ref(0);
  v23 = &sead__SafeStringBase__vtable;
  v24 = (char *)v18;
  sub_60473DE4((_DWORD *)(a1 + 44), 0, &v23, 0);
  (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3556) + 104))(**(_DWORD **)(a1 + 3556));
  return sub_60473B58((_DWORD *)(a1 + 44), 0xEu, 0);
}
