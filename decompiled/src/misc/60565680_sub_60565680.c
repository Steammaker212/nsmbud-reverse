/* sub_60565680
 * address: 0x60565680   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60565680(ColliderBase *a1)
{
  ColliderListNode **p_next; // r5
  int *v3; // r1

  FIELD_F32(a1, 0x74) = a1[21].field_D0;
  a1[19].field_150 = 0;
  p_next = &a1[20].nodes[3].next;
  if ( a1[20].nodes[3].next == (ColliderListNode *)21
    || (sub_60564834(&FIELD_U32(a1, 0x0).vtable), *p_next != (ColliderListNode *)13) )
  {
    (*(void (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0).vtable + 192))(a1, &dword_60CAE31C);
    a1[21].field_E4 = 2;
    a1[18].field_138 = (int)sub_605B3700;
    a1[18].field_13C = (int)sub_605B4010;
    a1[18].field_140 = (int)sub_605B4A6C;
    return ColliderBase_setType(a1 + 18, 11);
  }
  else
  {
    if ( BYTE2(a1[20].nodes[2].next) == 2 )
      v3 = &dword_60CB057C;
    else
      v3 = &dword_60CAE2F8;
    return (*(int (__fastcall **)(ColliderBase *, int *))(FIELD_U32(a1, 0x0).vtable + 192))(a1, v3);
  }
}
