/* sub_60180C24
 * address: 0x60180C24   size: 932   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60180C24(int a1, int a2, _DWORD *a3)
{
  int v6; // r2
  char *v7; // r3
  int v8; // r0
  int (***v9)(); // r6
  unsigned int v10; // r11
  unsigned int v11; // r0
  int v12; // r1
  char *v13; // r0
  char *v14; // r5
  char *v15; // r4
  int (***v16)(); // r7
  int v17; // r6
  signed int v18; // r9
  bool v19; // cc
  char *v20; // r4
  int v21; // r1
  signed int v22; // r5
  _DWORD *v23; // r11
  unsigned __int8 *v24; // r9
  int v25; // r0
  int v26; // r6
  int v27; // r0
  signed int v28; // r4
  int result; // r0
  _DWORD *v30; // [sp+Ch] [bp-74h]
  int v31; // [sp+20h] [bp-60h]
  int (**v32)(); // [sp+24h] [bp-5Ch] BYREF
  char *v33; // [sp+28h] [bp-58h]
  int (**v34)(); // [sp+2Ch] [bp-54h] BYREF
  char *v35; // [sp+30h] [bp-50h]
  int v36; // [sp+34h] [bp-4Ch]
  int v37; // [sp+38h] [bp-48h] BYREF
  int (**v38)(); // [sp+44h] [bp-3Ch] BYREF
  unsigned __int8 *v39; // [sp+48h] [bp-38h]
  int v40; // [sp+4Ch] [bp-34h]
  int v41; // [sp+50h] [bp-30h] BYREF

  v39 = (unsigned __int8 *)&v41;
  v38 = &BufferedSafeStringBase_char_vtable_probably;
  v40 = 11;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v38);
  *v39 = 0;
  v38 = &off_60BD5160;
  v31 = sub_60181410(&v38, a2);
  v8 = FIELD_U32(a1, 36);
  if ( v8 <= 1 )
  {
LABEL_27:
    v22 = 0;
    if ( (unsigned int)v8 >= 0x100 )
      v8 = 0;
    v23 = (_DWORD *)(a1 + 32 * v8);
    v24 = (unsigned __int8 *)v23[70156];
    (*(void (__fastcall **)(_DWORD *, _DWORD, int, char *))(v23[70155] + 12))(
      v23 + 70155,
      *(_DWORD *)(v23[70155] + 12),
      v6,
      v7);
    v25 = v23[70156];
    while ( *(_BYTE *)(v25 + v22) )
    {
      if ( !*(_BYTE *)(v25 + v22 + 1) )
      {
        ++v22;
        break;
      }
      if ( !*(_BYTE *)(v25 + v22 + 2) )
      {
        v22 += 2;
        break;
      }
      v19 = v22 + 2 <= 0x7FFFF;
      v22 += 3;
      if ( !v19 )
      {
        v22 = 0;
        break;
      }
    }
    v26 = v31;
    v27 = v23[70157];
    v28 = v27 - 1;
    if ( v27 > 9 )
      v28 = 9;
    if ( v28 >= 1 )
    {
      ((void (__fastcall *)(int (***)()))v38[3])(&v38);
      qmemcpy(v24, v39, v28);
      if ( v28 > v22 )
        v24[v28] = 0;
    }
  }
  else
  {
    v9 = &v34;
    v30 = a3;
    v10 = 0;
    while ( 1 )
    {
      v11 = 0;
      if ( v10 < 0x100 )
        v11 = v10;
      v12 = a1 + 32 * v11;
      v13 = &byte_60B3BA34;
      if ( FIELD_S32(v12, 280628) >= 1 )
        v13 = *(char **)(v12 + 280624);
      v32 = &sead__SafeStringBase__vtable;
      v33 = v13;
      v35 = (char *)&v37;
      v34 = &BufferedSafeStringBase_char_vtable_probably;
      v36 = 10;
      sead__BufferedSafeStringBase__assureTerminationImpl_const((int)v9);
      v34 = &off_60BD4FF8;
      v14 = v35;
      ((void (__fastcall *)(int (***)()))v32[3])(&v32);
      v15 = v33;
      if ( v14 != v33 )
      {
        v16 = v9;
        v17 = a1;
        ((void (__fastcall *)(int (***)()))v32[3])(&v32);
        v18 = 0;
        while ( v33[v18] )
        {
          if ( !v33[v18 + 1] )
          {
            ++v18;
            break;
          }
          if ( !v33[v18 + 2] )
          {
            v18 += 2;
            break;
          }
          v19 = v18 + 2 <= 0x7FFFF;
          v18 += 3;
          if ( !v19 )
          {
            v18 = 0;
            break;
          }
        }
        if ( v18 >= v36 )
          v18 = v36 - 1;
        qmemcpy(v14, v15, v18);
        v14[v18] = 0;
        a1 = v17;
        v9 = v16;
      }
      v34 = &off_60BD4F50;
      ((void (__fastcall *)(int (***)()))v38[3])(&v38);
      ((void (__fastcall *)(int (***)()))v38[3])(&v38);
      v20 = (char *)v39;
      ((void (__fastcall *)(int (***)()))v34[3])(v9);
      if ( v20 == v35 )
        break;
      v21 = 0;
      while ( v39[v21] == (unsigned __int8)v35[v21] )
      {
        if ( v39[v21] )
        {
          if ( ++v21 < 10 )
            continue;
        }
        goto LABEL_35;
      }
      v8 = FIELD_U32(a1, 36);
      v7 = &byte_60B3BA34;
      v6 = 280628;
      if ( (int)++v10 >= v8 - 1 )
      {
        a3 = v30;
        goto LABEL_27;
      }
    }
LABEL_35:
    a3 = v30;
    v26 = v31;
  }
  result = *a3 + v26;
  *a3 = result;
  return result;
}
