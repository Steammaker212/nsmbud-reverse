/* sub_605CC61C
 * address: 0x605CC61C   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CC61C(int a1)
{
  char v1; // r12
  int result; // r0
  int v4; // [sp+0h] [bp-10h] BYREF
  int target; // [sp+4h] [bp-Ch] BYREF

  if ( (FIELD_U8(a1, 6124) & 0x20) != 0 )
  {
    if ( ((unsigned int)&dword_60CB0F60 & ~(1616692852 << v1) & 1) == 0 )
    {
      if ( _cxa_guard_acquire(&dword_60CB0F60) )
      {
        dword_60CB0F5C = (unsigned __int8)byte_60B057DC[FIELD_U32(a1, 80)] << 27;
        _cxa_guard_release(&dword_60CB0F60);
      }
    }
    result = FIELD_U32(a1, 160) + dword_60CB0F5C;
    FIELD_U32(a1, 160) = result;
  }
  else
  {
    target = 0;
    v4 = 0x8000000;
    return moveValueTo((int *)(a1 + 160), &target, &v4);
  }
  return result;
}
