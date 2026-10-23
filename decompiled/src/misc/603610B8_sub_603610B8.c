/* sub_603610B8
 * address: 0x603610B8   size: 516   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603610B8(int a1)
{
  char v1; // r12
  int v3; // r4
  int v4; // r11
  int v5; // r5
  int v6; // r8
  int v7; // r6
  int v8; // r0
  int result; // r0
  ActiveColliderMgr *v10; // r6

  v3 = FIELD_U32(a1, 36);
  v4 = a1 + 32;
  if ( v3 == a1 + 32 )
    goto LABEL_16;
  v5 = FIELD_U32(a1, 44);
  v6 = 0;
  v7 = v3 - v5;
  do
  {
    if ( ((unsigned int)&dword_60C958D4 & ~(1614156076 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C958D4) )
    {
      dword_60C958D0 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C958D4);
    }
    v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C958D0);
    if ( v7 )
    {
      if ( v8 == 1 )
      {
        v6 = 2;
        if ( !FIELD_U32(v7, 6784) )
          v6 = 1;
      }
    }
    v3 = FIELD_U32(v3, 4);
    v7 = v3 - v5;
    result = v4 - FIELD_U32(a1, 44);
  }
  while ( v3 - v5 != result );
  if ( !v6 )
  {
LABEL_16:
    sub_603FD768(dword_60C99DF4, FIELD_U8(LevelInfo_instance, 18), 1);
    ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, &stru_60B001E8, a1 + 7072);
    v10 = ActiveColliderMgr_instance;
    if ( !ActiveColliderMgr_isInActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 188))
      && !ActiveColliderMgr_isInCreateList(v10, (ActiveCollider *)(a1 + 188)) )
    {
      ActiveColliderMgr_addToCreateList(v10, (ActiveCollider *)(a1 + 188));
    }
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C957F8);
  }
  else if ( v6 == 2 )
  {
    FIELD_U32(a1, 144) = 1065353216;
    FIELD_U32(a1, 148) = 1065353216;
    FIELD_U32(a1, 152) = 1065353216;
    result = FIELD_U32(a1, 6316);
    if ( result == 1 )
    {
      result = **(_DWORD **)(FIELD_U32(a1, 6300) + 20);
      FIELD_U32(result, 20) = 0;
      FIELD_U32(result, 28) |= 2u;
    }
  }
  return result;
}
