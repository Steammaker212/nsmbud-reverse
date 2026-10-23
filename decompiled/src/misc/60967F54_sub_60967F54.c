/* sub_60967F54
 * address: 0x60967F54   size: 1100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60967F54(int a1, int a2, int a3, unsigned int a4)
{
  int v7; // r9
  char *v8; // r6
  int v9; // r1
  int i; // r3
  bool v11; // zf
  const char *v12; // r2
  int v13; // r4
  int v14; // r0
  int v15; // r4
  int v16; // r4
  _BYTE *v17; // r7
  int v18; // r6
  int v19; // r9
  void *v20; // r8
  _DWORD *v21; // r4
  char *v22; // r4
  int v23; // r5
  char *v24; // r4
  char *v25; // r9
  signed int v26; // r7
  bool v27; // cc
  signed int v28; // r0
  int v30; // [sp+Ch] [bp-49Ch]
  _DWORD v32[9]; // [sp+14h] [bp-494h] BYREF
  _DWORD v33[12]; // [sp+38h] [bp-470h] BYREF
  int (**v34)(); // [sp+68h] [bp-440h] BYREF
  char *v35; // [sp+6Ch] [bp-43Ch]
  _DWORD v36[268]; // [sp+78h] [bp-430h] BYREF

  v7 = a1 + 32;
  sead__CriticalSection__lock(a1 + 32);
  v34 = &sead__SafeStringBase__vtable;
  v35 = &byte_60B3BA34;
  (*(void (__fastcall **)(int))(FIELD_U32(a3, 24) + 12))(a3 + 24);
  (*(void (__fastcall **)(int))(FIELD_U32(a3, 24) + 12))(a3 + 24);
  v8 = *(char **)(a3 + 28);
  off_60C5CB30[3]();
  if ( v8 == off_60C5CB34 )
  {
LABEL_9:
    v11 = (FIELD_U32(a1, 68) & 1) == 0;
    v12 = "Save";
    v36[0] = &sead__SafeStringBase__vtable;
    if ( !v11 )
      v12 = "SaveAcceptReadOnlyFile";
    v36[1] = v12;
    v13 = 0;
    if ( !FileName_s_Mode_s_Id_s_Filter_s_ref(a3 + 8, &v34) )
      goto LABEL_40;
  }
  else
  {
    v9 = FIELD_U32(a3, 28);
    for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == (unsigned __int8)off_60C5CB34[i - 1]; i += 2 )
    {
      if ( !*(_BYTE *)(v9 + i - 1) )
        goto LABEL_9;
      if ( i >= 524289 || *(unsigned __int8 *)(v9 + i) != (unsigned __int8)off_60C5CB34[i] )
        break;
      if ( !*(_BYTE *)(v9 + i) )
        goto LABEL_9;
    }
    sead__SafeStringBase__operator_assign((int)&v34, a3 + 24);
  }
  if ( !FIELD_U8(a3, 40) )
  {
    v14 = FIELD_U32(a1, 68);
    if ( (v14 & 1) != 0 )
    {
      if ( (v14 & 2) != 0 )
      {
        (*(void (__fastcall **)(int))(FIELD_U32(a1, 72) + 12))(a1 + 72);
        v16 = FIELD_U32(a1, 76);
        ((void (__fastcall *)(int (***)()))v34[3])(&v34);
        sub_604209A4(v36, "File = %s, Arg = %s, WaitEnd = True, WindowStyle = Normal", v16, v35);
      }
      else
      {
        (*(void (__fastcall **)(int))(FIELD_U32(a1, 72) + 12))(a1 + 72);
        v15 = FIELD_U32(a1, 76);
        ((void (__fastcall *)(int (***)()))v34[3])(&v34);
        sub_604209A4(v36, "File = %s, Arg = %s, WaitEnd = True, WindowStyle = Hidden", v15, v35);
      }
    }
  }
  memset(&v33[1], 0, 44);
  v13 = 0;
  v33[0] = &off_60BF9CF0;
  v17 = (_BYTE *)sub_608E6578(*(_BYTE **)(a1 + 20), v33, (int)&v34, 1, 0);
  if ( v17 )
  {
    v30 = v7;
    v18 = FIELD_U32(dword_60CD0B50, 60);
    v19 = operator_new_8DE2C8(a4, v18, 64);
    sub_60904C68((int)v36, (int)v33, 0);
    v20 = (void *)v19;
    sub_60904900(v32, v36, v19, a4);
    sub_609A0208(a2, v32, v18, 0, 0);
    sub_609056F0((int)v32);
    sub_608E6738(v17, (int)v33);
    v21 = *(_DWORD **)(a3 + 32);
    if ( v21 )
    {
      (*(void (__fastcall **)(_DWORD))(*v21 + 12))(FIELD_U32(a3, 32));
      v22 = (char *)v21[1];
      ((void (__fastcall *)(int (***)()))v34[3])(&v34);
      if ( v22 != v35 )
      {
        v23 = FIELD_U32(a3, 32);
        v24 = *(char **)(v23 + 4);
        ((void (__fastcall *)(int (***)()))v34[3])(&v34);
        v25 = v35;
        if ( v24 != v35 )
        {
          ((void (__fastcall *)(int (***)()))v34[3])(&v34);
          v26 = 0;
          while ( v35[v26] )
          {
            if ( !v35[v26 + 1] )
            {
              ++v26;
              break;
            }
            if ( !v35[v26 + 2] )
            {
              v26 += 2;
              break;
            }
            v27 = v26 + 2 <= 0x7FFFF;
            v26 += 3;
            if ( !v27 )
            {
              v26 = 0;
              break;
            }
          }
          v28 = FIELD_U32(v23, 8);
          if ( v26 >= v28 )
            v26 = v28 - 1;
          qmemcpy(v24, v25, v26);
          v24[v26] = 0;
        }
      }
    }
    if ( v20 )
      operator_delete_8DE3FC(v20);
    sub_60904980(v32);
    sub_60904D08((int)v36);
    v7 = v30;
    v13 = 1;
  }
  else
  {
    ((void (__fastcall *)(int (***)()))v34[3])(&v34);
    sub_604209A4(v36, aS_2, v35);
  }
  v33[0] = &off_60BF9CF0;
  if ( v33[2] )
    sub_608E6738((_BYTE *)v33[2], (int)v33);
LABEL_40:
  sead__CriticalSection__unlock(v7);
  return v13;
}
