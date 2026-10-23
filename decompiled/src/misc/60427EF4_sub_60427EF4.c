/* sub_60427EF4
 * address: 0x60427EF4   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60427EF4(int a1, int a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r0
  int (**v7)(); // [sp+8h] [bp-18h] BYREF
  const char *v8; // [sp+Ch] [bp-14h]

  v7 = &sead__SafeStringBase__vtable;
  v8 = "lm_01mo";
  v3 = a1 + 6896;
  v4 = sub_6095C088(a1 + 6896, &v7);
  if ( v4 >= 0 )
  {
    v7 = &sead__SafeStringBase__vtable;
    v8 = "lmDifCob";
    sub_60427D38(v4, a2, &v7, v4, 0);
  }
  v7 = &sead__SafeStringBase__vtable;
  v8 = "lm_02mo";
  v5 = sub_6095C088(v3, &v7);
  if ( v5 >= 0 )
  {
    v7 = &sead__SafeStringBase__vtable;
    v8 = "lmSpcCob";
    sub_60427D38(v5, a2, &v7, v5, 1);
  }
  return sub_60436664(a2);
}
