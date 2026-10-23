/* sub_60237560
 * address: 0x60237560   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60237560(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5

  EffectData_init((EffectData *)(a1 + 16));
  v2 = (_DWORD *)(a1 + 80);
  if ( FIELD_U32(a1, 84) || *v2 )
  {
    v3 = FIELD_U32(a1, 92);
    if ( v3 )
    {
      FIELD_U32(a1, 92) = 0;
      sead__ListNode__erase(v2);
      --FIELD_U32(v3, 8);
    }
  }
  FIELD_U32(a1, 96) = -1;
  FIELD_U8(a1, 100) = 0;
  return 0;
}
