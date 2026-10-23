/* sub_60530F3C
 * address: 0x60530F3C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60530F3C(int a1)
{
  unsigned int v2; // r0

  v2 = FIELD_U32(a1, 48);
  if ( v2 >= 4 )
    v2 = 0;
  if ( !*(_DWORD *)(*(_DWORD *)(dword_60C99E60 + 4 * v2 + 4172) + 3044) )
    EffectData_create(258, (Vec3 *)(a1 + 64), 0, 0);
  FIELD_U8(a1, 36) = 1;
  JUMPOUT(0x6053138C);
}
