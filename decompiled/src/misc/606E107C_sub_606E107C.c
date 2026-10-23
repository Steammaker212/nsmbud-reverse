/* sub_606E107C
 * address: 0x606E107C   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_606E107C(int a1)
{
  int v2; // r1
  int v3; // r3
  __int64 v4; // r6
  unsigned int v5; // r2
  int v6; // lr
  int v7; // r2
  int v8; // r3

  if ( !FIELD_U32(a1, 6908) && FIELD_U32(a1, 6932) )
    JUMPOUT(0x6000100C);
  v2 = FIELD_U8(a1, 539);
  if ( FIELD_U8(a1, 539) )
  {
    v3 = v2 - 33;
    v4 = *(_QWORD *)(EventMgr__instance + 16);
    v5 = 1u >> (33 - v2);
    if ( v2 - 33 >= 0 )
      v5 = 1 << v3;
    v6 = HIDWORD(v4) & v5;
    v7 = 1 << (v2 - 1);
    if ( v3 >= 0 )
      v7 = 0;
    v8 = v4 & v7;
    if ( FIELD_U32(a1, 6936) )
    {
      if ( v8 | v6 )
      {
        EventMgr_set(EventMgr__instance, (unsigned __int8)(v2 - 1), 0, 1, 0, 0, 0, 0);
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBE14);
      }
    }
    else if ( !(v8 | v6) )
    {
      EventMgr_set(EventMgr__instance, (unsigned __int8)(v2 - 1), 0, 0, 0, 0, 0, 0);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBE14);
    }
  }
  else if ( !sub_6072A768(EventMgr__instance)
         && (*(_BYTE *)(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 28) & 0x20) != 0 )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBE14);
  }
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
}
