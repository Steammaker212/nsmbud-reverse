/* sub_607929C0
 * address: 0x607929C0   size: 192   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607929C0(int a1, _DWORD *a2, _DWORD *a3)
{
  sead_IDisposer_ctor((sead_IDisposer *)a1);
  *(_DWORD *)a1 = &off_60C24B9C;
  FIELD_U32(a1, 16) = LoadResource(ResourceMgrRelated_instance, a2);
  FIELD_U32(a1, 20) = LoadResource(ResourceMgrRelated_instance, a3);
  FIELD_U32(a1, 24) = 0;
  FIELD_U32(a1, 28) = -1;
  FIELD_U32(a1, 32) = -1;
  FIELD_U32(a1, 36) = -1;
  FIELD_U32(a1, 40) = 0;
  memset((void *)(a1 + 140), 0, 97);
  FIELD_U64(a1, 44) = 1065353216;
  FIELD_U64(a1, 52) = 0;
  FIELD_U64(a1, 60) = 0x3F80000000000000LL;
  FIELD_U64(a1, 68) = 0;
  FIELD_U64(a1, 76) = 0;
  FIELD_U64(a1, 84) = 1065353216;
  FIELD_U64(a1, 92) = 1065353216;
  FIELD_U64(a1, 100) = 0;
  FIELD_U64(a1, 108) = 0x3F80000000000000LL;
  FIELD_U64(a1, 116) = 0;
  FIELD_U64(a1, 124) = 0;
  FIELD_U64(a1, 132) = 1065353216;
  return a1;
}
