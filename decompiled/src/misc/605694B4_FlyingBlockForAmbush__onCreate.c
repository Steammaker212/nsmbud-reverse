/* FlyingBlockForAmbush__onCreate
 * address: 0x605694B4   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F00
// 
// Overridden by: None
signed int __fastcall FlyingBlockForAmbush__onCreate(ColliderBase *a1)
{
  ColliderListNode *next; // r0
  int v3; // r1
  signed int v4; // r1
  signed int result; // r0
  char *owner57Ptr; // r0

  a1[21].field_E4 = 0;
  FIELD_U32(a1 + (21) * 340, 0x9C) = (Vec3 *)49;
  next = FIELD_U32(a1, 0x10)[0].next;
  v3 = ((unsigned int)next >> 8) & 1;
  a1[20].nodes[3].owner = (ColliderBase *)v3;
  a1[21].field_E8 = ((unsigned int)next >> 12) & 1;
  *(_DWORD *)&FIELD_U8(a1 + (21) * 340, 0xDC) = 1096810496;
  a1[21].field_E0 = -1056964608;
  HIBYTE(FIELD_U32(a1, 0x10)[5].prev) = byte_60B0536C[v3];
  ColliderBase_setType(a1 + 18, 7);
  v4 = sub_605635AC((int)a1, 1, 1);
  result = 2;
  if ( v4 == 1 )
  {
    a1[20].nodes[3].next = (ColliderListNode *)sub_60563BB8((int)a1, 7);
    a1[21].owner56Ptr = *(char **)((char *)&unk_60AF2188 + (((unsigned int)FIELD_U32(a1, 0x10)[0].prev >> 2) & 4));
    a1[21].owner57Ptr = (char *)LOBYTE(FIELD_U32(a1, 0x10)[1].owner);
    BlockBase_setupMovement((int)a1);
    owner57Ptr = a1[21].owner57Ptr;
    if ( owner57Ptr )
      BYTE2(a1[20].nodes[5].owner) = 1;
    if ( a1[21].owner56Ptr == (char *)3 )
    {
      if ( owner57Ptr )
      {
        a1[21].field_D4 = 1098907648;
        a1[21].field_D8 = -1040187392;
      }
      a1[21].field_E0 = -1040187392;
    }
    else
    {
      a1[21].field_D4 = 1096810496;
    }
    FIELD_U32(a1 + (1) * 340, 0xA0) = (char *)1149239296;
    FIELD_U32(a1 + (1) * 340, 0xA4) = (char *)1149239296;
    a1[1].ownerPlayerIdPtr = (char *)1107296256;
    a1[1].distToCenter.x = 64.0;
    a1[1].distToCenter.y = 512.0;
    FIELD_U32(a1 + (1) * 340, 0xB4) = 1140850688;
    FIELD_U32(a1 + (1) * 340, 0xB8) = 1149239296;
    FIELD_F32(a1 + (1) * 340, 0xBC) = 1024.0;
    a1[21].field_8C = 1115684864;
    a1[21].owner = (StageActor *)1115684864;
    sub_605D0024(a1);
    (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CAE2F8);
    return 1;
  }
  return result;
}
