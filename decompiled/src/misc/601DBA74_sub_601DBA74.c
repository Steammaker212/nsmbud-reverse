/* sub_601DBA74
 * address: 0x601DBA74   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601DBA74(int a1)
{
  float v2; // r1
  float v3; // r2
  unsigned int v4; // r1
  unsigned int v5; // r2
  unsigned int v7[3]; // [sp+4h] [bp-4Ch] BYREF
  Vec3 v8; // [sp+10h] [bp-40h] BYREF

  sub_601861EC((Actor *)a1);
  StateMgr__execute((StateMgr *)(a1 + 296));
  if ( sub_60235E50(a1 + 448) == 1 )
  {
    v2 = FIELD_F32(a1, 84);
    v3 = FIELD_F32(a1, 88);
    v8.x = FIELD_F32(a1, 80);
    v8.y = v2;
    v8.z = v3;
    EffectData_update((EffectData *)(a1 + 448), &v8, 0, 0);
  }
  v4 = FIELD_U32(a1, 180);
  v5 = FIELD_U32(a1, 184);
  v7[0] = FIELD_U32(a1, 176);
  v7[1] = v4;
  v7[2] = v5;
  sub_601927EC((int)&v8, (float *)(a1 + 128), v7, (_DWORD *)(a1 + 80));
  ((void (__fastcall *)(_DWORD, Vec3 *))loc_60793FF0)(*(_DWORD *)(FIELD_U32(a1, 268) + 4), &v8);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(FIELD_U32(a1, 268) + 4) + 148))(*(_DWORD *)(FIELD_U32(a1, 268) + 4));
  if ( sub_6079437C(*(_DWORD *)(FIELD_U32(a1, 268) + 4)) == 1 )
    SE_PLY_ref(dword_60C8B13C, 16, 2, 1, FIELD_F32(a1, 200));
  return 1;
}
