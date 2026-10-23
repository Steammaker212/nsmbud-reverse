/* sub_60302D5C
 * address: 0x60302D5C   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60302D5C(int a1)
{
  int ProfileId; // r0
  unsigned int v3; // r1
  int v4; // r0
  _BOOL4 v5; // r2
  int v6; // r0
  int v7; // r5
  int v8; // r3
  int v9; // r0
  unsigned __int8 v11; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U8(a1, 6272) = 13;
  ProfileId = Actor__getProfileId((Actor *)a1);
  v3 = FIELD_U32(a1, 24);
  if ( ProfileId == 625 )
  {
    v4 = -1;
    if ( v3 < 0x40000000 )
      v4 = v3 >> 28;
    FIELD_U32(a1, 7028) = v4;
    v5 = 0;
    v7 = a1 + 20;
    v6 = FIELD_U32(a1, 20);
  }
  else
  {
    v8 = 3;
    v7 = a1 + 20;
    v6 = FIELD_U32(a1, 20);
    if ( v3 < 0x10000000 )
      v8 = FIELD_U32(a1, 20) & 3;
    FIELD_U32(a1, 7028) = v8;
    v5 = v8 == 2;
  }
  FIELD_U32(a1, 6992) = v5;
  v9 = (unsigned __int16)v6 >> 12;
  if ( !v9 )
    v9 = 4;
  FIELD_U32(a1, 6996) = v9;
  FIELD_U32(a1, 7024) = (HIBYTE(v3) & 0xF) + 1;
  sub_60302F60(a1);
  FIELD_U32(a1, 492) = 0;
  FIELD_U32(a1, 496) = 0;
  FIELD_U32(a1, 500) = 1115684864;
  FIELD_U32(a1, 504) = 1107296256;
  FIELD_U32(a1, 508) = 1115684864;
  FIELD_U32(a1, 512) = 1107296256;
  FIELD_U32(a1, 6148) |= 0x20000u;
  v11 = 3;
  ActiveCollider_init2((ActiveCollider *)(a1 + 188), (StateActor *)a1, (ActiveColliderInfo *)&unk_60BE912C, &v11, 0);
  FIELD_U32(a1, 620) = a1 + 7036;
  FIELD_U32(a1, 7052) = 3;
  FIELD_U32(a1, 7104) = 1;
  FIELD_U32(a1, 624) = a1 + 7076;
  if ( FIELD_U32(a1, 6992) == 1 )
    FIELD_U32(a1, 7004) = -1054867456;
  if ( (FIELD_U8(v7, 3) & 2) != 0 )
    FIELD_U32(a1, 7012) = ((30 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 60;
  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 1090519040;
  FIELD_U32(a1, 580) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 6292) = 2;
  sub_6030309C(a1);
  hand_R_paipo_ref(a1);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C92E70);
  return 1;
}
