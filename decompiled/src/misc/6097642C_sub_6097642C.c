/* sub_6097642C
 * address: 0x6097642C   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097642C(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  int v8; // r8
  unsigned int v9; // r5
  int v10; // r7
  int v11; // r7
  int result; // r0
  unsigned int *v13; // r1
  unsigned int v14; // r0
  unsigned int v15[11]; // [sp+10h] [bp-78h] BYREF
  _DWORD v16[19]; // [sp+3Ch] [bp-4Ch] BYREF

  v7 = FIELD_U32(a1, 2296);
  v16[0] = &sead__SafeStringBase__vtable;
  v16[1] = off_60C5CB34;
  v8 = sub_60977248(v7, a2, v16, a4);
  v9 = 0;
  sub_6095849C((int)v15, a2, FIELD_U8(a1, 4), 0, FIELD_U32(a1, 8), (FIELD_U32(a1, 2352) & 8) != 0, a3);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 16))(a3);
  v15[0] = 0;
  if ( v10 >= 1 )
  {
    do
    {
      if ( (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)a3 + 60))(a3, v9) == 1 )
        sub_609565DC((_DWORD *)a3, v15);
      v9 = ++v15[0];
    }
    while ( (int)v15[0] < v10 );
  }
  v11 = sub_60977398(FIELD_U32(a1, 2296), a2, v8);
  result = FIELD_U8(v11, 20);
  if ( (result & 1) != 0 )
  {
    if ( a3 )
    {
      sub_60955518(a3, FIELD_U32(v11, 24));
      FIELD_U32(v11, 588) = a3;
      if ( (FIELD_U8(a3, 81) & 4) == 0 )
        goto LABEL_13;
    }
    else
    {
      FIELD_U32(v11, 588) = 0;
    }
    v13 = (unsigned int *)(a1 + 3584);
    do
      v14 = __ldrex(v13);
    while ( __strex(v14 + 1, v13) );
    *(_DWORD *)(FIELD_U32(a1, 3592) + 4 * v14) = v11;
LABEL_13:
    result = FIELD_U32(a1, 3624);
    if ( result )
    {
      sub_60958528((int)v16, a2, FIELD_U8(a1, 4), FIELD_U32(a1, 8));
      v16[0] = 4;
      result = FIELD_U32(a1, 3624);
      if ( (FIELD_U8(result, 32) & 1) != 0 )
        return (**(int (__fastcall ***)(int, _DWORD *))(result + 36))(result + 36, v16);
    }
  }
  return result;
}
