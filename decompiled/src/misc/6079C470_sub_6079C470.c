/* sub_6079C470
 * address: 0x6079C470   size: 756   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6079C470(int a1)
{
  int v2; // r0
  _DWORD *v3; // r6
  int v4; // r0
  _BYTE *v5; // r0
  int v6; // r0
  _DWORD *result; // r0
  _DWORD *v8; // r6
  _DWORD *v9; // r6
  int v10; // r5
  char v11; // r12

  v3 = (_DWORD *)(a1 + 12196);
  v2 = FIELD_U32(a1, 12196);
  if ( v2 )
    *v3 = v2 - 1;
  if ( !sub_607B920C(a1) )
  {
    FIELD_U8(a1, 12192) = 0;
    *v3 = 0;
    FIELD_U32(a1, 12200) = 0;
    result = *(_DWORD **)(a1 + 11360);
    result[52] &= ~0x10u;
    return result;
  }
  v4 = FIELD_U32(a1, 12200);
  switch ( v4 )
  {
    case 2:
      v8 = (_DWORD *)(a1 + 11360);
      if ( (*(_BYTE *)(FIELD_U32(a1, 11360) + 208) & 0x10) != 0 )
      {
        if ( ((int (__fastcall *)(int))loc_607604BC)(a1) == 1 )
          FIELD_U8(a1, 12192) = 1;
        if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v8 + 116))(*v8) != 1 )
          break;
        if ( FIELD_U8(a1, 12192) )
        {
          *(_DWORD *)(*v8 + 208) |= 0x10u;
          (*(void (__fastcall **)(_DWORD, int, float))(*(_DWORD *)*v8 + 104))(*v8, 1, 0.0);
          FIELD_U8(a1, 12192) = 0;
          break;
        }
      }
      goto LABEL_22;
    case 1:
      if ( ((int (__fastcall *)(int))loc_607604BC)(a1) == 1 )
        FIELD_U8(a1, 12192) = 1;
      if ( *v3 )
        break;
      if ( FIELD_U8(a1, 12192) )
      {
        *(_DWORD *)(FIELD_U32(a1, 11360) + 208) |= 0x10u;
        (*(void (__fastcall **)(_DWORD, int, float))(**(_DWORD **)(a1 + 11360) + 104))(FIELD_U32(a1, 11360), 1, 3.0);
        FIELD_U8(a1, 12192) = 0;
        v6 = 2;
        goto LABEL_23;
      }
LABEL_22:
      v6 = 0;
      goto LABEL_23;
    case 0:
      v5 = *(_BYTE **)(a1 + 11360);
      if ( (v5[208] & 0x10) != 0 && (*(int (__fastcall **)(_BYTE *, float))(*(_DWORD *)v5 + 132))(v5, 10.0) == 1 )
      {
        *v3 = 12;
        v6 = 1;
LABEL_23:
        FIELD_U32(a1, 12200) = v6;
      }
      break;
  }
  v9 = (_DWORD *)(a1 + 11360);
  result = *(_DWORD **)(a1 + 11360);
  if ( (result[52] & 0x10) != 0 )
  {
    if ( (*(int (__fastcall **)(_DWORD *, float))(*result + 132))(result, 2.0) == 1 )
    {
      v10 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 11408));
      if ( ((unsigned int)&dword_60CB0A88 & ~(1618593448 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60CB0A88) )
      {
        dword_60CB0A84 = (int)&off_60BDBC48;
        _cxa_guard_release(&dword_60CB0A88);
      }
      if ( v10 && (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60CB0A84) == 1 )
        (*(void (__fastcall **)(int, int))(*(_DWORD *)v10 + 412))(v10, a1);
    }
    result = (_DWORD *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v9 + 116))(*v9);
    if ( result == (_DWORD *)1 )
    {
      *(_DWORD *)(*v9 + 208) &= ~0x10u;
      return (_DWORD *)(*(int (__fastcall **)(_DWORD, int, float))(*(_DWORD *)*v9 + 104))(*v9, 1, 5.0);
    }
  }
  return result;
}
