/* sub_60968528
 * address: 0x60968528   size: 792   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60968528(int a1, _DWORD *a2)
{
  int v4; // r8
  int v5; // r0
  int v6; // r5
  int v7; // r1
  char *v8; // r6
  int v9; // r1
  int i; // r3
  int v11; // r4
  int v12; // r6
  int v13; // r0
  int v14; // r11
  char *v15; // r6
  char *v16; // r4
  signed int v17; // r7
  bool v18; // cc
  signed int v19; // r0
  int v21; // [sp+Ch] [bp-6Ch]
  int (**v22)(); // [sp+10h] [bp-68h] BYREF
  char *v23; // [sp+14h] [bp-64h]
  int v24; // [sp+18h] [bp-60h]
  int v25; // [sp+1Ch] [bp-5Ch]
  int v26; // [sp+20h] [bp-58h]
  int v27; // [sp+24h] [bp-54h]
  int v28; // [sp+28h] [bp-50h]
  int v29; // [sp+2Ch] [bp-4Ch]
  char v30; // [sp+30h] [bp-48h]
  char v31; // [sp+31h] [bp-47h]
  int v32; // [sp+34h] [bp-44h]
  int v33; // [sp+38h] [bp-40h]
  char v34; // [sp+3Ch] [bp-3Ch]
  int (**v35)(); // [sp+40h] [bp-38h] BYREF
  char *v36; // [sp+44h] [bp-34h]

  v4 = a1 + 32;
  sead__CriticalSection__lock(a1 + 32);
  v5 = FIELD_U32(a1, 24);
  if ( v5 )
  {
    v6 = FIELD_U32(a1, 28);
    v7 = 0;
    while ( *(_DWORD *)v6 )
    {
      ++v7;
      v6 += 16;
      if ( v5 == v7 )
        goto LABEL_5;
    }
    v21 = v7;
  }
  else
  {
LABEL_5:
    v6 = 0;
    v21 = -1;
  }
  v35 = &sead__SafeStringBase__vtable;
  v36 = &byte_60B3BA34;
  (*(void (__fastcall **)(_DWORD *))(a2[6] + 12))(a2 + 6);
  (*(void (__fastcall **)(_DWORD *))(a2[6] + 12))(a2 + 6);
  v8 = (char *)a2[7];
  off_60C5CB30[3]();
  if ( v8 == off_60C5CB34 )
  {
LABEL_15:
    v22 = &sead__SafeStringBase__vtable;
    v23 = "Open";
    v11 = -1;
    if ( FileName_s_Mode_s_Id_s_Filter_s_ref((int)(a2 + 2), (int)&v35, &v22, a2 + 4, a2, a2 + 2) != 1 )
      goto LABEL_34;
  }
  else
  {
    v9 = a2[7];
    for ( i = 1; *(unsigned __int8 *)(v9 + i - 1) == (unsigned __int8)off_60C5CB34[i - 1]; i += 2 )
    {
      if ( !*(_BYTE *)(v9 + i - 1) )
        goto LABEL_15;
      if ( i >= 524289 || *(unsigned __int8 *)(v9 + i) != (unsigned __int8)off_60C5CB34[i] )
        break;
      if ( !*(_BYTE *)(v9 + i) )
        goto LABEL_15;
    }
    sead__SafeStringBase__operator_assign((int)&v35, (int)(a2 + 6));
  }
  v12 = FIELD_U32(dword_60CD0B50, 60);
  v22 = &sead__SafeStringBase__vtable;
  v23 = &byte_60B3BA34;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v24 = 0;
  v30 = 1;
  v31 = 1;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  sead__SafeStringBase__operator_assign((int)&v22, (int)&v35);
  v26 = v12;
  v27 = a2[9];
  v13 = sub_608E6154(*(_BYTE **)(a1 + 20));
  *(_DWORD *)v6 = v13;
  if ( v13 )
  {
    FIELD_U32(v6, 4) = v32;
    v14 = a2[8];
    if ( v14 )
    {
      v15 = *(char **)(v14 + 4);
      ((void (__fastcall *)(int (***)()))v35[3])(&v35);
      v16 = v36;
      if ( v15 != v36 )
      {
        ((void (__fastcall *)(int (***)()))v35[3])(&v35);
        v17 = 0;
        while ( v36[v17] )
        {
          if ( !v36[v17 + 1] )
          {
            ++v17;
            break;
          }
          if ( !v36[v17 + 2] )
          {
            v17 += 2;
            break;
          }
          v18 = v17 + 2 <= 0x7FFFF;
          v17 += 3;
          if ( !v18 )
          {
            v17 = 0;
            break;
          }
        }
        v19 = FIELD_U32(v14, 8);
        if ( v17 >= v19 )
          v17 = v19 - 1;
        qmemcpy(v15, v16, v17);
        v15[v17] = 0;
      }
    }
    FIELD_U8(v6, 12) = a2[11];
    v11 = v21;
  }
  else
  {
    v11 = -1;
  }
LABEL_34:
  sead__CriticalSection__unlock(v4);
  return v11;
}
