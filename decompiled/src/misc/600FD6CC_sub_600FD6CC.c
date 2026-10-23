/* sub_600FD6CC
 * address: 0x600FD6CC   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FD6CC(int a1)
{
  int result; // r0

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U16(a1, 6278);
  if ( !FIELD_U16(a1, 6278) )
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85E54);
  return result;
}
