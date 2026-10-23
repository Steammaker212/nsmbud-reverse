/* sub_606101D4
 * address: 0x606101D4   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606101D4(int a1, ActorBuildInfo *a2)
{
  unsigned int v3; // r0
  int v4; // r2
  int v5; // r0
  int v6; // r1

  StageActor__ctor((StageActor *)a1, a2);
  *(_DWORD *)a1 = off_60C0FDD8;
  FIELD_U32(a1, 644) = 0;
  CircularCollider_ctor((ColliderBase *)(a1 + 648));
  v3 = FIELD_U32(a1, 20);
  v4 = 0x800000;
  FIELD_U32(a1, 1048) = v3 & 1;
  v5 = (v3 >> 8) & 0xF;
  FIELD_U32(a1, 1052) = v5;
  v6 = FIELD_U16(a1, 26) & 7;
  if ( v6 != 7 )
    v4 = dword_60B064E0[v6];
  FIELD_U32(a1, 1056) = v4;
  FIELD_U32(a1, 1060) = dword_60B064C4[v5];
  FIELD_U32(a1, 1064) = dword_60B064D0[v5];
  FIELD_U8(a1, 1068) = 0;
  FIELD_U32(a1, 1080) = 0;
  FIELD_U32(a1, 1076) = 0;
  FIELD_U32(a1, 1072) = 0;
  FIELD_U32(a1, 1084) = off_60C0FE64;
  FIELD_U32(a1, 1104) = 0;
  FIELD_U32(a1, 1100) = 0;
  FIELD_U32(a1, 1096) = 0;
  FIELD_U32(a1, 1092) = 0;
  FIELD_U32(a1, 1088) = 0;
  memset(a1 + 1112, 0, 5312);
  sub_600A4300(a1 + 1120);
  FIELD_U32(a1, 1780) = 0;
  sub_600A4300(a1 + 1784);
  FIELD_U32(a1, 2444) = 0;
  sub_600A4300(a1 + 2448);
  FIELD_U32(a1, 3108) = 0;
  sub_600A4300(a1 + 3112);
  FIELD_U32(a1, 3772) = 0;
  sub_600A4300(a1 + 3776);
  FIELD_U32(a1, 4436) = 0;
  sub_600A4300(a1 + 4440);
  FIELD_U32(a1, 5100) = 0;
  sub_600A4300(a1 + 5104);
  FIELD_U32(a1, 5764) = 0;
  sub_600A4300(a1 + 5768);
  return a1;
}
