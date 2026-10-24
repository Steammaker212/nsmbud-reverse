/* FlyingBlock__onCreate
 * address: 0x605688B8   size: 560   group: misc
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
signed int __fastcall FlyingBlock__onCreate(ColliderBase *a1)
{
  int *v2; // r9
  ColliderListNode *next; // r0
  int v4; // r1
  signed int v5; // r1
  signed int result; // r0
  char *owner57Ptr; // r0
  float v8; // s0
  int ProfileId; // r0
  int *v10; // r2
  char *v11; // s0
  int *v12; // r2
  int v13; // s2
  int *v14; // r1

  a1[21].field_E4 = 0;
  v2 = &a1[21].field_E4;
  FIELD_U32(a1 + (21) * 340, 0x9C) = (Vec3 *)49;
  next = FIELD_U32(a1, 0x10)[0].next;
  v4 = ((unsigned int)next >> 8) & 1;
  a1[20].nodes[3].owner = (ColliderBase *)v4;
  a1[21].field_E8 = ((unsigned int)next >> 12) & 1;
  a1[20].nodes[7].prev = (ColliderListNode *)(((unsigned int)FIELD_U32(a1, 0x10)[0].prev >> 13) & 1);
  *(_DWORD *)&FIELD_U8(a1 + (21) * 340, 0xDC) = 1096810496;
  a1[21].field_E0 = -1056964608;
  HIBYTE(FIELD_U32(a1, 0x10)[5].prev) = byte_60B0536C[v4];
  ColliderBase_setType(a1 + 18, 7);
  v5 = sub_605635AC((int)a1, 1, 1);
  result = 2;
  if ( v5 == 1 )
  {
    if ( FIELD_U32(dword_60C99DD4, 764) == 4 && (BYTE1(FIELD_U32(a1, 0x10)[0].prev) & 0x10) != 0 )
      sub_60003D84(a1);
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
        v8 = -32.0;
        a1[21].field_D4 = 1098907648;
        a1[21].field_D8 = -1040187392;
      }
      else
      {
        v8 = -18.0;
      }
      *(float *)&a1[21].field_E0 = v8;
    }
    else
    {
      a1[21].field_D4 = 1096810496;
    }
    ProfileId = Actor__getProfileId((Actor *)a1);
    v10 = dword_60568AFC;
    FIELD_U32(a1 + (1) * 340, 0xA0) = (char *)1149239296;
    if ( ProfileId == 290 )
      v10 = &dword_60568AFC[1];
    v11 = (char *)*v10;
    v12 = dword_60568B04;
    if ( ProfileId == 290 )
      v12 = &dword_60568B04[1];
    v13 = *v12;
    FIELD_U32(a1 + (1) * 340, 0xA4) = v11;
    FIELD_F32(a1 + (1) * 340, 0xB0) = 512.0;
    FIELD_U32(a1 + (1) * 340, 0xB4) = v13;
    FIELD_U32(a1 + (1) * 340, 0xB8) = 1149239296;
    FIELD_F32(a1 + (1) * 340, 0xBC) = 1024.0;
    FIELD_U32(a1 + (1) * 340, 0xA8) = (char *)1107296256;
    FIELD_F32(a1 + (1) * 340, 0xAC) = 64.0;
    a1[21].field_8C = 1115684864;
    a1[21].owner = (StageActor *)1115684864;
    sub_605D0024(a1);
    if ( *v2 == 2 )
      v14 = &dword_60CAE31C;
    else
      v14 = &dword_60CAE2F8;
    (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, v14);
    return 1;
  }
  return result;
}
