/* sub_600A61B8
 * address: 0x600A61B8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_600A61B8(int a1)
{
  unsigned int result; // r0
  _WORD *v3; // r5

  CollisionMgr_process((_BYTE *)(a1 + 648));
  v3 = (_WORD *)(a1 + 6276);
  result = FIELD_U16(a1, 6276);
  if ( result <= 0x14 )
  {
    EffectWrapper_update((EffectWrapper *)(a1 + 8320), 105, (Vec3 *)(a1 + 108), 0, 0);
    result = (unsigned __int16)*v3;
    if ( !*v3 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C82D18);
  }
  return result;
}
