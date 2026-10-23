/* sub_603BDBA4
 * address: 0x603BDBA4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_603BDBA4(int a1)
{
  int v1; // r1
  int v2; // r2
  int *v3; // r0
  int target; // [sp+4h] [bp-Ch] BYREF

  v1 = FIELD_U32(a1, 80);
  v2 = 786432000;
  v3 = (int *)(a1 + 160);
  if ( v1 == 1 )
    v2 = -786432000;
  target = v2;
  return moveValueTo(v3, &target, &dword_60C98440);
}
