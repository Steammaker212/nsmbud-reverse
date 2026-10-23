/* sub_603558A8
 * address: 0x603558A8   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603558A8(int *a1)
{
  unsigned int result; // r0
  int v3; // [sp+0h] [bp-10h] BYREF
  int target[3]; // [sp+4h] [bp-Ch] BYREF

  target[0] = 0;
  v3 = 119304647;
  moveValueTo(a1 + 39, target, &v3);
  result = a1[20];
  if ( result <= 1 )
  {
    target[0] = dword_60AF1F20[result ^ 1];
    v3 = 59652323;
    result = moveValueTo(a1 + 40, target, &v3);
    if ( result == 1 )
    {
      a1[20] = a1[20] == 0;
      return (*(int (__fastcall **)(int *, int *))(*a1 + 192))(a1, &dword_60C95138);
    }
  }
  return result;
}
