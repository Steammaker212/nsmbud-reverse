/* sub_60922864
 * address: 0x60922864   size: 1340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60922864(int a1)
{
  signed int v2; // r5
  int v3; // r0
  char *v4; // r7
  char *v5; // r6
  char *v6; // r7
  signed int v7; // r5
  bool v8; // cc
  signed int v9; // r0
  signed int v10; // r6
  _DWORD *v11; // r5
  char *v12; // r7
  char *v13; // r9
  int v14; // r0
  char *v15; // r5
  char *v16; // r6
  signed int v17; // r7
  signed int v18; // r0
  int (**v20)(); // [sp+8h] [bp-68h] BYREF
  const char *v21; // [sp+Ch] [bp-64h]
  int (**v22)(); // [sp+10h] [bp-60h] BYREF
  char *v23; // [sp+14h] [bp-5Ch]
  int v24; // [sp+18h] [bp-58h]
  _BYTE v25[32]; // [sp+1Ch] [bp-54h] BYREF
  int (**v26)(); // [sp+3Ch] [bp-34h] BYREF
  void *v27; // [sp+40h] [bp-30h]
  int (**v28)(); // [sp+44h] [bp-2Ch] BYREF
  const char *v29; // [sp+48h] [bp-28h]

  sub_60947BCC();
  sub_60940584(a1 + 28);
  v2 = 0;
  *(_DWORD *)a1 = off_60C5D72C;
  FIELD_U32(a1, 28) = off_60C5D790;
  FIELD_U32(a1, 32) = 0;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v29 = "enable";
  v27 = &unk_60AEAF58;
  v3 = default_ref_9419C8(a1 + 36);
  FIELD_U32(a1, 36) = &off_60C5D848;
  v22 = &sead__SafeStringBase__vtable;
  v23 = &byte_60ABC94D;
  sub_60941A08(v3, &v28, &v26, &v22, a1);
  FIELD_U8(a1, 48) = 0;
  v23 = v25;
  v22 = &BufferedSafeStringBase_char_vtable_probably;
  v24 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v22);
  v22 = &off_60BD4C38;
  v4 = v23;
  if ( v23 != byte_60AC7A9E )
  {
    while ( byte_60AC7A9E[v2] )
    {
      if ( v2 > 0x7FFFF )
      {
        v2 = 0;
        break;
      }
      if ( !byte_60AC7A9E[v2 + 1] )
      {
        ++v2;
        break;
      }
      v2 += 2;
    }
    if ( v2 >= v24 )
      v2 = v24 - 1;
    qmemcpy(v23, byte_60AC7A9E, v2);
    v4[v2] = 0;
  }
  v22 = &off_60BD4C20;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v20 = &sead__SafeStringBase__vtable;
  v29 = "name";
  v21 = "AcceptReturn = False";
  v27 = &unk_60AEAF64;
  default_ref_9419C8(a1 + 52);
  FIELD_U32(a1, 52) = &off_60C5D898;
  FIELD_U32(a1, 68) = a1 + 76;
  FIELD_U32(a1, 64) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 72) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 64);
  **(_BYTE **)(a1 + 68) = 0;
  FIELD_U32(a1, 64) = &off_60BD4C20;
  sub_60941A08(a1 + 52, &v28, &v26, &v20, a1);
  v5 = *(char **)(a1 + 68);
  ((void (__fastcall *)(int (***)()))v22[3])(&v22);
  v6 = v23;
  if ( v5 != v23 )
  {
    ((void (__fastcall *)(int (***)()))v22[3])(&v22);
    v7 = 0;
    while ( v23[v7] )
    {
      if ( !v23[v7 + 1] )
      {
        ++v7;
        break;
      }
      if ( !v23[v7 + 2] )
      {
        v7 += 2;
        break;
      }
      v8 = v7 + 2 <= 0x7FFFF;
      v7 += 3;
      if ( !v8 )
      {
        v7 = 0;
        break;
      }
    }
    v9 = FIELD_U32(a1, 72);
    if ( v7 >= v9 )
      v7 = v9 - 1;
    qmemcpy(v5, v6, v7);
    v5[v7] = 0;
  }
  v10 = 0;
  FIELD_U16(a1, 108) = 0;
  FIELD_U8(a1, 110) = 1;
  v11 = (_DWORD *)default_ref();
  v23 = v25;
  v22 = &BufferedSafeStringBase_char_vtable_probably;
  v24 = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v22);
  v22 = &off_60BD4C38;
  v12 = v23;
  (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
  v13 = (char *)v11[1];
  if ( v12 != v13 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v11 + 12))(v11);
    v14 = v11[1];
    while ( *(_BYTE *)(v14 + v10) )
    {
      if ( !*(_BYTE *)(v14 + v10 + 1) )
      {
        ++v10;
        break;
      }
      if ( !*(_BYTE *)(v14 + v10 + 2) )
      {
        v10 += 2;
        break;
      }
      v8 = v10 + 2 <= 0x7FFFF;
      v10 += 3;
      if ( !v8 )
      {
        v10 = 0;
        break;
      }
    }
    if ( v10 >= v24 )
      v10 = v24 - 1;
    qmemcpy(v12, v13, v10);
    v12[v10] = 0;
  }
  v22 = &off_60BD4C20;
  v28 = &sead__SafeStringBase__vtable;
  v26 = &sead__SafeStringBase__vtable;
  v20 = &sead__SafeStringBase__vtable;
  v29 = "group";
  v21 = "AcceptReturn = False";
  v27 = &unk_60AEAF95;
  default_ref_9419C8(a1 + 112);
  FIELD_U32(a1, 112) = &off_60C5D898;
  FIELD_U32(a1, 128) = a1 + 136;
  FIELD_U32(a1, 124) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(a1, 132) = 32;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(a1 + 124);
  **(_BYTE **)(a1 + 128) = 0;
  FIELD_U32(a1, 124) = &off_60BD4C20;
  sub_60941A08(a1 + 112, &v28, &v26, &v20, a1);
  v15 = *(char **)(a1 + 128);
  ((void (__fastcall *)(int (***)()))v22[3])(&v22);
  v16 = v23;
  if ( v15 != v23 )
  {
    ((void (__fastcall *)(int (***)()))v22[3])(&v22);
    v17 = 0;
    while ( v23[v17] )
    {
      if ( !v23[v17 + 1] )
      {
        ++v17;
        break;
      }
      if ( !v23[v17 + 2] )
      {
        v17 += 2;
        break;
      }
      v8 = v17 + 2 <= 0x7FFFF;
      v17 += 3;
      if ( !v8 )
      {
        v17 = 0;
        break;
      }
    }
    v18 = FIELD_U32(a1, 132);
    if ( v17 >= v18 )
      v17 = v18 - 1;
    qmemcpy(v15, v16, v17);
    v15[v17] = 0;
  }
  FIELD_U16(a1, 168) = -1;
  return a1;
}
