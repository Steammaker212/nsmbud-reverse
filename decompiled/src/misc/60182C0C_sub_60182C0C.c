/* sub_60182C0C
 * address: 0x60182C0C   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60182C0C(int a1, int a2, int a3, int a4)
{
  int v6; // r7
  unsigned __int8 *v7; // r5
  int v8; // r0
  bool v9; // zf
  _DWORD *v10; // r7
  int i; // r6
  char *v12; // r0
  unsigned __int8 *v13; // r11
  unsigned __int8 *v14; // r1
  int v15; // r6
  int v16; // r1
  int v17; // r0
  int v18; // r1
  unsigned __int8 *v19; // r7
  int v20; // r0
  size_t v21; // r6
  int v22; // r0
  bool v23; // zf
  int v26; // [sp+4h] [bp-3Ch]
  _DWORD *v27; // [sp+8h] [bp-38h]
  int v28; // [sp+10h] [bp-30h]
  int (**v29)(); // [sp+14h] [bp-2Ch] BYREF
  unsigned __int8 *v30; // [sp+18h] [bp-28h]

  v6 = a3 + 1;
  v7 = (unsigned __int8 *)(*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 88))(a2, a3 + 1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 92))(a2);
  v8 = *v7;
  v9 = v8 == 75;
  if ( v8 != 75 )
    v9 = v8 == 70;
  if ( !v9 )
    return a3;
  v26 = a4;
  v27 = (_DWORD *)(a4 + 24);
  do
  {
    v28 = v6;
    v10 = v27;
    for ( i = 0; i < 40; ++i )
    {
      v12 = &byte_60B3BA34;
      if ( (int)v10[2] >= 1 )
        v12 = (char *)v10[1];
      if ( !*v12 )
        break;
      v29 = &sead__SafeStringBase__vtable;
      v30 = v7;
      (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
      (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
      v13 = (unsigned __int8 *)v10[1];
      ((void (__fastcall *)(int (***)()))v29[3])(&v29);
      if ( v13 == v30 )
        goto LABEL_27;
      v14 = (unsigned __int8 *)v10[1];
      if ( *v14 == *v30 && (!*v14 || v14[1] == v30[1] && (!v14[1] || v14[2] == v30[2] && (!v14[2] || v14[3] == v30[3]))) )
        goto LABEL_27;
      v10 += 5;
    }
    v15 = v26;
    v16 = 0;
    v17 = FIELD_U32(v26, 824);
    if ( (unsigned int)v17 < 0x28 )
      v16 = FIELD_U32(v26, 824);
    v18 = v26 + 20 * v16;
    v19 = *(unsigned __int8 **)(v18 + 28);
    if ( v19 != v7 )
    {
      v20 = FIELD_U32(v18, 32);
      v21 = v20 - 1;
      if ( v20 > 4 )
        v21 = 4;
      qmemcpy(v19, v7, v21);
      v19[v21] = 0;
      v15 = v26;
      v17 = FIELD_U32(v26, 824);
    }
    FIELD_U32(v15, 824) = v17 + 1;
    if ( v17 >= 39 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 88))(a2, a3);
LABEL_27:
    v6 = v28 + 1;
    v7 = (unsigned __int8 *)(*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 88))(a2, v28 + 1);
    v22 = *v7;
    v23 = v22 == 70;
    if ( v22 != 70 )
      v23 = v22 == 75;
  }
  while ( v23 );
  return v28;
}
