/* sub_60566310
 * address: 0x60566310   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60566310(ColliderBase *a1)
{
  ColliderListNode *next; // r0
  ColliderListNode **p_next; // r5
  int *v4; // r1

  FIELD_F32(a1, 0x74) = a1[21].field_D0;
  a1[19].field_150 = 0;
  p_next = &a1[20].nodes[3].next;
  next = a1[20].nodes[3].next;
  if ( next == (ColliderListNode *)19 )
  {
    if ( sub_60465D48() )
      *p_next = (ColliderListNode *)3;
  }
  else if ( next == (ColliderListNode *)21 )
  {
    (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CAE3A8);
    goto LABEL_15;
  }
  sub_60564834(&FIELD_U32(a1, 0x0));
  if ( *p_next == (ColliderListNode *)14 )
  {
    if ( a1[21].field_F0 == 1 )
    {
      SE_OBJ_BLOCK_BREAK_ref((int)a1);
      goto LABEL_15;
    }
LABEL_12:
    (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, &dword_60CAE31C);
    a1[21].field_E4 = 2;
    a1[18].field_138 = (int)sub_605B3700;
    a1[18].field_13C = (int)sub_605B4010;
    a1[18].field_140 = (int)sub_605B4A6C;
    ColliderBase_setType(a1 + 18, 11);
    goto LABEL_15;
  }
  if ( *p_next != (ColliderListNode *)13 )
    goto LABEL_12;
  if ( BYTE2(a1[20].nodes[2].next) == 2 )
    v4 = &dword_60CB057C;
  else
    v4 = &dword_60CAE2F8;
  (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0) + 192))(a1, v4);
LABEL_15:
  BYTE2(a1[20].nodes[2].next) = 0;
  return 6846;
}
