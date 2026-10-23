/* Actor_surotoItem_build
 * address: 0x6073FDCC   size: 332   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_surotoItem_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2A20u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60C22E74;
  sub_602A40A0((_DWORD *)(v2 + 6304), FIELD_U32(v2, 8));
  FIELD_U8(v2, 6340) = 0;
  FIELD_U8(v2, 6368) = 0;
  FIELD_U32(v2, 6372) = 0;
  FIELD_U32(v2, 6360) = 0;
  FIELD_U32(v2, 6356) = 0;
  FIELD_U32(v2, 6352) = 0;
  FIELD_U32(v2, 6348) = 0;
  FIELD_U32(v2, 6344) = 0;
  FIELD_U32(v2, 6376) = off_60C2313C;
  *(_DWORD *)sub_60479414(v2 + 6376, v2 + 9944, 1) = off_60C2313C;
  agl_TextureData_ref(v2 + 9944);
  FIELD_U32(v2, 10216) = 0;
  FIELD_U32(v2, 10220) = 0;
  FIELD_U32(v2, 10224) = 0;
  sub_60959B54(v2 + 10232);
  FIELD_U32(v2, 10700) = v2 + 10708;
  FIELD_U32(v2, 10696) = &BufferedSafeStringBase_char_vtable_probably;
  FIELD_U32(v2, 10704) = 64;
  sead__BufferedSafeStringBase__assureTerminationImpl_const(v2 + 10696);
  **(_BYTE **)(v2 + 10700) = 0;
  FIELD_U32(v2, 10696) = &off_60BD4BF0;
  FIELD_U32(v2, 10776) = 0;
  return v2;
}
