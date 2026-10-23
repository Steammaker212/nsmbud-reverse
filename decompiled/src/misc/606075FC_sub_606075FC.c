/* sub_606075FC
 * address: 0x606075FC   size: 880   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606075FC(int a1, ActorBuildInfo *a2)
{
  int v3; // r5
  _DWORD *v4; // r7
  int v5; // r6
  int v6; // r0

  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C0F650;
  FIELD_U32(a1, 6120) = 0;
  FIELD_U32(a1, 6112) = 0;
  FIELD_U32(a1, 6116) = 0;
  FIELD_U32(a1, 6132) = 0;
  FIELD_U32(a1, 6128) = 0;
  FIELD_U32(a1, 6124) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 6136));
  FIELD_U32(a1, 6136) = off_60BC30D8;
  FIELD_U32(a1, 6808) = 0;
  FIELD_U32(a1, 6812) = 0;
  FIELD_U32(a1, 6816) = 0;
  FIELD_U32(a1, 6828) = 0;
  FIELD_U8(a1, 6804) = 0;
  FIELD_U32(a1, 6800) = 0;
  FIELD_U32(a1, 6796) = 0;
  FIELD_U32(a1, 6792) = 0;
  FIELD_U32(a1, 6824) = a1 + 6820;
  FIELD_U32(a1, 6820) = a1 + 6820;
  FIELD_U32(a1, 6836) = 0;
  FIELD_U32(a1, 6832) = a1 + 6844;
  FIELD_U32(a1, 6844) = a1 + 6856;
  FIELD_U32(a1, 6856) = a1 + 6868;
  FIELD_U32(a1, 6868) = a1 + 6880;
  FIELD_U32(a1, 6880) = a1 + 6892;
  FIELD_U32(a1, 6892) = a1 + 6904;
  FIELD_U32(a1, 6904) = a1 + 6916;
  FIELD_U32(a1, 6916) = a1 + 6928;
  FIELD_U32(a1, 6928) = a1 + 6940;
  FIELD_U32(a1, 6940) = a1 + 6952;
  FIELD_U32(a1, 6952) = a1 + 6964;
  FIELD_U32(a1, 6964) = a1 + 6976;
  FIELD_U32(a1, 6976) = a1 + 6988;
  FIELD_U32(a1, 6988) = a1 + 7000;
  FIELD_U32(a1, 7000) = a1 + 7012;
  FIELD_U32(a1, 7012) = a1 + 7024;
  FIELD_U32(a1, 7024) = a1 + 7036;
  FIELD_U32(a1, 7036) = a1 + 7048;
  FIELD_U32(a1, 7048) = a1 + 7060;
  FIELD_U32(a1, 7060) = a1 + 7072;
  FIELD_U32(a1, 7072) = a1 + 7084;
  FIELD_U32(a1, 7084) = a1 + 7096;
  FIELD_U32(a1, 7096) = a1 + 7108;
  FIELD_U32(a1, 7108) = a1 + 7120;
  FIELD_U32(a1, 7120) = a1 + 7132;
  FIELD_U32(a1, 7132) = a1 + 7144;
  FIELD_U32(a1, 7144) = a1 + 7156;
  FIELD_U32(a1, 7156) = a1 + 7168;
  FIELD_U32(a1, 7168) = a1 + 7180;
  FIELD_U32(a1, 7180) = a1 + 7192;
  FIELD_U32(a1, 7192) = a1 + 7204;
  FIELD_U32(a1, 7204) = a1 + 7216;
  FIELD_U32(a1, 7216) = 0;
  FIELD_U32(a1, 6836) = a1 + 6844;
  FIELD_U32(a1, 6840) = 32;
  FIELD_U32(a1, 7228) = 0;
  FIELD_U32(a1, 7244) = 0;
  FIELD_U16(a1, 7264) = 0;
  FIELD_U32(a1, 7248) = 0;
  FIELD_U32(a1, 7252) = 0;
  FIELD_U32(a1, 7256) = 0;
  FIELD_U32(a1, 7260) = 0;
  sub_601531B4((CollisionMgr *)(a1 + 7272));
  ActiveCollider_ctor((ActiveCollider *)(a1 + 12624));
  FIELD_U32(a1, 12928) = off_60C0F744;
  FIELD_U32(a1, 6100) = 0;
  FIELD_U32(a1, 6104) = 0;
  FIELD_U32(a1, 6108) = 0;
  FIELD_U32(a1, 6124) = 0;
  FIELD_U32(a1, 6128) = 0;
  FIELD_U32(a1, 6132) = 0;
  FIELD_U32(a1, 7232) = 3;
  FIELD_U32(a1, 7236) = 3;
  FIELD_U32(a1, 7240) = 3;
  FIELD_U32(a1, 7244) = 0;
  FIELD_U32(a1, 7248) = 0;
  FIELD_U32(a1, 7252) = 0;
  memset((void *)(a1 + 12932), 0, 36);
  v3 = FIELD_U32(a1, 6824);
  if ( v3 != a1 + 6820 )
  {
    v4 = (_DWORD *)(a1 + 6832);
    do
    {
      v5 = FIELD_U32(v3, 4);
      sead__ListNode__erase(v3);
      --FIELD_U32(a1, 6828);
      *(_DWORD *)(v3 - 4) = *v4;
      v6 = v3 - 4;
      v3 = v5;
      *v4 = v6;
    }
    while ( v5 != a1 + 6820 );
  }
  return a1;
}
