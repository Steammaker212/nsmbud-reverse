/* sub_6036572C
 * address: 0x6036572C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6036572C(int a1)
{
  _BYTE *v1; // r4
  _BOOL4 result; // r0
  int v3; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  v1 = (_BYTE *)(a1 + 7512);
  if ( !FIELD_U8(a1, 7512) || FIELD_U32(a1, 6352) != 2 )
    return KoopaTroopa_vf210(a1);
  target = dword_60C95A10 * -byte_60AFE3F4[FIELD_U32(a1, 80)];
  v3 = 0x10000000;
  result = moveValueTo((int *)(a1 + 6864), &target, &v3);
  if ( result )
  {
    result = 0;
    *v1 = 0;
  }
  return result;
}
