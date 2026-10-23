/* sub_603543E4
 * address: 0x603543E4   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603543E4(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  v2 = FIELD_U32(a1, 2872);
  if ( ((v2 & 0x440000) == 0 || (v2 & 0x10000000) != 0) && ((v2 & 0x880000) == 0 || (v2 & 0x20000000) != 0) )
  {
    FIELD_U32(a1, 80) = FIELD_U32(a1, 80) == 0;
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C950B8);
  }
  else
  {
    target = dword_60AF26E4[2 * FIELD_U8(a1, 6432) + FIELD_U32(a1, 80)];
    v4 = 143165576;
    moveValueTo((int *)(a1 + 160), &target, &v4);
    result = FIELD_U32(a1, 6420);
    if ( !result )
    {
      FIELD_U32(a1, 80) = FIELD_U32(a1, 80) == 0;
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C950B8);
    }
  }
  return result;
}
