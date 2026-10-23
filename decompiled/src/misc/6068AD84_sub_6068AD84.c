/* sub_6068AD84
 * address: 0x6068AD84   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6068AD84(int a1, int a2)
{
  int v3; // r5
  int result; // r0
  _DWORD v5[2]; // [sp+4h] [bp-24h] BYREF
  _DWORD v6[2]; // [sp+Ch] [bp-1Ch] BYREF
  int v7; // [sp+14h] [bp-14h] BYREF

  v3 = a1 + 296;
  v7 = 0;
  v6[0] = &sead__SafeStringBase__vtable;
  v5[0] = &sead__SafeStringBase__vtable;
  v6[1] = "Mask";
  v5[1] = LightMask_names[a2];
  output_bfres_ref_448C14(v6, v5, a1 + 296, &v7, 0);
  result = FIELD_U32(a1, 16);
  FIELD_U32(result, 52) = v3;
  return result;
}
