/* sub_60666EB0
 * address: 0x60666EB0   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60666EB0(int a1)
{
  float v2; // r0
  float v3; // r1
  unsigned int v4; // r6
  Vec2 position; // [sp+8h] [bp-20h] BYREF

  v2 = FIELD_F32(a1, 8208);
  FIELD_F32(a1, 108) = v2;
  v3 = FIELD_F32(a1, 8212);
  FIELD_F32(a1, 112) = v3;
  FIELD_U32(a1, 116) = FIELD_U32(a1, 8216);
  FIELD_U32(a1, 8236) = -268435456;
  FIELD_U32(a1, 8240) = 0;
  if ( FIELD_U8(a1, 8244) == 1 )
  {
    position.x = v2;
    position.y = v3;
    LineFollower_init((LineFollower *)(a1 + 8064), &position, 0, 1, 0);
    ((void (__fastcall *)(int, _DWORD))LineFollower_start)(a1 + 8064, 0);
  }
  v4 = a1 + 6104;
  do
  {
    ColliderMgr_add(ColliderMgr_instance, (ColliderBase *)(v4 + 16));
    v4 += 488;
  }
  while ( v4 < a1 + 8056 );
  FIELD_U32(a1, 8056) = sub_6066827C;
  FIELD_U32(a1, 8060) = 0;
  return 8060;
}
