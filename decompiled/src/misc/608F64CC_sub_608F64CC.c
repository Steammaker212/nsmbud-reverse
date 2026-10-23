/* sub_608F64CC
 * address: 0x608F64CC   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F64CC(int a1)
{
  int v2; // r6
  int v3; // r8
  _DWORD *v4; // r0
  int result; // r0

  v2 = 0;
  v3 = 0;
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    sead__CriticalSection__lock(a1 + 84);
    v3 = a1 + 84;
  }
  sub_608F98A4(a1, 0, 0);
  sub_608DE6BC((_DWORD *)(a1 + 144));
  sub_608DE6BC((_DWORD *)(a1 + 128));
  if ( (FIELD_U8(a1, 120) & 1) != 0 )
  {
    sead__CriticalSection__lock(a1 + 84);
    v2 = a1 + 84;
  }
  if ( FIELD_U32(a1, 80) == 1 )
  {
    FIELD_U32(a1, 160) = 0;
    v4 = (_DWORD *)(a1 + 160);
  }
  else
  {
    v4 = *(_DWORD **)(a1 + 28);
    *v4 = 0;
  }
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v4[3] = FIELD_U32(a1, 32) - 176;
  *((_WORD *)v4 + 4) = -1;
  sead__ListNode__insertFront((sead_ListNode *)(a1 + 128), (sead_ListNode *)((char *)v4 + FIELD_U32(a1, 140)));
  result = FIELD_U32(a1, 136) + 1;
  FIELD_U32(a1, 136) = result;
  if ( v2 )
    result = sead__CriticalSection__unlock(v2);
  if ( v3 )
    return sead__CriticalSection__unlock(v3);
  return result;
}
