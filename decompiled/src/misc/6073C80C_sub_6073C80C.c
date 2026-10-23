/* sub_6073C80C
 * address: 0x6073C80C   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6073C80C(int a1)
{
  StateMethodExecuter *result; // r0
  bool v3; // zf
  int *v4; // r1
  int v5; // [sp+0h] [bp-18h] BYREF
  int target; // [sp+4h] [bp-14h] BYREF

  target = 0;
  v5 = 59652323;
  result = (StateMethodExecuter *)moveValueTo((int *)(a1 + 156), &target, &v5);
  v3 = (FIELD_U8(a1, 6804) & 1) == 0;
  if ( (FIELD_U8(a1, 6804) & 1) != 0 )
  {
    FIELD_U32(a1, 120) = 0;
    v3 = result == 0;
  }
  if ( !v3 )
  {
    if ( (float)(sub_6073D8A8(a1) + -16.0) <= FIELD_F32(a1, 108) )
      v4 = &dword_60CBE150;
    else
      v4 = &dword_60CBE130;
    return sub_605D79D0(a1, (StateBase *)v4, 0);
  }
  return result;
}
