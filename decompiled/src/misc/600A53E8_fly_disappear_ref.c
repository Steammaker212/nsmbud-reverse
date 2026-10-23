/* fly_disappear_ref
 * address: 0x600A53E8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_disappear_ref(int a1)
{
  float v2; // s16
  int v3; // r1
  unsigned int v4; // r0

  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 716))(a1)
    || (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 720))(a1) == 1 )
  {
    v2 = 1.0;
  }
  else
  {
    v2 = 1.2;
  }
  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 8252) = 1065353216;
  v3 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
  v4 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v4 )
    v3 += 4 * v4;
  FIELD_F32(a1, 8248) = v2 / *(float *)(*(_DWORD *)v3 + 8);
  sub_602375C4((EffectData *)(a1 + 8256), 1057, (Vec3 *)(a1 + 108), 0, 0);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1672))(a1);
}
