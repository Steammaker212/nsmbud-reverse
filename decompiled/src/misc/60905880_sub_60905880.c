/* sub_60905880
 * address: 0x60905880   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60905880(int a1, int a2)
{
  int v4; // r5
  _DWORD v6[2]; // [sp+4h] [bp-1Ch] BYREF
  unsigned __int8 v7; // [sp+Fh] [bp-11h] BYREF

  sub_609080F8(&unk_60CCF41C);
  v7 = 0;
  sub_60905918(a1, a2);
  (*(void (__fastcall **)(int *))(dword_60CCF010 + 12))(&dword_60CCF010);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = dword_60CCF014;
  sub_609004A0(&v7, v6, -1);
  v4 = v7;
  sub_60908100(&unk_60CCF41C);
  return v4;
}
