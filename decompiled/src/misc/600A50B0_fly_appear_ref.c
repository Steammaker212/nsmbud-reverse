/* fly_appear_ref
 * address: 0x600A50B0   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall fly_appear_ref(int a1)
{
  float v2; // s16
  int result; // r0

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
  FIELD_U32(a1, 8252) = 0;
  FIELD_F32(a1, 8248) = v2 / 24.0;
  sub_602375C4((EffectData *)(a1 + 8256), 104, (Vec3 *)(a1 + 108), 0, 0);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1668))(a1);
  result = FIELD_U8(a1, 19832);
  if ( !FIELD_U8(a1, 19832) )
  {
    sub_60026050();
    FIELD_U8(a1, 19832) = 1;
    return 1;
  }
  return result;
}
