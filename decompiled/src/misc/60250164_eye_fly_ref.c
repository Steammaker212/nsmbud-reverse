/* eye_fly_ref
 * address: 0x60250164   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall eye_fly_ref(int a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r7
  int ResArchiveById; // r0
  int v5; // r1
  unsigned int v6; // r0
  int *v7; // r1
  unsigned int v8; // r0
  int v9; // r0
  _DWORD *v10; // r5
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r0
  int v15; // r0
  int result; // r0
  int (**v17)(); // [sp+0h] [bp-20h] BYREF
  const char *v18; // [sp+4h] [bp-1Ch]

  v3 = (_DWORD *)(a1 + 6304);
  v2 = *(_DWORD **)(a1 + 6304);
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  v17 = &sead__SafeStringBase__vtable;
  v18 = "fly";
  sub_60421938(v2, ResArchiveById, (int)&v17);
  v5 = *(_DWORD *)(*v3 + 12);
  v6 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v6 )
    v5 += 4 * v6;
  *(_DWORD *)(*(_DWORD *)v5 + 24) = 0;
  v7 = *(int **)(*v3 + 12);
  v8 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v8 )
    v7 += v8;
  v9 = *v7;
  FIELD_U32(v9, 20) = 0x40000000;
  FIELD_U32(v9, 28) |= 2u;
  if ( v3[8] )
  {
    v10 = *(_DWORD **)(a1 + 6308);
    v11 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
    v17 = &sead__SafeStringBase__vtable;
    v18 = "eye_fly";
    sub_60421938(v10, v11, (int)&v17);
    v12 = *(_DWORD *)(FIELD_U32(a1, 6308) + 12);
    v13 = *(_DWORD *)(FIELD_U32(a1, 6308) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 6308) + 8) > v13 )
      v12 += 4 * v13;
    *(_DWORD *)(*(_DWORD *)v12 + 24) = 0;
    v14 = FIELD_U32(a1, 6324);
    FIELD_U32(v14, 20) = 0;
    FIELD_U32(v14, 28) |= 2u;
    *(_DWORD *)(FIELD_U32(a1, 6324) + 24) = 0;
  }
  v15 = FIELD_U32(a1, 80);
  FIELD_U32(a1, 156) = 0;
  result = dword_60AF1F58[v15];
  FIELD_U32(a1, 160) = result;
  return result;
}
