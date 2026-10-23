/* sub_602F296C
 * address: 0x602F296C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F296C(int result, int a2)
{
  ModelWrapper *v2; // r4
  int v4; // r1
  void *model; // r6
  int v6; // r1
  float v7; // r2
  float v8; // r3
  float v9[2]; // [sp+0h] [bp-20h] BYREF
  float v10; // [sp+8h] [bp-18h]

  v2 = *(ModelWrapper **)result;
  if ( *(_DWORD *)result )
  {
    v4 = FIELD_S8(result, 16);
    model = FIELD_U32(v2, 0x0);
    if ( v4 >= 1 )
    {
      v6 = v4 - 1;
      FIELD_U8(result, 16) = v6;
      v7 = FIELD_F32(result, 4);
      v8 = FIELD_F32(result, 8);
      v10 = FIELD_F32(result, 12);
      v9[0] = (float)((float)v6 * 0.03125) * v7;
      v9[1] = (float)((float)v6 * 0.03125) * v8;
      v10 = (float)((float)v6 * 0.03125) * v10;
      (*(void (__fastcall **)(void *, float *))(*(_DWORD *)model + 68))(model, v9);
    }
    (*(void (__fastcall **)(void *, int))(*(_DWORD *)model + 60))(model, a2);
    ModelWrapper_updateAnims(v2);
    return ModelWrapper_updateModel(v2);
  }
  return result;
}
