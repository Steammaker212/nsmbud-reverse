/* sub_606E0C5C
 * address: 0x606E0C5C   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ModelWrapper *__fastcall sub_606E0C5C(int a1)
{
  int v2; // r5
  _BYTE *v3; // r7
  int a8; // r8
  int v5; // r0
  int v6; // r2
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // lr
  unsigned __int8 v11; // r1

  if ( !FIELD_U32(a1, 6908) && FIELD_U32(a1, 6932) )
    JUMPOUT(0x6000100C);
  if ( sub_60418548(**(_DWORD **)(FIELD_U32(a1, 6104) + 12) + 4, 1.0) == 1 )
  {
    v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 212))(a1);
    if ( FIELD_U8(a1, 539) )
    {
      *(_BYTE *)(EventMgr__instance + 2328) = FIELD_U8(a1, 6958);
      v3 = (_BYTE *)(a1 + 6917);
      if ( FIELD_U8(a1, 6917) )
      {
        a8 = 3;
        if ( !FIELD_U32(a1, 6928) )
          a8 = 2;
      }
      else
      {
        a8 = 2;
      }
      v5 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 232))(a1);
      v6 = (unsigned __int8)*v3;
      v7 = FIELD_U8(a1, 6916);
      v8 = (v5 == 0) & ~v2;
      v9 = (unsigned __int8)v7;
      if ( FIELD_U8(a1, 6916) )
        v9 = 1;
      v10 = v8 | v9;
      v11 = FIELD_U8(a1, 539) - 1;
      if ( FIELD_U32(a1, 6936) )
        EventMgr_set(EventMgr__instance, v11, v6, 0, 0, v7 != 0, v10, a8);
      else
        EventMgr_set(EventMgr__instance, v11, v6, 1, 0, v7 != 0, v10, a8);
    }
    else
    {
      v3 = (_BYTE *)(a1 + 6917);
    }
    FIELD_U8(a1, 6968) = 1;
    if ( *v3 )
    {
      if ( FIELD_U32(a1, 6928) )
      {
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBDD4);
        return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
      }
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1) == 1 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 244))(a1);
        return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
      }
    }
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CBBDB4);
  }
  return ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6104));
}
