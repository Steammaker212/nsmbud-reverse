/* block_light_ref
 * address: 0x6067757C   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall block_light_ref(int a1)
{
  void *Resource; // r0
  int Model2; // r0
  RevealMaskRelated *v4; // r0
  RevealMaskRelated *v5; // r0
  int result; // r0
  RevealMaskRelated *v7; // r0
  RevealMaskRelated *v8; // r0
  sead__SafeString a2; // [sp+18h] [bp-20h] BYREF
  _DWORD v10[6]; // [sp+20h] [bp-18h] BYREF

  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "block_light";
  Resource = (void *)LoadResource(ResourceMgrRelated_instance, v10);
  a2.vtable = &sead__SafeStringBase__vtable;
  a2.cstr = "block_light";
  Model2 = Resource_getModel2(Resource, &a2, 0, 0, 0, 0, 0, 0, 0);
  FIELD_U32(a1, 6152) = Model2;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)Model2 + 68))(Model2, a1 + 144);
  v4 = (RevealMaskRelated *)operator_new(0x28u);
  v5 = LightMask__ctor(v4);
  FIELD_U32(a1, 6816) = v5;
  (*(void (__fastcall **)(RevealMaskRelated *, _DWORD, int))FIELD_U32(v5, 0x0))(v5, 0, 2);
  result = FIELD_U32(AreaTask_intance, 1828);
  if ( result == 1 )
  {
    FIELD_U8(a1, 6824) = 1;
    v7 = (RevealMaskRelated *)operator_new(0x28u);
    v8 = LightMask__ctor(v7);
    FIELD_U32(a1, 6820) = v8;
    return (*(int (__fastcall **)(RevealMaskRelated *, _DWORD, int))FIELD_U32(v8, 0x0))(v8, 0, 2);
  }
  return result;
}
