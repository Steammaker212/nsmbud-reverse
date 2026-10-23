/* G_Return_00_ref
 * address: 0x6049420C   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall G_Return_00_ref(int a1)
{
  _DWORD *v1; // r4
  unsigned int v2; // r5
  int v3; // r0
  _DWORD v5[2]; // [sp+8h] [bp-20h] BYREF
  int (**v6)(); // [sp+10h] [bp-18h] BYREF
  int v7; // [sp+14h] [bp-14h]

  v1 = (_DWORD *)(a1 + 36);
  v6 = &sead__SafeStringBase__vtable;
  v7 = sub_604962DC(1);
  v5[0] = &sead__SafeStringBase__vtable;
  v5[1] = "G_Return_00";
  v2 = sub_604746E4((int)v1, &v6, v5);
  v3 = sub_604962DC(1);
  v6 = &sead__SafeStringBase__vtable;
  v7 = v3;
  return sub_60474420(v1, 1u, &v6, v2, 0);
}
