/* fly_appear_ref_2
 * address: 0x600A6238   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_appear_ref_2(int a1)
{
  int v2; // r5
  int v3; // r1
  unsigned int v4; // r0

  v2 = a1 + 7096;
  sub_60421AD4(FIELD_U32(a1, 7096));
  FIELD_U32(a1, 8252) = 0;
  v3 = *(_DWORD *)(*(_DWORD *)v2 + 12);
  v4 = *(_DWORD *)(*(_DWORD *)v2 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v4 )
    v3 += 4 * v4;
  FIELD_F32(a1, 8248) = 1.2 / *(float *)(*(_DWORD *)v3 + 8);
  sub_602375C4((EffectData *)(a1 + 8256), 104, (Vec3 *)(a1 + 108), 0, 0);
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1668))(a1);
}
