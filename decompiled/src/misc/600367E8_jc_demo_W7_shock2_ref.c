/* jc_demo_W7_shock2_ref
 * address: 0x600367E8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall jc_demo_W7_shock2_ref(_DWORD *a1)
{
  int v2; // r1
  _DWORD *v3; // r0
  _DWORD *v4; // r6
  int *v5; // r1
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  _DWORD *v12; // r4
  const char *v13; // r2
  int result; // r0
  int (**v15)(); // [sp+4h] [bp-1Ch] BYREF
  const char *v16; // [sp+8h] [bp-18h]
  int v17; // [sp+Ch] [bp-14h]

  v2 = a1[1774];
  v4 = a1 + 1775;
  v3 = (_DWORD *)a1[1775];
  v15 = &sead__SafeStringBase__vtable;
  v16 = "jc_demo_W7_shock2";
  sub_60421938(v3, v2, (int)&v15);
  v5 = *(int **)(*v4 + 12);
  v6 = *(_DWORD *)(*v4 + 68);
  if ( *(_DWORD *)(*v4 + 8) > v6 )
    v5 += v6;
  v7 = *v5;
  FIELD_U32(v7, 20) = 0;
  FIELD_U32(v7, 28) |= 2u;
  v8 = *(_DWORD *)(*v4 + 12);
  v9 = *(_DWORD *)(*v4 + 68);
  if ( *(_DWORD *)(*v4 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 1065353216;
  v10 = *(_DWORD *)(*v4 + 12);
  v11 = *(_DWORD *)(*v4 + 68);
  if ( *(_DWORD *)(*v4 + 8) > v11 )
    v10 += 4 * v11;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v10 + 4), 0);
  a1[1943] = 1;
  v12 = a1 + 1943;
  (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)*(v12 - 37) + 192))(*(v12 - 37), &dword_60C80394);
  v15 = (int (**)())*(v12 - 142);
  v16 = (const char *)*(v12 - 138);
  v17 = *(v12 - 134);
  sub_60833074((float *)&v15);
  v13 = v16;
  result = dword_60CC62E4 + 116;
  FIELD_U32(dword_60CC62E4, 116) = v15;
  FIELD_U32(result, 4) = v13;
  FIELD_U32(result, 8) = 0;
  *v12 = 1;
  return result;
}
