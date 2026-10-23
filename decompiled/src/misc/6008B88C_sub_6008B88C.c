/* sub_6008B88C
 * address: 0x6008B88C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6008B88C(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  int *v4; // r7
  _DWORD *v5; // r5
  int result; // r0
  ActorBuildInfo v7; // [sp+0h] [bp-48h] BYREF

  memset(&v7, 0, sizeof(v7));
  v7.parentId = FIELD_U32(a1, 8);
  v7.field_20 = 0;
  v7.position = *(Vec3 *)(a1 + 108);
  v7.profile = Profile__get(0x2D8u);
  v2 = ActorMgr__create((void *)ActorMgr__instance, &v7, 0);
  FIELD_U32(a1, 7672) = v2[2];
  (*(void (__fastcall **)(_DWORD *, int *))(*v2 + 192))(v2, &dword_60C810B8);
  v4 = (int *)(a1 + 7244);
  v3 = FIELD_U32(a1, 7244);
  if ( v3 )
    v2[712] = v3;
  memset(&v7, 0, sizeof(v7));
  v7.parentId = FIELD_U32(a1, 8);
  v7.field_20 = 0;
  v7.position = *(Vec3 *)(a1 + 108);
  v7.profile = Profile__get(0x2D8u);
  v5 = ActorMgr__create((void *)ActorMgr__instance, &v7, 0);
  FIELD_U32(a1, 7676) = v5[2];
  (*(void (__fastcall **)(_DWORD *, int *))(*v5 + 192))(v5, &dword_60C810B8);
  result = *v4;
  if ( *v4 )
    v5[712] = result;
  return result;
}
