/* s_bflyt_ref_98B9F0
 * address: 0x6098B9F0   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall s_bflyt_ref_98B9F0(int *a1, int a2, int a3, int *a4, int a5, char a6, char a7)
{
  int v9; // r9
  const char *v10; // r0
  float v11; // s0
  int *v12; // r7
  float i; // s16
  int *v14; // r7
  int v15; // t1
  int (**v17)(); // [sp+4h] [bp-7Ch] BYREF
  int *v18; // [sp+8h] [bp-78h]
  int v19; // [sp+Ch] [bp-74h]
  int v20; // [sp+10h] [bp-70h] BYREF

  a1[5] = a2;
  a1[21] = a3;
  a1[22] = a5;
  *((_BYTE *)a1 + 120) = a6;
  v17 = &sead__SafeStringBase__vtable;
  v18 = a4;
  sead__SafeStringBase__operator_assign((int)(a1 + 23), (int)&v17);
  *((_BYTE *)a1 + 124) = 1;
  *((_BYTE *)a1 + 127) = a7;
  a1[13] = (*(int (__fastcall **)(int *, int))(*a1 + 80))(a1, a3);
  a1[7] = (*(int (__fastcall **)(int *, int))(*a1 + 84))(a1, a3);
  sub_60992D00();
  sub_6098B5B8();
  a1[6] = (*(int (__fastcall **)(int *, int))(*a1 + 76))(a1, a3);
  if ( (*(int (__fastcall **)(int *))(*a1 + 16))(a1) == 1 )
    a1[12] = (*(int (__fastcall **)(int *, int))(*a1 + 96))(a1, a3);
  v9 = (*(int (__fastcall **)(int *, int))(*a1 + 100))(a1, a3);
  a1[14] = (*(int (__fastcall **)(int *, int))(*a1 + 104))(a1, a3);
  sub_6090B310(dword_60CCF464);
  v18 = &v20;
  v17 = &BufferedSafeStringBase_char_vtable_probably;
  v19 = 72;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v17);
  *(_BYTE *)v18 = 0;
  v17 = &off_60BFE430;
  v10 = (const char *)(*(int (__fastcall **)(int *))(*a1 + 56))(a1);
  sub_608FDDF4((int)&v17, "%s.bflyt", v10);
  (*(void (__fastcall **)(int *, int (***)(), int))(*a1 + 108))(a1, &v17, v9);
  (*(void (__fastcall **)(int, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(*(_DWORD *)v9 + 12))(
    v9,
    sub_609909D8,
    0);
  (*(void (__fastcall **)(int *, int))(*a1 + 88))(a1, a3);
  sub_6090B32C(dword_60CCF464);
  v17 = 0;
  sub_6098BD10(a1, *(_DWORD *)(a1[6] + 12), a1[6], &v17);
  (*(void (__fastcall **)(int *, int))(*a1 + 256))(a1, a3);
  v11 = (*(float (__fastcall **)(int *))(*a1 + 124))(a1);
  v12 = (int *)a1[11];
  for ( i = v11; v12 != a1 + 10; v12 = (int *)v14[2] )
  {
    v15 = *(v12 - 1);
    v14 = v12 - 1;
    (*(void (__fastcall **)(int *, float))(v15 + 16))(v14, i);
  }
  (*(void (__fastcall **)(int *))(*a1 + 92))(a1);
  sub_60856AAC(a1[6], a1[13], 1);
  (*(void (__fastcall **)(int *, int))(*a1 + 112))(a1, a3);
  sub_6090B310(dword_60CCF464);
  (*(void (__fastcall **)(int *, int))(*a1 + 116))(a1, a3);
  sub_6090B32C(dword_60CCF464);
  (*(void (__fastcall **)(int *, int, int (**)()))(*a1 + 252))(a1, a3, v17);
  (*(void (__fastcall **)(int, signed __int64 (__fastcall *)(_QWORD *, int), _DWORD))(*(_DWORD *)v9 + 12))(
    v9,
    sub_609909D8,
    0);
  return sub_6098B60C();
}
