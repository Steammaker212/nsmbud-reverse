/* Actor_Wendy_airship_build
 * address: 0x600C0A5C   size: 280   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Wendy_airship_build(ActorBuildInfo *a1)
{
  int v2; // r4
  int v3; // r1

  v2 = operator_new(0x18B8u);
  sub_600BB738((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BCA300;
  FIELD_U32(v2, 6100) = 1077936128;
  FIELD_U32(v2, 6104) = dword_60C83970;
  v3 = dword_60C83978;
  FIELD_U32(v2, 6108) = dword_60C83974;
  FIELD_U32(v2, 6112) = 1142292480;
  FIELD_U32(v2, 6116) = 1153138688;
  FIELD_U32(v2, 6120) = 1161527296;
  FIELD_U32(v2, 6124) = -1032847360;
  FIELD_U32(v2, 6128) = 1114636288;
  FIELD_U32(v2, 6132) = 0;
  FIELD_U32(v2, 6136) = 1;
  FIELD_U32(v2, 6140) = 500;
  FIELD_U32(v2, 6152) = -1157426577;
  FIELD_U32(v2, 6156) = 990057071;
  FIELD_U32(v2, 6180) = 1142292480;
  FIELD_U32(v2, 6184) = v3;
  sub_600BB804(v2);
  return v2;
}
