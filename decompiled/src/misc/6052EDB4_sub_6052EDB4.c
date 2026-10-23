/* sub_6052EDB4
 * address: 0x6052EDB4   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6052EDB4(int a1)
{
  char v2; // r12
  int result; // r0
  _DWORD v4[2]; // [sp+4h] [bp-1Ch] BYREF
  int v5; // [sp+Ch] [bp-14h] BYREF

  ResultMiniGame_bflyt_ref();
  if ( ((unsigned int)dword_60CAAA74 & ~(1616047576 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60CAAA74) )
  {
    dword_60CAAA7C = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA80 = (int)"N_DelItem_00";
    dword_60CAAA84 = (int)&sead__SafeStringBase__vtable;
    dword_60CAAA88 = (int)"N_ItemNum_00";
    sub_60000288();
    _cxa_guard_release(dword_60CAAA74);
  }
  v5 = 2;
  sub_6047518C(a1 + 40, a1 + 3652, &dword_60CAAA7C, &v5);
  sub_6052F098(a1);
  sub_6052F1C4(a1);
  sub_6052F434(a1);
  sub_6045BF58(a1 + 10984, 0);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = "Pa_KeyAssign_00";
  sub_6050A4EC(a1 + 3760, a1 + 40, v4, 1, 1);
  FIELD_U32(a1, 3800) = 1;
  result = FIELD_U32(a1, 3796) | 1;
  FIELD_U32(a1, 3796) = result;
  return result;
}
