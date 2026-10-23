/* sub_60569C24
 * address: 0x60569C24   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60569C24(ColliderBase *a1)
{
  int *v2; // r5
  ColliderListNode *next; // r0
  int v4; // r1
  signed int v5; // r1
  signed int result; // r0
  int v7; // r0
  int *v8; // r1

  a1[21].field_E4 = 0;
  v2 = &a1[21].field_E4;
  a1[21].owner248Ptr = (Vec3 *)49;
  next = FIELD_U32(a1, 0x10)[0].next;
  v4 = ((unsigned int)next >> 8) & 1;
  a1[20].nodes[3].owner = (ColliderBase *)v4;
  a1[21].field_E8 = ((unsigned int)next >> 12) & 1;
  BYTE2(a1[20].nodes[5].owner) = 1;
  *(_DWORD *)&a1[21].field_DC = 1096810496;
  a1[21].field_E0 = -1056964608;
  HIBYTE(FIELD_U32(a1, 0x10)[5].prev) = byte_60B0536C[v4];
  ColliderBase_setType(a1 + 18, 7);
  v5 = sub_605635AC((int)a1, 1, 1);
  result = 2;
  if ( v5 == 1 )
  {
    a1[21].owner56Ptr = 0;
    a1[21].owner57Ptr = 0;
    a1[21].field_E0 = -1040187392;
    a1[1].owner56Ptr = (char *)1149239296;
    a1[1].owner57Ptr = (char *)1149239296;
    a1[1].ownerPlayerIdPtr = (char *)1107296256;
    a1[1].distToCenter.x = 64.0;
    a1[1].distToCenter.y = 512.0;
    a1[1].field_B4 = 1140850688;
    a1[1].field_B8 = 1149239296;
    a1[1].field_BC = 1024.0;
    a1[21].field_8C = 1115684864;
    a1[21].owner = (StageActor *)1115684864;
    sub_605D0024(a1);
    v7 = dword_60CC6484;
    *(float *)&a1[21].field_F8 = *(float *)&FIELD_U32(a1, 0x10)[7].prev - FIELD_F32(dword_60CC6484, 112);
    *(float *)&a1[21].field_FC = FIELD_F32(a1, 0x70) - FIELD_F32(v7, 124);
    if ( *v2 == 2 )
      v8 = &dword_60CAE31C;
    else
      v8 = &dword_60CAE2F8;
    (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0).vtable + 192))(a1, v8);
    return 1;
  }
  return result;
}
