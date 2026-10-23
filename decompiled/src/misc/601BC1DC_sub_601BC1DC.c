/* sub_601BC1DC
 * address: 0x601BC1DC   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BC1DC(int a1, int a2)
{
  int v5; // r6
  float v6; // s2
  bool v7; // zf
  int v8; // r0
  void *v9; // r7
  float v10; // s16
  int v11; // r0

  if ( (FIELD_U32(a1, 264) | 1) == 7 )
    return sub_601C3910(a1, a2);
  v5 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 184 )
  {
    v5 = 184;
    if ( (FIELD_U8(a1, 1109) & 8) != 0 )
      v5 = 0;
  }
  v6 = FIELD_F32(a2, 12);
  v7 = v5 == 184;
  if ( v5 != 184 )
    v7 = v5 == 0;
  if ( v7 )
  {
    v8 = *(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1472)) + 4);
    (*(void (__fastcall **)(int, int, float, float, float))(*(_DWORD *)v8 + 84))(
      v8,
      v5,
      FIELD_F32(a2, 4),
      FIELD_F32(a2, 8),
      v6);
    v9 = (void *)sead__GlobalRandom__sInstance;
    v10 = sub_60793E10(*(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1472)) + 4));
    v6 = (float)(v10 + -1.0) * (float)(COERCE_FLOAT((sead__Random__getU32(v9) >> 9) | 0x3F800000) + -1.0);
  }
  else if ( *(_DWORD *)a2 == 122 )
  {
    v6 = FIELD_F32(a1, 332);
  }
  FIELD_U32(a1, 1060) = v5;
  v11 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920) + 4);
  return (*(int (__fastcall **)(int, int, float, float, float))(*(_DWORD *)v11 + 84))(
           v11,
           v5,
           FIELD_F32(a2, 4),
           FIELD_F32(a2, 8),
           v6);
}
