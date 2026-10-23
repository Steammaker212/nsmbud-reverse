/* sub_60292D1C
 * address: 0x60292D1C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60292D1C(int a1)
{
  int v1; // r2
  unsigned int v2; // r1
  int v4; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  v1 = 0;
  v2 = FIELD_U32(a1, 7512);
  if ( v2 <= 3 )
    v1 = dword_60AF25B4[v2];
  target = v1;
  v4 = 12582912;
  return moveValueTo((int *)(a1 + 6700), &target, &v4);
}
