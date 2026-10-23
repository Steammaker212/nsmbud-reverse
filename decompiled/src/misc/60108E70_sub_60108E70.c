/* sub_60108E70
 * address: 0x60108E70   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60108E70(int a1)
{
  int result; // r0
  int v3; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7096));
  target = 0;
  v3 = 119304647;
  moveValueTo((int *)(a1 + 160), &target, &v3);
  FIELD_U32(a1, 156) += 429496729;
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    FIELD_U32(a1, 156) = 0;
    FIELD_U32(a1, 160) = 0;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C86524);
  }
  return result;
}
