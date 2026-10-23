/* Actor_BoomBoom_W5fort_build
 * address: 0x60059B60   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_BoomBoom_W5fort_build(int a1)
{
  int v2; // r4

  v2 = operator_new(0x2398u);
  ((void (__fastcall *)(int, int))loc_60057870)(v2, a1);
  *(_DWORD *)v2 = &off_60BC50F8;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8744));
  FIELD_U32(v2, 9100) = 0;
  FIELD_U32(v2, 9104) = -1;
  EffectData_ctor((EffectData *)(v2 + 9048));
  (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 1284))(v2);
  return v2;
}
