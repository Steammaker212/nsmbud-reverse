/* sub_60942C28
 * address: 0x60942C28   size: 1504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60942C28(int a1, _DWORD *a2, int a3)
{
  _BOOL4 v6; // r11
  int v7; // r7
  int v8; // r1
  int v9; // r0
  bool v10; // cc
  int v11; // r0
  float *v12; // r5
  signed int v13; // r0
  char *v14; // r0
  char v15; // r8
  int v16; // r5
  int v17; // r0
  int v18; // r0
  int v19; // r11
  unsigned int v20; // r0
  _WORD *v21; // r10
  void *v22; // r7
  signed int v23; // r4
  void *v24; // r4
  int v25; // r0
  void *v26; // r10
  int v27; // r10
  _BYTE *v28; // r6
  signed int v29; // r5
  bool v30; // zf
  bool v31; // nf
  bool v32; // vf
  void *v33; // r6
  void *v34; // r4
  signed int v35; // r5
  int v37; // [sp+4h] [bp-3Ch]
  void *v38; // [sp+8h] [bp-38h]
  void *v39; // [sp+Ch] [bp-34h]
  int (**v40)(); // [sp+10h] [bp-30h] BYREF
  void *v41; // [sp+14h] [bp-2Ch]
  signed int v42; // [sp+18h] [bp-28h]

  v6 = 1;
  switch ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1) )
  {
    case 0:
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v14 = (char *)a2[1];
      v6 = 1;
      v15 = 1;
      if ( v14 == "true" )
        goto LABEL_67;
      v15 = 0;
      v16 = 0;
      while ( 2 )
      {
        if ( v14[v16] == aTrue[v16] )
        {
          if ( v14[v16] )
          {
            if ( ++v16 >= 524289 )
              break;
            continue;
          }
          v15 = 1;
        }
        break;
      }
LABEL_67:
      *(_BYTE *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1) = v15;
      return v6;
    case 1:
      v12 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      v13 = sub_60900FB4(v12, a2);
      goto LABEL_18;
    case 2:
    case 17:
      v12 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      v13 = sub_608FF3E8((int *)v12, a2, -1);
LABEL_18:
      if ( !v13 )
        *v12 = 0.0;
      return v6;
    case 3:
      v17 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      sub_60943228(a2, v17, 2);
      return v6;
    case 4:
      v18 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      sub_60943228(a2, v18, 3);
      return v6;
    case 5:
    case 6:
    case 16:
      v11 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
      sub_60943228(a2, v11, 4);
      return v6;
    case 7:
    case 8:
    case 15:
    case 20:
      v7 = FIELD_U32(dword_60CD0B70, 20);
      if ( !v7 )
        return v6;
      (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
      v8 = a2[1];
      v9 = 0;
      break;
    default:
      return v6;
  }
  while ( *(_BYTE *)(v8 + v9) )
  {
    if ( !*(_BYTE *)(v8 + v9 + 1) )
    {
      ++v9;
      break;
    }
    if ( !*(_BYTE *)(v8 + v9 + 2) )
    {
      v9 += 2;
      break;
    }
    v10 = v9 + 2 <= 0x7FFFF;
    v9 += 3;
    if ( !v10 )
    {
      v9 = 0;
      break;
    }
  }
  v19 = v9 + 1;
  v20 = 2 * (v9 + 1);
  if ( v20 < v19 )
    v20 = -1;
  v21 = (_WORD *)operator_new_8DE2C8(v20, v7, 4);
  v37 = v7;
  v22 = (void *)operator_new_8DE2C8(v19, v7, 4);
  (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
  sub_60901A08(v21, v19, a2[1], -1);
  v38 = v21;
  sub_609017B8((int)v22, v19, (int)v21, -1);
  v39 = v22;
  if ( a3 == 1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v22 = (void *)a2[1];
  }
  v23 = 0;
  while ( *((_BYTE *)v22 + v23) )
  {
    if ( !*((_BYTE *)v22 + v23 + 1) )
    {
      ++v23;
      break;
    }
    if ( !*((_BYTE *)v22 + v23 + 2) )
    {
      v23 += 2;
      break;
    }
    v10 = v23 + 2 <= 0x7FFFF;
    v23 += 3;
    if ( !v10 )
    {
      v23 = 0;
      break;
    }
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1) == 20 )
  {
    v24 = (void *)operator_new_8DE2C8(v19, v37, 4);
    v40 = &sead__SafeStringBase__vtable;
    v41 = v24;
    v25 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 44))(a1);
    (*(void (__fastcall **)(int, int (***)()))(*(_DWORD *)v25 + 8))(v25, &v40);
    v41 = v24;
    v40 = &BufferedSafeStringBase_char_vtable_probably;
    v42 = v19;
    if ( v19 <= 0 )
    {
      v26 = 0;
      v41 = 0;
      v42 = 0;
    }
    else
    {
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v40);
      v26 = v41;
    }
    v33 = v39;
    v34 = v38;
    if ( v26 != v22 )
    {
      v35 = 0;
      while ( *((_BYTE *)v22 + v35) )
      {
        if ( !*((_BYTE *)v22 + v35 + 1) )
        {
          ++v35;
          break;
        }
        if ( !*((_BYTE *)v22 + v35 + 2) )
        {
          v35 += 2;
          break;
        }
        v10 = v35 + 2 <= 0x7FFFF;
        v35 += 3;
        if ( !v10 )
        {
          v35 = 0;
          break;
        }
      }
      if ( v35 >= v42 )
        v35 = v42 - 1;
      qmemcpy(v26, v22, v35);
      *((_BYTE *)v26 + v35) = 0;
    }
    v6 = 1;
    if ( v38 )
LABEL_74:
      operator_delete_8DE3FC(v34);
  }
  else
  {
    v27 = 32;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1) != 7 )
    {
      v27 = 256;
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 28))(a1) == 8 )
        v27 = 64;
    }
    v41 = (void *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
    v40 = &BufferedSafeStringBase_char_vtable_probably;
    v42 = v27;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v40);
    v28 = v41;
    v29 = v27 - 1;
    if ( v23 < v27 - 1 )
      v29 = v23;
    if ( v41 != v22 )
    {
      if ( v29 < 0 )
      {
        v29 = 0;
        while ( *((_BYTE *)v22 + v29) )
        {
          if ( !*((_BYTE *)v22 + v29 + 1) )
          {
            ++v29;
            break;
          }
          if ( !*((_BYTE *)v22 + v29 + 2) )
          {
            v29 += 2;
            break;
          }
          v10 = v29 + 2 <= 0x7FFFF;
          v29 += 3;
          if ( !v10 )
          {
            v29 = 0;
            break;
          }
        }
      }
      if ( v29 >= v42 )
        v29 = v42 - 1;
      qmemcpy(v41, v22, v29);
      v28[v29] = 0;
    }
    v32 = __OFSUB__(v27, v23);
    v30 = v27 == v23;
    v31 = v27 - v23 < 0;
    v33 = v39;
    v34 = v38;
    v6 = !(v31 ^ v32 | v30);
    if ( v38 )
      goto LABEL_74;
  }
  if ( v33 )
    operator_delete_8DE3FC(v33);
  return v6;
}
