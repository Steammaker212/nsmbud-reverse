/* SE_OBJ_TRPLN_BOUND_ref
 * address: 0x606ED9E4   size: 296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_TRPLN_BOUND_ref(int result, float *a2, float a3, float a4)
{
  char *v5; // r5
  unsigned int v7; // r0
  float *v8; // r1
  unsigned int v9; // r0
  int *v10; // r5
  int v11; // r6
  float v12; // r1
  Vec2 v13; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v5 = (char *)result;
  if ( result )
  {
    v7 = sub_6000F7B8(a3, (float)(FIELD_F32(result, 120) * a4) + 0.0);
    v8 = (float *)((char *)sinLutTable + ((v7 >> 20) & 0xFF0));
    result = (*(int (__fastcall **)(char *, int, int, _DWORD, float, float))(*(_DWORD *)v5 + 748))(
               v5,
               1,
               1,
               0,
               (float)((float)(*v8 + (float)((float)((float)(v7 & 0xFFFFFF) * v8[1]) * 0.000000059605)) * a3)
             + (float)((float)(a3
                             - (float)((float)(*v8 + (float)((float)((float)(v7 & 0xFFFFFF) * v8[1]) * 0.000000059605))
                                     * a3))
                     * 0.5),
               (float)(v8[2] + (float)((float)((float)(v7 & 0xFFFFFF) * v8[3]) * 0.000000059605)) * a3);
    if ( result == 1 )
    {
      v9 = v5[84];
      LODWORD(position.x) = 41;
      v10 = sub_60002B90(v9, unk_60C26418);
      v11 = Global_BasicSoundActor2;
      v12 = a2[1];
      position.x = *a2;
      position.y = v12;
      mapPositionToScreen(&v13, &position);
      return BasicSoundActor2_play(v11, "SE_OBJ_TRPLN_BOUND", &v13.x, (int)v10);
    }
  }
  return result;
}
