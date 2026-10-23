/* sub_6091C784
 * address: 0x6091C784   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_6091C784(int a1, int a2, void *a3)
{
  int v3; // r10
  int v6; // r0
  int v7; // r8
  int v8; // r4
  int v9; // r7
  int v10; // r5
  int v11; // r7
  bool v12; // zf
  int *result; // r0
  int **v14; // r5
  int v15; // r7
  _DWORD *v16; // r6
  _DWORD *v17; // r8
  int v18; // r1
  int i; // r2
  int (**v20)(); // [sp+0h] [bp-30h] BYREF
  _DWORD *v21; // [sp+4h] [bp-2Ch]
  _DWORD v22[10]; // [sp+8h] [bp-28h] BYREF

  v22[0] = a2;
  if ( !FIELD_U32(a1, 4) )
  {
    v20 = &sead__SafeStringBase__vtable;
    v21 = (_DWORD *)(a2 + 24);
    v6 = sub_6091B360((int)v22);
    sub_6091C4C4(a1, (int)&v20, v6, a3);
  }
  v7 = sub_6091B360((int)v22);
  v8 = *(_DWORD *)sub_6091B360((int)v22);
  v9 = sub_6091B360((int)v22);
  v10 = *(_DWORD *)(v9 + *(_DWORD *)sub_6091B360((int)v22));
  v11 = sub_6091B360((int)v22);
  *(_DWORD *)(FIELD_U32(a1, 4) + 40) = v11 + *(_DWORD *)sub_6091B360((int)v22);
  result = (int *)(v7 + v8 + v10);
  v12 = result == 0;
  *(_DWORD *)(FIELD_U32(a1, 4) + 44) = result;
  if ( result )
  {
    v3 = result[1];
    v12 = v3 == 0;
  }
  if ( !v12 )
  {
    v14 = (int **)(result + 2);
    v15 = 0;
    result = &dword_60BC0230;
    do
    {
      v16 = (_DWORD *)sub_60973CE8(result);
      v20 = &sead__SafeStringBase__vtable;
      v21 = v14 + 3;
      (*(void (__fastcall **)(_DWORD *))(*v16 + 12))(v16);
      (*(void (__fastcall **)(_DWORD *))(*v16 + 12))(v16);
      v17 = (_DWORD *)v16[1];
      ((void (__fastcall *)(int (***)()))v20[3])(&v20);
      if ( v17 == v21 )
      {
LABEL_15:
        *(_DWORD *)(FIELD_U32(a1, 4) + 48) = v14[1];
      }
      else
      {
        v18 = v16[1];
        for ( i = 1; *(unsigned __int8 *)(v18 + i - 1) == *((unsigned __int8 *)v21 + i - 1); i += 2 )
        {
          if ( !*(_BYTE *)(v18 + i - 1) )
            goto LABEL_15;
          if ( i > 0x80000 || *(unsigned __int8 *)(v18 + i) != *((unsigned __int8 *)v21 + i) )
            break;
          if ( !*(_BYTE *)(v18 + i) )
            goto LABEL_15;
        }
      }
      result = *v14;
      ++v15;
      v14 = (int **)((char *)*v14 + (_DWORD)v14);
    }
    while ( v15 != v3 );
  }
  return result;
}
