/* SE_BOSS_ICICLE_SIGN_ref
 * address: 0x6012C354   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_ICICLE_SIGN_ref(int a1)
{
  float *v2; // r7
  int v3; // r5
  int v4; // r6
  float v5; // r0
  int v6; // r0
  int result; // r0
  _DWORD *v8; // r4
  int v9; // t1
  int v10; // r0
  int (__fastcall *v11)(int, Vec3 *); // r2
  int v12; // r0
  Vec2 out; // [sp+4h] [bp-54h] BYREF
  int v14; // [sp+Ch] [bp-4Ch]
  Vec3 position; // [sp+10h] [bp-48h] BYREF
  float v16; // [sp+1Ch] [bp-3Ch]
  float v17; // [sp+2Ch] [bp-2Ch]
  int v18; // [sp+3Ch] [bp-1Ch]

  v2 = (float *)(a1 + 6300);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  v3 = *((_DWORD *)v2 - 1573);
  v4 = Global_BasicSoundActor2;
  v5 = *(v2 - 1547);
  position.x = *(v2 - 1548);
  position.y = v5;
  mapPositionToScreen(&out, &position);
  SE_OBJ_FIRE_CANNON_BLAZE_ref_2(v4, "SE_BOSS_ICICLE_SIGN", v3, &out, 0);
  v6 = **(_DWORD **)(*(_DWORD *)v2 + 12);
  if ( (FIELD_U8(v6, 28) & 0x20) != 0 )
    sub_6041838C((ModelAnimation *)(v6 + 4));
  if ( !FIELD_U16(a1, 6276) )
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C873C4);
  v9 = FIELD_U32(a1, 6972);
  v8 = (_DWORD *)(a1 + 6972);
  result = v9;
  if ( v9 >= 1 )
  {
    *v8 = --result;
    if ( !result )
    {
      v10 = **(_DWORD **)v2;
      v11 = *(int (__fastcall **)(int, Vec3 *))(*(_DWORD *)v10 + 84);
      LODWORD(position.x) = &sead__SafeStringBase__vtable;
      LODWORD(position.y) = "end";
      v12 = v11(v10, &position);
      (*(void (__fastcall **)(_DWORD, int, Vec3 *))(***(_DWORD ***)v2 + 108))(**(_DWORD **)v2, v12, &position);
      out.x = v16;
      out.y = v17;
      v14 = v18;
      return IcicleDewHeap_ref(dword_60C99CDC, &out);
    }
  }
  return result;
}
