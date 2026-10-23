/* sub_607313FC
 * address: 0x607313FC   size: 564   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607313FC(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r1
  int v4; // r0
  ActorBuildInfo v6; // [sp+0h] [bp-40h] BYREF

  ++FIELD_U32(dword_60C99DE4, 16);
  v2 = FIELD_U32(a1, 20);
  v3 = v2 >> 28;
  v4 = v2 & 0xF;
  FIELD_U8(a1, 80) = v3;
  FIELD_U8(a1, 100) = v4;
  switch ( v4 )
  {
    case 0:
      sub_6077A260(dword_60CBFA90);
      FIELD_U8(a1, 101) = 0;
      memset(&v6.settings2, 0, 40);
      v6.settings1 = (FIELD_U32(a1, 20) >> 20) & 0xF0 | FIELD_U8(a1, 80);
      v6.parentId = FIELD_U32(a1, 8);
      v6.profile = Profile__get(0x1Au);
      memset(&v6.position, 0, sizeof(v6.position));
      FIELD_U32(a1, 88) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v6, 0) + 2);
      FIELD_U32(PlayerMgr_instance, 140) = -1;
      break;
    case 2:
      sub_6077A260(dword_60CBFA90);
      memset(&v6.settings2, 0, 40);
      v6.settings1 = FIELD_U8(a1, 80);
      v6.parentId = FIELD_U32(a1, 8);
      v6.profile = Profile__get(0x1Bu);
      memset(&v6.position, 0, sizeof(v6.position));
      FIELD_U32(a1, 92) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v6, 0) + 2);
      goto LABEL_5;
    case 3:
      sub_6077A260(dword_60CBFA90);
      memset(&v6, 0, sizeof(v6));
      v6.parentId = FIELD_U32(a1, 8);
      v6.profile = Profile__get(0x1Cu);
      memset(&v6.position, 0, sizeof(v6.position));
      FIELD_U32(a1, 96) = *((_DWORD *)ActorMgr__create((void *)ActorMgr__instance, &v6, 0) + 2);
LABEL_5:
      FIELD_U32(PlayerMgr_instance, 140) = -1;
      FIELD_U8(a1, 101) = 0;
      break;
    case 9:
      FIELD_U8(a1, 101) = 0;
      break;
    default:
      return 1;
  }
  return 1;
}
