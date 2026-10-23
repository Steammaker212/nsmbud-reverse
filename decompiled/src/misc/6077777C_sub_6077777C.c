/* sub_6077777C
 * address: 0x6077777C   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6077777C(int a1)
{
  int v2; // r5
  int v3; // r7
  int v4; // r0
  int v5; // r5
  int v6; // r7
  int v7; // r0

  StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)&dword_60CBFA94);
  FIELD_U32(a1, 52) = 0;
  FIELD_U32(a1, 56) = 0;
  FIELD_U32(a1, 60) = 0;
  v2 = FIELD_U32(a1, 68);
  if ( v2 != a1 + 64 )
  {
    do
    {
      v3 = FIELD_U32(v2, 4);
      sead__ListNode__erase(v2);
      --FIELD_U32(a1, 72);
      *(_DWORD *)(v2 - 4) = FIELD_U32(a1, 76);
      v4 = v2 - 4;
      v2 = v3;
      FIELD_U32(a1, 76) = v4;
    }
    while ( v3 != a1 + 64 );
  }
  v5 = FIELD_U32(a1, 140);
  if ( v5 != a1 + 136 )
  {
    do
    {
      v6 = FIELD_U32(v5, 4);
      sead__ListNode__erase(v5);
      --FIELD_U32(a1, 144);
      *(_DWORD *)(v5 - 4) = FIELD_U32(a1, 148);
      v7 = v5 - 4;
      v5 = v6;
      FIELD_U32(a1, 148) = v7;
    }
    while ( v6 != a1 + 136 );
  }
  FIELD_U32(a1, 212) = 0;
  FIELD_U8(a1, 216) = 0;
  FIELD_U32(a1, 276) = 0;
  FIELD_U32(a1, 280) = 0;
  FIELD_U32(a1, 292) = 0;
  FIELD_U8(a1, 340) = 0;
  FIELD_U32(a1, 388) = 0;
  FIELD_U32(a1, 384) = 0;
  FIELD_U32(a1, 420) = 0;
  FIELD_U32(a1, 416) = 0;
  FIELD_U32(a1, 444) = 0;
  FIELD_U8(a1, 448) = 0;
  FIELD_U32(a1, 452) = 0;
  FIELD_U32(a1, 456) = 0;
  FIELD_U8(a1, 460) = 0;
  FIELD_U8(a1, 248) = 0;
  FIELD_U32(a1, 244) = 0;
  FIELD_U32(a1, 240) = 0;
  FIELD_U32(a1, 236) = 0;
  FIELD_U32(a1, 232) = 0;
  FIELD_U32(a1, 228) = 0;
  FIELD_U32(a1, 224) = 0;
  FIELD_U16(a1, 272) = 0;
  FIELD_U32(a1, 268) = 0;
  FIELD_U32(a1, 264) = 0;
  FIELD_U32(a1, 260) = 0;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 252) = 0;
  sub_607778BC(a1);
  return sub_603E8CC8(FIELD_U32(a1, 468));
}
