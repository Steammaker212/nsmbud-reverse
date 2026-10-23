/* cobSurrenderFlap_ref
 * address: 0x601FC5F4   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall cobSurrenderFlap_ref(int a1)
{
  int v2; // r5
  bool v3; // zf
  int v4; // r5
  bool v5; // zf
  int result; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  int *v11; // r0
  int v12; // r0
  _DWORD v13[2]; // [sp+4h] [bp-1Ch] BYREF
  int v14; // [sp+Ch] [bp-14h]

  v2 = dword_60C8996C;
  v14 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v2, 1384) )
  {
    v3 = v14 == 90;
    if ( v14 != 90 )
      v3 = v14 == 2;
    if ( v3 )
      FIELD_U32(a1, 276) = 0;
  }
  v4 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  v5 = v14 == 90;
  if ( v14 != 90 )
    v5 = v14 == 2;
  if ( !v5 || FIELD_U8(a1, 281) )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v7 = FIELD_U32(a1, 276);
  if ( v7 )
  {
    result = v7 - 1;
    FIELD_U32(a1, 276) = result;
  }
  else
  {
    Animation_update(**(_DWORD **)(FIELD_U32(a1, 268) + 12));
    result = FIELD_U8(v4, 28);
    if ( (result & 0x20) != 0 )
    {
      v8 = FIELD_U32(a1, 268);
      v9 = FIELD_U32(a1, 272);
      v10 = FIELD_U32(v8, 8);
      v11 = *(int **)(v8 + 12);
      if ( v10 > 1 )
        ++v11;
      v12 = *v11;
      v13[0] = &sead__SafeStringBase__vtable;
      v13[1] = "cobSurrenderFlap";
      SkeletalAnim_play(v12, v9, (int)v13);
      FIELD_U8(a1, 281) = 1;
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
    }
    if ( FIELD_F32(v4, 20) == (float)(FIELD_F32(v4, 8) + -5.0) )
      return sub_601E4C88((_DWORD *)dword_60C8B13C, 72, (_DWORD *)(a1 + 80));
  }
  return result;
}
