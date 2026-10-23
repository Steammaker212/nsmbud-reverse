/* sub_6062943C
 * address: 0x6062943C   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6062943C(int a1)
{
  void *Resource; // r0
  int Model2; // r0
  int result; // r0
  RevealMaskRelated *v5; // r0
  RevealMaskRelated *v6; // r0

  Resource = (void *)LoadResource(ResourceMgrRelated_instance, dword_60CB3D90);
  Model2 = Resource_getModel2(Resource, (sead__SafeString *)&unk_60CB3D98, 0, 0, 0, 0, 0, 0, 0);
  FIELD_U32(a1, 6144) = Model2;
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  (*(void (__fastcall **)(int, int))(*(_DWORD *)Model2 + 68))(Model2, a1 + 144);
  result = FIELD_U8(a1, 6152);
  if ( FIELD_U8(a1, 6152) )
  {
    v5 = (RevealMaskRelated *)operator_new(0x28u);
    v6 = LightMask__ctor(v5);
    FIELD_U32(a1, 6148) = v6;
    return (*(int (__fastcall **)(RevealMaskRelated *, _DWORD, int))FIELD_U32(v6, 0x0))(v6, 0, 2);
  }
  return result;
}
