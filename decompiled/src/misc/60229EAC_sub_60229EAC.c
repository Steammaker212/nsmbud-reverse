/* sub_60229EAC
 * address: 0x60229EAC   size: 776   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60229EAC(int a1, _DWORD *a2)
{
  int v4; // r1
  int v5; // r0
  bool v6; // cc
  char *v7; // r0
  char *v8; // r6
  size_t v9; // r7
  int v10; // r6
  int v11; // r0
  int *v12; // r0
  void *v13; // r6
  const void *v14; // r7
  int v15; // r0
  signed int v16; // r5
  signed int v17; // r0
  int v18; // r6
  int (__fastcall *v19)(int, int (***)()); // r4
  char *v20; // r0
  int v21; // r0
  int result; // r0
  float v23; // s2
  _DWORD v24[3]; // [sp+8h] [bp-48h] BYREF
  int (**v25)(); // [sp+14h] [bp-3Ch] BYREF
  char *v26; // [sp+18h] [bp-38h]
  int v27; // [sp+1Ch] [bp-34h]
  int v28; // [sp+20h] [bp-30h] BYREF
  int (**v29)(); // [sp+28h] [bp-28h] BYREF
  char *v30; // [sp+2Ch] [bp-24h]

  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v4 = 0;
  v5 = a2[1];
  while ( 1 )
  {
    if ( !*(_BYTE *)(v5 + v4) )
      goto LABEL_10;
    if ( !*(_BYTE *)(v5 + v4 + 1) )
    {
      if ( v4 + 1 <= 6 )
        goto LABEL_11;
      goto LABEL_12;
    }
    if ( !*(_BYTE *)(v5 + v4 + 2) )
      break;
    v6 = v4 + 2 <= 0x7FFFF;
    v4 += 3;
    if ( !v6 )
      goto LABEL_11;
  }
  v4 += 2;
LABEL_10:
  if ( v4 <= 6 )
  {
LABEL_11:
    v7 = off_60C5CB34;
    goto LABEL_13;
  }
LABEL_12:
  v7 = (char *)(v5 + 7);
LABEL_13:
  v30 = v7;
  v29 = &sead__SafeStringBase__vtable;
  v26 = (char *)&v28;
  v25 = &BufferedSafeStringBase_char_vtable_probably;
  v27 = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v25);
  *v26 = 0;
  v25 = &off_60BD4F38;
  v8 = v26;
  ((void (__fastcall *)(int (***)()))v29[3])(&v29);
  if ( v8 != v30 )
  {
    v9 = v27 - 1;
    if ( v27 > 4 )
      v9 = 4;
    qmemcpy(v8, v30, v9);
    v8[v9] = 0;
  }
  v10 = sub_6040D4F0(&v25);
  if ( v10 == -1 )
    v10 = sub_60220E48(a1);
  v11 = sub_60220E54(a1);
  v12 = sub_601E03D4(v10, v11, &v25);
  if ( v12 )
  {
    v24[0] = v12[21];
    v24[1] = v12[22];
    v24[2] = v12[24];
    if ( sub_601DAD6C((int)v24) )
      FIELD_U8(a1, 48) = 1;
  }
  v13 = *(void **)(a1 + 56);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  v14 = (const void *)a2[1];
  if ( v13 != v14 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v15 = a2[1];
    v16 = 0;
    while ( *(_BYTE *)(v15 + v16) )
    {
      if ( !*(_BYTE *)(v15 + v16 + 1) )
      {
        ++v16;
        break;
      }
      if ( !*(_BYTE *)(v15 + v16 + 2) )
      {
        v16 += 2;
        break;
      }
      v6 = v16 + 2 <= 0x7FFFF;
      v16 += 3;
      if ( !v6 )
      {
        v16 = 0;
        break;
      }
    }
    v17 = FIELD_U32(a1, 60);
    if ( v16 >= v17 )
      v16 = v17 - 1;
    qmemcpy(v13, v14, v16);
    *((_BYTE *)v13 + v16) = 0;
  }
  v18 = **(_DWORD **)(a1 + 8);
  v19 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v18 + 124);
  (*(void (__fastcall **)(int))(FIELD_U32(a1, 52) + 12))(a1 + 52);
  v20 = *(char **)(a1 + 56);
  v25 = &sead__SafeStringBase__vtable;
  v26 = v20;
  FIELD_U32(a1, 28) = v19(v18, &v25);
  v21 = (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 8) + 132))(**(_DWORD **)(a1 + 8));
  (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, int (***)()))(*(_DWORD *)v21 + 8))(v21, 0, 0, 0, &v25);
  result = (int)v26;
  v23 = *(float *)&v26;
  FIELD_U32(a1, 32) = v26;
  FIELD_F32(a1, 36) = v23;
  if ( v23 >= -0.8 )
  {
    FIELD_U32(a1, 32) = -1082130432;
    return -1082130432;
  }
  return result;
}
