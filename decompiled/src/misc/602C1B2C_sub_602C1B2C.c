/* sub_602C1B2C
 * address: 0x602C1B2C   size: 172   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C1B2C(int a1, int a2, int a3, float a4, float a5)
{
  int v7; // r4
  int v8; // r1
  unsigned int v9; // r0
  int *v10; // r1
  unsigned int v11; // r0
  int result; // r0
  _DWORD v13[8]; // [sp+0h] [bp-20h] BYREF

  FIELD_U8(a1, 6483) = a2;
  v13[0] = &sead__SafeStringBase__vtable;
  v13[1] = dword_60C911F4[2 * a2 + 1];
  v7 = a1 + 6304;
  sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)v13);
  v8 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 8) > v9 )
    v8 += 4 * v9;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), a3);
  v10 = *(int **)(*(_DWORD *)v7 + 12);
  v11 = *(_DWORD *)(*(_DWORD *)v7 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v7 + 8) > v11 )
    v10 += v11;
  result = *v10;
  *(float *)(*v10 + 24) = a5;
  return result;
}
