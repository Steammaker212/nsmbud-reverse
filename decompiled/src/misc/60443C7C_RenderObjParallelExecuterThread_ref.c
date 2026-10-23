/* RenderObjParallelExecuterThread_ref
 * address: 0x60443C7C   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RenderObjParallelExecuterThread_ref(int *a1, void *a2)
{
  unsigned int v3; // r11
  int *v4; // r5
  int result; // r0
  int *v6; // r7
  int v7; // r6
  _DWORD *v8; // r0
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // [sp+18h] [bp-48h]
  int *v13; // [sp+2Ch] [bp-34h]
  _DWORD v15[11]; // [sp+34h] [bp-2Ch] BYREF

  v3 = 0;
  v12 = a1 + 4100;
  v13 = a1 + 4099;
  v4 = a1 + 4098;
  do
  {
    result = dword_60C5D314;
    if ( v3 < dword_60C5D314 )
    {
      v6 = (int *)operator_new_8DE25C(0xCu, a2, 4);
      v7 = operator_new_8DE25C(0x94u, a2, 4);
      v15[0] = &sead__SafeStringBase__vtable;
      v15[1] = "RenderObjParallelExecuterThread";
      v8 = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
      *v8 = off_60BFAEB8;
      v8[1] = a1;
      v8[2] = sub_60443E70;
      v8[3] = 0;
      sub_6090891C(v7, v15, v8, a2, dword_60C9CD50, 0, 0x7FFFFFFF, 0x2000, 32);
      *v6 = v7;
      v9 = *v6;
      v15[0] = 1 << v3;
      sub_60908478(v9, v15);
      (*(void (__fastcall **)(int))(*(_DWORD *)*v6 + 24))(*v6);
      v10 = operator_new_8DE25C(0x1Cu, a2, 4);
      v6[1] = sub_60907FA4(v10, 1);
      v11 = (_DWORD *)operator_new_8DE25C(8u, a2, 4);
      *v11 = &sead__SafeStringBase__vtable;
      v11[1] = &byte_60ABC94D;
      v6[2] = (int)v11;
      result = *v4;
      if ( *v4 < *v13 )
      {
        *(_DWORD *)(*v12 + 4 * result) = v6;
        result = *v4 + 1;
        *v4 = result;
      }
    }
    ++v3;
  }
  while ( v3 != 3 );
  return result;
}
