/* head_root_ref
 * address: 0x605BBD3C   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall head_root_ref(int a1)
{
  float *v2; // r0
  float v3; // s0
  float v4; // s0
  int v5; // r1
  float v6; // s0
  _DWORD **v7; // r1
  int v8; // r6
  int v9; // r0
  float v10; // s0
  int v12; // r0
  int (__fastcall *v13)(int, _DWORD *, float); // r2
  int v14; // r0
  int i; // r5
  _DWORD v16[8]; // [sp+0h] [bp-20h] BYREF

  v2 = (float *)(a1 + 6808);
  v3 = *v2;
  if ( FIELD_U32(a1, 6792) )
  {
    v4 = v3 + -0.1;
    *v2 = v4;
    if ( v4 > 0.0 )
    {
      v5 = LODWORD(v4);
      goto LABEL_9;
    }
    v5 = 0;
  }
  else
  {
    v6 = v3 + 0.1;
    *v2 = v6;
    if ( v6 < 1.0 )
    {
      v5 = LODWORD(v6);
      goto LABEL_9;
    }
    v5 = 1065353216;
  }
  *(_DWORD *)v2 = v5;
LABEL_9:
  FIELD_U32(a1, 6812) = v5;
  FIELD_U32(a1, 6816) = v5;
  v8 = a1 + 6776;
  v7 = *(_DWORD ***)(a1 + 6776);
  v9 = *v7[3];
  LODWORD(v10) = (unsigned int)FIELD_F32(v9, 20);
  if ( (LOBYTE(v10) & 0xF) == 0 )
  {
    if ( !FIELD_U8(a1, 6832) )
      return Animation_update(FIELD_U32(a1, 6780));
    if ( !FIELD_U8(a1, 6833) )
    {
      v12 = (int)*v7;
      v13 = *(int (__fastcall **)(int, _DWORD *, float))(**v7 + 84);
      v16[0] = &sead__SafeStringBase__vtable;
      v16[1] = "head_root";
      v14 = v13(v12, v16, v10);
      sub_60448AF4(**(_DWORD **)(*(_DWORD *)v8 + 12), v14);
      for ( i = 1; i != 29; ++i )
        sub_60448AF4(**(_DWORD **)(*(_DWORD *)v8 + 12), i);
      FIELD_U8(a1, 6833) = 1;
      v9 = **(_DWORD **)(*(_DWORD *)v8 + 12);
    }
  }
  Animation_update(v9);
  return Animation_update(FIELD_U32(a1, 6780));
}
