/* sub_600562E4
 * address: 0x600562E4   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600562E4(int a1)
{
  int v2; // r5
  int result; // r0
  unsigned int v4; // r5

  BoomBoomW1__vf4D0((BoomBoomW1 *)a1);
  v2 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6096) + 8))(FIELD_U32(a1, 6096));
  result = (*(int (**)(void))(dword_60C804CC + 8))();
  if ( v2 == result )
  {
    v4 = FIELD_U32(a1, 8396);
    result = ((sead__Random__getU32((void *)(dword_60C9CF0C + 1340)) * (unsigned __int64)v4) >> 32)
           + FIELD_U32(a1, 8392);
    FIELD_U16(a1, 6278) = result;
  }
  return result;
}
