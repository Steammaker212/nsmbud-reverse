/* sub_604B7320
 * address: 0x604B7320   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604B7320(_DWORD *a1)
{
  int v2; // r0
  _DWORD v4[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v5[6]; // [sp+8h] [bp-18h] BYREF

  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = off_60C5CB34;
  v2 = a1[532];
  if ( v2 )
  {
    v4[0] = &sead__SafeStringBase__vtable;
    v4[1] = sub_60473DA4(v2 + 4);
    sead__SafeStringBase__operator_assign((int)v5, (int)v4);
  }
  a1[520] = sub_60502E60(a1, &dword_60CA2500);
  a1[521] = sub_60502E60(a1, &unk_60CA2508);
  a1[522] = sub_60502E60(a1, &dword_60CA2510);
  a1[523] = sub_60502E60(a1, &dword_60CA2518);
  a1[524] = sub_60502E60(a1, &dword_60CA2520);
  a1[525] = sub_60502E60(a1, &dword_60CA2528);
  a1[526] = sub_60502E60(a1, &dword_60CA2530);
  a1[527] = sub_60502E60(a1, &dword_60CA2538);
  a1[528] = sub_60502E60(a1, &dword_60CA2540);
  a1[529] = sub_60502E60(a1, &dword_60CA2548);
  a1[530] = sub_60502E60(a1, &dword_60CA2550);
  a1[531] = sub_60502E60(a1, &dword_60CA2558);
  sub_60502210(a1, a1 + 520, 17);
  sead__SafeStringBase__operator_assign((int)(a1 + 253), (int)v5);
  sub_6050292C(a1, 15);
  sub_60502994(a1, 15);
  sub_60502960(a1, 15);
  sub_605029C8(a1, 15);
  return 1;
}
