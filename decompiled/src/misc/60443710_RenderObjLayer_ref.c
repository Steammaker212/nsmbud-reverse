/* RenderObjLayer_ref
 * address: 0x60443710   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RenderObjLayer_ref(int a1, void *a2)
{
  sead_IDisposer *v3; // r5
  sead_IDisposer *v4; // r0
  _DWORD v6[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (sead_IDisposer *)operator_new_8DE25C(0x44u, a2, 4);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "RenderObjLayer";
  v4 = sead_IDisposer_ctor(v3);
  FIELD_U32(v4 + (1) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v3 + (1) * 16, 0x4) = (int)&byte_60ABC94D;
  FIELD_U32(v3, 0x0) = (int)off_60C5E9A4;
  FIELD_U32(v3 + (1) * 16, 0x8) = 0;
  FIELD_U32(v3 + (1) * 16, 0xC) = -100;
  FIELD_U32(v3 + (2) * 16, 0x0) = 1;
  FIELD_U32(v3 + (2) * 16, 0x8) = a1;
  FIELD_U32(v3 + (2) * 16, 0xC) = (int)sub_604437E4;
  FIELD_U32(v3 + (3) * 16, 0x0) = 0;
  FIELD_U32(v3 + (2) * 16, 0x4) = (int)off_60BFAE6C;
  sead__SafeStringBase__operator_assign((int)&v4[1], (int)v6);
  FIELD_U32(v3 + (1) * 16, 0x8) = 1;
  return sub_609553AC(a1, v3);
}
