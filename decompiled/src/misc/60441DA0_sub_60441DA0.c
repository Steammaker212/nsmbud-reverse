/* sub_60441DA0
 * address: 0x60441DA0   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60441DA0(_DWORD *a1, void *a2)
{
  sead_IDisposer *v4; // r6
  sead_IDisposer *v5; // r0
  int result; // r0
  int (**v7)(); // [sp+4h] [bp-2Ch] BYREF
  const char *v8; // [sp+8h] [bp-28h]

  v4 = (sead_IDisposer *)operator_new_8DE25C(0x44u, a2, 4);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "ReflectionRenderObjLayer";
  v5 = sead_IDisposer_ctor(v4);
  FIELD_U32(v5 + (1) * 16, 0x0) = (int)&sead__SafeStringBase__vtable;
  FIELD_U32(v4 + (1) * 16, 0x4) = (int)&byte_60ABC94D;
  FIELD_U32(v4, 0x0) = (int)off_60C5E9A4;
  FIELD_U32(v4 + (1) * 16, 0x8) = 0;
  FIELD_U32(v4 + (1) * 16, 0xC) = -100;
  FIELD_U32(v4 + (2) * 16, 0x0) = 1;
  FIELD_U32(v4 + (2) * 16, 0x8) = (int)a1;
  FIELD_U32(v4 + (2) * 16, 0xC) = (int)ReflectionRenderObjLayer_ref;
  FIELD_U32(v4 + (3) * 16, 0x0) = 0;
  FIELD_U32(v4 + (2) * 16, 0x4) = (int)off_60BFAD58;
  sead__SafeStringBase__operator_assign((int)&v5[1], (int)&v7);
  FIELD_U32(v4 + (1) * 16, 0x8) = 2;
  sub_609553AC(a1, v4);
  v7 = &sead__SafeStringBase__vtable;
  v8 = "ReflectionRenderObjLayer__freeReflectionTexture_";
  a1[119] = a1;
  a1[120] = sub_60442824;
  a1[121] = 0;
  a1[118] = off_60BFAD58;
  sead__SafeStringBase__operator_assign((int)(a1 + 113), (int)&v7);
  a1[115] = 2;
  a1[116] = 100;
  v7 = &sead__SafeStringBase__vtable;
  v8 = "ReflectionRenderObjLayer";
  nullsub_123(a1 + 428, 1, &v7, 0);
  result = a1[404];
  if ( !result )
  {
    result = operator_new_8DE25C(0xF0u, a2, 16);
    a1[404] = result;
  }
  return result;
}
