/* ChallengeSelectTmpHeap2_ref
 * address: 0x604898F0   size: 1008   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeSelectTmpHeap2_ref(int a1)
{
  char v2; // r12
  int v3; // r0
  void (__fastcall *v4)(int, int (***)(), int *); // r3
  int v5; // r0
  void (__fastcall *v6)(int, int (***)(), int *); // r3
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r4
  unsigned int v12; // r7
  int v13; // r11
  int v14; // r0
  _DWORD *v15; // r6
  unsigned int v16; // r5
  _DWORD *v17; // r0
  unsigned int v18; // r0
  unsigned int v19; // r0
  unsigned int *v20; // r0
  signed int v21; // t1
  unsigned int v22; // r5
  _DWORD *v23; // r6
  int (**v25)(); // [sp+10h] [bp-38h] BYREF
  int v26; // [sp+14h] [bp-34h]
  int v27; // [sp+18h] [bp-30h] BYREF
  int (**v28)(); // [sp+1Ch] [bp-2Ch] BYREF
  char *v29; // [sp+20h] [bp-28h]

  FIELD_U32(a1, 14228) = FIELD_U8(dword_60C99DEC, 588);
  sub_60489D24(a1);
  sub_6048A1A0(a1);
  sub_6048A324(a1);
  sub_6048A51C(a1);
  sub_6048A66C(a1);
  sub_6048AA24(a1);
  sub_6048AD48(a1);
  sub_6048AEB4(a1);
  sub_6048B0B8(a1);
  sub_6048B520(a1);
  sub_6048B6B0(a1);
  sub_6048BA4C(a1);
  sub_6048BC4C(a1);
  SE_SYS_SCROLL_LIST_BTN_OVER_ref(a1);
  (*(void (__fastcall **)(_DWORD, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(**(_DWORD **)(a1 + 3556) + 12))(
    FIELD_U32(a1, 3556),
    sub_609909D8,
    0);
  if ( ((unsigned int)dword_60C9FD50 & ~(1615370676 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C9FD50) )
  {
    dword_60C9FD9C = (int)&sead__SafeStringBase__vtable;
    dword_60C9FDA0 = dword_60C9FD98;
    sub_60000288();
    _cxa_guard_release(dword_60C9FD50);
  }
  v27 = 0;
  v28 = &sead__SafeStringBase__vtable;
  v29 = &byte_60B3BA34;
  v25 = &sead__SafeStringBase__vtable;
  v26 = sub_604912FC(0);
  ((void (__fastcall *)(int (***)(), int (***)()))off_60BC0240[0])(&v28, &v25);
  sub_604734E4((_DWORD *)(a1 + 6704), 0);
  v3 = Pa_ArrowBtnL_00_Pa_ArrowBtnR_00_ref(0);
  v25 = &sead__SafeStringBase__vtable;
  v26 = v3;
  sub_60476388((_DWORD *)(a1 + 6704), a1 + 36, &v25);
  v4 = *(void (__fastcall **)(int, int (***)(), int *))(FIELD_U32(a1, 6704) + 8);
  v27 = 1;
  v4(a1 + 6704, &v28, &v27);
  sub_604734E4((_DWORD *)(a1 + 10244), 0);
  v5 = Pa_ArrowBtnL_00_Pa_ArrowBtnR_00_ref(1);
  v25 = &sead__SafeStringBase__vtable;
  v26 = v5;
  sub_60476388((_DWORD *)(a1 + 10244), a1 + 36, &v25);
  v6 = *(void (__fastcall **)(int, int (***)(), int *))(FIELD_U32(a1, 10244) + 8);
  v27 = 1;
  v6(a1 + 10244, &v28, &v27);
  sub_6045BF58(a1 + 13824, 0);
  sub_609094C4(a1 + 13824, 66032, 40, 5);
  v7 = operator_new(0x3384u);
  FIELD_U32(a1, 14240) = sub_6049468C(v7);
  B_Btn_00_ref();
  v8 = operator_new(0x2BE8u);
  FIELD_U32(a1, 14244) = sub_604EDCD8(v8);
  T_Text_01_ref();
  sub_60544F4C(a1 + 14248);
  v9 = operator_new(0xE54u);
  v10 = sub_60483864(v9);
  FIELD_U32(a1, 47756) = v10;
  sub_604839D4(v10, a1 + 13824);
  v11 = 6264;
  v12 = 0;
  v13 = dword_60CC6E04;
  v14 = dword_60C9A1F0;
  FIELD_U32(a1, 47768) = 5;
  FIELD_U32(a1, 47772) = 5;
  FIELD_U32(a1, 47776) = 5;
  FIELD_U32(a1, 47780) = 5;
  v15 = (_DWORD *)(v14 + 16);
  do
  {
    v16 = *(unsigned __int8 *)(FIELD_U32(v13, 40) + v11);
    if ( v16 <= 2 )
      v16 = 2;
    v17 = sub_603FD91C(v15, v12);
    v18 = sub_603FD93C((int)v17);
    ++v12;
    v11 += 104;
    if ( v18 >= 4 )
      v18 = 0;
    v19 = a1 + 4 * v18;
    v21 = FIELD_U32(v19, 47768);
    v20 = (unsigned int *)(v19 + 47768);
    if ( v21 > (int)v16 )
      *v20 = v16;
  }
  while ( v12 != 67 );
  sub_6048CA60(a1);
  sub_6048CB4C(a1);
  sub_6048CC10(a1);
  v22 = 0;
  sub_60473B58((_DWORD *)(a1 + 36), 0xEu, 0);
  v23 = (_DWORD *)(dword_60C9A1F0 + 16);
  do
    sub_603FD91C(v23, v22++);
  while ( v22 != 67 );
  v28 = &sead__SafeStringBase__vtable;
  v29 = "ChallengeSelectTmpHeap2";
  FIELD_U32(a1, 614104) = sub_608F8808(5242880, &v28, 0, 4, 1, 0);
  return sub_6048CD38(a1);
}
